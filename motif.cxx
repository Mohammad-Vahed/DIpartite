/*
 * new1.cxx
 * 
 * Copyright 2016 mohammad <mohammad@ht04>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <vector>
#include <stdlib.h>



using namespace std;

class Computer {
		//Class stuff will go in here
		public:
		
		
		void read(){
			ifstream inFile;
			
		
           
    
			
			bool f,f1,f2,f3,f4,f5,f6,f7,f8;
			f=f1=f2=f3=f4=f5=f6=f7=f8=false;
			
			string g1,md1,p1,lm1,rm1,ming1,maxg1,t1;
			string output,address3;
		    output="/home/mohammad/Documents/test.txt";
		    
		cout<<"Hello\n";
		cout<<"Please input data:";
		t1="30";
		p1="1";
		md1="1";
		g1="2";
		lm1="6";
		rm1="6";
		ming1="0";
		maxg1="0";
		getline(cin,input);
		//getline(cin,input);
			
		x=input.length();

		input=input+' ';
		
		
		
		i=0;
		j=0;
		while(i <= x){
			
			
				
			if((input[i]=='-')&&(input[i+1]=='f')){
				i+=3;
				while (input[i] != ' ') {
				g1[j]=input[i];
				j++;
				i++;}}
				
			
			j=0;	
			if((input[i]=='-')&&(input[i+1]=='n')){
				i+=3;
				while (input[i] != ' ') {
				md1[j]=input[i];
				j++;
				i++;}}
				
			
			j=0;	
			if((input[i]=='-')&&(input[i+1]=='p')){
				i+=3;
				while (input[i] != ' ') {
				p1[j]=input[i];
				j++;
				i++;}}

			j=0;	
			if((input[i]=='-')&&(input[i+1]=='m')){
				i+=3;
				while (input[i] != ' ') {
				lm1[j]=input[i];
				j++;
				i++;}}
			j=0;	
			if((input[i]=='-')&&(input[i+1]=='M')){
				i+=3;
				while (input[i] != ' ') {
				rm1[j]=input[i];
				j++;
				i++;}}
			j=0;	
			if((input[i]=='-')&&(input[i+1]=='g')){
				i+=3;
				while (input[i] != ' ') {
				ming1[j]=input[i];
				j++;
				i++;}}
			j=0;	
			if((input[i]=='-')&&(input[i+1]=='G')){
				i+=3;
				while (input[i] != ' ') {
				maxg1[j]=input[i];
				j++;
				i++;}}
			j=0;	
			if((input[i]=='-')&&(input[i+1]=='t')){
				t1="1";
				i+=3;
				while (input[i] != ' ') {
				t1[j]=input[i];
				j++;
				i++;}}
				j=0;	
			if((input[i]=='-')&&(input[i+1]=='o')){
				output=" ";
				i+=3;
				while ((input[i] != ' ')&&((input[i+1] != '-')||(input[i+1] != ' '))) {
				output[j]=input[i];
				j++;
				i++;}}
				j=0;
			if((input[i]=='-')&&(input[i+1]=='i')){
				i+=3;
				while ((input[i] != ' ')&&((input[i+1] != '-')||(input[i+1] != ' '))) {
				address3[j]=input[i];
				j++;
				i++;}
				}
				
			
		
		else
		i++;
	}
	
	g=atoi(g1.c_str());
	p=atoi(p1.c_str());
	md=atoi(md1.c_str());
	lml=atoi(lm1.c_str());
	rml=atoi(rm1.c_str());
	ming=atoi(ming1.c_str());
	maxg=atoi(maxg1.c_str());
	tf=atoi(t1.c_str());
	
	
	cout<<"\n";
		
		while(f==false){
			
		if(g==1 || g==2) 
	      f=true;
	     else
	      {cout<<"\n Please input just number 1 (Text file) or 2 (Fasta file) for type of input file:"; 
		   cin>>g;}
	    }
	    
	    
	    while(f7==false){
		cout << "\n";
		myfile4.open(address3.c_str() , ios::out | ios::app | ios::binary);
		 if(!myfile4.is_open()){
                cout << "\n ERROR Your Dtat Is Not Correct.\n";
                cout<<"\n Please enter a your data file address:";
		        getline(cin,address3);}
         else
           f7=true;
	   }       
		
		
		while(f6==false){
		//cout<<"\n Please enter your method, for Mono-Nucleotide enter number 1 and Di-Nucleotide enter number 2:";
		//cin>>md;
		if(md==1 || md==2) 
	      f6=true;
	     else
	      {cout<<"\n Please input just number 1 (Mono-Nucleotide) or 2 (Di-Nucleotide) for analysis method:"; 
	      cin>>md;}
	    }
	  
		while(f5==false){
	  //  cout<<"\n Please choose read pattern (For just Positive direction input 1 and Positive and Negative direction input 2):";
	  //    cin>>p;
	     if(p==1 || p==2) 
	      f5=true;
	     else
	      {cout<<"\n Please input just number 1 (Positive direction) or 2 (Positive and Negative direction) for pattern:"; 
	      cin>>p;}
	     }
       
        while(f1==false){    
		//cout<<"\n Please enter Length of left motif:";
        //    cin>>lml;
            if(lml>0 && lml<=25)
             f1=true;
            else
             {cout<<"\n Please enter length of left motif between 1 ~ 25:";
             cin>>lml;}
		 }
		
		while(f2==false){ 
       // cout<<"\n Please enter Length of right motif:";   
       //     cin>>rml;
            if(rml>=0 && rml<=25)
             f2=true;
            else
            { cout<<"\n Please enter length of right motif between 0 ~ 24:";
             cin>>rml;}
		 }
		
		if(rml>0){ 
		while(f3==false){ 
       //  cout<<"\n Please enter minimum Length of Gap between two motif blocks:";    
       //     cin>>ming;
           if(ming>=0 && ming<=25)
             f3=true;
            else
            { cout<<"\n Please enter minimum Length of Gap between 0 ~ 25:";
             cin>>ming;
             }
		 }
	 }
		while(f4==false){  
       // cout<<"\n Please enter maximum Length of Gap between two motif blocks:";    
       //     cin>>maxg;
           if(maxg>=0 && maxg<=25)
             f4=true;
            else
            {
             cout<<"\n Please enter maximum Length of Gap between 0 ~ 25:";
             cin>>maxg;
             
             }
		 }
		 
		 while(f4==false){  
       
           if(tf>=0 && tf<=100)
             f4=true;
            else
            {
		 cout<<"\n Please enter number of time trying to find motif(Maximum trying is 100):";    
           cin>>tf;
		 }}
		 
		 cout<<"\n\t\t\t Please waiting...\n";
		 
		 //o="/home/mohammad/Documents/test1.txt";
		 
		 
		 	student=freopen(output.c_str(), "w",stdout);
			if( student == NULL)
          {
             printf("Can't reopen textfile1.txt\n");
        
           }
		}
		

            
          
		
	
		
		
		void output_information()
		{
			
			cout<<"\n-----------------------------------------------\n";
			
			lms=lml+rml;
			
			if(md==1){
			nu=4;
			lm=lms;}
			else if (md==2){
			nu=16;	
			lm=lms-1;}
			x=1;
			a=0;
			l=0;
			l2=20;
			z=0;
			b=0;
			initial=1;
			r=0;
			ns=0;
			nmax=30;
			min=0;
			if(md==1){
			da[0]="A"; da[1]="C"; da[2]="G"; da[3]="T";
		    }
		    else if (md==2){
			da[0]="AA"; da[1]="AC"; da[2]="AG"; da[3]="AT"; da[4]="CA"; da[5]="CC"; da[6]="CG"; da[7]="CT";
			da[8]="GA"; da[9]="GC"; da[10]="GG"; da[11]="GT"; da[12]="TA"; da[13]="TC"; da[14]="TG"; da[15]="TT";
		    }
			
			
				}
		
		
		void textmining()
		{
			
			
                 if(!myfile4.is_open()){
                cout << "\n ERROR Your Dtat Is Not Correct.\n";
        }
        else
        {
			i1=0;
			i=0;
			j=0;
			flag=false;
                while((myfile4 >> noskipws >> ch ) && (!myfile4.eof())) {
									
					 if (ch!='\n'){				
					 cout << ch ;
					 if(j<100 and i<2000){
					 str4[i][j]=(ch);
                     j++;}
                    }
                     else{
						 if(g==2){
						lenstr2[i1]=j; 
						cout<<'\t'<<lenstr2[i1];
						sum=sum+lenstr2[i1];
						i1++;
						}
						else if(g==1){
					    if(flag==true){
						lenstr2[i1]=j; 
						cout<<'\t'<<lenstr2[i1];
						sum=sum+lenstr2[i1];
						i1++;
						}
					}
					 str4[i][j]='\n';	 
                     flag= !flag;
                     j=0;
                     i++;
				     cout<<'\n';
				     k=0;
				     
				      }
				 
              }
              myfile4.close();
		  }
		  
		  if(g==1)
		   max=i/2;
		  else
			 max=i;
			 
		 
		  i1=0;
		  if(g==1){
		  for(j=1 ; j<(max*2) ; j+=2){
			  flag=true;
			  x=0;
				 ns++;
		      for(k=0 ; k<lenstr2[i1] ; k++) {
		        str2[i1][k]=str4[j][k];
				 if (((str2[i1][k]=='A')||(str2[i1][k]=='C')||(str2[i1][k]=='G')||(str2[i1][k]=='T'))){
					 x++;
				 if(flag==true){
				 sigb[i1][0]=k;
				 flag=false;}
			 		 }	
				 }
				 sigb[i1][1]=x;
		        i1++;
		       }
		       }
		       else if(g==2){
		       for(j=0 ; j<max ; j++){
			  flag=true;
			  x=0;
				 ns++;
		      for(k=0 ; k<lenstr2[i1] ; k++) {
		        str2[i1][k]=str4[j][k];
				 if (((str2[i1][k]=='A')||(str2[i1][k]=='C')||(str2[i1][k]=='G')||(str2[i1][k]=='T'))){
					 x++;
				 if(flag==true){
				 sigb[i1][0]=k;
				 flag=false;}
			 		 }	
				 }
				 sigb[i1][1]=x;
		        i1++;
		       }}
		
		
		for(i=0 ; i<ns ; i++){
		
	         for(k=0 ; k<lenstr2[i] ; k++)
	         {
				str2[i][k]=toupper(str2[i][k]);
	    
	         
		 }
	      
		 }
		  sum=0;
		  g=0;
                printf("\n--------------------------------------------------------------------\n");
                }	
		//--------------------------------------------------------------	
         void reverse(){
			 for(i=0 ; i<max ; i++){
				k=0;
				for(j=lenstr2[i]-1 ; j>=0 ; j--){
				 if(str2[i][j]=='A')
				 str3[i][k]='T';
				 else
				 if(str2[i][j]=='C')
				 str3[i][k]='G';
				 else
				 if(str2[i][j]=='G')
				 str3[i][k]='C';
				 else
				 if(str2[i][j]=='T')
				 str3[i][k]='A';
				 
				 k++;
		}
	}
	 
	 
		 } 
	    //--------------------------------------------------------------  	     
	     void selectrandom()
	     {
			 
			 srand((unsigned)time(NULL)*(r+x+1));
			 			 		 
			   for(i=0 ; i<max ; i++)
			     rndnuml[i][r]=(rand() % (maxg+lm));
									 
			   for(i=0 ; i<max ; i++){
				   j=rndnuml[i][r]+maxg+lml;
				   k=rndnuml[i][r]+ming+lml;
			       rndnumr[i][r]=(rand() % (j-k+1))+k;
			     
			     
		  }
		  
		 
			
		 }
		 
		 //-------------------------------------------------------------
		
		 void startlocation()
		  {
			
			  for(j=0 ; j<max ; j++){
			  k=0;
			  rnd=rndnuml[j][r];
			  for(i=rnd ; i<rnd+lml ; i++){
				   ran1[j][k]=str2[j][i];
			    	  k++;
		        }
		       
		        rnd=rndnumr[j][r];
			  for(i=rnd ; i<rnd+rml ; i++){
				   ran1[j][k]=str2[j][i];
			    	  k++;
		        }
			  
		  }
		
				 count_nucleotide(ran1);
			
		  }
		  
		  
		 //-------------------------------------------------------------
		 void count_nucleotide(char test1[1000][50]){
		 
		 	
			
			for(i=0 ; i<nu ; i++){
				for(j=0 ; j<(lm) ; j++)
				freq[i][j]=0;
				}
												
					for(j=0 ; j<lm ; j++){
						for(i=0 ; i<max ; i++){
						subnuc=test1[i][j];
						
						if (md==2)
						subnuc+=test1[i][j+1];
						
						for(k=0 ; k<nu ; k++)
				           if (da[k]==subnuc)
				          freq[k][j]=freq[k][j]+1;
				        
				    } 
			      }
			   } 
	 
	 
	 //-----------------------------------------------------------------
	 
	 void PPM(){
		
		 sum=0;
		 for(i=0 ; i<lm ; i++){
		
			    for(j=0 ; j<lm ; j++){
					freq1[i][j]=(float(freq[i][j])/(max+1));
					sum=sum+freq1[i][j];
			
			   }
			
					 
		 }
	
	 }
	 
	 //-----------------------------------------------------------------
	     
	 
		 void selectseq()
		 {
			
		
				
		
		 for(j=0 ; j<max ; j++){
			  k=0;
			  rnd=rndnuml[j][r];
			  for(i=rnd ; i<rnd+lml ; i++){
				   ran1[j][k]=str2[j][i];
			    	  k++;
		        }
		        
		        rnd=rndnumr[j][r];
			  for(i=rnd ; i<rnd+rml ; i++){
				   ran1[j][k]=str2[j][i];
			    	  k++;
		        }
			  
		  }
		  
			 
			 for(i=0 ; i<max ; i++){
				 for(j=0 ; j<lms ; j++)
					 if(selseq != i)
					 seq1[i][j]=ran1[i][j];		 
					 else
					 seq1[i][j]='*';
				 }
		//		 cout<<"\n------------------------------------------------------\n";
			
			for(j=0 ; j<max ; j++){
			  k=0;
			  rnd=rndnuml[j][r];
			  for(i=rnd ; i<rnd+lml ; i++){
				   ran1[j][k]=str3[j][i];
			    	  k++;
		        }
		        
		        rnd=rndnumr[j][r];
			  for(i=rnd ; i<rnd+rml ; i++){
				   ran1[j][k]=str3[j][i];
			    	  k++;
		        }
			  
		  }
		  
			 
			 for(i=0 ; i<max ; i++){
				 for(j=0 ; j<lms ; j++)
					 if(selseq != i)
					 seq5[i][j]=ran1[i][j];		 
					 else
					 seq5[i][j]='*';
				 }	 
				
		
		
	
	}
		//--------------------------------------------------------------------------------
		void Background_count(){
		int sum=0;
		int sum2=0;
		
		
	    count_nucleotide(seq1);
	
			
			for(i=0 ; i<nu ; i++)
			   BG[i]=0; 
			    
			for(i=0 ; i<max ; i++){
			     if(i!=selseq)
			     for(j=0 ; j<lenstr2[i]-1 ; j++){
					 for(k=0 ; k<nu ; k++){	
						 if(rml==0){
						 if (j<rndnuml[i][r]-1 || (j>(rndnuml[i][r]+rml-1))){
							subnuc=str2[i][j];
							
							  if(md==2)
						      subnuc+=str2[i][j+1]; 
						      
			               if(subnuc==da[k])
			                  BG[k]++;}
			                 }
			                  else
			              	 {       
						 if (j<rndnuml[i][r]-1 || ((j>(rndnuml[i][r]+lml-1)) && (j<rndnumr[i][r]-1)) || (j>(rndnumr[i][r]+rml-1))){
							subnuc=str2[i][j];
							
							if(md==2)
						    subnuc+=str2[i][j+1]; 
						    
			               if(subnuc==da[k])
			                  BG[k]++;} 
			            }
					}
			            }
			            
			         }
			
			 
	
			
			for(i=0 ; i<nu ; i++)
			   BG2[i]=0; 
			    
			for(i=0 ; i<max ; i++){
			     if(i!=selseq)
			     for(j=0 ; j<lenstr2[i]-1 ; j++){
					 for(k=0 ; k<nu ; k++){	
						 if(rml==0){
						 if (j<rndnuml[i][r]-1 || (j>(rndnuml[i][r]+rml-1))){
							subnuc=str3[i][j];
							
							if(md==2)
						    subnuc+=str2[i][j+1];
						     
			               if(subnuc==da[k])
			                  BG2[k]++;}
			                 }
			                  else
			              	 {       
						 if (j<rndnuml[i][r]-1 || ((j>(rndnuml[i][r]+lml-1)) && (j<rndnumr[i][r]-1)) || (j>(rndnumr[i][r]+rml-1))){
					
							subnuc=str3[i][j];
							
							if(md==2)
						    subnuc+=str2[i][j+1]; 
						    
			               if(subnuc==da[k])
			                  BG2[k]++;} 
			            }
					}
			            }
			            
			         }
		
				  for(i=0 ; i<nu ; i++){
		
		            sum=sum+BG[i];
		            sum2=sum2+BG2[i];
		
				} 
				
		//		cout<<"\nprint LIKELIHOOD: ((MatrixPFM[i]+0.25 )/ (total number of colum+1))\n";
				for(i=0 ; i<nu ; i++){
		//			  cout<<da[i]<<" ";
		          if(md==1){
					  BG[i]=(BG[i]+0.25)/sum;
					  BG2[i]=(BG2[i]+0.25)/sum2;
				  }
				  else if(md==2){
					  BG[i]=(BG[i]+0.0625)/sum;
					  BG2[i]=(BG2[i]+0.0625)/sum2;
				  }
		//			 printf("%.3f ", BG[i]);
				      for(j=0 ; j<(lm) ; j++){
						if(md==1)  
			               freq1[i][j]=(float((freq[i][j])+0.25)/max);
			             else if(md==2)
			               freq1[i][j]=(float((freq[i][j])+0.0625)/max);
			         
		//		          printf("%.2f  ",freq1[i][j]);
					  }}
					  count_nucleotide(seq5);
					  for(i=0 ; i<nu ; i++)
					    for(j=0 ; j<(lm) ; j++){
						   if(md==1)  
			                  freq2[i][j]=(float((freq[i][j])+0.25)/max);
			               else if(md==2)
			                  freq2[i][j]=(float((freq[i][j])+0.0625)/max);
		//		      cout<<"\n";
				  }
		}		  
	
	//--------------------------------------------------------------
	void choosemethod(){
	
	  
		
	}
	
	//--------------------------------------------------------------
		  void subseqlength3(){
			  
		//  cout<<"\n"<<"--------------------subsequence--------------------------\n"; 
		  
		  a=0;
		  
		    for(i=ming ; i<=maxg; i++){
			    for(l=0 ; l<(lenstr2[z]-lms-i) ; l++){
					k=0;
					for(j=0 ; j<lms ; j++)
					 {
						 if(j<lml)
						 {
					      seq2[a][j]  =str2[z][l+j];
					 
					     }
				          else
				         {
					     seq2[a][j]  =str2[z][l+j+i];

				     }
				     }
				     positionl[a][0]=l; 
				     positionr[a][0]=l+lml+i;
					 
			         a++;
			        } 
				}
				
				
			 	 for(i=a ; i<1000 ; i++)
			 	   for(j=0 ; j<lms ; j++) 
			 	     seq2[i][j]='\0';
			      
	
			 }
		
		//--------------------------------------------------------------
		
		void score(){
						
					 
			 sum=0;
			 
		   
			 for(i=min ; i<a ; i++){
				 score1[i]=0;
				 div=0;
			    for(j=0 ; j<(lm) ; j++){
					subnuc=seq2[i][j];
					
					if(md==2)
					subnuc+=seq2[i][j+1];
					
					for(k=0 ; k<nu ; k++)
					 
					if (subnuc==da[k]){
			//		   printf("Log%.2f ",freq1[k][j]);
					    div=div+log(BG[k]);
					    score1[i]=score1[i]+log(freq1[k][j]);
					   }
				
					}
					score1[i]=score1[i]/div;
		//			cout<<"="<<score1[i]<<" number:"<<i<<"\n";
					sum=sum+score1[i];
					
					}
				
				maxscor[0]=score1[0];
				for(i=min ; i<a ; i++){
				 if(maxscor[0]>score1[i]){
				     maxscor[0]=score1[i];
				     k=i;
				 }
				 
			 }
	//			cout<<"\nMaximume Value Number:"<<score1[k]<<"\n";
				rndnuml[z][r]=positionl[k][0];
				rndnumr[z][r]=positionr[k][0];
				state[z][r]='P';
		
					
					  
	 
//	cout<<"\n-------------------Random Number between 0.000 until 1.000--------------------\n";		            	
			 }
			 
			 //--------------------------------------------------------------
		 void selectreverseseq()
		 {
			
		
					
		a=0;
		  
		   for(i=ming ; i<=maxg; i++){
			    for(l=0 ; l<(lenstr2[z]-lms-i) ; l++){
					k=0;
					for(j=0 ; j<lms ; j++)
					 
						 if(j<lml)
						 {
					      seq4[a][j]  =str3[z][l+j];
					 }
				          else
				         {
					     seq4[a][j]  =str3[z][l+j+i];

				     }
				     
				     positionl[a][1]=l; 
				     positionr[a][1]=l+lml+i;
					 
			         a++;
			         
				}
			 }
			 	 
			 	 for(i=a ; i<1000 ; i++)
			 	   for(j=0 ; j<lms ; j++) 
			 	     seq4[i][j]='\0';
			      
			
	       }
	
		//--------------------------------------------------------------
			 
			 //---------------------------------------------------------
			 void score2twoway(){
						
		
		   
			 for(i=min ; i<a ; i++){
				 score2[i][0]=0;
				 score2[i][1]=0;
				 div1[0]=0;
				 div1[1]=0;
			    for(j=0 ; j<lm ; j++){
					subnuc=seq2[i][j];
					subnuc1=seq4[i][j];
					
					if(md==2){
					subnuc+=seq2[i][j+1];
					subnuc1+=seq4[i][j+1];}
					
					for(k=0 ; k<nu ; k++){
					 
					if (subnuc==da[k]){
					 // printf("Log%.2f ",freq1[k][j]);
					    div1[0]=div1[0]+log(BG[k]);
					    score2[i][0]=score2[i][0]+log(freq1[k][j]);
					   }
				   if (subnuc1==da[k]){
				//	   printf("Log%.2f ",freq1[k][j]);
					    div1[1]=div1[1]+log(BG2[k]);
					    score2[i][1]=score2[i][1]+log(freq2[k][j]);
					   }
				   
				   
				   }
				
					}
					score2[i][0]=score2[i][0]/div1[0];
					score2[i][1]=score2[i][1]/div1[1];
					
					}
				
				maxscor[0]=score2[0][0];
				for(i=min ; i<a ; i++)
				 if(maxscor[0]>score2[i][0]){
				     maxscor[0]=score2[i][0];
				     k1=i;
				 }
				 maxsum[k1][0]=maxscor[0];
				 
				 maxscor[1]=score2[0][1];
				for(i=min ; i<a ; i++)
				 if(maxscor[1]>score2[i][1]){
				     maxscor[1]=score2[i][1];
				     k2=i;
				 }
				 maxsum[k1][1]=maxscor[1];
				 
			
				rndnuml[z][r]=positionl[k1][0];
				rndnumr[z][r]=positionr[k1][0];
				state[z][r]='P';
			
				rndnuml2[z][r]=positionl[k2][1];
				rndnumr2[z][r]=positionr[k2][1];
				state2[z][r]='N';
			
		}
			 
			 //---------------------------------------------------------
			 
			 void randomgenerate(){
				 
				int RND_MAX=1000;
				srand((unsigned)time(NULL)*(sum+r));
				sum=(rand() % (RND_MAX));
			    rndsel=sum/RND_MAX;
			 }
		
			 
	//--------------------------------------------------------------------		 
			void randomly(){ 
			
			
			for(j=0 ; j<150 ; j++)	
			score1[j]=0;	
					 						
			
			  
			  for(j=min ; j<a ; j++){
				  
			  if (rndsel > score1[j] and rndsel <= score1[j+1] )
			  score1[j]++;
			  
			  if(rndsel==0)
			  score1[0]++;
			  
			  }
			
			  maxscor[0]=score1[0];
			  for(j=min ; j<a ; j++){
			  
			   if(maxscor[0]<score1[j]){
						     maxscor[0]=score1[j];
						     rndnuml[z][r]=positionl[j+1][0];
						     rndnumr[z][r]=positionr[j+1][0];
						     k=j+1;
						     }
						     }
			
					}	
						
		//--------------------------------------------------------------
		
		void PFM(){
			
			
			 for(j=0 ; j<max ; j++){
			 
			 k=0;
			 
			 for(i=rndnuml[j][r] ; i<rndnuml[j][r]+lml ; i++){
				 if(state[j][r]=='P')
				 seq1[j][k]=str2[j][i];
				 else if(state[j][r]=='N')
				 seq1[j][k]=str3[j][i];
		      	     k++;
		        	     }
		       for(i=rndnumr[j][r] ; i<rndnumr[j][r]+rml ; i++){
				if(state[j][r]=='P')
				 seq1[j][k]=str2[j][i];
				 else if(state[j][r]=='N')
				 seq1[j][k]=str3[j][i];
		      	     k++;
		        	     } 	
		        	        }
		        	     
			
		
		count_nucleotide(seq1);
			
			
		//		cout<<"\nprint LIKELIHOOD: ((MatrixPFM[i]+0.0625 )/ (total number of colum+1))\n";
				for(i=0 ; i<nu ; i++){
		//			  cout<<da[i]<<"\t";
					     for(j=0 ; j<(lm) ; j++){
							 if(md==1)
			                   freq1[i][j]=(float((freq[i][j])+0.25)/(max+1));
			                 else if (md==2)
			                   freq1[i][j]=(float((freq[i][j])+0.0625)/(max+1));
		
					  }
		
				      }
			 
			 
			
		//		cout<<"\nEntropy for each colum: -[i(1..n) Px*log(Px)]:\n";
				for(i=0 ; i<(lm) ; i++){
					entropy[i]=0;
				   for(j=0 ; j<nu ; j++)
				     
				      entropy[i]=entropy[i]+(freq1[j][i]*log2(freq1[j][i]));
				    				     
				      entropy[i]=entropy[i]*(-1);
	//		      printf("%.4f  ", entropy[i]);
				     		   
			   }
			   
			   entropytotal[r][0]=0;
			   for(i=0 ; i<(lm) ; i++){
				entropytotal[r][0]=entropytotal[r][0]+entropy[i];
			}
				
		    	
				
			
			
		}	     
		//--------------------------------------------------------------
			void step1(){
	
		selseq=z;
		selectseq();
		Background_count();
		subseqlength3(); 
		
		if(p==1){		
		score();
	    }
	    else if (p==2)	{
	    selectreverseseq();	
	    score2twoway();
        }	
		
		initial=z;
		
		}	 
			  
		//--------------------------------------------------------------
		void step2(){
		z=0;
		while(z<max){
			
			step1();
			z++;
			
		}
		
		for (i=0 ; i<max ; i++)
		  if(maxsum[i][0]>maxsum[i][1]){
		  rndnuml[i][r]=rndnuml2[i][r];
		  rndnumr[i][r]=rndnumr2[i][r];
		  state[i][r]='N';
		  	  }
		 
		PFM();
		
		  
						    
		}	
		//--------------------------------------------------------------
		
		
		void step11(){
			//cout<<"\n********************************************************************************";
			float f1,f2,f0;
			f2=0;
			
			int x2=0;
			//float check[200];
			temp_e[0]=0;
			temp_e[1]=0;
			
			
			while((bb==false)&&(temp_e[1]<15)){
			
			step2();
			f1=entropytotal[r][0];
			f0=abs(f1-f2);
			if ((f0 < 0.00000001)){
				bb=true;
				
				testi[r]=f1;
				
				x2++;
				
			}
			else
			{
				
				x2=temp_e[1];
				
				temp_e[1]++;
				
				f2=f1;
			}
		}	
		if(temp_e[1]>=10){
			testi[r]=f1;
			bb=true;
			
		}
		      
    		x=0;		
		}
		//--------------------------------------------------------------	
		void step21(){
			
			for(i1=0 ; i1<tf ; i1++){
		//cout<<"\n----------------------------------------------------------------------\n";	
		
		bb=false;
		
	    step11();
	    
	        r++;
	        b=1;
	    	selectrandom();
	    	
	        
              }	
              
                 
             cout<<"\n-----------------------------------------\n";
			
		  		 
	
		
		sum=testi[0];
		l=0;
		cout<<"\nEntropy is :\n";
		for(i=0 ; i<tf ; i++){	
			 printf("%4f \t",testi[i]);
		     if(testi[i]<sum){
		  sum=testi[i];
		  l=i;
		  }
		  cout<<"\n";
		}
          cout<<"minentropy["<<l<<"]: "<<sum;          
		  
		  cout<<"\n-----------------------------------------\n";
		  
		   
                 
              	
		cout<<"\n"<<"Start position of left motif:"<<"\t"<<"Start position of right motif:"<<"\n";
		  
		  
			for(i=0 ; i<max ; i++){
			  initialmotif[i][0]=rndnuml[i][l];
			  initialmotif[i][1]=rndnumr[i][l];
			  cout<<initialmotif[i][0]<<" \t\t\t\t "<<initialmotif[i][1];
			  state[i][0]=state[i][l];
			  cout<<"\n";
		  }
		   cout<<"\n";
		  
		  for(i=0 ; i<max ; i++){
			k=0;
		     for(j=initialmotif[i][0] ; j<initialmotif[i][0]+lml ; j++){
		          if(state[i][0]=='P')
		          finalmotif[i][k]=str2[i][j];
		          else
		          finalmotif[i][k]=str3[i][j];
		          k++;
			  }
			  for(j=initialmotif[i][1] ; j<initialmotif[i][1]+rml ; j++){
		         if(state[i][0]=='P')
		          finalmotif[i][k]=str2[i][j];
		          else
		          finalmotif[i][k]=str3[i][j];
		          k++;
			  }
		  }
		  
		  for(i=0 ; i<max ; i++){
				cout<<">"<<i+1<<"\t"<<"Direction: "<<state[i][0];
				cout<<"\n";
			   for(j=0 ; j<lms ; j++)
			        printf("%c",finalmotif[i][j]);
			        cout<<"\n";
		} 
			
			
		 cout<<"\n***********************************************\n";
				 
				 
				
				count_nucleotide(finalmotif); 
				
				cout<<"\n Nucleotide count of select Position Frequency Matrix(PFM):\n\n  ";
				for(i=0 ; i<lm ; i++){
				 if (i<=9)
				   cout<<"     ("<<i+1<<")";
				 else
				   cout<<"    ("<<i+1<<")";}
				
				cout<<"\n";
				
				  for(i=0 ; i<nu ; i++){
					  cout<<da[i]<<"\t";
				      for(j=0 ; j<(lm) ; j++)
				          cout<<freq[i][j]<<"\t";
				      cout<<"\n";
				}
		
		
		 
	}
		
		
		
		 
                //std::vector<int> lenstr2;
                
		        char ch,str2[1000][100],str3[1000][100],str4[2000][100],state[1000][100],state2[1000][100];
	            int i , i1,j,k1,k2,k,l,l2,md,nu,lms,tf,p,rnd,rnd1,rnd2,rnd3,nmax,min,max,ming,maxg,x,A,B,C,D,a,b,r,ns,g,z,lml,rml,lm;
	            int selseq,initial,lenstr2[1000],freq[16][50],rndnuml[1000][100],rndnumr[1000][100],rndnuml2[1000][100],rndnumr2[1000][100],initialmotif[1000][2],sigb[1000][2];
	            int temp_e[1000],positionl[1000][2],positionr[1000][2];
	            float freq1[16][50],freq2[4][50],score1[1000],score2[1000][2];
	            float BG[16],BG2[16],entropytotal[100][2],entropy[50],minentropy[100],testi[100];
	            float pe[374][30],rndsel,sum,sum2,sum3,t,div,div1[2],maxscor[2],maxsum[500][2];
	            string subnuc,subnuc1,address,input;
	            bool flag,bb;
                char line,finalmotif[1000][50],strmotif[1000][50],seq1[1000][50],seq5[1000][50],seq2[1000][50],seq4[1000][50],ran1[1000][50];
                string da[16];
                string seq,temp,temp2,temp3;
                ifstream myfile1,myfile2,myfile3,myfile4;
                FILE *student;
                ostringstream buff;
};

int main()
{
	
	
	Computer computer_one;
	 
	     
      
	computer_one.read();
	computer_one.output_information();
	
	computer_one.textmining();
	computer_one.reverse();
	//computer_one.subseqlength3();
	computer_one.selectrandom();
	//computer_one.randomgenerate();
	computer_one.startlocation();
	computer_one.PPM();
	//computer_one.count_nucleotide();
	//computer_one.PFM();
	//computer_one.selectseq();
	//computer_one.test();
	//computer_one.score();
	//computer_one.randomly();
	
	//computer_one.step1();
	//computer_one.step2();
	
	
	//computer_one.step11();
	
	computer_one.step21();
	
	
	fclose(stdout);
	
	
	return 0;
}
