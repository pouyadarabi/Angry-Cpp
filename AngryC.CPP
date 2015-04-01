#include<iostream.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <PlayWav.h>
#include <Bmp.h>
#include <mouse.h>
#include <stdlib.h>
#include <Math.h>

int bax = 1, bax1 = 1, bay1 = 1, bax11 = 1, bay11 = 1, bay = 1, bax2 = 1, bax3 = 1, bay2 = 1, bay3 = 1, bax21, bax22, bax23, bay21, bay22, bay23, lvl = 0, lvl1 = 0, j3 = 0;


void play()
{
	setcolor(15);
	settextstyle(0, 0, 5);

	for (int i = 0; i < 500; i += 2)
	{
		setcolor(15);
		outtextxy(0 + i, 150, "s");
		setcolor(0);
		outtextxy(0 + i, 150, "s");
	}
	setcolor(15);
	outtextxy(0 + i, 150, "s");

	for (i = 0; i < 460; i += 2)
	{
		setcolor(15);
		outtextxy(0 + i, 150, "d");
		setcolor(0);
		outtextxy(0 + i, 150, "d");
	}
	setcolor(15);
	outtextxy(0 + i, 150, "d");

	for (i = 0; i < 420; i += 2)
	{
		setcolor(15);
		outtextxy(0 + i, 150, "r");
		setcolor(0);
		outtextxy(0 + i, 150, "r");
	}
	setcolor(15);
	outtextxy(0 + i, 150, "r");

	for (i = 0; i < 380; i += 2)
	{
		setcolor(15);
		outtextxy(0 + i, 150, "i");
		setcolor(0);
		outtextxy(0 + i, 150, "i");
	}
	setcolor(15);
	outtextxy(0 + i, 150, "i");

	for (i = 0; i < 330; i += 2)
	{
		setcolor(15);
		outtextxy(0 + i, 150, "B");
		setcolor(0);
		outtextxy(0 + i, 150, "B");
	}
	setcolor(15);
	outtextxy(0 + i, 150, "B");

	for (i = 0; i < 260; i += 2)
	{
		setcolor(15);
		outtextxy(0 + i, 50, "y");
		setcolor(0);
		outtextxy(0 + i, 50, "y");
	}
	setcolor(15);
	outtextxy(0 + i, 50, "y");

	for (i = 0; i < 210; i += 2)
	{
		setcolor(15);
		outtextxy(0 + i, 50, "r");
		setcolor(0);
		outtextxy(0 + i, 50, "r");
	}
	setcolor(15);
	outtextxy(0 + i, 50, "r");

	for (i = 0; i < 160; i += 2)
	{
		setcolor(15);
		outtextxy(0 + i, 50, "g");
		setcolor(0);
		outtextxy(0 + i, 50, "g");
	}
	setcolor(15);
	outtextxy(0 + i, 50, "g");

	for (i = 0; i < 110; i++)
	{
		setcolor(15);
		outtextxy(0 + i, 50, "n");
		setcolor(0);
		outtextxy(0 + i, 50, "n");
	}
	setcolor(15);
	outtextxy(0 + i, 50, "n");

	for (i = 0; i < 50; i++)
	{
		setcolor(15);
		outtextxy(0 + i, 50, "A");
		setcolor(0);
		outtextxy(0 + i, 50, "A");
	}
	setcolor(15);
	outtextxy(0 + i, 50, "A");
	int j = 600;
	for (i = 0; i < 600; i += 3)
	{

		setcolor(15);
		line(i - 15, 110 + 10, i + 5, 110 + 10);
		line(i - 15, 110 + 10, i - 5, 110 - 10);
		line(i - 5, 110 - 10, i + 5, 110 + 10);
		circle(i - 7, 110 + 2, 1);
		circle(i - 2, 110 + 2, 1);
		ellipse(i - 5, 110 + 8, 0, 180, 2, 3);

		line(j - 15, 200 + 10, j + 5, 200 + 10);
		line(j - 15, 200 + 10, j - 5, 200 - 10);
		line(j - 5, 200 - 10, j + 5, 200 + 10);
		circle(j - 7, 200 + 2, 1);
		circle(j - 2, 200 + 2, 1);
		ellipse(j - 5, 200 + 8, 0, 180, 2, 3);

		delay(10);
		setcolor(0);
		line(i - 15, 110 + 10, i + 5, 110 + 10);
		line(i - 15, 110 + 10, i - 5, 110 - 10);
		line(i - 5, 110 - 10, i + 5, 110 + 10);
		circle(i - 7, 110 + 2, 1);
		circle(i - 2, 110 + 2, 1);
		ellipse(i - 5, 110 + 8, 0, 180, 2, 3);

		line(j - 15, 200 + 10, j + 5, 200 + 10);
		line(j - 15, 200 + 10, j - 5, 200 - 10);
		line(j - 5, 200 - 10, j + 5, 200 + 10);
		circle(j - 7, 200 + 2, 1);
		circle(j - 2, 200 + 2, 1);
		ellipse(j - 5, 200 + 8, 0, 180, 2, 3);

		j -= 3;
	}
	setcolor(RED);
	settextstyle(0, 0, 5);
	outtextxy(50, 50, "A");
	delay(20);

	setcolor(BLUE);
	settextstyle(0, 0, 5);
	outtextxy(330, 150, "B");

}

void paint(int x, int y, int angry)
{


	if (angry == 1)
	{
		circle(x, y, 10);
		circle(x - 5, y - 5, 3);
		circle(x + 5, y - 5, 3);
		ellipse(x - 5, y + 5, 0, 90, 10, 5);
	}
	if (angry == 2)
	{
		line(x - 15, y + 10, x + 5, y + 10);
		line(x - 15, y + 10, x - 5, y - 10);
		line(x - 5, y - 10, x + 5, y + 10);
		circle(x - 7, y + 2, 1);
		circle(x - 2, y + 2, 1);
		ellipse(x - 5, y + 8, 0, 180, 2, 3);
	}
	if (angry == 3)
	{
		ellipse(x, y, 0, 360, 7, 9);
		ellipse(x - 3, y - 2, 0, 360, 2, 1);
		ellipse(x + 3, y - 2, 0, 360, 2, 1);
		ellipse(x, y + 3, 180, 300, 2, 1);
	}
}


void main()
{

	int d = 0, m = 0;
	initgraph(&d, &m, "");
	initmouse();




	int angry = 1, x0 = 50, y0 = 380, u6 = 0, h1, x = x0, y = y0, x1 = x0, y1 = y0, x2 = x0, y2 = y0, x3 = x0, y3 = y0, yc2 = 0, yc3 = 0, j = 0, c3 = 0, j1 = 0, g = 0, g1 = 0, ba = 0, ba1 = 0, arry = 0, z, u = 0, c, p = 0, j2, j3, l2 = 0, chapx[8], chapy[36], rastx[8], rasty[36];
	double t = 0, v0 = 10, v01 = 10, v02 = 10, v03 = 10, a = 45, a1 = 45, a2 = 45, a3 = 45;
	float fasele1 = 30, fasele2 = 30, faselrastx, faselchapy, faselchapx, faselrasty, fasele11 = 30, fasele12 = 30, fasele21 = 30, fasele22 = 30, faselrastx1, faselchapy1, faselchapx1, faselrasty1, faselrastx2, faselchapy2, faselchapx2, faselrasty2, fasele13 = 30, fasele23 = 30, faselrastx3, faselchapy3, faselchapx3, faselrasty3;

	// InitGraph();
	//LoadBMP("ANGRY.BMP");
	// delay(100);
	play();
	delay(1000);
	cleardevice();
	setcolor(15);
	settextstyle(0, 0, 5);
	outtextxy(100, 100, "Angry Birds");
	j2 = 300;
	j3 = 315;
	int j21 = 300;
	int j31 = 315;
	for (int h = 0; h < 8; h++)
	{
		j = 0;
		j1 = 0;

		for (int k = 0; k < 8 - h; k++)
		{
			chapy[arry] = j1 + j21;
			rectangle(455 + g1, j1 + j21, 470 + g1, j1 + j31);
			j1 += 20;


			arry++;

		}

		chapx[h] = 455 + g1;
		j21 += 20;
		j31 += 20;
		g1 -= 20;


		for (int k1 = 0; k1 < 8 - h; k1++)
		{
			rasty[l2] = j + j2;
			rectangle(455 + g, j + j2, 470 + g, j + j3);
			j += 20;
			l2++;

		}
		rastx[h] = 455 + g;

		j2 += 20;
		j3 += 20;
		g += 20;
	}
	setcolor(15);

	setfillstyle(1, BLUE);
	floodfill(320, 240, 15);
	line(50, 380, 100, 380);
	line(100, 430, 100, 480);
	ellipse(100, 380, 180, 0, 5, 50);
	paint(x, y, angry);
	rectangle(315, 5, 345, 35);
	paint(330, 20, 1);

	rectangle(280, 5, 310, 35);
	paint(300, 20, 2);

	rectangle(300, 40, 330, 70);
	paint(315, 55, 3);

	for (int u4 = 0; u4 < 8; u4++)
	{
		rasty[u4] = 0;
		rastx[0] = 0;
	}
	showmouse();
	int k, l = 0;

	while (1)

	{
	gt:

		int c1 = 0;
		if (kbhit())
		{
			break;
		}

		getmouse(&p, &z, &c);
		if (p > 315 && p<345 && z>5 && z < 35 && c == 1)
		{
			angry = 1;
			setcolor(BLUE);
			paint(50, 380, 2);
			paint(50, 380, 3);
			setcolor(15);
			paint(50, 380, 1);

			setfillstyle(1, BLUE);
			floodfill(320, 240, 15);
			line(100, 430, 100, 480);
			ellipse(100, 380, 180, 0, 5, 50);

		}
		if (p > 280 && p<310 && z>5 && z < 35 && c == 1)
		{
			angry = 2;
			setcolor(BLUE);
			paint(50, 380, 1);
			paint(50, 380, 3);
			setcolor(15);
			paint(50, 380, 2);
			setfillstyle(1, BLUE);
			floodfill(320, 240, 15);
			line(100, 430, 100, 480);
			ellipse(100, 380, 180, 0, 5, 50);

		}

		if (p > 300 && p<330 && z>40 && z < 70 && c == 1)
		{
			angry = 3;
			setcolor(BLUE);
			paint(50, 380, 1);
			paint(50, 380, 2);
			setcolor(15);
			paint(50, 380, 3);
			setfillstyle(1, BLUE);
			floodfill(320, 240, 15);
			line(100, 430, 100, 480);
			ellipse(100, 380, 180, 0, 5, 50);

		}

		if (p <= x0 + 10 && p >= x0 - 10 && c == 1)
		{
			getmouse(&p, &z, &c);
			showmouse();

			/*    for( k=l;k<4;k++)
				{
				setcolor(BLUE);
				l++;

				line(x+k,y+k,100,380);
				line(100,430,100,480);
				ellipse(100,380,180,0,5,50);
				if(angry==1)
				{
				paint(x,y,1);
				}
				if(angry==2)
				{
				paint(x,y,2);

				}
				if(angry==3)
				{

				paint(x+k,y+k,3);

				}
				}
				*/
			x = p;
			y = z;
			setcolor(15);

			line(x, y, 100, 380);
			line(100, 430, 100, 480);
			ellipse(100, 380, 180, 0, 5, 50);
			if (angry == 1)
			{
				paint(x, y, 1);
			}
			if (angry == 2)
			{
				paint(x, y, 2);
			}
			if (angry == 3)
			{
				paint(x, y, 3);
			}
			delay(10);

			setcolor(BLUE);

			hidemouse();
			if (angry == 1)
			{
				line(x, y, 100, 380);
				line(100, 430, 100, 480);
				ellipse(100, 380, 180, 0, 5, 50);
				paint(x, y, 1);

			}
			if (angry == 2)
			{

				line(x, y, 100, 380);
				paint(x, y, 2);
			}

			if (angry == 3)
			{

				line(x, y, 100, 380);
				paint(x, y, 3);

			}


		}

		if (x == p&&y == z&&c == 0)
		{
			for (int i = 0; i < 150; i += 1)
			{
				t = t + 0.1;
				int ly = abs(380 - z);
				int lx = abs(100 - p);
				if (z < y0)
				{
					ly = 0;
					lx = 1;
				}
				int p2, z2;
				getmouse(&p2, &z2, &c);

				if (angry == 2 && c == 1 && yc2 == 0)
				{
					v0 = v0 + 1;
					y = 4.9*t*t - (v0 + ly)*sin(a*3.14 / 180)*t + abs(z);
					x = (v0 + lx)*cos(a*3.14 / 180)*t + abs(p);
					c1 = 1;
					yc2++;
				}
				else
				{
					if (c1 == 1)
					{
						v0 = v0 + 1;
						y = 4.9*t*t - (v0 + ly)*sin(a*3.14 / 180)*t + abs(z);
						x = (v0 + lx)*cos(a*3.14 / 180)*t + abs(p);
					}
					else
					{
						y = 4.9*t*t - (v0 + ly)*sin(a*3.14 / 180)*t + abs(z);
						x = (v0 + lx)*cos(a*3.14 / 180)*t + abs(p);
					}
				}
				if (angry == 3 && c == 1 && yc3 == 0)
				{
					setcolor(BLUE);
					paint(x, y, 3);


					v01 += 0.4;
					y1 = 4.9*t*t - (v01 + ly)*sin(a1*3.14 / 180)*t + abs(z);
					x1 = (v01 + lx)*cos(a1*3.14 / 180)*t + abs(p);
					setcolor(15);
					paint(x1, y1, 3);

					v02 += 0.3;
					y2 = 4.9*t*t - (v02 + ly)*sin(a2*3.14 / 180)*t + abs(z);
					x2 = (v02 + lx)*cos(a2*3.14 / 180)*t + abs(p);
					setcolor(15);
					paint(x2, y2, 3);

					v03 += 0.2;
					y3 = 4.9*t*t - (v03 + ly)*sin(a3*3.14 / 180)*t + abs(z);
					x3 = (v03 + lx)*cos(a3*3.14 / 180)*t + abs(p);
					setcolor(15);
					paint(x3, y3, 3);

					u6 = 1;
					c3 = 1;
					yc3++;
				}
				else
				{
					if (c3 == 1)
					{

						v01 += 0.4;
						y1 = 4.9*t*t - (v01 + ly)*sin(a1*3.14 / 180)*t + abs(z);
						x1 = (v01 + lx)*cos(a1*3.14 / 180)*t + abs(p);
						setcolor(15);
						paint(x1, y1, 3);


						v02 += 0.3;
						y2 = 4.9*t*t - (v02 + ly)*sin(a2*3.14 / 180)*t + abs(z);
						x2 = (v02 + lx)*cos(a2*3.14 / 180)*t + abs(p);
						setcolor(15);
						paint(x2, y2, 3);

						v03 += 0.2;
						y3 = 4.9*t*t - (v03 + ly)*sin(a3*3.14 / 180)*t + abs(z);
						x3 = (v03 + lx)*cos(a3*3.14 / 180)*t + abs(p);
						setcolor(15);
						paint(x3, y3, 3);
						u6 = 1;
					}
					else
					{

						y = 4.9*t*t - (v0 + ly)*sin(a*3.14 / 180)*t + abs(z);
						x = (v0 + lx)*cos(a*3.14 / 180)*t + abs(p);
					}
				}

				showmouse();
				setcolor(15);
				if (angry == 1)
				{

					line(100, 430, 100, 480);
					ellipse(100, 380, 180, 0, 5, 50);
					paint(x, y, 1);
				}
				if (angry == 2)
				{
					paint(x, y, 2);
				}
				if (angry == 3)
				{
					if (u6 != 0)
					{
						paint(x1, y1, 3);
						paint(x2, y2, 3);
						paint(x3, y3, 3);
					}
					else
					{
						paint(x, y, 3);
					}
				}

				line(50, 380, 100, 380);
				line(100, 430, 100, 480);
				ellipse(100, 380, 180, 0, 5, 50);
				delay(20);

				//   hidemouse();
				paint(x0, y0, angry);
				setcolor(BLUE);


				line(50, 380, 100, 380);
				line(100, 430, 100, 480);
				ellipse(100, 380, 180, 0, 5, 50);
				if (angry == 1)
				{
					line(100, 430, 100, 480);
					ellipse(100, 380, 180, 0, 5, 50);
					paint(x, y, 1);

				}
				if (angry == 2)
				{
					paint(x, y, 2);
				}
				if (angry == 3)
				{
					if (u6 != 0)
					{
						paint(x1, y1, 3);
						paint(x2, y2, 3);
						paint(x3, y3, 3);
					}
					else
					{
						paint(x, y, 3);
					}
				}
				if (y > 500 || x > 640)
				{
					setcolor(15);
					setfillstyle(1, BLUE);
					floodfill(320, 240, 15);
					line(50, 380, 100, 380);
					line(100, 430, 100, 480);
					ellipse(100, 380, 180, 0, 5, 50);
					paint(x0, y0, angry);

					x0 = 50, h1, j = 0, j1 = 0, y0 = 380, g = 0, g1 = 0, ba = 0, ba1 = 0, arry = 0, z, u = 0, u6 = 0, c, p = 0, j2, j3, l2 = 0;
					t = 0, x = x0, y = y0, v0 = 10, v01 = 10, v02 = 10, v03 = 10, a = 45, a1 = 45, a2 = 45, a3 = 45;
					fasele1 = 30, fasele2 = 30, faselrastx, faselchapy, faselchapx, faselrasty, fasele12 = 30, fasele22 = 30, faselrastx2, faselchapy2, faselchapx2, faselrasty2, fasele13 = 30, fasele23 = 30, faselrastx3, faselchapy3, faselchapx3, faselrasty3;
					k, l = 0;
					lvl1 = 0;
					yc2 = 0, yc3 = 0, c3 = 0;
					goto gt;


				}
				//  if(x>300)
				{
					long i5, i6, ba11, ba2, ba3;
					h1 = 0;
					if (lvl >= 64)
					{
						exit(0);
					}

					for (int u = 0; u < 8; u++)

					{
						faselchapx = pow(chapx[u] - x, 2);
						faselchapx1 = pow(chapx[u] - x1, 2);
						faselchapx2 = pow(chapx[u] - x2, 2);
						faselchapx3 = pow(chapx[u] - x3, 2);

						faselrastx = pow(rastx[u] - x, 2);
						faselrastx1 = pow(rastx[u] - x1, 2);
						faselrastx2 = pow(rastx[u] - x2, 2);
						faselrastx3 = pow(rastx[u] - x3, 2);

						for (int u1 = 0; u1 <= 7 - u; u1++)
						{
							ba = 0, ba11 = 0, ba2 = 0, ba3 = 0;
							ba1 = 0;


							faselchapy = pow(chapy[h1] - y, 2);
							faselchapy1 = pow(chapy[h1] - y1, 2);
							faselchapy2 = pow(chapy[h1] - y2, 2);
							faselchapy3 = pow(chapy[h1] - y3, 2);
							i5 = faselchapx + faselchapy;
							if (u6 != 1)
							{
								fasele1 = sqrt(i5);

							}
							fasele11 = sqrt(faselchapx1 + faselchapy1);
							fasele12 = sqrt(faselchapx2 + faselchapy2);
							fasele13 = sqrt(faselchapx3 + faselchapy3);



							faselrasty = pow(rasty[h1] - y, 2);
							faselrasty1 = pow(rasty[h1] - y1, 2);
							faselrasty2 = pow(rasty[h1] - y2, 2);
							faselrasty3 = pow(rasty[h1] - y3, 2);
							i6 = faselrastx + faselrasty;
							if (u6 != 1)
							{
								fasele2 = sqrt(i6);
							}
							fasele21 = sqrt(faselrastx1 + faselrasty1);
							fasele22 = sqrt(faselrastx2 + faselrasty2);
							fasele23 = sqrt(faselrastx3 + faselrasty3);

							setfillstyle(1, BLUE);
							if (u6 == 1)
							{

								if (fasele11 <= 15 && fasele11 >= 1)
								{

									bay11 = chapy[h1];
									bax11 = chapx[u];
									bar(bax11, bay11, bax11 + 15, bay11 + 15);
									chapy[h1] = 0;
									ba11 = 1;
									a1 = 0;
								}

								if (fasele12 <= 15 && fasele12 >= 1)
								{

									bay2 = chapy[h1];
									bax2 = chapx[u];
									bar(bax2, bay2, bax2 + 15, bay2 + 15);
									chapy[h1] = 0;
									ba2 = 1;
									a2 = 0;
								}


								if (fasele13 <= 15 && fasele13 >= 1)
								{

									bay3 = chapy[h1];
									bax3 = chapx[u];
									bar(bax3, bay3, bax3 + 15, bay3 + 15);
									chapy[h1] = 0;
									a3 = 0;
									ba3 = 1;
								}

								if (fasele21 <= 15 && fasele21 >= 1)
								{

									bay21 = rasty[h1];
									bax21 = rastx[u];
									bar(bax21, bay21, bax21 + 15, bay21 + 15);
									rasty[h1] = 0;
									a1 = 0;
									ba = 1;
									break;

								}

								if (fasele22 <= 15 && fasele22 >= 1)
								{

									bay22 = rasty[h1];
									bax22 = rastx[u];
									bar(bax22, bay22, bax22 + 15, bay22 + 15);
									rasty[h1] = 0;
									a2 = 0;
									ba2 = 1;
									break;
								}
								if (fasele23 <= 15 && fasele23 >= 1)
								{

									bay23 = rasty[h1];
									bax23 = rastx[u];
									bar(bax23, bay23, bax23 + 15, bay23 + 15);
									rasty[h1] = 0;
									a3 = 0;
									ba3 = 1;
									break;
								}

							}



							if (fasele1 <= 15 && fasele1 >= 1)
							{

								bay = chapy[h1];
								bax = chapx[u];

								ba = 1;

								if (angry == 1)
								{
									a = 0;
									lvl++;
								}
								if (angry == 2)
								{
									lvl++;
									lvl1++;
									if (lvl1 >= 2) a = 0;

								}
								if (angry == 3)
								{
									a = 0;
									lvl++;

								}

							}   //fasel1
							if (fasele2 <= 15 && fasele2 >= 1)
							{
								bay1 = rasty[h1];
								bax1 = rastx[u];

								ba1 = 1;

								if (angry == 1)
								{
									a = 0;
									lvl++;
								}
								if (angry == 2)
								{
									lvl++;
									lvl1++;
									if (lvl1 >= 2) a = 0;

								}
								if (angry == 3)
								{
									a = 0;
									lvl++;

								}


							} //fasel2


							if (ba == 1)
							{

								setfillstyle(1, BLUE);
								bar(bax, bay, bax + 15, bay + 15);
								chapy[h1] = 0;

								break;
							}
							if (ba1 == 1)
							{

								setfillstyle(1, BLUE);

								bar(bax1, bay1, bax1 + 15, bay1 + 15);
								rasty[h1] = 0;
								break;
							}
							h1++;
						}



					}




				}
			}
		}

	} //While

	getch();



}
