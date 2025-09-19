const express = require ('express')
const mongoose = require('mongoose')

const app = express()
app.use (express.json())

mongoose.connect('mongodb://localhost:27017/MovieManager', {
    useNewUrlParser: true,
    useUnifiedTopology: true,
})
.then(() => console.log('✅ Connesso a MongoDB'))
.catch(err => console.error('❌ Errore connessione MongoDB', err))

const filmSchema = new mongoose.Schema({
    titolo: String,
    anno: Number,
})

const Film = mongoose.model('Film', filmSchema)

app.get('/', (req, res) => {
    res.send ('API correctly working!')
})

app.get('/film', async (req, res) => {
    try {
        const film = await Film.find()
        res.json(film)
    } catch (err) {
        res.status(500).json ({error: 'Errore durante la lettura dei film'})
    }
})

app.post ('/film', async (req, res) => {
    try{
        const nuovoFilm = new Film (req.body)
        await nuovoFilm.save()
        res.status(201).json(nuovoFilm)
    } catch (err) {
        res.status(500).json({error: 'Errore durante il salvataggio del film'})
    }
})

app.put ('/film/:id', async (req, res) => {
    try {
        const filmAggiornato = await Film.findByIdAndUpdate (
            req.params.id,
            req.body,
            {new: true, runValidators: true}
        )
        if (!filmAggiornato) {
            return res.status(404).json({error: 'Film non trovato'})
        }
        res.json(filmAggiornato)
    } catch (err) {
        res.status(500).json ({error: 'Errore durante l\'aggiornamento del film'})
    }
})

app.delete ('/film/:id', async (req, res) => {
    try{
        const filmRimosso = await Film.findByIdAndDelete (req.params.id)
        if (!filmRimosso) {
            return res.status(404).json({error: 'Film non trovato'})
        }
        res.json({message: 'Film eliminato con successo'})
    } catch (err) {
        res.status(500).json ({error: 'Errore durante l\'eliminazione del film'})
    }
})

const PORT = 3000
app.listen(PORT, () => {
    console.log(`Server avviato su http://localhost:${PORT}`)
})