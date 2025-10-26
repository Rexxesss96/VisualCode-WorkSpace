public class SpaceAge
{
    const double earthYear = 31_557_600;
    const double mercuryPeriod = 0.2408467;
    const double venusPeriod = 0.61519726;
    const double marsPeriod = 1.8808158;
    const double jupiterPeriod = 11.862615;
    const double saturnPeriod = 29.447498;
    const double uranusPeriod = 84.016846;
    const double neptunePeriod = 164.79132;

    private readonly int seconds;
    public SpaceAge(int seconds)
    {
        this.seconds = seconds;
    }

    public double OnEarth()
        => seconds / earthYear;

    public double OnMercury()
        => seconds / (earthYear * mercuryPeriod);

    public double OnVenus()
        => seconds / (earthYear * venusPeriod);

    public double OnMars()
        => seconds / (earthYear * marsPeriod);

    public double OnJupiter()
     => seconds / (earthYear * jupiterPeriod);

    public double OnSaturn()
        => seconds / (earthYear * saturnPeriod);

    public double OnUranus()
        => seconds / (earthYear * uranusPeriod);

    public double OnNeptune()
        => seconds / (earthYear * neptunePeriod);
}