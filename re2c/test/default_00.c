/* Generated by re2c */
#line 1 "default_00.re"

#line 5 "<stdout>"
{
	YYCTYPE yych;

	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
#line 2 "default_00.re"
	{ return DEFAULT; }
#line 19 "<stdout>"
yy4:
	++YYCURSOR;
#line 3 "default_00.re"
	{ return A; }
#line 24 "<stdout>"
}
#line 4 "default_00.re"

