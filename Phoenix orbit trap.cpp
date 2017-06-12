    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    main()
{
      initwindow(1335,680,"IMAGE 1",0,0);
      float cx,cy,z1x=0,z1y=0,zdum1,zdum2,znxt=0,zprex,zprey;
      int k;
      for(int i=1;i<1350;i++)
      {
      for(int j=1;j<680;j++)
      {
           cy=j*.0055-1.8812;
           cx=i*-0.0043+2.802;
           z1x=cx;z1y=cy;
           zprex=0;zprey=0;
           znxt=sqrt(pow(z1x,2)+pow(z1y,2));
           for(k=1;(k<100&&znxt<3);k++)
            {
                zdum1=pow(z1x,2)-pow(z1y,2)+0.50-0.38*zprex;
                zdum2=2*z1x*z1y-0.38*zprey;
               
                zprex=z1x;
                zprey=z1y;
                z1x=zdum1;
                z1y=zdum2;
                
                znxt=sqrt(pow(z1x,2)+pow(z1y,2));
                //cout<<znxt;
                
            }
           
           
          /* if(k<5) 
           {putpixel(i,j,COLOR(180-k*10,20,10));}             
           else if(k<15) 
           {putpixel(i,j,COLOR(10,180-k*20,20));}
           else */if(k<85)
           {putpixel(i,j,COLOR(z1x+z1y,z1y/z1x,z1y-z1x));}
           else
           putpixel(i,j,COLOR(85,80,k*2.5));
           
      }
      }
      writeimagefile("Black&White.jpeg",0,0,1335,680);

     getch();
      
}
