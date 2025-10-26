
Program Test;

{$APPTYPE CONSOLE}

Uses 
SysUtils;

Var 
  marks: 1 .. 100;
  grade: 'A' .. 'E';

Begin
  writeln('Enter yor marks (1 - 100): ');
  readln(marks);

  writeln('Enter your age (A - E): ');
  readln(grade);

  writeln('Marks: ', marks, ' Grade: ', grade);
End.
