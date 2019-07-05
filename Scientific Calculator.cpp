# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>
# define PI 3.14159265
# define g 9.8
# define Cu (9*pow(10,9))

int main()
{
	system("COLOR FC");	//GF for Colour option; 0-Black; 4-Red; F-Bright white; 7-White; C-light red,9-light black;
	
	char r[1];
	printf("Welcome\n\n\n");
	printf("Note: (Press any button to enter.)\n\n\n");
	gets(r);

	
	int a;
	void info(void);
	info();
	for (;;)
	{
	scanf("%d",&a);

if(a==0)
	{ 
	void foo0(void);
	foo0();
	}
if (a==1)
	{ 
	void foo1(void);
	foo1();
	}
if(a==2)
	{
	void foo2(void);
	foo2();
	}
if (a==3)
	{
	void foo3(void);
	foo3();	
	}
if (a==4)
	{
	void foo4(void);
	foo4();	
	}
if (a==5)
	{
	void foo5(void);
	foo5();	
	}
if (a==6)
	{
	void foo6(void);
	foo6();	
	}
if(a==7)
{
	void foo7(void);
	foo7();	
}
if(a==8)
{
	void foo8(void);
	foo8();	
}
if(a==9)
{
	void foo9(void);
	foo9();	
}
if(a==10)
	{
	break;
	}
if(a>10 || a<0)
	{
	printf("Wrong Choice.\n\n\n");
	}
	void info(void);
	info();	
	}
	
	printf("\n\nGood Bye");
	
	return 0;
}

void info()
{
	
	printf("Main Menu :\n");
	printf("Press 0 for General Math.\n");
	printf("Press 1 for Trigonometric value, ln, log,factorial value of a input.\n");
	printf("Press 2 for Matrix.\n");
	printf("Press 3 for Conversion.\n");
	printf("Press 4 for Mensuration of General Geometry.\n");
	printf("Press 5 for Mensuration of Solid Geometry.\n");
	printf("Press 6 for Physics.\n");
	printf("Press 7 for Algebra.\n");
	printf("Press 8 for Constant.\n");
	printf("Press 9 for Geometry.\n");
	printf("Press 10 to Exit.\n\n");
	
}

void infoa()
{
	printf("For summation(+)\n");
	printf("For subtraction(-)\n");
	printf("For multiplication(*)\n");
	printf("For division(/)\n");
	printf("For remainder('Modulus sign')\n");
	printf("For to the power (^)\n");
	printf("For exponential ( e )(must give space befor and after typing e)\n");
	printf("For nth times squar root (r)\n");
	printf("Press 1o1 for Exit.\n\n");
}
void infob()
{
	printf("Press 0 for ln\n");
	printf("Press 1 for squaroot\n");
	printf("Press 2 for log\n");
	printf("Press 3 for Trigonomery-value for angles(0,30,45,60,90,180)\n");
	printf("Press 4 for squart and qube\n");
	printf("Press 5 for factorial\n");
	printf("Press 6 for Exit.\n\n");
}
void infoc()
{
	printf("Press 0 for Matrix(Sum,Subtraction,Multiplication)\n");
	printf("Press 1 for Transpose Matrix\n");
	printf("Press 2 for Exit.\n\n");	
}
void infod()
{
	printf("Press 0 for Binary Conversion\n");
	printf("Press 1 for Length Unit Conversion\n");
	printf("Press 2 for Temparature Unit Conversion\n");
	printf("Press 3 for Plane Angle Unit Conversion\n");
	printf("Press 4 for Pressure Unit Conversion\n");
	printf("Press 5 for Energy Unit Conversion\n");
	printf("Press 6 for Luminous Intensity Unit Conversion\n");
	printf("Press 7 for Astronomical Unit Conversion\n");
	printf("Press 8 for Force Unit Conversion\n");
	printf("Press 9 for Illuminance Unit Conversion\n");
	printf("Press 10 for Blood Sugar Unit Conversion\n");
	printf("Press 11 for Exit.\n");
}
void infod0()
{
	printf("\nNote:(Decimal,Binary,Octal,Hexadecimal)\n\nPress 0 for Decimal to others\n");
	printf("Press 1 for Binary to others\n");
	printf("Press 2 for Octal to others\n");
	printf("Press 3 for Hexadecimal to others\n");
	printf("Press 4 for Exit.\n\n");
}
void infod1()
{
	printf("Note:(Meter,Inch,Yard,Foot,Mile,Nautical Mile,Kilometer)\n\nPress 0 for Meter-others\n");
	printf("Press 1 for Inch-others\n");
	printf("Press 2 for Yard-others\n");
	printf("Press 3 for Foot-others\n");
	printf("Press 4 for Mile-others\n");
	printf("Press 5 for Nautical Mile-others\n");
	printf("Press 6 for Kilometer-others\n");
	printf("Press 7 for Exit.\n\n");
}

void infod2()
{
	printf("Note:(Celsius (C),Kelvin (K),Fahrenheit (F))\n\n");
	printf("Press 0 for Celsius (C)-others\n");
	printf("Press 1 for Kelvin (K)-others\n");
	printf("Press 2 for Fahrenheit (F)-others\n");
	printf("Press 3 for Exit.\n\n");
}
void infod3()
{
	printf("Note:(Degree,Gradian,Radian)\n\n");
	printf("Press 0 for Degree-others\n");
	printf("Press 1 for Gradian-others\n");
	printf("Press 2 for Radian-others\n");
	printf("Press 3 for Exit.\n\n");
}

void infod4()
{
	printf("Note:(Pascal,Bar,Atmosphere,Torr.)\n\n");
	printf("Press 0 for Pascal-other\n");
	printf("Press 1 for Bar-other\n");
	printf("Press 2 for Atmosphere-other\n");
	printf("Press 3 for Torr-other\n");
	printf("Press 4 for Exit.\n\n");
}
void infod5()
{
	printf("Note:(BTU,Calorie,Electron-Volt,Erg,Joule.)\n\n");
	printf("Press 0 for BTU-other\n");
	printf("Press 1 for Calori-other\n");
	printf("Press 2 for Electron-Volt-other\n");
	printf("Press 3 for Erg-other\n");
	printf("Press 4 for Joule-other\n");
	printf("Press 5 for Exit.\n\n");
}
void infod6()
{
	printf("Note:(Candela,Lumen-per-steradian,Hefnerkerze,Candlepower)\n\n");
	printf("Press 0 for Candela-other\n");
	printf("Press 1 for Lumen-per-steradian-other\n");
	printf("Press 2 for Hefnerkerze-other\n");
	printf("Press 3 for Candlepower-other\n");
	printf("Press 4 for Exit.\n\n");
}
void infod7()
{
	printf("Note:(astronomical unit (AU), parsec, light-year(tropical/solar), light week, light day, light hour, light minut, light second, kilometer(km))\n\n");
	printf("Press 0 for astronomical unit (AU)-other\n");
	printf("Press 1 for parsec-other\n");
	printf("Press 2 for light-year (tropical / solar)-other\n");
	printf("Press 3 for light-week-other\n");
	printf("Press 4 for light-day-other\n");
	printf("Press 5 for light-hour-other\n");
	printf("Press 6 for light-minut-other\n");
	printf("Press 7 for light-second-other\n");
	printf("Press 8 for kilometer (km)-other\n");	
	printf("Press 9 for Exit.\n\n");
}
void infod8()
{
	printf("Note: (dyne (dyn), gram-force, kip (kip), newton (N), ounce-force (ozf), pond, poundal (pdl), sthene (sn), ton-force (metric)(tnf))\n\n");
	printf("Press 0 for dyne (dyn)-other\n");
	printf("Press 1 for gram-force-other\n");
	printf("Press 2 for kip (kip)-other\n");
	printf("Press 3 for newton (N)-other\n");
	printf("Press 4 for ounce-force (ozf)-other\n");
	printf("Press 5 for pond-other\n");
	printf("Press 6 for poundal (pdl)-other\n");
	printf("Press 7 for sthene (sn)-other\n");
	printf("Press 8 for ton-force (metric)(tnf)-other\n");
	printf("Press 9 for Exit.\n\n");
}
void infod9()
{
	printf("Note: (Foot-candle (fc), Lumen per square meter (lm/sq.m), Lux (lx), Nox, Phot (ph).)\n\n");
	printf("Press 0 for Foot-candle (fc)-other\n");
	printf("Press 1 for Lumen per square meter (lm/sq.m)-other\n");
	printf("Press 2 for Lux (lx)-other\n");
	printf("Press 3 for Nox-other\n");
	printf("Press 4 for Phot (ph)-other\n");
	printf("Press 5 for Exit.\n\n");
}
void infod10()
{
	printf("Note: (mmol / l, mg / dl, mg percent)\n\n");
	printf("Press 0 for mmol / l -other\n");
	printf("Press 1 for mg / dl -other\n");
	printf("Press 2 for mg percent -other\n");
	printf("Press 3 for Exit.\n\n");
}
void infoe()
{
	printf("Press 0 for Rectangular Types.\n");
	printf("Press 1 for Triangular Types.\n");
	printf("Press 2 for Circular Types.\n");
	printf("Press 3 for Exit.\n\n");
}
void infoe0()
{
	printf("Note: (Area,Peremeter)\n\n");
	printf("Press 0 for  Rectangle\n");
	printf("Press 1 for  Squar\n");
	printf("Press 2 for  Parallelogram\n");
	printf("Press 3 for  Trapezoid\n");
	printf("Press 4 for Exit.\n\n");
}
void infoe1()
{
	
	printf("Press 0 for Triangle\n");
	printf("Press 1 for Equilateral Triangle\n");
	printf("Press 2 for Right Angle Triangle\n");
	printf("Press 3 for Isosceles Triangle\n");
	printf("Press 4 for Exit.\n\n");
}
void infoe2()
{
	
	printf("Press 0 for circle\n");
	printf("Press 1 for Semicircle\n");
	printf("Press 2 for Sector of a circle\n");
	printf("Press 3 for Parabolic Segment\n");
	printf("Press 4 for Ellipse\n");
	printf("Press 5 for Annulus\n");
	printf("Press 6 for Exit.\n\n");
}
void infof()
{
	printf("Press 0 for Rectangular Types\n");
	printf("Press 1 for Spherical Types\n");
	printf("Press 2 for Cylinderical Types\n");
	printf("Press 3 for Prism Types\n");
	printf("Press 4 for Pyramid Types\n");
	printf("Press 5 for Conical Types\n");
	printf("Press 6 for Exit.\n\n");
}
void infof0()
{
	printf("Press 0 for Cube.\n");
	printf("Press 1 for Cuboid/Rectangular Solid.\n");
	printf("Press 2 for Exit.\n\n");
}
void infof1()
{
	printf("Press 0 for Sphere.\n");
	printf("Press 1 for Spherical Shell.\n");
	printf("Press 2 for Hemisphere.\n");
	printf("Press 3 for Torus.\n");
	printf("Press 4 for Exit.\n\n");
}
void infof2()
{
	printf("Press 0 for Right Circular Cylinder.\n");
	printf("Press 1 for Right Circular Hollow Cylinder.\n");
	printf("Press 2 for Exit.\n\n");
}
void infof3()
{
	printf("Press 0 for Prism\n");
	printf("Press 1 for Triangular Prism\n");
	printf("Press 2 for Rectangular Prism\n");
	printf("Press 3 for Exit.\n\n");
}
void infof4()
{
	printf("Press 0 for Pyramid\n");
	printf("Press 1 for Regular Tetrehedron\n");
	printf("Press 2 for Squar Pyramid\n");
	printf("Press 3 for Exit.\n\n");
}
void infof5()
{
	printf("Press 0 for Right Circular Cone\n");
	printf("Press 1 for Frustum of Right Circular Cone\n");
	printf("Press 2 for Exit.\n\n");
}
void infog()
{
	printf("Note: (User only can calculate the values but  unit is usuer dependent and user can't calculate unit here\n.User can convert one unit to another unit from Conversion option present in main menu.)\n\n");
	printf("Press 0 for Motion\n");	
	printf("Press 1 for Force\n");
	printf("Press 2 for Work\n");
	printf("Press 3 for Power\n");
	printf("Press 4 for Energy\n");
	printf("Press 5 for Presure\n");
	printf("Press 6 for Density\n");
	printf("Press 7 for Wave.\n");
	printf("Press 8 for Light.\n");
	printf("Press 9 for Static Electricity\n");
	printf("Press 10 for Current Electricity\n");
	printf("Press 11 for Exit.\n\n");
}
void infog0()
{
	printf("Note : (Velocity, Initial Velocity, Acceleration, Time, Distance)\n\n");
	printf("Press 0 for Velocity\n");	
	printf("Press 1 for Initial Velocity\n");
	printf("Press 2 for Acceleration\n");
	printf("Press 3 for Time\n");
	printf("Press 4 for Distance\n");
	printf("Press 5 for Exit\n\n");
}
void infog0a()
{
	printf("Note: ( a=Accelaration, u=Initial velocity, v=Final velocity, t=Time, s=Displacement)");
	printf("Press 0 for v from u,a,t\n");	
	printf("Press 1 for v from u,a,s\n");
	printf("Press 2 for Exit\n\n");
}
void infog0b()
{
	printf("Note: ( a=Accelaration, u=Initial velocity, v=Final velocity, t=Time, s=Displacement)");
	printf("Press 0 for u from v,a,t\n");	
	printf("Press 1 for u from v,a,s\n");
	printf("Press 2 for Exit\n\n");
}
void infog0c()
{
	printf("Note: ( a=Accelaration, u=Initial velocity, v=Final velocity, t=Time, s=Displacement)");
	printf("Press 0 for a from v,u,t\n");	
	printf("Press 1 for a from v,t,s\n");
	printf("Press 2 for a from u,t,s\n");
	printf("Press 3 for Exit\n\n");
}
void infog0d()
{
	printf("Note: ( a=Accelaration, u=Initial velocity, v=Final velocity, t=Time, s=Displacement)");
	printf("Press 0 for t from v,u,a\n");	
	printf("Press 1 for t from v,u,s\n");
	printf("Press 2 for Exit\n\n");
}
void infog0e()
{
	printf("Note: ( a=Accelaration, u=Initial velocity, v=Final velocity, t=Time, s=Displacement)");
	printf("Press 0 for s from t,u,a\n");	
	printf("Press 1 for s from v,t,a\n");
	printf("Press 2 for s from v,u,s\n");	
	printf("Press 3 for Exit\n\n");
}
void infog1()
{
	printf("Note : ( Force, Momentum, Mass, velocity, Conservation of law of momentum.)\n\n");
	printf("Press 0 for Force\n");	
	printf("Press 1 for Momentum\n");
	printf("Press 2 for Conservation of law of momentum.\n");
	printf("Press 3 for Exit\n\n");			
}
void infog1a()
{
	printf("Note : ( f=Force, m=Mass, a=Acceleration.)\n\n");	
	printf("Press 0 for f from m,a.\n");	
	printf("Press 1 for Exit\n\n");	
}
void infog1b()
{
	printf("Note : ( mo=momentum, m=Mass, v=velocity.)\n\n");	
	printf("Press 0 for p from m,v\n");	
	printf("Press 1 for Exit\n\n");	
}
void infog1c()
{
	printf("Note : ( m1=Mass of 1st body,\nu1=Initial Velocity of 1st Body\nv1=Final Velocity of 1st body.)\n\n");
	printf("Note : ( m2=Mass of 2nd body,\nu2=Initial Velocity of 2nd Body\nv2=Final Velocity of 2nd body.)\n\n");
	printf("Press 0 for m1 from u1,v1,m2,u2,v2\n");	
	printf("Press 1 for m2 from u1,v1,m1,u2,v2\n");
	printf("Press 2 for u1 from m1,v1,m2,u2,v2\n");
	printf("Press 3 for u2 from u1,v1,m2,m1,v2\n");
	printf("Press 4 for v1 from u1,m1,m2,u2,v2\n");
	printf("Press 5 for v2 from u1,v1,m2,u2,m1\n");
	printf("Press 6 for Exit\n\n");	
}
void infog2()
{
	printf("Note : ( Force, Work, Displacement.)\n\n");
	printf("Press 0 for Work.\n");	
	printf("Press 1 for Force.\n");
	printf("Press 2 for Displacement.\n");
	printf("Press 3 for Exit\n\n");	
}
void infog2a()
{
	printf("Note : ( w=Work, f=force, s=displacement.)\n\n");	
	printf("Press 0 for w from f,s.\n");	
	printf("Press 1 for Exit\n\n");	
}
void infog2b()
{
	printf("Note : ( w=Work, f=force, s=displacement.)\n\n");	
	printf("Press 0 for f from w,s.\n");	
	printf("Press 1 for Exit\n\n");	
}
void infog2c()
{
	printf("Note : ( w=Work, f=force, s=displacement.)\n\n");	
	printf("Press 0 for s from f,w.\n");	
	printf("Press 1 for Exit\n\n");	
}
void infog3()
{
	printf("Note : ( Power,Efficiency.)\n\n");
	printf("Press 0 for Power.\n");	
	printf("Press 1 for Efficiency.\n");
	printf("Press 2 for Exit\n\n");	
}
void infog3a()
{
	printf("Note : ( po=Power, w=work, t=time.)\n\n");
	printf("Press 0 for Power.\n");	
	printf("Press 1 for Exit\n\n");	
}
void infog3b()
{
	printf("Note : ( e=Efficiency, te=Tottal Energy, ae=Active Energy.)\n\n");
	printf("Press 0 for Efficiency.\n");	
	printf("Press 1 for Exit\n\n");	
}
void infog4()
{
	printf("Note : ( Potential Energy, Kinetic Energy.)\n\n");
	printf("Press 0 for Kinetic Energy.\n");
	printf("Press 1 for Potential Energy.\n");
	printf("Press 2 for Exit\n\n");
}
void infog4a()
{
	printf("Note : ( ek=Kinetic Energy, m=mass, v=velocity.)\n\n");
	printf("Press 0 for Kinetic Energy.\n");
	printf("Press 1 for Exit\n\n");
}
void infog4b()
{
	printf("Note : ( ep=Potential Energy, m=mass, h=Height or Displacement, g=Acceleration due to gravity-(9.8).)\n\n");
	printf("Press 0 for Potential Energy.\n");
	printf("Press 1 for Exit\n\n");
}
void infog5()
{
	printf("Note : ( Pressure from Force and Area.)\n\n");
	printf("Press 0 for Pressure.\n");
	printf("Press 1 for Exit\n\n");
}
void infog6()
{
	printf("Note : ( Density from Mass and Volume.)\n\n");
	printf("Press 0 for Density.\n");
	printf("Press 1 for Exit\n\n");
}
void infog7()
{
	printf("Note : ( Velocity, Frequency and Wave Length of Wave.)\n\n");
	printf("Press 0 for Frequency.\n");
	printf("Press 1 for Velocity.\n");
	printf("Press 2 for Wave Length.\n");
	printf("Press 3 for Exit\n\n");
}
void infog8()
{
	printf("Note : ( Focus  of a lens, Power of lens.)\n\n");
	printf("Press 0 of Focus of a Lens.\n");
	printf("Press 1 of Power of Lens.\n");
	printf("Press 2 for Exit\n\n");
}
void infog9()
{
	printf("Press 0 for Electric Force.\n");
	printf("Press 1 for Electric Field.\n");
	printf("Press 2 for Electric Potential.\n");
	printf("Press 3 for Exit\n\n");
}
void infog10()
{
	printf("Press 0 for Flow of current.\n");
	printf("Press 1 for E.M.F.\n");
	printf("Press 2 for Potential Difference.\n");
	printf("Press 3 for Ohm's Law.\n");
	printf("Press 4 for Electric Power.\n");
	printf("Press 5 for Specific Resistance.\n");
	printf("Press 6 for Conductivity.\n");
	printf("Press 7 for Resistance.\n");
	printf("Press 8 for Exit\n\n");	
}
void infog10a()
{
	printf("Press 0 for Flow of current.\n");
	printf("Press 1 for Flow of current from Power.\n");
	printf("Press 2 for Flow of current from Ohm's law.\n");
	printf("Press 3 for Exit\n\n");
}
void infog10b()
{
	printf("Press 0 for Electric Power from Flow of Current.\n");
	printf("Press 1 for Electric Power from Work.\n");
	printf("Press 2 for Electric Power from Resistance.\n");
	printf("Press 3 for Exit\n\n");
}
void infog10c()
{
	printf("Press 0 for Resistance from Ohm's Law.\n");
	printf("Press 1 for Resistance from Power.\n");
	printf("Press 2 for Resistance from Specific Resistance.\n");
	printf("Press 3 for Exit\n\n");
}
void infoh()
{
	printf("Press 0 for finding x,y Func.\n");
	printf("Press 1 for finding x,y from a complex Func.\n");
	printf("Press 2 for Quadratic Equation and Finding Roots.\n");
	printf("Press 3 for Sumation of nth term.\n");
	printf("Press 4 for H.C.F.\n");
	printf("Press 5 for L.C.M.\n");
	printf("Press 6 for Exit\n\n");
}
void infoi()
{
	printf("Press 0 for 2D Geometry.\n");
	printf("Press 1 for 3D Geometry.\n");
	printf("Press 2 for Exit\n\n");
}
void infoi0()
{
	printf("Press 0 for Mid Point, Length and slope of a st. line.\n");
	printf("Press 1 for Point of dividing a st. line.\n");
	printf("Press 2 for Perimeter and Area of Triangle .\n");
	printf("Press 3 for Length of the diagonals and Area of Rectangle.\n");
	printf("Press 4 for Exit\n\n");
}
void infoi1()
{
	printf("Press 0 for Mid Point and Length of a st. line.\n");
	printf("Press 1 for Point of dividing a st. line.\n");
	printf("Press 2 for Perimeter and Area of Triangle .\n");
	printf("Press 3 for Length of the diagonals and Area of Rectangle.\n");
	printf("Press 4 for Exit\n\n");
}


void foo0()
{
	double a,b,d,exp,f;
	char c;
	
	void infoa(void);
	infoa();


	for(;;)
	{
	scanf("%lf",&a);
	
	scanf("%c",&c);
	
	scanf("%lf",&b);
	
	if(c=='+')//1
	printf("%.10lf\n",a+b);
	else if(c=='-')//2
	printf("%.10lf\n",a-b);
	else if(c=='*')//3
	printf("%.10lf\n",a*b);
 	else if(c=='/')//4
	{
		if(b==0)
		printf("Math Error.");
		else
		printf("%.10lf\n",a/b);
	}
	else if(c=='%')//5
	{
		if(b==0)
		printf("Math Error.");
		else
		printf("%d\n",(int)a%(int)b);
	}

	else if(c=='^')//6
		{
		if (b==0)
		printf("1\n");
		else
		printf("%.10lf\n",pow(a,b));
		}
	
	else if (c=='r')//7
	printf("%.10lf\n",d=pow(b,pow(a,-1)));
 	else if(c=='e')//8
	printf("%.10lf\n",exp=(a*pow(10,b)));	

	
	else if(c=='o')
	{
		break;
	}
	else 
	{
	printf("Not a valid oparator.\n\n");
	}
	}
	
	printf("Back to main manu\n\n");

}

void foo1()
{
	double n,i,l;
	
	for(;;)
	{
	void infob (void);
	infob();	
	scanf("%lf",&i);
	
	if (i==0)
		{
			printf("Input Value : ");
		scanf ("%lf",&n);
			double lntwo = log(n);
   			printf("Required ln is : %.10g\n", lntwo);
		}
	if(i==1)
		{
			printf("Input Value : ");
		scanf ("%lf",&n);
			printf("Required squar root is : %10lf",sqrt(n));		
		}
	if (i==2)
		{
			printf("Input Value : ");
			scanf ("%lf",&n);
			double lntwo = log10(n);
   			printf("Required log is : %.10lf\n", lntwo);	
		
		}
	if (i==3)
		{
			printf("Input Angle : ");
			scanf ("%lf",&n);
			double v,r,s,t,u,w,x;

  			v=PI / 180.0;
   			r=cos( n*v );
   			printf("The cosine of %lf is %lf degrees\n\n", n, r);
   			s=sin(n*v);
   			printf("The sine of %lf is %lf degrees\n\n", n, s);
   			t=tan(n*v);
			{
   			if(n==90)printf("The tan of %lf is Undefine\n\n",n);
   			else if (n==180)printf("The tan of %lf is 0.000000\n\n",n);
   			else
   			printf("The tan of %lf is %lf degrees\n\n", n, t);
			}
			u=(1/r);
			{
			if(n==90)printf("The sec of %lf if Undefine\n\n",n);
			else	
			printf("The sec of %lf is %lf degrees\n\n", n, u);
			}
			w=(1/s);
			{
			if (n==0 ||n==180)printf("The cosec of %lf is Undefine\n\n", n);
			else
			printf("The cosec of %lf is %lf degrees\n\n", n, w);	
			}
			x=(1/t);
			{
				if (n==0 || n==180)printf("The cot of %lf is Undefine\n\n",n);
				else
				printf("The cot of %lf is %lf degrees\n\n", n, x);
			}
		}
	if (i==4)
		{
			printf("Input Value : ");
			scanf ("%lf",&n);
		printf("The squar is :%lf\n\n",pow(n,2));
		printf("The qube is :%lf\n\n",pow(n,3));		
		}		
	if (i==5)
		{
			double factorial =1;
			printf("Input Value : ");
			scanf ("%lf",&n);
		for(l=1;l<=n;l++)
		{
			factorial=(factorial*l);
		}
				printf("The required answer is: %lf\n\n",factorial);
		}
		if (i==6)
		{
			break;
		}
	if(i>6 || i<0)
	{
	printf("Wrong Choice.\n\n\n");	
	}		

	}
	printf("Back to main manu\n\n");
	
}

void foo2()
{

	int r;

	for(;;)
	{
	void infoc(void);
	infoc();	
	scanf("%d",&r);
if (r==0)
	{	
		 int a[10][10],b[10][10],c[10][10];
  int i,j,k,sum,m,n,o;
  	printf("Enter row no. of the first Metrix: \n");
 	scanf("%d",&m);
 	printf("Enter Column no. of the first Metrix: \n");
 	scanf("%d",&n);
 	printf("Row no. of Second met: should be equal to the column no. of the first met: so no need to type.\n");
 	printf("Enter Column no. of the second Metrix: \n");
 	scanf("%d",&o);
  printf("\nEnter the first Metrix :\n");
  for(i=0;i<m;i++)
	{
      for(j=0;j<n;j++)
	  	{
           scanf("%d",&a[i][j]);
   		}
   	}
   	printf("\nEnter the second Metrix :\n");
   for(i=0;i<n;i++)
	{
      for(j=0;j<o;j++)
	  	{
           scanf("%d",&b[i][j]);
   		}
   	}
   	printf("The first Metrix is:\n");
  for(i=0;i<m;i++)
	{
      for(j=0;j<n;j++)
	  	{
           printf("%d ",a[i][j]);
   		}
   		printf("\n");
   	}
   	printf("The second Metrix is:\n");
	   for(i=0;i<n;i++)
	{
      for(j=0;j<o;j++)
	  	{
           printf("%d ",b[i][j]);
   		}
   		printf("\n");
   	}
   	if(m==3 && n==3 && o==3)
   	{
	printf("\nSummation Of Two Matrices :\n\n");
	
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
		printf("%d ",a[i][j]+b[i][j]);
		
		}
		printf("\n");
	}
		printf("\nSubtraction Of Two Matrices : \n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	printf("%d ",a[i][j]-b[i][j]);
	}
	printf("\n");
	}
	
	
	//Multiplication Logic
   for (i = 0; i < m; i++) 
   {
      for (j = 0; j < o; j++) 
	  {
         sum = 0;
         for (k = 0; k < n; k++) 
		 {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }
 
   printf("\nMultiplication Of Two Matrices : \n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < o; j++) {
         printf("%d ", c[i][j]);
      }
      printf("\n");
    }
	}
	else if (m==2 && n==2 && o==2)
		{ 
		printf("\nSummation Of Two Matrices :\n\n");
	
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
		printf("%d ",a[i][j]+b[i][j]);
		
		}
		printf("\n");
	}
		printf("\nSubtraction Of Two Matrices : \n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	printf("%d ",a[i][j]-b[i][j]);
	}
	printf("\n");
	}
	
	
	//Multiplication Logic
   for (i = 0; i < m; i++) 
   {
      for (j = 0; j < o; j++) 
	  {
         sum = 0;
         for (k = 0; k < n; k++) 
		 {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }
 
   printf("\nMultiplication Of Two Matrices : \n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < o; j++) {
         printf("%d ", c[i][j]);
      }
      printf("\n");
    }			
		}
	else if(m==1 && n==1 && o==1)
	{
		printf("\nSummation Of Two Matrices :\n\n");
	
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
		printf("%d ",a[i][j]+b[i][j]);
		
		}
		printf("\n");
	}
		printf("\nSubtraction Of Two Matrices : \n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	printf("%d ",a[i][j]-b[i][j]);
	}
	printf("\n");
	}
	
	
	//Multiplication Logic
   for (i = 0; i < m; i++) 
   {
      for (j = 0; j < o; j++) 
	  {
         sum = 0;
         for (k = 0; k < n; k++) 
		 {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }
 
   printf("\nMultiplication Of Two Matrices : \n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < o; j++) {
         printf("%d ", c[i][j]);
      }
      printf("\n");
    }
	}
	else
	{
		 for (i = 0; i < m; i++) 
   {
      for (j = 0; j <o; j++) 
	  {
         sum = 0;
         for (k = 0; k < n; k++) 
		 {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }
 
   printf("\nMultiplication Of Two Matrices : \n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < o; j++) {
         printf("%d ", c[i][j]);
      }
      printf("\n");
    }
	}
	}
if(r==1)
	{	
		int a[10][10],b[10][10],i,j,k=0,m,n;
  printf("\nEnter the row no. of matrix :\n");
  scanf("%d",&m);
   printf("\nEnter the column no. of matrix :\n");
   scanf("%d",&n);
  printf("\nEnter the First matrix:\n");
  	for(i=0;i<m;i++)
  		{
      	for(j=0;j<n;j++)
	  		{
           scanf("%d",&a[i][j]);
   			}
	    }
	    
	    printf("The First Metrix is :\n");
	      	for(i=0;i<m;i++)
  		{
      	for(j=0;j<n;j++)
	  		{
           printf("%d ",a[i][j]);
   			}
   			printf("\n");
	    }
  
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
	    {
           b[i][j]=0;
		}
	}
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
	  {
           b[i][j]=a[j][i];
      }
  }
  printf("\n\nTraspose of a matrix is : \n");
  for(i=0;i<m;i++)
 	{
      printf("\n");
      for(j=0;j<m;j++)
	  {
           printf("%d\t",b[i][j]);
      }
  	}
  	printf("\n\n");
	}
	if (r==2)
	{
		break;
	}
if(r>2||r<0)
	{
	printf("Wrong choice.\n\n\n");
	}
	
	
	
	}
	
	printf("Back to Main Menu.\n\n\n");
}

void foo3()
{
	int r,z;
 	for(;;)
 	{
 	void infod(void);
 	infod();
 	scanf("%d",&r);
if(r==0)
{
	
	for(;;)
	{
	void infod0(void);
	infod0();	
	scanf("%d",&z);
	
	 if(z==0)
	 {	
	long int n,q,r,binary=0,i;
	printf ("Decimal number : ");
	scanf("%d",&n);
	q=n;
	for(i=1;q>0;q=q/2)
	{
   		r=q%2;
   		binary=binary+r*i;
   		i=i*10;
	}
	printf("Equivalent Binary number is : %d\n",binary);
	printf("Equivalent Octal number is: %o\n",n);
	printf("Equivalent Hexadecimal number is: %x\n\n",n);
	}
	if(z==1)
	{
			long int n,r,decimal=0,i=0;
	
	printf ("Binary number : ");
	scanf("%d",&n);
	while (n!=0)
    {
        r = n%10;
        n/=10;
        decimal=decimal+r*pow(2,i);
        ++i;
    }
	
	printf("Equivalent Decimal number is : %d\n",decimal);
	printf("Equivalent Octal number is: %o\n",decimal);
	printf("Equivalent Hexadecimal number is: %x\n\n",decimal);
		
	}
	if(z==2)
	{
			long int n,j,binary=0,i;
	
	printf ("Octal number : ");
	scanf("%o",&n);

	
	printf("Equivalent Decimal number is : %d\n",n);
	printf("Equivalent Hexadecimal number is: %x\n",n);
	for(i=1;n>0;n=n/2)
	{
   		j=n%2;
   		binary=binary+j*i;
   		i=i*10;
	}
	printf("Equivalent Binary number is : %d\n\n",binary);	
	}
	if (z==3)
	{
	long int n,r,binary=0,i;
	
	printf ("Hexa number : ");
	scanf("%x",&n);

	
	printf("Equivalent Decimal number is : %d\n",n);
	printf("Equivalent Octal number is: %o\n",n);
	for(i=1;n>0;n=n/2)
	{
   		r=n%2;
   		binary=binary+r*i;
   		i=i*10;
	}
	printf("Equivalent Binary number is : %d\n",binary);
	}
	if(z==4)
	{
		break;
	}
	if(z>4||z<0)
	{
		printf("Wrong Choice\n\n");
	}
	
	}

	}
if(r==1)
{
		int u;
		for(;;)
		{
			void infod1(void);
			infod1();
			scanf("%d",&u);
	if (u==0)
	{
		float a;
		printf("Input Meter:");
		scanf("%f",&a);
		printf("\n\n");
		printf("Foot: %.20f\n",a*3.280839895013 );
		printf("Yard: %.20f\n",a*1.093613298338 );
		printf("Inch: %.20f\n",a*39.37007874016 );
		printf("Nautical Mile: %.20f\n",a*0.0005399568034557 );
		printf("Mile: %.20f\n",a*0.0006213711922373 );
		printf("Kilo-meter: %.20f\n\n",a*0.001);
	}
	if(u==1)
	{
	float a;
		printf("Input Inch:");
		scanf("%f",&a);
		printf("\n\n");
		printf("Foot: %.20f\n",a*0.08333333333333 );
		printf("Yard: %.20f\n",a*0.02777777777778 );
		printf("Meter: %.20f\n",a*0.0254 );
		printf("Nautical Mile: %.20f\n",a*0.00001371490280778 );
		printf("Mile: %.20f\n",a*0.00001578282828283 );
		printf("Kilo-meter: %.20f\n\n",a*0.0000254);	
	}
		if(u==2)
	{
	float a;
		printf("Input Yard:");
		scanf("%f",&a);
		printf("\n\n");
		printf("Foot: %.20f\n",a*3);
		printf("Inch: %.20f\n",a*36);
		printf("Meter: %.20f\n",a*0.9144 );
		printf("Nautical Mile: %.20f\n",a*0.0004937365010799 );
		printf("Mile: %.20f\n",a*0.0005681818181818 );
		printf("Kilo-meter: %.20f\n\n",a*0.0009144 );	
	}
	
		if(u==3)
	{
	float a;
		printf("Input Foot:");
		scanf("%f",&a);
		printf("\n\n");
		printf("Yard: %.20f\n",a*0.3333333333333 );
		printf("Inch: %.20f\n",a*12);
		printf("Meter: %.20f\n",a*0.3048 );
		printf("Nautical Mile: %.20f\n",a*0.0001645788336933 );
		printf("Mile: %.20f\n",a*0.0001893939393939 );
		printf("Kilo-meter: %.20f\n\n",a*0.0003048 );	
	}
	
		
		if(u==4)
	{
	float a;
		printf("Input Mile :");
		scanf("%f",&a);
		printf("\n\n");
		printf("Yard: %.20f\n",a*1760);
		printf("Inch: %.20f\n",a*63360);
		printf("Meter: %.20f\n",a*1609.344);
		printf("Nautical Mile: %.20f\n",a*0.8689762419006 );
		printf("Foot: %.20f\n",a*5280);
		printf("Kilo-meter: %.20f\n\n",a*1.609344);	
	}
			if(u==5)
	{
	float a;
		printf("Input Nautical Mile :");
		scanf("%f",&a);
		printf("\n\n");
		printf("Yard: %.20f\n",a*2025.371828521 );
		printf("Inch: %.20f\n",a*72913.38582677 );
		printf("Meter: %.20f\n",a*1852);
		printf("Mile: %.20f\n",a*1.150779448024 );
		printf("Foot: %.20f\n",a*6076.115485564 );
		printf("Kilo-meter: %.20f\n\n",a*1.852);	
	}
	
				if(u==6)
	{
	float a;
		printf("Input Kilo-meter :");
		scanf("%f",&a);
		printf("\n\n");
		printf("Yard: %.20f\n",a*1093.613298338 );
		printf("Inch: %.20f\n",a*39370.07874016 );
		printf("Meter: %.20f\n",a*1000);
		printf("Mile: %.20f\n",a*0.6213711922373 );
		printf("Foot: %.20f\n",a*3280.839895013 );
		printf("Nautical Mile: %.20f\n\n",a*0.5399568034557 );	
	}
	if(u==7)
	{
		break;
	}
	if(u>7||u<0)
	{
		printf("Wrong Choice\n\n");
	}
	
	
	}

}
if(r==2)
{
			int n;
	
		for(;;)
		{
			void infod2(void);
			infod2();
			scanf("%d",&n);
	if (n==0)
	{
		float a;
		printf("Input Celsius (C):");
		scanf("%f",&a);
		printf("\n\n");
		printf("Kelvin : %.10f\n",a + 273.15 );
		printf("Fahrenheit  : %.10f\n\n",(a * 9/5) + 32 );

	}
	if(n==1)
	{
	float a;
		printf("Input Kelvin (K):");
		scanf("%f",&a);
		printf("\n\n");
		printf("Celsius : %.10f\n",a - 273.15 );
		printf("Fahrenheit  : %.10f\n\n",(a - 273.15) * 9/5 + 32);
		
	}
		if(n==2)
	{
	float a;
		printf("Input Fahrenheit (F):");
		scanf("%f",&a);
		printf("\n\n");
		printf("Celsius : %.10f\n",(a - 32) * 5/9 );
		printf("Kelvin  : %.10f\n\n",(a - 32) * 5/9 + 273.15 );

	}
	
	if(n==3)
	{
		break;
	}
	if(n>3||n<0)
	{
		printf("Wrong Choice\n\n");
	}
	}
	}
if(r==3)
{
		int n;
	
		for(;;)
		{
			void infod3(void);
			infod3();
			scanf("%d",&n);
	if (n==0)
	{
		float a;
		printf("Input Degree :");
		scanf("%f",&a);
		printf("\n\n");
		printf("Gradian : %.20f\n",a*1.111111111111 );
		printf("Radian  : %.20f\n\n",a*0.01745329251994 );

	}
	if(n==1)
	{
	float a;
		printf("Input Gradian:");
		scanf("%f",&a);
		printf("\n\n");
		printf("Degree : %.20f\n",a*0.9);
		printf("Radian  : %.20f\n\n",a*0.01570796326795 );
		
	}
		if(n==2)
	{
	float a;
		printf("Input Radian:");
		scanf("%f",&a);
		printf("\n\n");
		printf("Degree : %.20f\n",a*57.29577951308 );
		printf("Gradian : %.20f\n\n",a*63.66197723676);

	}
	if(n==3)
	{
		break;
	}

	if(n>3||n<0)
	{
		printf("Wrong Choice\n\n");
	}
	
	}
}
	
if (r==4)
{
	
		int n;
	
		for(;;)
		{
			void infod4(void);
			infod4();
			scanf("%d",&n);
	if (n==0)
	{
		double a;
		printf("Input Pascal :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("Bar : %.20lf\n",a*0.00001);
		printf("Atmosphere  : %.20lf\n",a*0.00000986923266716 );
		printf("Torr  : %.20lf\n\n",a*0.007500616827042 );
	}
	if(n==1)
	{
	double a;
		printf("Input Bar:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("Pascal : %.20lf\n",a*100000 );
		printf("Atmosphere  : %.20lf\n",a*0.986923266716 );
		printf("Torr  : %.20lf\n\n",a*750.0616827042 );
		
	}
		if(n==2)
	{
	double a;
		printf("Input Atmosphere:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("Pascal : %.20lf\n",a*101325 );
		printf("Bar  : %.20lf\n",a*1.01325);
		printf("Torr  : %.20lf\n\n",a*760 );

	}
			if(n==3)
	{
	double a;
		printf("Input Torr:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("Pascal : %.20lf\n",a*133.3223684211 );
		printf("Bar  : %.20lf\n",a*0.001333223684211  );
		printf("Atmosphere  : %.20lf\n\n",a*0.001315789473684  );

	}
	if(n==4)
	{
		break;
	}

	if(n>4||n<0)
	{
		printf("Wrong Choice\n\n");
	}
	
	}
}
if(r==5)
{
	int n;
	
		for(;;)
		{
			void infod5(void);
			infod5();
			scanf("%d",&n);
	if (n==0)
	{
		double a;
		printf("Input BTU :");
		scanf("%lf",&a);
		printf("\n\n");
		printf(" Calori: %.20lf\n",a*251.9957963122  );
		printf(" Electron Volt : %.12e\n",a*6.585142305005E+21  );
		printf(" Erg : %.20lf\n",a*10550560000  );
		printf(" Joule : %.20lf\n\n",a*1055.056  );
		
	}
	if(n==1)
	{
	 double a;
		printf("Input Calori:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("  BTU : %.12e\n",a*0.003968320164996  );
		printf(" Electron Volt : %.12e\n",a*2.613195299832E-19 );
		printf("  Erg: %.20lf\n",a*41868000  );
		printf("  Joule: %.20lf\n\n",a*4.1868  );
		
	}
		if(n==2)
	{
	double a;
		printf("Input Electron Volt:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("  Calori : %.12e\n",a*3.826732736219E-20  );
		printf(" BTU : %.12e\n",a*1.518570068319E-22  );
		printf(" Erg : %.9e\n",a*1.602176462E-12  );
		printf(" Joule : %.9e\n\n",a*1.602176462E-19 );

	}
		if(n==3)
	{
	double a;
		printf("Input Erg:");
		scanf("%lf",&a);
		printf("\n\n");
		printf(" Calori : %.12e\n",a*2.388458966275E-8  );
		printf(" BTU : %.12e\n",a*9.478169879134E-11  );
		printf(" Electron Volt : %.20lf\n",a*624150974451.2  );
		printf(" Joule  : %.7e\n\n",a*1E-7  );

	}
	if(n==4)
		{
	double a;
		printf("Input Joule:");
		scanf("%lf",&a);
		printf("\n\n");
		printf(" Calori : %.20lf\n",a*0.2388458966275   );
		printf(" BTU : %.20lf\n",a*0.0009478169879134  );
		printf(" Electron Volt : %.20lf\n",a*6241509744512000000  );
		printf(" Erg : %.20lf\n\n",a*10000000  );

	}
	if(n==5)
	{
		break;
	}
	if(n>5||n<0)
	{
		printf("Wrong Choice\n\n");
	}
	
	}			
}
if(r==6)
{
		int n;
	
		for(;;)
		{
			void infod6(void);
			infod6();
			scanf("%d",&n);
	if (n==0)
	{
		double a;
		printf("Input Candela :");
		scanf("%lf",&a);
		printf("\n\n");
		printf(" Lumen-per-steradian: %.12lf\n",a*1);
		printf(" Hefnerkerze : %.12lf\n",a*1.106967615309  );
		printf(" Candle Power : %.12lf\n\n",a*1.019367991845  );
		
		
	}
	if(n==1)
	{
	double a;
		printf("Lumen-per-steradian:");
		scanf("%lf",&a);
		printf("\n\n");
		printf(" Candela : %.12lf\n",a*1);
		printf(" Hefnerkerze : %.12lf\n",a*1.106967615309  );
		printf(" Candle Power : %.12lf\n\n",a*1.019367991845   );
		
	}
		if(n==2)
	{
	double a;
		printf("Input Hefnerkerzet:");
		scanf("%lf",&a);
		printf("\n\n");
		printf(" Candela: %.12lf\n",a*0.9033687943263  );
		printf(" Lumen-per-steradian : %.12lf\n",a*0.9033687943263   );
		printf(" Candle Power : %.12lf\n\n",a*0.9208652337679   );

	}
		if(n==3)
	{
	double a;
		printf("Input Candle Power:");
		scanf("%lf",&a);
		printf("\n\n");
		printf(" Candela : %.12lf\n",a*0.981);
		printf(" Lumen-per-steradian : %.12lf\n",a*0.981   );
		printf(" Hefnerkerze : %.12lf\n\n",a*1.085935230618  );

	}
	if(n==4)
	{
		break;
	}

	if(n>4||n<0)
	{
		printf("Wrong Choice\n\n");
	}
	
	}		
}
if (r==7)
{
		int n;
	
		for(;;)
		{
			void infod7(void);
			infod7();
			scanf("%d",&n);
	if (n==0)
	{
		double a;
		printf("Input astronomical unit (AU) :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("parsec: %.18lf\n",a*0.000004848136776084);
		printf("light-year(tropical/solar): %.18lf\n",a*0.00001581284514575);
		printf("light week: %.18lf\n",a*0.0008250740471658);
		printf("light day: %.18lf\n",a*0.00577551833016);
		printf("light hour: %.18lf\n",a*0.1386124399239);
		printf("light minut: %.18lf\n",a*8.316746395431);
		printf("light second: %.18lf\n",a*499.0047837259);
		printf("kilometer(km): %.18lf\n\n",a*149597870.66);
			
	}
	if(n==1)
	{
	double a;
		printf("parsec:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("astronomical unit (AU): %.18lf\n",a*206264.8077366 );
		printf("light-year(tropical/solar): %.18lf\n",a*3.261633463758 );
		printf("light week: %.18lf\n",a*170.1837397071 );
		printf("light day: %.18lf\n",a*1191.28617795 );
		printf("light hour: %.18lf\n",a*28590.8682708 );
		printf("light minut: %.18lf\n",a*1715452.096248);
		printf("light second: %.18lf\n",a*102927125.7749 );
		printf("kilometer(km): %.18lf\n\n",a*30856776029500 );
		
	}
		if(n==2)
	{
	double a;
		printf("Input light-year(tropical/solar):");
		scanf("%lf",&a);
		printf("\n\n");
		printf("astronomical unit (AU): %.18lf\n",a*63239.7263606);
		printf("parsec: %.18lf\n",a*0.3065948430784);
		printf("light week: %.18lf\n",a*52.17745697);
		printf("light day: %.18lf\n",a*365.24219879);
		printf("light hour: %.18lf\n",a*8765.81277096);
		printf("light minut: %.18lf\n",a*525948.7662576);
		printf("light second: %.18lf\n",a*31556925.97546);
		printf("kilometer(km): %.18lf\n\n",a*9460528404668);

	}
		if(n==3)
	{
	double a;
		printf("Input light week:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("astronomical unit (AU): %.18lf\n",a*1212.012428988);
		printf("parsec: %.18lf\n",a*0.005876002030046);
		printf("light-year(tropical/solar):%.18lf\n",a*0.01916536485431);
		printf("light day: %.18lf\n",a*7);
		printf("light hour: %.18lf\n",a*168 );
		printf("light minut: %.18lf\n",a*10080 );
		printf("light second: %.18lf\n",a*604800);
		printf("kilometer(km): %.18lf\n\n",a*181314478590 );

	}
	if(n==4)
	{
		double a;
		printf("Input light day:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("astronomical unit (AU): %.18lf\n",a*173.1446327125 );
		printf("parsec: %.18lf\n",a*0.0008394288614352 );
		printf("light-year(tropical/solar): %.18lf\n",a*0.002737909264901 );
		printf("light week: %.18lf\n",a*0.1428571428571 );
		printf("light hour: %.18lf\n",a*24 );
		printf("light minut: %.18lf\n",a*1440 );
		printf("light second: %.18lf\n",a*86400 );
		printf("kilometer(km): %.18lf\n\n",a*25902068370 );	
	}
	if (n==5)
	{
			double a;
		printf("Input light hour:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("astronomical unit (AU): %.18lf\n",a*7.214359696355  );
		printf("parsec: %.18lf\n",a*0.0000349762025598);
		printf("light-year(tropical/solar): %.18lf\n",a*0.0001140795527042 );
		printf("light week: %.18lf\n",a*0.005952380952381 );
		printf("light day: %.18lf\n",a*0.04166666666667 );
		printf("light minut: %.18lf\n",a*60 );
		printf("light second: %.18lf\n",a*3600 );
		printf("kilometer(km): %.18lf\n\n",a*1079252848.75 );
	}
	if(n==6)
	{
			double a;
		printf("Input light minut:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("astronomical unit (AU): %.1e\n",a*0.1202393282726 );
		printf("parsec: %.12e\n",a*5.8293670933E-7 );
		printf("light-year(tropical/solar): %.12e\n",a*0.000001901325878404 );
		printf("light week: %.12e\n",a*0.00009920634920635 );
		printf("light day: %.12e\n",a*0.0006944444444444 );
		printf("light hour: %.4e\n",a*0.01666666666667 );
		printf("light second: %.18lf\n",a*60 );
		printf("kilometer(km): %.12e\n\n",a*17987547.47917 );
	}
	if(n==7)
	{
			double a;
		printf("Input light second:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("astronomical unit (AU): %.8e\n",a*0.002003988804543 );
		printf("parsec: %.8e\n",a*9.715611822166E-9 );
		printf("light-year(tropical/solar): %.8e\n",a*3.168876464006E-8 );
		printf("light week: %.8e\n",a*0.000001653439153439 );
		printf("light day: %.8e\n",a*0.00001157407407407 );
		printf("light hour: %.8e\n",a*0.0002777777777778 );
		printf("light minut: %.8e\n",a*0.01666666666667);
		printf("kilometer(km): %.8e\n\n",a*299792.4579861 );
	}
	if(n==8)
	{
			double a;
		printf("Input kilometer(km):");
		scanf("%lf",&a);
		printf("\n\n");
		printf("astronomical unit (AU): %.8e\n",a*6.684587124056E-9 );
		printf("parsec: %.8e\n",a*3.240779266907E-14);
		printf("light-year(tropical/solar): %.8e\n",a*1.05702341056E-13 );
		printf("light week: %.8e\n",a*5.515279352077E-12 );
		printf("light day: %.8e\n",a*3.860695546454E-11 );
		printf("light hour: %.8e\n",a*9.265669311489E-10 );
		printf("light minut: %.8e\n",a*5.559401586893E-8 );
		printf("light second: %.8e\n\n",a*0.000003335640952136 );
	
	}
	
		if(n==9)
		{
			break;
		}
	
		if(n>9||n<0)
	{
		printf("Wrong Choice\n\n");
	}
	
	}
	
}
if(r==8)	
{
	int n;

		for(;;)
		{
			void infod8(void);
			infod8();
			scanf("%d",&n);
	if (n==0)
	{
		double a;
		printf("Input dyne (dyn) :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("gram-force: %.8e\n",a*0.001019716213);
		printf("kip (kip): %.8e\n",a*2.248E-9 );
		printf("newton (N): %.8e\n",a*0.00001 );
		printf("ounce-force (ozf): %.8e\n",a*0.000035969431019);
		printf("pond: %.8e\n",a*0.001019716213 );
		printf("poundal (pdl): %.8e\n",a*0.000072330140801 );
		printf("sthene (sn): %.8e\n",a*1E-8 );
		printf("ton-force (metric)(tnf): %.8e\n\n",a*1.019716213E-9);
			
	}
	if(n==1)
	{
		double a;
		printf("gram-force :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("dyne (dyn): %.8e\n",a*980.6649999788);
		printf("kip (kip): %.8e\n",a*0.000002204534919952);
		printf("newton (N): %.8e\n",a*0.009806649999788);
		printf("ounce-force (ozf): %.8e\n",a*0.03527396206948);
		printf("pond: %.8e\n",a*1);
		printf("poundal (pdl): %.8e\n",a*0.07093163752708);
		printf("sthene (sn): %.8e\n",a*0.000009806649999788);
		printf("ton-force (metric)(tnf): %.8e\n\n",a*0.000001);
		
	}
		if(n==2)
	{
		double a;
		printf("kip (kip) :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("gram-force: %.8e\n",a*453610.4150356);
		printf("dyne (dyn): %.8e\n",a*444839857.6512);
		printf("newton (N): %.8e\n",a*4448.398576512 );
		printf("ounce-force (ozf): %.8e\n",a*16000.63657429 );
		printf("pond: %.8e\n",a*453610.4150356 );
		printf("poundal (pdl): %.8e\n",a*32175.32953781 );
		printf("sthene (sn): %.8e\n",a*4.448398576512 );
		printf("ton-force (metric)(tnf): %.8e\n\n",a*0.4536104150356 );

	}
		if(n==3)
	{
		double a;
		printf("newton (N) :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("gram-force: %.8e\n",a*101.9716213 );
		printf("kip (kip): %.8e\n",a*0.0002248 );
		printf("dyne (dyn): %.8e\n",a*100000);
		printf("ounce-force (ozf): %.8e\n",a*3.5969431019 );
		printf("pond: %.8e\n",a*101.9716213 );
		printf("poundal (pdl): %.8e\n",a*7.2330140801 );
		printf("sthene (sn): %.8e\n",a*0.001 );
		printf("ton-force (metric)(tnf): %.8e\n\n",a*0.0001019716213 );

	}
	if(n==4)
	{
		double a;
		printf("ounce-force (ozf) :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("gram-force: %.8e\n",a*28.34952302863 );
		printf("kip (kip): %.8e\n",a*0.00006249751348061 );
		printf("newton (N): %.8e\n",a*0.2780138500027 );
		printf("dyne (dyn): %.8e\n",a*27801.38500027 );
		printf("pond: %.8e\n",a*28.34952302863 );
		printf("poundal (pdl): %.8e\n",a*2.010878091533 );
		printf("sthene (sn): %.8e\n",a*0.0002780138500027 );
		printf("ton-force (metric)(tnf): %.8e\n\n",a*0.00002834952302863 );	
	}
	if (n==5)
	{
		double a;
		printf("pond:");
		scanf("%lf",&a);
		printf("\n\n");
		printf("gram-force: %.8e\n",a*1 );
		printf("kip (kip): %.8e\n",a*0.000002204534919952 );
		printf("newton (N): %.8e\n",a*0.009806649999788 );
		printf("ounce-force (ozf): %.8e\n",a*0.03527396206948 );
		printf("dyne (dyn) : %.8e\n",a*980.6649999788 );
		printf("poundal (pdl): %.8e\n",a*0.07093163752708 );
		printf("sthene (sn): %.8e\n",a*0.000009806649999788 );
		printf("ton-force (metric)(tnf): %.8e\n\n",a*0.000001 );
	}
	if(n==6)
	{
		double a;
		printf("poundal (pdl):");
		scanf("%lf",&a);
		printf("\n\n");
		printf("gram-force: %.8e\n",a*14.09808140434 );
		printf("kip (kip): %.8e\n",a*0.0000310797127602 );
		printf("newton (N): %.8e\n",a*0.1382549500009 );
		printf("ounce-force (ozf): %.8e\n",a*0.4972951887093 );
		printf("pond: %.8e\n",a*14.09808140434 );
		printf("dyne (dyn) : %.8e\n",a*13825.49500009 );
		printf("sthene (sn): %.8e\n",a*0.0001382549500009 );
		printf("ton-force (metric)(tnf): %.8e\n\n",a*0.00001409808140434 );
	}
	if(n==7)
	{
		double a;
		printf("sthene (sn):");
		scanf("%lf",&a);
		printf("\n\n");
		printf("gram-force: %.8e\n",a*101971.6213 );
		printf("kip (kip): %.8e\n",a*0.2248 );
		printf("newton (N): %.8e\n",a*1000 );
		printf("ounce-force (ozf): %.8e\n",a*3596.9431019 );
		printf("pond: %.8e\n",a*101971.6213 );
		printf("poundal (pdl): %.8e\n",a*7233.0140801 );
		printf("dyne (dyn) : %.8e\n",a*100000000 );
		printf("ton-force (metric)(tnf): %.8e\n\n",a*0.1019716213 );
	}
	if(n==8)
	{
		double a;
		printf("ton-force (metric)(tnf):");
		scanf("%lf",&a);
		printf("\n\n");
		printf("gram-force: %.8e\n",a*1000000 );
		printf("kip (kip): %.8e\n",a*2.204534919952 );
		printf("newton (N): %.8e\n",a*9806.649999788 );
		printf("ounce-force (ozf): %.8e\n",a*35273.96206948 );
		printf("pond: %.8e\n",a*1000000 );
		printf("poundal (pdl): %.8e\n",a*70931.63752708 );
		printf("sthene (sn): %.8e\n",a*9.806649999788 );
		printf("dyne (dyn) : %.8e\n\n",a*980664999.9788 );
	
	}
	
	
		if(n==9)
		{
			break;
		}
		if(n>9||n<0)
	{
		printf("Wrong Choice\n\n");
	}
	
	}
}

if(r==9)
{
		int n;

		for(;;)
		{
			void infod9(void);
			infod9();
			scanf("%d",&n);
	if (n==0)
	{
		double a;
		printf("Input Foot-candle (fc) :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("Lumen per square meter (lm/sq.m): %.8e\n",a*10.76391041671 );
		printf("Lux (lx): %.8e\n",a*10.76391041671  );
		printf(" Nox: %.8e\n",a*10763.91041671);
		printf("Phot (ph): %.8e\n\n",a*0.001076391041671 );
	
			
	}
	if(n==1)
	{
		double a;
		printf("Input Lumen per square meter (lm/sq.m)  :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("Foot-candle (fc): %.8e\n",a*0.09290304 );
		printf("Lux (lx): %.8e\n",a*1  );
		printf(" Nox: %.8e\n",a*1000  );
		printf("Phot (ph): %.8e\n\n",a*0.0001 );
		
	}
		if(n==2)
	{
		double a;
		printf("Input Lux (lx) :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("Lumen per square meter (lm/sq.m): %.8e\n",a*1);
		printf("Foot-candle (fc): %.8e\n",a*0.09290304  );
		printf(" Nox: %.8e\n",a*1000  );
		printf("Phot (ph): %.8e\n\n",a*0.0001 );

	}
		if(n==3)
	{
		double a;
		printf("Input Nox :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("Lumen per square meter (lm/sq.m): %.8e\n",a*0.001 );
		printf("Lux (lx): %.8e\n",a*0.001  );
		printf("Foot-candle (fc): %.8e\n",a*0.00009290304  );
		printf("Phot (ph): %.8e\n\n",a*1E-7 );

	}
	if(n==4)
	{
		double a;
		printf("Phot (ph) :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("Lumen per square meter (lm/sq.m): %.8e\n",a*10000 );
		printf("Lux (lx): %.8e\n",a*10000 );
		printf("Nox: %.8e\n",a*10000000  );
		printf("Input Foot-candle (fc): %.8e\n\n",a*929.0304 );
	}

		if(n==5)
		{
			break;
		}
	
		if(n>5||n<0)
	{
		printf("Wrong Choice\n\n");
	}
	
	}
}
if(r==10)
{
	int n;

		for(;;)
		{
			void infod10(void);
			infod10();
			scanf("%d",&n);
	if (n==0)
	{
		double a;
		printf("Input mmol / l :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("mg / dl : %.8e\n",a*18);
		printf("mg percent : %.8e\n\n",a*18);

	
			
	}
	if(n==1)
	{
		double a;
		printf("Input mg / dl :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("mmol / l: %.8e\n",a*0.05555555555556  );
		printf("mg percent : %.8e\n\n",a*1  );

	
		
	}
		if(n==2)
	{
		double a;
		printf("Input mg percent :");
		scanf("%lf",&a);
		printf("\n\n");
		printf("mg / dl : %.8e\n",a*1 );
		printf("mmol / l: %.8e\n\n",a*0.05555555555556   );

	

	}
		if(n==3)
		{
			break;
		}
		
		if(n>3||n<0)
	{
		printf("Wrong Choice\n\n");
	}
	
	}
}
if(r==11)
{
	break;
}

if (r>11 ||r<0)
{
		printf("Wrong choice.\n\n");
}
}
printf("\nBack to main manu\n\n");

	
}
void foo4()
{
	
		int r,p;

	for(;;)
	{
			void infoe(void);
	infoe();
		scanf("%d",&r);

	if(r==0)
	{

	for(;;)
	{
	void infoe0(void);
	infoe0();
	scanf("%d",&p);	
	if (p==0)
	{
		float l,w,a,p;
		printf("Length :");
		scanf("%f",&l );
		printf("Wide :");
		scanf("%f",&w);
		printf("Area : %f\n",a=l*w);
		printf("Perimeter : %f\n\n",p=2*(l+w));		
	}
		if (p==1)
	{
		float l,a,p;
		printf("Length :");
		scanf("%f",&l );
		printf("Area : %f\n",a=l*l);
		printf("Perimeter : %f\n\n",p=4*l);		
	}
	
		if (p==2)
	{
		float b,h,a,area,p;
		printf("Base :");
		scanf("%f",&b );
		printf("Height :");
		scanf("%f",&h);
		printf("Side :");
		scanf("%f",&a);
		printf("Area : %f\n",area=b*h);
		printf("Perimeter : %f\n\n",p=2*(a+b));			
	}
			if (p==3)
	{
		float a,b,h,c,d,area,perimeter;
		printf("Base :");
		scanf("%f",&a );
		printf("Base :");
		scanf("%f",&b );
		printf("Height :");
		scanf("%f",&h);
		printf("Side :");
		scanf("%f",&c);
		printf("Side :");
		scanf("%f",&d);
		printf("Area : %f\n",area=(1/2)*(a+b)*h);
		printf("Perimeter : %f\n\n",p=(a+b+c+d));			
	}
	if(p==4)
	{
		break;
	}
		
	if (p>4||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}
	}

	if(r==1)
	{

	for(;;)
	{
	void infoe1(void);
	infoe1();
	scanf("%d",&p);	
	if (p==0)
	{
		float b,h,a,c,ar,p;
		printf("Side :");
		scanf("%f",&a );
		printf("Base :");
		scanf("%f",&b );
		printf("Side :");
		scanf("%f",&c );	
		printf("Hight :");
		scanf("%f",&h);
		printf("Area : %f\n",ar=((.5)*b*h));
		printf("Perimeter : %f\n\n",p=(a+b+c));		
	}
		if (p==1)
	{
		float a,b,c,h,r,area,pe;
		printf("Side :");
		scanf("%f",&a );
		printf("Hight : %f\n",h=((0.866)*a));
		printf("Area : %f\n",area=((0.433)*a*a));
		printf("Perimeter : %f\n",pe=(3*a));
		printf("Incircleradius : %f\n\n",r=((0.288675)*a));	
	}
	
		if (p==2)
	{
		float a,b,c,h,r,area,pe;
		printf("Base :");
		scanf("%f",&a );
		printf("side :");
		scanf("%f",&b );
		printf("Hypotaneous :");
		scanf("%f",&c );
		printf("Hight : %f or %f\n",a,b);
		printf("Area : %f\n",area=((.5)*a*b));
		printf("Perimeter : %f\n",pe=(a+b+c));
		printf("Incircle Radius : %f\n\n",r=((a*b)/(a+b+c)));			
	}
			if (p==3)
	{
		float a,b,h,r,area,pe;
		printf("Base :");
		scanf("%f",&a );
		printf("side :");
		scanf("%f",&b );
		printf("Hight : %f\n",h=((.5)*sqrt((4*pow(b,2))-(pow(a,2)))));
		printf("Area : %f\n",area=(a/2)*sqrt((4*pow(b,2))-(pow(a,2))));
		printf("Perimeter : %f\n",pe=(a+(2*b)));
		printf("Incircle Radius : %f\n\n",r=(a/2)*sqrt(((2*b)-a)/((2*b)+a)));			
	}
	if(p==4)
	{
		break;
	}
		
	if (p>4||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}
	}
	if(r==2)
	{
			for(;;)
	{
	void infoe2(void);
	infoe2();
	scanf("%d",&p);	
	if (p==0)
	{
		float r,d,a,c;
		printf("Input Radius:");
		scanf("%f",&r);
		d=r*2;
		printf("Diameter :%f\n",r);
		printf("Area :%f\n",a=(PI*r*r));
		printf("Circumference :%f\n\n",c=(2*PI*r));
	}
	if (p==1)
	{
		float r,a;
		printf("Input Radius:");
		scanf("%f",&r);
		a=((0.5)*PI*r*r);
		printf("Area : %f\n\n",a); 
	}
	if (p==2)
	{
	float r,a,area,s;
	printf("Input Radius:");
	scanf("%f",&r);
	printf("Enter Angle(Radian):");
	scanf("%f",&a);
	area=((0.5)*a*pow(r,2));
	printf("Area: %f\n",area);
	printf("Arc Length: %f\n\n",s=a*r);
				
	}
	if (p==3)
	{
	float b,h,a;
	printf("Enter Base: ");
	scanf("%f",&b);
	printf("Enter Hight: ");
	scanf("%f",&h);
	a=((0.66667)*b*h);
	printf("Area : %f\n\n",a);				
	}
	if (p==4)
	{
		float a,b,ar,pe,c;
		printf("Enter Semimajor axis : ");
		scanf("%f",&a);
		printf("Enter Semiminor axis : ");
		scanf("%f",&b);
		printf("Area: %f\n",ar=(PI*a*b));
		printf("Circumference: %f\n",c=(PI*((3*(a+b))-sqrt((a+(3*b))*(b+(3*a))))));
		printf("Perimeter: %f\n\n",pe=((2*PI)*sqrt(((a*a)+(b*b))/2)));		
	}
	if (p==5)
	{
	float r,R,w,A,p;
	printf("Enter Innar Radius: ");
	scanf("%f",&r);
	printf("Enter Outer Radius: ");
	scanf("%f",&R);
	printf("Average Radius: %f\n",p=((0.5)*(r+R)));
	printf("Width : %f\n",w=(R-r));
	printf("Area: %f\n\n",A=(2*PI*p*w));			
	}
	if(p==6)
	{
		break;
	}
	if (p>6||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}
	}
	if(r==3)
	{
		break;
	}
	if (r>3 ||r<0)
{
		printf("Wrong choice.\n\n");
}
}
printf("\nBack to main manu\n\n");

	
}
void foo5()
{
	
		int r,p;

	for(;;)
	{
	void infof(void);
	infof();
		scanf("%d",&r);

if(r==0)
	{

	for(;;)
	{
	void infof0(void);
	infof0();
	scanf("%d",&p);	
	if (p==0)
	{
		float s,v,sa;
		printf("Side :");
		scanf("%f",&s );
		printf("Volume : %f\n",v=(s*s*s));
		printf("Surface area : %f\n\n",sa=(6*s*s));		
	}
		if (p==1)
	{
		float l,w,h,v,sa;
		printf("Length :");
		scanf("%f",&l );
		printf("Wide :");
		scanf("%f",&w );
		printf("Height :");
		scanf("%f",&h );
		printf("Volume : %f\n",v=(l*w*h));
		printf("Surface area : %f\n\n",sa=2*((l*w)+(w*h)+(h*l)));		
	}
	if(p==2)
	{
		break;
	}
		if (p>2||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}
	}
	
if(r==1)
{
		for(;;)
{
	void infof1(void);
	infof1();
	scanf("%d",&p);	
	if (p==0)
	{
		float r,v,sa,csa;
		printf("Radius :");
		scanf("%f",&r );
		printf("Volume : %f\n",v=((1.3333)*(PI*r*r*r)));
		printf("Surface Area : %f\n",sa=(4*PI*r*r));
		printf("Lateral / Curved Surface Area : %f\n\n",csa=(4*PI*r*r));		
	}
	
			if (p==1)
	{
		float r,v,R;
		printf("Inner Radii :");
		scanf("%f",&r );
		printf("Outer Radii :");
		scanf("%f",&R );
		printf("Volume : %f\n\n",v=((1.3333333)*PI*((R*R*R)-(r*r*r))));
	}
	
	
		if (p==2)
	{
		float r,v,sa,csa;
		printf("Radius :");
		scanf("%f",&r );
		printf("Volume : %f\n",v=((0.66666)*(PI*r*r*r)));
		printf("Surface Area : %f\n",sa=(3*PI*r*r));
		printf("Lateral / Curved Surface Area : %f\n\n",csa=(2*PI*r*r));		
	}
		if (p==3)
	{
		float r,R,v,sa;
		printf("Tube Radius :");
		scanf("%f",&r );
		printf("Torus Radius :");
		scanf("%f",&R );
		printf("Volume : %f\n",v=(2*PI*PI*r*r*R));
		printf("Surface Area : %f\n\n",sa=(4*PI*PI*r*R));
				
	}
	if(p==4)
	{
		break;
	}
	if (p>4||p<0)
	{
	printf("Wrong Choice\n\n");
	}
}	
}
if (r==2)
{
	for(;;)
	{
	void infof2(void);
	infof2();
	scanf("%d",&p);	
	if (p==0)
	{
		float r,h,v,sa,csa;
		printf("Radius :");
		scanf("%f",&r );
		printf("Height :");
		scanf("%f",&h );
		printf("Volume : %f\n",v=(PI*r*r*h));
		printf("Tottal Surface Area : %f\n",sa=(2*PI*r*(h+r)));
		printf("Lateral / Curved Surface Area : %f\n\n",csa=(2*PI*r*h));		
	}
		if (p==1)
	{
		float r,h,R,v,sa,csa;
		printf("Radius :");
		scanf("%f",&r );
		printf("Radius :");
		scanf("%f",&R );
		printf("Height :");
		scanf("%f",&h );
		printf("Volume : %f\n",v=(PI*h*((R*R)-(r*r))));
		printf("Tottal Surface Area : %f\n",sa=(2*PI*(R+r)*(R-r+h)));
		printf("Lateral / Curved Surface Area : %f\n\n",csa=(2*PI*h*(R+r)));
	}
	if(p==2)
	{
		break;
	}
		if (p>2||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}	
}
if(r==3)
{
	for(;;)
	{
	void infof3(void);
	infof3();
	scanf("%d",&p);	
	if (p==0)
	{
		float A,h,p,v,sa;
		printf("Area of Base :");
		scanf("%f",&A );
		printf("Height :");
		scanf("%f",&h );
		printf("Perimeter :");
		scanf("%f",&p );
		printf("Volume : %f\n",v=(A*h));
		printf("Surface Area of a Closed Prism : %f\n\n",sa=(2*A*(h*p)));		
	}
		if (p==1)
	{
		float b,h,s,l,v,sa;
		printf("Base :");
		scanf("%f",&b );
		printf("Hight :");
		scanf("%f",&h );
		printf("Side :");
		scanf("%f",&s );
		printf("Length :");
		scanf("%f",&l );
	printf("Volume : %f\n",v=((.5)*h*b*l));
	printf("Surface Area : %f\n\n",sa=((b*h)+(2*l*s)+(l*b)));
	}
	
		if (p==2)
	{
		float l,w,h,v,sa;
		printf("Lenght :");
		scanf("%f",&l );
		printf("Wide :");
		scanf("%f",&w );
		printf("Height :");
		scanf("%f",&h );
	printf("Volume : %f\n",v=(l*w*h));
	printf("Surface Area  : %f\n\n",sa=(2*((l*h)+(l*w)+(w*h))));			
	}
	if(p==3)
	{
		break;
	}

	if (p>3||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}	
	}
	
	
if (r==4)
	{
	for(;;)	
	{
	void infof4(void);
	infof4();
	scanf("%d",&p);	
	if (p==0)
	{
		float a,h,p,v;
		printf("Area of Base :");
		scanf("%f",&a );
		printf("Height :");
		scanf("%f",&h );
		printf("Volume : %f\n",v=((0.33333)*(a*h)));
	}
		if (p==1)
	{
		float b,v,sa;
		printf("Base :");
		scanf("%f",&b );
	
	printf("Volume : %f\n",v=((b*b*b)/(6*(sqrt(6)))));
	printf("Surface Area : %f\n\n",sa=((sqrt (3))*b*b));
	}
	
		if (p==2)
	{
		float s,h,v,sa;
		printf("Side :");
		scanf("%f",&s );
		printf("Height :");
		scanf("%f",&h );
printf("Volume : %f\n",v=((0.33333)*s*s*h));
printf("Surface Area  : %f\n\n",sa=((s*s)+(2*s*h)));			
	}
	if (p==3)
	{
		break;
	}

	if (p>3||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}
}

if(r==5)
{
	for(;;)
	{
	void infof5(void);
	infof5();
	scanf("%d",&p);	
	if (p==0)
	{
		float r,h,I,V,CSA,TSA;
		printf("Radius :");
		scanf("%f",&r );
		printf("Height :");
		scanf("%f",&h );
		printf("Slant Hight : %f\n",I=(sqrt((h*h)+(r*r))));
		printf("Volume : %f\n",V=((PI*r*r*h)/3));
		printf("Lateral / Curved Surface Area : %f\n",CSA=(PI*r*I));
		printf("Tottal Surface Area : %f\n\n",TSA=((PI*r*I)+(PI*r*r)));
	}
		if (p==1)
	{
		float r,R,h,I,V,CSA,TSA;
		printf("Cut-off Plane's radius :");
		scanf("%f",&r );
		printf("Radius :");
		scanf("%f",&R );
		printf("Height :");
		scanf("%f",&h );
	
		printf("Slant Hight : %f\n",I=(sqrt((h*h)+(pow((R-r),2)))));
		printf("Volume : %f\n",V=((PI*h*((r*r)+(R*R)+(r*R)))/3));
		printf("Lateral / Curved Surface Area : %f\n",CSA=(PI*(r+R)*I));
		printf("Tottal Surface Area : %f\n\n",TSA=((PI*(r+R)*I)+(PI*((r*r)+(R*R)))));
	}
	if(p==2)
	{
		break;
	}
	

	if (p>2||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}

}
if(r==6)
{
	break;
}
		if (r>6 ||r<0)
{
		printf("Wrong choice.\n\n");
}
}
printf("\nBack to main manu\n\n");
}
void foo6()
{
			int r,p,d;
	for(;;)
	{
	void infog(void);
	infog();
		
	scanf("%d",&r);
	if(r==0)
	{

	for(;;)
	{
	void infog0(void);
	infog0();
	scanf("%d",&p);	
	if (p==0)
	{
		
		for(;;)
		{
			
			void infog0a(void);
			infog0a();
			scanf("%d",&d);
			if(d==0)
			{
				
				float u,v,a,t;
			printf("Input Initial Velocity:");
			scanf("%f",&u);
			printf("Input Accelaration:");
			scanf("%f",&a);
			printf("Input Time:");
			scanf("%f",&t);	
			
			printf("Final Velocity : %f\n\n",v=u+(a*t));
			}
			if(d==1)
			{
					float u,v,a,s;
			printf("Input Initial Velocity:");
			scanf("%f",&u);
			printf("Input Accelaration:");
			scanf("%f",&a);
			printf("Input Displacement:");
			scanf("%f",&s);	
			
			printf("Final Velocity : %f\n\n",v=sqrt((u*u)+(2*a*s)));	
			}
			if (d==2)
			{
				break;
			}
			if(d>2 || d<0)
			{
				printf("Wrong Choice\n\n");
			}
		}
	}
		if (p==1)
	{
			for(;;)
		{
				float u,v,a,t,s;
			void infog0b(void);
			infog0b();
			scanf("%d",&d);
			if(d==0)
			{
			printf("Input Final Velocity:");
			scanf("%f",&v);
			printf("Input Accelaration:");
			scanf("%f",&a);
			printf("Input Time:");
			scanf("%f",&t);	
			
			printf("Initial Velocity : %f\n\n",u=v-(a*t));
			}
			if(d==1)
			{
			printf("Input Final Velocity:");
			scanf("%f",&v);
			printf("Input Accelaration:");
			scanf("%f",&a);
			printf("Input Displacement:");
			scanf("%f",&s);	
			
			printf("Initial Velocity : %f\n\n",u=sqrt((v*v)-(2*a*s)));	
			}
			if (d==2)
			{
				break;
			}
			if(d>2 || d<0)
			{
				printf("Wrong Choice\n\n");
			}
		}		
	}
	if (p==2)
	{
			for(;;)
		{
				float u,v,a,t,s;
			void infog0c(void);
			infog0c();
			scanf("%d",&d);
			if(d==0)
			{
				float u,v,a,t;
			printf("Input Final Velocity:");
			scanf("%f",&v);
			printf("Input Initial Velocity:");
			scanf("%f",&u);
			printf("Input Time:");
			scanf("%f",&t);	
			
			printf("Accelaration : %f\n\n",a=((v-u)/t));
			}
			if(d==1)
			{
					
			printf("Input Final Velocity:");
			scanf("%f",&v);
			printf("Input Time:");
			scanf("%f",&t);
			printf("Input Displacement:");
			scanf("%f",&s);	
			
			printf("Acceleration : %f\n\n",a=((2*((v*t)-s))/(t*t)));	
			}
			if(d==2)
			{
					
			printf("Input Initial Velocity:");
			scanf("%f",&u);
			printf("Input Time:");
			scanf("%f",&t);
			printf("Input Displacement:");
			scanf("%f",&s);	
			
			printf("Acceleration : %f\n\n",a=((2*(s-(u*t)))/(t*t)));	
			}
			if (d==3)
			{
				break;
			}
			if(d>3 || d<0)
			{
				printf("Wrong Choice\n\n");
			}
		}		
	}
	
	if (p==3)
	{
			for(;;)
		{
				float u,v,a,t,s;
			void infog0d(void);
			infog0d();
			scanf("%d",&d);
			if(d==0)
			{
			
			printf("Input Final Velocity:");
			scanf("%f",&v);
			printf("Input Initial Velocity:");
			scanf("%f",&u);
			printf("Input Accelaration:");
			scanf("%f",&a);	
			
			printf("Time : %f\n\n",t=((v-u)/a));
			}
			if(d==1)
			{
					
			printf("Input Final Velocity:");
			scanf("%f",&v);
			printf("Input Initial Velocity:");
			scanf("%f",&u);
			printf("Input Displacement:");
			scanf("%f",&s);	
			
			printf("Time : %f\n\n",t=((2*s)/(u+v)));	
			}
			
			if (d==2)
			{
				break;
			}
			if(d>2 || d<0)
			{
				printf("Wrong Choice\n\n");
			}
		}		
	}
		
	if (p==4)
	{
			for(;;)
		{
				float u,v,a,t,s;
			void infog0e(void);
			infog0e();
			scanf("%d",&d);
			if(d==0)
			{
			printf("Input Time:");
			scanf("%f",&t);
			printf("Input Initial Velocity:");
			scanf("%f",&u);
			printf("Input Accelaration:");
			scanf("%f",&a);	
			
			printf("Displacement : %f\n\n",s=((u*t)+((.5)*(a*t*t))));
			}
			if(d==1)
			{
			printf("Input Time:");
			scanf("%f",&t);
			printf("Input Final Velocity:");
			scanf("%f",&v);
			printf("Input Accelaration:");
			scanf("%f",&a);	
			
			printf("Displacement : %f\n\n",s=((v*t)-((.5)*(a*t*t))));	
			}
			if(d==2)
			{
			printf("Input Final Velocity:");
			scanf("%f",&v);
			printf("Input Initial Velocity:");
			scanf("%f",&u);
			printf("Input Accelaration:");
			scanf("%f",&a);	
			
			printf("Displacement : %f\n\n",s=(((v*v)-(u*u))/(2*a)));	
			}
			
			if (d==3)
			{
				break;
			}
			if(d>3 || d<0)
			{
				printf("Wrong Choice\n\n");
			}
		}		
	}
	if(p==5)
	{
		break;
	}
		if (p>5||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}
	}
	if(r==1)
	{
		
	
	for(;;)
	{
	void infog1(void);
	infog1();
	scanf("%d",&p);
	if (p==0)
	{

		
		for(;;)
		{
		void infog1a(void);
		infog1a();
			scanf("%d",&d);
		if (d==0)
		{
		float f,m,a;
		printf("Input Mass :");
		scanf("%f",&m);
		printf("Input Acceleration :");
		scanf("%f",&a);
		printf("Force: %f\n\n",f=(m*a));
		}
		if(d==1)
		{
			break;
		}
		if( d>1||d<0)
		{
			printf("Wrong Choice\n\n");
		}		
		}
	}
	
	if (p==1)
	{

	for(;;)
	{
				void infog1b(void);
		infog1b();
		
		scanf("%d",&d);
		if (d==0)
		{
		float mo,m,v;
		printf("Input Mass :");
		scanf("%f",&m);
		printf("Input Velocity :");
		scanf("%f",&v);
		printf("Momentum : %f\n\n",mo=(m*v));
		}
		if(d==1)
		{
			break;
		}
		if( d>1||d<0)
		{
			printf("Wrong Choice\n\n");
		}
	}
	}
	if (p==2)
	{
		void infog1c(void);
		infog1c();
		
	for(;;)
	{
		scanf("%d",&d);
		float m1,m2,u1,u2,v1,v2;
		if (d==0)
		{
		printf("Mass of 2nd Body:");
		scanf("%f",m2);
		printf("Initial Velocity of 1st Body:");
		scanf("%f",u1);
		printf("Initial Velocity of 2nd Body:");
		scanf("%f",u2);
		printf("Final Velocity of 1st Body:");
		scanf("%f",v1);
		printf("Final Velocity of 2nd Body:");
		scanf("%f",v2);
		printf("Mass of 1st Body: %f\n\n",m1=((m2*(v2-u2))/(u1-v1)));
		}
		if (d==1)
		{
		printf("Mass of of 1st Body:");
		scanf("%f",m1);
		printf("Initial Velocity of 1st Body:");
		scanf("%f",u1);
		printf("Initial Velocity of 2nd Body:");
		scanf("%f",u2);
		printf("Final Velocity of 1st Body:");
		scanf("%f",v1);
		printf("Final Velocity of 2nd Body:");
		scanf("%f",v2);
		printf("Mass of of 2nd Body: %f\n\n",m2=((m1*(v1-u1))/(u2-v2)));
		}
		if (d==2)
		{
		printf("Mass of 1st Body:");
		scanf("%f",m1);
		printf("Mass of 2nd Body:");
		scanf("%f",m2);
		printf("Initial Velocity of 2nd Body:");
		scanf("%f",u2);
		printf("Final Velocity of 1st Body:");
		scanf("%f",v1);
		printf("Final Velocity of 2nd Body:");
		scanf("%f",v2);
		printf("Initial Velocity of 1st Body: %f\n\n",u1=(((m1*v1)+(m2*v2)-(m2*u2))/m1));
		}
		if (d==3)
		{
		printf("Mass of 1st Body:");
		scanf("%f",m1);
		printf("Mass of 2nd Body:");
		scanf("%f",m2);
		printf("Initial Velocity of 1st Body:");
		scanf("%f",u1);
		printf("Final Velocity of 1st Body:");
		scanf("%f",v1);
		printf("Final Velocity of 2nd Body:");
		scanf("%f",v2);
		printf("Initial Velocity of 2nd Body: %f\n\n",u2=(((m1*v1)+(m2*v2)-(m1*u1))/m2));
		}
		if (d==4)
		{
		printf("Mass of 1st Body:");
		scanf("%f",m1);
		printf("Mass of 2nd Body:");
		scanf("%f",m2);
		printf("Initial Velocity of 1st Body:");
		scanf("%f",u1);
		printf("Initial Velocity of 2nd Body:");
		scanf("%f",u2);
		printf("Final Velocity of 2nd Body:");
		scanf("%f",v2);
		printf("Final Velocity of 1st Body: %f\n\n",v1=(((m1*u1)+(m2*u2)-(m2*v2))/m1));
		}
				if (d==5)
		{
		printf("Mass of 1st Body:");
		scanf("%f",m1);
		printf("Mass of 2nd Body:");
		scanf("%f",m2);
		printf("Initial Velocity of 1st Body:");
		scanf("%f",u1);
		printf("Initial Velocity of 2nd Body:");
		scanf("%f",u2);
		printf("Final Velocity of 1st Body:");
		scanf("%f",v1);
		printf("Final Velocity of 2nd Body: %f\n\n",v2=(((m1*u1)+(m2*u2)-(m1*v1))/m2));
		}
		
		
		if(d==6)
		{
			break;
		}
		if( d>6||d<0)
		{
			printf("Wrong Choice\n\n");
		}	
	}
	}
	if(p==3)
	{
		break;
	}
	if (p>3||p<0)
	{
	printf("Wrong Choice\n\n");
	}
		
	}	
}
if (r==2)
{
			for(;;)
	{
	void infog2(void);
	infog2();
	scanf("%d",&p);
	if (p==0)
	{

		
		for(;;)
		{
		void infog2a(void);
		infog2a();
		scanf("%d",&d);
		if (d==0)
		{
		float w,f,s;
		printf("Input Displacement :");
		scanf("%f",&s);
		printf("Input force :");
		scanf("%f",&f);
		printf("Work: %f\n\n",w=(f*s));
		}
		if(d==1)
		{
			break;
		}
		if( d>1||d<0)
		{
			printf("Wrong Choice\n\n");
		}		
		}
	}
	
	if (p==1)
	{

	for(;;)
	{
		void infog2b(void);
		infog2b();
		
		scanf("%d",&d);
		if (d==0)
		{
		float f,w,s;
		printf("Input Displacement :");
		scanf("%f",&s);
		printf("Input Work :");
		scanf("%f",&w);
		printf("Force : %f\n\n",f=(w/s));
		}
		if(d==1)
		{
			break;
		}
		if( d>1||d<0)
		{
			printf("Wrong Choice\n\n");
		}
	}
	}
	if (p==2)
	{
		void infog2c(void);
		infog2c();
		
	for(;;)
	{
		scanf("%d",&d);
		float s,f,w;
		if (d==0)
		{
		printf("Input Work:");
		scanf("%f",w);
		printf("Input Force:");
		scanf("%f",f);
		
		printf("Displacement: %f\n\n",s=(w/f));
		}
		
		
		if(d==1)
		{
			break;
		}
		if( d>1||d<0)
		{
			printf("Wrong Choice\n\n");
		}	
	}
	}
	if(p==3)
	{
		break;
	}
	if (p>3||p<0)
	{
	printf("Wrong Choice\n\n");
	}
		
	}	
}


if (r==3)
{
			for(;;)
	{
	void infog3(void);
	infog3();
	scanf("%d",&p);
	if (p==0)
	{

		
		for(;;)
		{
		void infog3a(void);
		infog3a();
		scanf("%d",&d);
		if (d==0)
		{
		float w,po,t;
		printf("Input Work :");
		scanf("%f",&w);
		printf("Input Time :");
		scanf("%f",&t);
		printf("Power: %f\n\n",po=(w/t));
		}
		if(d==1)
		{
			break;
		}
		if( d>1||d<0)
		{
			printf("Wrong Choice\n\n");
		}		
		}
	}
	
	if (p==1)
	{

	for(;;)
	{
		void infog3b(void);
		infog3b();
		
		scanf("%d",&d);
		if (d==0)
		{
		float n,ae,te;
		printf("Input Active Energy :");
		scanf("%f",&ae);
		printf("Input Tottal Energy :");
		scanf("%f",&te);
		printf("Efficiency : %f Percent\n\n",n=((ae/te))*100);
		}
		if(d==1)
		{
			break;
		}
		if( d>1||d<0)
		{
			printf("Wrong Choice\n\n");
		}
	}
	}
	if(p==2)
	{
		break;
	}
	if (p>2||p<0)
	{
	printf("Wrong Choice\n\n");
	}
		
	}	
}
if (r==4)
{
			for(;;)
	{
	void infog4(void);
	infog4();
	scanf("%d",&p);
	if (p==0)
	{

		
		for(;;)
		{
		void infog4a(void);
		infog4a();
		scanf("%d",&d);
		if (d==0)
		{
		float ek,m,v;
		printf("Input mass :");
		scanf("%f",&m);
		printf("Input velocity :");
		scanf("%f",&v);
		printf("Kinetic Energy: %f\n\n",ek=((.5)*m*v*v));
		}
		if(d==1)
		{
			break;
		}
		if( d>1||d<0)
		{
			printf("Wrong Choice\n\n");
		}		
		}
	}
	
	if (p==1)
	{

	for(;;)
	{
		void infog4b(void);
		infog4b();
		
		scanf("%d",&d);
		if (d==0)
		{
		float ep,h,m;
		printf("Input mass :");
		scanf("%f",&m);
		printf("Input Displacement or Height :");
		scanf("%f",&h);
		printf("g=9.8 meter per second squar\n\n");
		printf("Potential Energy : %f\n\n",ep=(g*h*m));
		}
		if(d==1)
		{
			break;
		}
		if( d>1||d<0)
		{
			printf("Wrong Choice\n\n");
		}
	}
	}
	if(p==2)
	{
		break;
	}
	if (p>2||p<0)
	{
	printf("Wrong Choice\n\n");
	}
		
	}	
}	
	
if (r==5)
{
			for(;;)
	{
	void infog5(void);
	infog5();
	scanf("%d",&p);
	if (p==0)
	{
		float pa,f,a;
		printf("Input Force :");
		scanf("%f",&f);
		printf("Input Area :");
		scanf("%f",&a);
		printf("Pressure : %f\n\n",pa=(f/a));
	}	
	
	
	if(p==1)
	{
		break;
	}
	if (p>1||p<0)
	{
	printf("Wrong Choice\n\n");
	}
		
	}	
}	
if (r==6)
{
			for(;;)
	{
	void infog6(void);
	infog6();
	scanf("%d",&p);
	if (p==0)
	{
		float den,m,v;
		printf("Input Mass :");
		scanf("%f",&m);
		printf("Input Volume :");
		scanf("%f",&v);
		printf("Density : %f\n\n",den=(m/v));
	}	
	
	
	if(p==1)
	{
		break;
	}
	if (p>1||p<0)
	{
	printf("Wrong Choice\n\n");
	}
		
	}	
}
if (r==7)
{
			for(;;)
	{
	void infog7(void);
	infog7();
	scanf("%d",&p);
	if (p==0)
	{
		float t,f;
		printf("Input Time :");
		scanf("%f",&t);
		printf("Frequency : %f\n\n",f=(1/t));
	}	
	if (p==1)
	{
		float v,f,lam;
		printf("Input frequency :");
		scanf("%f",&f);
		printf("Input Wave length :");
		scanf("%f",&lam);
		printf("Velocity : %f\n\n",v=(f*lam));
	}	
	if (p==2)
	{
		float v,f,lam;
		printf("Input frequency :");
		scanf("%f",&f);
		printf("Input Velocity :");
		scanf("%f",&v);
		printf("Wave length : %f\n\n",lam=(v/f));
	}
	if(p==3)
	{
		break;
	}
	if (p>3||p<0)
	{
	printf("Wrong Choice\n\n");
	}
		
	}	
}
if (r==8)
{
			for(;;)
	{
	void infog8(void);
	infog8();
	scanf("%d",&p);
	if (p==0)
	{
		float r,f;
		printf("Input radius :");
		scanf("%f",&r);
		printf("Focus : %f\n\n",f=(r/2));
	}	
	if (p==1)
	{
		float po,f;
		printf("Input Focus :");
		scanf("%f",&f);
		printf("Power of lens : %f\n\n",po=(1/f));
	}	
	
	if(p==2)
	{
		break;
	}
	if (p>2||p<0)
	{
	printf("Wrong Choice\n\n");
	}
		
	}	
}
if(r==9)
{
				for(;;)
	{
	void infog9(void);
	infog9();
	scanf("%d",&p);
	if (p==0)
	{
		float f,q1,q2,d;
		printf("Input charge 1 :");
		scanf("%f",&q1);
		printf("Input charge 2 :");
		scanf("%f",&q2);
		printf("Input Distance :");
		scanf("%f",&d);
		printf("Electric Force : %.3e\n\n",f=((q1*q2*Cu)/(d*d)));
	}	
	if (p==1)
	{
		float E,f,q;
		printf("Input Electric Force :");
		scanf("%f",&f);
		printf("Input Charge :");
		scanf("%f",&q);
		printf("Electric Field : %f\n\n",E=(f/q));
	}	
	if (p==2)
	{
		float v,w,q;
		printf("Input Work :");
		scanf("%f",&w);
		printf("Input Charge :");
		scanf("%f",&q);
		
		printf("Electric Potential : %f\n\n",v=(w/q));
	}
	if(p==3)
	{
		break;
	}
	if (p>3||p<0)
	{
	printf("Wrong Choice\n\n");
	}
		
	}
}
if(r==10)
{
		for(;;)
	{
	void infog10(void);
	infog10();
	scanf("%d",&p);	
	if (p==0)
	{
		
		for(;;)
		{
			
			void infog10a(void);
			infog10a();
			scanf("%d",&d);
			if(d==0)
			{
				
				float i,q,t;
			printf("Input Charge:");
			scanf("%f",&q);
			printf("Input Time:");
			scanf("%f",&t);
						
			printf("Flow of current : %f\n\n",i=(q/t));
			}
			if(d==1)
			{
					float po,v,i;
			printf("Input Potential Differnce:");
			scanf("%f",&v);
			printf("Input Power:");
			scanf("%f",&po);
			printf("Flow of current : %f\n\n",i=(po/v));	
			}
				if(d==2)
			{
					float r,v,i;
			printf("Input Potential Differnce:");
			scanf("%f",&v);
			printf("Input Resistance:");
			scanf("%f",&r);
			printf("Flow of current : %f\n\n",i=(v/r));	
			}
			if (d==3)
			{
				break;
			}
			if(d>3 || d<0)
			{
				printf("Wrong Choice\n\n");
			}
		}
	}
	if (p==1)
	{
			float e,w,q;
			printf("Input Work:");
			scanf("%f",&w);
			printf("Input charge:");
			scanf("%f",&q);
						
			printf("E.M.F(Electromotive force) : %f\n\n",e=(w/q));
			
	}
	if (p==2)
	{
	
				float v,w,q;
			printf("Input Work  :");
			scanf("%f",&w);
			printf("Input Charge :");
			scanf("%f",&q);
						
			printf("potential difference : %f\n\n",v=(w/q));
			
	}
	
	if (p==3)
	{
			float i,v,r;		
			printf("Input Potential Difference:");
			scanf("%f",&v);
			printf("Input Resistance:");
			scanf("%f",&r);
						
			printf("According to Ohm's law flow of current is : %f\n\n",i=(v/r));
		
	}
		
	if (p==4)
	{
			for(;;)
		{
			void infog10b(void);
			infog10b();
			scanf("%d",&d);
			if(d==0)
			{
			float po,v,i;
			printf("Input Flow of Current:");
			scanf("%f",&i);
			printf("Input Potential Difference:");
			scanf("%f",&v);
						
			printf("Power : %f\n\n",po=(v*i));
			}
			if(d==1)
			{
			float po,w,t;
			printf("Input Time:");
			scanf("%f",&t);
			printf("Input Work:");
			scanf("%f",&w);
						
			printf("Power : %f\n\n",po=(w/t));	
			}
			if(d==2)
			{
				float po,v,r;
			printf("Input Potential Difference:");
			scanf("%f",&v);
			printf("Input Resistance:");
			scanf("%f",&r);
						
			printf("Power : %f\n\n",po=((v*v)/r));	
			}
			
			if (d==3)
			{
				break;
			}
			if(d>3 || d<0)
			{
				printf("Wrong Choice\n\n");
			}
		}		
	}
		if (p==5)
	{
			float r,a,l,sr;		
			printf("Input Area:");
			scanf("%f",&a);
			printf("Input Resistance:");
			scanf("%f",&r);
			printf("Input Length:");
			scanf("%f",&l);			
			printf("Specific Resistance : %f\n\n",sr=((r*a)/l));
		
	}
			if (p==6)
	{
			float sg,sr;		
			printf("Input Specific Resistance:");
			scanf("%f",&sr);
			printf("Conductivity: %f\n\n",sg=(1/sr));		
	}
		if (p==7)
	{
			for(;;)
		{
			void infog10c(void);
			infog10c();
			scanf("%d",&d);
			if(d==0)
			{
			float r,v,i;
			printf("Input Flow of Current:");
			scanf("%f",&i);
			printf("Input Potential Difference:");
			scanf("%f",&v);
						
			printf("Resistance : %f\n\n",r=(v/i));
			}
			if(d==1)
			{
			float v,r,po;
			printf("Input Power:");
			scanf("%f",&po);
			printf("Input Potential Difference:");
			scanf("%f",&v);
			printf("Resistance : %f\n\n",r=((v*v)/p));	
			}
			if(d==2)
			{
				float sr,l,a,r;
			printf("Input Specific Resistance:");
			scanf("%f",&sr);
			printf("Input Length:");
			scanf("%f",&l);
			printf("Input Area:");
			scanf("%f",&a);			
			printf("Resistance : %f\n\n",r=((sr*l)/a));	
			}
			
			if (d==3)
			{
				break;
			}
			if(d>3 || d<0)
			{
				printf("Wrong Choice\n\n");
			}
		}		
	}
	if(p==8)
		{
			break;
		}
		if (p>8||p<0)
		{
		printf("Wrong Choice\n\n");
		}
	}
}

	if(r==11)
	{
		break;
	}
	if(r>11||r<0)
	{
		printf("Wrong Choice.\n\n");
	}
	}
	printf("\nBack to main manu\n\n");	
}
void foo7()
{
			int r,p,d;
	for(;;)
	{
	void infoh(void);
	infoh();
		
	scanf("%d",&r);
	if(r==0)
	{
			int a,b,x,y;
	printf("x+y = ");
	scanf("%d",&a);
	printf("x-y = ");
	scanf("%d",&b);
	
	x=(a+b)/2;
	y=(a-b)/2;
	printf("Value of x : %d\nvalue of y : %d",x,y);

		
	}

	if(r==1)
	{
		double a1, a2, b1, b2, c1, c2, d, x, y;
	printf("a1 = ");
	scanf("%lf", &a1);
	printf("a2 = ");
	scanf("%lf", &a2);
	printf("b1 = ");
	scanf("%lf", &b1);
	printf("b2 = ");
	scanf("%lf", &b2);
	printf("c1 = ");
	scanf("%lf", &c1);
	printf("c2 = ");
	scanf("%lf", &c2);
	d = a1 * b2- a2* b1;

	if ((int) d == 0) {
	printf("Value of x and y can not be determined.\n");
	}
	else {
	x = (b2 * c1- b1* c2) / d;
	y = (a1 * c2- a2* c1) / d;
	printf("x = %0.2lf, y = %0.2lf\n", x, y);
	}
}

if (r==2)
{
	  float a, b, c, determinant, r1,r2, real, imag;
  printf("Enter coefficients a, b and c: ");
  scanf("%f%f%f",&a,&b,&c);
  determinant=b*b-4*a*c;
  if (determinant>0)
  {
      r1= (-b+sqrt(determinant))/(2*a);
      r2= (-b-sqrt(determinant))/(2*a);
      printf("Roots are: %.2f and %.2f",r1 , r2);
  }
  else if (determinant==0)
  {
    r1 = r2 = -b/(2*a);
    printf("Roots are: %.2f and %.2f", r1, r2);
  }
  else
  {
    real= -b/(2*a);
    imag = sqrt(-determinant)/(2*a);
    printf("Roots are: %.2f+%.2fi and %.2f-%.2fi", real, imag, real, imag);
  }	
	
}

if (r==3)
{
int i, n, sum=0;
printf("Input Number of terms :");
scanf("%d", &n);
for(i = 1; i <= n; i++)
{
sum = sum + i;
}
printf("Summation is %d\n", sum);
}

if (r==4)
{
	
int a, b, t, gcd;
printf("Give Input 1st number:");
scanf("%d",&a);
printf("Give Input 2nd number:");
scanf("%d",&b);

if (a == 0) gcd = a;
else if (b == 0) gcd = b;
else {
while (b != 0) {
t = b;
b = a % b;
a = t;
}
gcd = a;
}
printf("HCF is %d\n\n", gcd);
}
if (r==5)
{
	int a, b, t, x, gcd,p,lcm;
printf("Give Input 1st number:");
scanf("%d",&a);
printf("Give Input 2nd number:");
scanf("%d",&b);
p=a*b;
if (a == 0) gcd = a;
else if (b == 0) gcd = b;
else {
while (b != 0) {
t = b;
b = a % b;
a = t;
}
gcd = a;
}
lcm=(p/gcd);
printf("L.C.M is :%d\n\n",lcm);
}

if(r==6)
{
		break;
}
if(r>6||r<0)
{
		printf("Wrong Choice.\n\n");
}
}
printf("\nBack to main manu\n\n");	
}
void foo8()
{
	int r;
	for(;;)
	{
			
		
		printf("Speed of Light in Vacume is c = 299792458 meter per second.\n");
		printf("Acceleration Due to Gravity g = 9.8 meter per second squar.\n");
		printf("Gravitational Constant G = 6.6742e-11 cubic meter per kilogram per second squar.\n");
		printf("Plank Constant h = 6.6260693e-34 jule per second.\n");
		printf("Mass of an Electron Me = 9.1093826e-31 kilogram.\n");
		printf("Radius of an Electron Re = 2.817940285e-15 meter.\n");
		printf("Charge of an Electron Ce = 1.602176462e-19 Culomb.\n");
		printf("Mass of Proton Mp = 1.67262158e-27 kilogram.\n");
		printf("Mass of Nutron Mn = 1.67492716e-27 kilogram.\n");
		printf("Mass of Alpha Partical Ma = 6.6446565e-27 kilogram .\n");
		printf("Avogadro's number Na = 6.02214199e+23 per mole.\n");
		printf("Faradays Constant F = 96485.3415 culomb per mole.\n");
		printf("Boltzmann Constant k = 1.3806503e-23 jule per kelvin.\n");
		printf("Molar Gas Constant R = 8.314472 jule per mole per kelvin.\n");
		printf("Permeability of vacuum = 4PIe-7 Newton per area squar.\n");
		printf("Permittivity of vacuum = 8.854187817e-12 faraday per meter.\n");
		printf("Culomb Constant = 8.987552e+9 newton meter squae per culomb squar.\n");
		printf("Bohr radius = 0.529177249e-10 meter.\n");
		printf("Standard Atmosphare atm = 101325 pascal.\n");
		printf("PI = 3.1416 .\n");
		printf("Rydberg constant = 10973731.57 per meter.\n\n");
		
		printf("Press any number for Exit\n\n"); 
		scanf("%d",&r);
		if(r>=0 || r<0)
		{
			break;
		}
		
	}
	printf("\nBack to main manu\n\n");
}
void foo9()
{
				int r,p,d;
	for(;;)
	{
	void infoi(void);
	infoi();
		
	scanf("%d",&r);
	if(r==0)
	{
		for(;;)
	{
	void infoi0(void);
	infoi0();
	scanf("%d",&p);	
	if (p==0)
	{
		float w,x1,x2,y1,y2,x,y,d,slope;
		printf("x1 :");
		scanf("%f",&x1 );
		printf("y1 :");
		scanf("%f",&y1 );
		printf("x2 :");
		scanf("%f",&x2 );
		printf("y2 :");
		scanf("%f",&y2 );
		
		printf("Mid Point : (%.1f,%.1f)\n",x=((x1+x2)/2),y=((y1+y2)/2));
		printf("Length of the st. line : %f\n",d=(sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))));
		w=(x2-x1);
		if(w==0)
		{
				printf("Math Error.\n\n");
		}
		else
		{
			printf("Slope of the st. line : %f\n\n",slope=((y2-y1)/w));
		}
	}
	if (p==1)
	{
		float w,x1,x2,y1,y2,x,y,m1,m2;
		printf("x1 :");
		scanf("%f",&x1 );
		printf("y1 :");
		scanf("%f",&y1 );
		printf("x2 :");
		scanf("%f",&x2 );
		printf("y2 :");
		scanf("%f",&y2 );
		printf("m1 :");
		scanf("%f",&m1 );
		printf("m2 :");
		scanf("%f",&m2 );
		w=(m1+m2);
		if(w==0)
		{
				printf("\nMath Error.\n\n");
		}
		else
		{
		printf("\nPoint of dividing the st. line is : %.3f,%.3f\n\n",x=(((m1*x2)+(m2*x1))/w),y=(((m1*y2)+(m2*y1))/w));
		}
	}
	if (p==2)
	{
		float x1,x2,y1,y2,x,y,pe,s,area,a,b,c;
		printf("x :");
		scanf("%f",&x );
		printf("y :");
		scanf("%f",&y );
		printf("x1 :");
		scanf("%f",&x1 );
		printf("y1 :");
		scanf("%f",&y1 );
		printf("x2 :");
		scanf("%f",&x2 );
		printf("y2 :");
		scanf("%f",&y2 );
		a=(sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1))));
		b=(sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))));
		c=(sqrt(((x2-x)*(x2-x))+((y2-y)*(y2-y))));
		printf("\n\nPerimeter : %f\n\n",pe=(a+b+c));
		s=((.5)*(a+b+c));
		area=(sqrt(s*(s-a)*(s-b)*(s-c)));
		printf("Area : %f\n\n\n",area);
		
	}
	if(p==3)
	{
		float x,x1,x2,x3,y,y1,y2,y3,d1,d2,at1,at2,area,a,b,c,d,e,f,s,k;
		printf("x :");
		scanf("%f",&x );
		printf("y :");
		scanf("%f",&y );
		printf("x1 :");
		scanf("%f",&x1 );
		printf("y1 :");
		scanf("%f",&y1 );
		printf("x2 :");
		scanf("%f",&x2 );
		printf("y2 :");
		scanf("%f",&y2 );
		printf("x3 :");
		scanf("%f",&x3 );
		printf("y3 :");
		scanf("%f",&y3 );
		a=(sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1))));
		b=(sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))));
		c=(sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3))));
		d=(sqrt(((x3-x)*(x3-x))+((y3-y)*(y3-y))));
		e=(sqrt(((x-x2)*(x-x2))+((y-y2)*(y-y2))));
		f=(sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3))));
	printf("\nThe Diagonals of the rectangles are: AC=%f,BD=%f\n",e,f);
		s=((.5)*(a+b+e));
		k=((.5)*(e+c+d));
	 at1=sqrt(s*(s-a)*(s-b)*(s-e));
	 at2=sqrt(k*(k-e)*(k-c)*(k-d));
	 printf("Area of the Rectangle is: %f\n\n",area=(at1+at2));
	}
	
	if(p==4)
	{
		break;
	}
	

	if (p>4||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}

	}

	if(r==1)
	{
			for(;;)
	{
	void infoi1(void);
	infoi1();
	scanf("%d",&p);	
	if (p==0)
	{
		float x1,x2,y1,y2,z1,z2,x,y,z,d;
		printf("x1 :");
		scanf("%f",&x1 );
		printf("y1 :");
		scanf("%f",&y1 );
		printf("z1 :");
		scanf("%f",&z1 );		
		printf("x2 :");
		scanf("%f",&x2 );
		printf("y2 :");
		scanf("%f",&y2 );		
		printf("z2 :");
		scanf("%f",&z2 );
		
		printf("Mid Point : (%.1f,%.1f,%.1f)\n",x=((x1+x2)/2),y=((y1+y2)/2),z=((z1+z2)/2));
		printf("Length of the st. line : %f\n",d=(sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))+((z1-z2)*(z1-z2)))));
	}
		if (p==1)
	{
	float w,x1,x2,y1,y2,z1,z2,x,y,z,m1,m2;
		printf("x1 :");
		scanf("%f",&x1 );
		printf("y1 :");
		scanf("%f",&y1 );
		printf("z1 :");
		scanf("%f",&z1 );
		printf("x2 :");
		scanf("%f",&x2 );
		printf("y2 :");
		scanf("%f",&y2 );
		printf("z2 :");
		scanf("%f",&z2 );
		printf("m1 :");
		scanf("%f",&m1 );
		printf("m2 :");
		scanf("%f",&m2 );
		w=(m1+m2);
		if(w==0)
		{
			printf("\nMath Error.\n\n");
		}
		else
		{
		printf("Point of dividing the st. line is : (%.3f,%.3f,%.3f)\n\n",x=(((m1*x2)+(m2*x1))/w),y=(((m1*y2)+(m2*y1))/w),z=(((m1*z2)+(m2*z1))/w));
		}
	}
		if (p==2)
	{
		float x1,x2,z2,y1,y2,z1,x,y,z,pe,s,area,a,b,c;
		printf("x :");
		scanf("%f",&x );
		printf("y :");
		scanf("%f",&y );
		printf("z :");
		scanf("%f",&z );
		printf("x1 :");
		scanf("%f",&x1 );
		printf("y1 :");
		scanf("%f",&y1 );
		printf("z1 :");
		scanf("%f",&z1 );
		printf("x2 :");
		scanf("%f",&x2 );
		printf("y2 :");
		scanf("%f",&y2 );
		printf("z2 :");
		scanf("%f",&z2 );
		
		a=(sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1))+((z-z1)*(z-z1))));
		b=(sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))+((z1-z2)*(z1-z2))));
		c=(sqrt(((x2-x)*(x2-x))+((y2-y)*(y2-y))+((z2-z)*(z2-z))));
		printf("\n\nPerimeter : %f\n\n",pe=(a+b+c));
		s=((.5)*(a+b+c));
		area=(sqrt(s*(s-a)*(s-b)*(s-c)));
		printf("Area : %f\n\n\n",area);		
	}
	if(p==3)
	{
		float x,x1,x2,x3,y,y1,y2,y3,z,z1,z2,z3,d1,d2,at1,at2,area,a,b,c,d,e,f,s,k;
		printf("x :");
		scanf("%f",&x );
		printf("y :");
		scanf("%f",&y );
		printf("z :");
		scanf("%f",&z );
		printf("x1 :");
		scanf("%f",&x1 );
		printf("y1 :");
		scanf("%f",&y1 );
		printf("z1 :");
		scanf("%f",&z1 );
		printf("x2 :");
		scanf("%f",&x2 );
		printf("y2 :");
		scanf("%f",&y2 );
		printf("z2 :");
		scanf("%f",&z2 );
		printf("x3 :");
		scanf("%f",&x3 );
		printf("y3 :");
		scanf("%f",&y3 );
		printf("z3 :");
		scanf("%f",&z3 );
		a=(sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1))+((z-z1)*(z-z1))));
		b=(sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))+((z1-z2)*(z1-z2))));
		c=(sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3))+((z2-z3)*(z2-z3))));
		d=(sqrt(((x3-x)*(x3-x))+((y3-y)*(y3-y))+((z3-z)*(z3-z))));
		e=(sqrt(((x-x2)*(x-x2))+((y-y2)*(y-y2))+((z-z2)*(z-z2))));
		f=(sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3))+((z1-z3)*(z1-z3))));
	printf("\nThe Diagonals of the rectangles are: AC=%f,BD=%f\n",e,f);
		s=((.5)*(a+b+e));
		k=((.5)*(e+c+d));
	 at1=sqrt(s*(s-a)*(s-b)*(s-e));
	 at2=sqrt(k*(k-e)*(k-c)*(k-d));
	 printf("Area of the Rectangle is: %f\n\n",area=(at1+at2));
	}
	if(p==4)
	{
		break;
	}
	

	if (p>4||p<0)
	{
	printf("Wrong Choice\n\n");
	}
	}
	}
	if(r==2)
	{
		break;
	}
	if(r>2||r<0)
	{
		printf("Wrong Choice.\n\n");
	}
}
	
printf("\nBack to main manu\n\n");	
	
	
}
