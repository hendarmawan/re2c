/* Generated by re2c */
#line 1 "condition_04.cg.re"

#line 5 "<stdout>"
{
	YYCTYPE yych;
	static void *yyctable[2] = {
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '2') {
		if (yych <= '0') goto yy3;
		if (yych <= '1') goto yy6;
		goto yy4;
	} else {
		if (yych <= '`') goto yy3;
		if (yych <= 'a') goto yy8;
		if (yych <= 'b') goto yy10;
	}
yy3:
yy4:
	++YYCURSOR;
#line 4 "condition_04.cg.re"
	{ return "2"; }
#line 31 "<stdout>"
yy6:
	++YYCURSOR;
#line 3 "condition_04.cg.re"
	{ return "1"; }
#line 36 "<stdout>"
yy8:
	++YYCURSOR;
#line 5 "condition_04.cg.re"
	{ return "a"; }
#line 41 "<stdout>"
yy10:
	++YYCURSOR;
#line 6 "condition_04.cg.re"
	{ return "b"; }
#line 46 "<stdout>"
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '2') {
		if (yych <= '0') goto yy14;
		if (yych <= '1') goto yy17;
		goto yy15;
	} else {
		if (yych == 'b') goto yy19;
	}
yy14:
yy15:
	++YYCURSOR;
#line 4 "condition_04.cg.re"
	{ return "2"; }
#line 63 "<stdout>"
yy17:
	++YYCURSOR;
#line 3 "condition_04.cg.re"
	{ return "1"; }
#line 68 "<stdout>"
yy19:
	++YYCURSOR;
#line 6 "condition_04.cg.re"
	{ return "b"; }
#line 73 "<stdout>"
}
#line 8 "condition_04.cg.re"

