American Express cards starts with :: 34 or 37 and has 15 digits

Master cards start with :: 51,52,53,54,55 and has 16 digits

Visa cards start with :: 4 and has 13 or 16 digits

Example: 4003600000000014
4003600000000014 % 10 = 4
4003600000000014 / 100 = 40036000000000
1st case:
1.Iterate through the CC number
2.Use modulo to get the last digit
3.Add last digit to sum
4.Divide the CC number by 100
5.Repeat

2nd case:
1.Divide the CC number by 10
2.Iterate through the CC number
3.Use modulo to get the last digit
4.Add last digit mutiplied by 2 to the sum 4.1 Use modulo for the last digit 4.2 Use division for the 1st digit 4.3 Sum these up
5.Divide the CC number by 100
6.Repeat
