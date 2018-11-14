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
		
		public:
		
		
		void read(string address2){
			ifstream inFile;
			
		
           input=address2;
    
			int k1,k2,k3;
			bool f,f1,f2,f3,f4,f5,f6,f7,f8,f9;
			f=f1=f2=f3=f4=f5=f6=f7=f8=f9=false;
			
			string md1,p1,lm1,rm1,ming1,maxg1,t1,output,a,b,s1;
			
	   
		
		output="output.txt";
		
		t1="30";
		p1="1";
		md1="1";
		g1="1";
		lm1="6";
		rm1="6";
		ming1="0";
		maxg1="0";
		s1="1";
		//getline(cin,input);
		input=input+' ';
			
		x=input.length();
	    
 
		i=0;
		j=0;
		k1=k2=k3=0;
		for(i=0 ; i<=x ; i++){
			if((input[i]=='-')&&(input[i+1]=='h')){
				cout<<"Help commands:"<<"\n";
				cout<<"----------------------------------------------------------------------------------------------------"<<"\n";
				cout<<"-i input file"<<"\n";
				cout<<"-m left motif width (default 6)"<<"\n";
				cout<<"-M right motif width (default 6)"<<"\n";
				cout<<"-g min gap between two motif blocks (default 0)"<<"\n";
				cout<<"-G max gap between two motif blocks (default 0)"<<"\n";
				cout<<"-t number of times trying to repeat process to find best motif (default 30)"<<"\n";
				cout<<"-o output file (default output.txt)"<<"\n";
				cout<<"-f 1 for fasta file, or 2 for text file (no header) (default 1)"<<"\n";
				cout<<"-p 1 for the given strand, or 2 for both the given and reverse complement strands (default 1)"<<"\n";
				cout<<"-n 1 for PWM, or 2 for DWM (default 1)"<<"\n";
				cout<<"-s 1 for one occurrence motif site per sequence, or 2 for any number of repetitions (default 1)"<<"\n";
				cout<<"----------------------------------------------------------------------------------------------------"<<"\n";
			exit(0);
			}
			
			if((input[i]=='-')&&(input[i+1]=='i')){
				i=i+3;
				k3=i;
				address.clear();
				a=input[i];
				i++;
				while (input[i] != ' '){
			    a+=input[i];
			    k1++;
			    j++;
			    i++;}
			   //address=input.substr(k3,k1);
			   address=a;
			   }
			   k1=0;
			   j=0;
			   if((input[i]=='-')&&(input[i+1]=='o')){
				i=i+3;
				output.clear();
				k3=i;
				while (input[i] != ' '){
			    b[j]=input[i];
			    k1++;
			    j++;
			    i++;
			   }
			   output=input.substr(k3,k1);
		}
	}
		
	
		cout<<"\n";
		
	
		i=0;
		j=0;
		
	while(i <= x){
		if((input[i]=='-')&&(input[i+1]=='f')){
				j=0;
				i+=3;
				g1=input[i];
				i++;
				if(input[i] != ' '){
				g1=g1+input[i];
				i++;}
				//while (input[i] != ' ') {
				//lm1[j]=input[i];
				//j++;
				//i++;}
				}
			
				
			   else if((input[i]=='-')&&(input[i+1]=='n')){
				j=0;
				i+=3;
				md1=input[i];
				i++;
				if(input[i] != ' '){
				md1=md1+input[i];
				i++;}
				//while (input[i] != ' ') {
				//lm1[j]=input[i];
				//j++;
				//i++;}
				}
				
			
				
			   else if((input[i]=='-')&&(input[i+1]=='p')){
				j=0;
				i+=3;
				p1=input[i];
				i++;
				if(input[i] != ' '){
				p1=p1+input[i];
				i++;}
				//while (input[i] != ' ') {
				//lm1[j]=input[i];
				//j++;
				//i++;}
				}
				
				else if((input[i]=='-')&&(input[i+1]=='s')){
				j=0;
				i+=3;
				s1=input[i];
				i++;
				if(input[i] != ' '){
				s1=s1+input[i];
				i++;}
				//while (input[i] != ' ') {
				//lm1[j]=input[i];
				//j++;
				//i++;}
				}
                
				
			    else if((input[i]=='-')&&(input[i+1]=='m')){
				j=0;
				i+=3;
				lm1=input[i];
				i++;
				if(input[i] != ' '){
				lm1=lm1+input[i];
				i++;}
				//while (input[i] != ' ') {
				//lm1[j]=input[i];
				//j++;
				//i++;}
				}
			    
			    	
			   else if((input[i]=='-')&&(input[i+1]=='M')){
				j=0;
				i+=3;
				rm1=input[i];
				i++;
				if(input[i] != ' '){
				rm1=rm1+input[i];
				i++;}
				//while (input[i] != ' ') {
				//rm1[j]=input[i];
				//j++;
				//i++;}
				}
			    	
			    
			   else if((input[i]=='-')&&(input[i+1]=='g')){
				j=0;
				i+=3;
				ming1=input[i];
				i++;
				if(input[i] != ' '){
				ming1=ming1+input[i];
				i++;}
				//while (input[i] != ' ') {
				//ming1[j]=input[i];
				//j++;
				//i++;}
				}
			    
			    	
			   else if((input[i]=='-')&&(input[i+1]=='G')){
				
				j=0;
				i+=3;
				maxg1=input[i];
				i++;
				if(input[i] != ' '){
				maxg1=maxg1+input[i];
				i++;}
				//while (input[i] != ' ') {
				//maxg1[j]=input[i];
				//j++;
				//i++;}
				}
			    	
			    
			   else if((input[i]=='-')&&(input[i+1]=='t')){
				j=0;
				i+=3;
				t1=input[i];
				i++;
				if(input[i] != ' '){
				t1=t1+input[i];
				i++;}
				//while (input[i] != ' ') {
				//t1[j]=input[i];
				//j++;
				//i++;}
				}
				
				
				else	
	       i++;			
		
	}
	
	g=atoi(g1.c_str());
	p=atoi(p1.c_str());
	s=atoi(s1.c_str());
	md=atoi(md1.c_str());
	lml=atoi(lm1.c_str());
	rml=atoi(rm1.c_str());
	ming=atoi(ming1.c_str());
	maxg=atoi(maxg1.c_str());
	tf=atoi(t1.c_str());
	
	
	cout<<"\n";
	
		
		while(f==false){
		//cout<<"\n If you want choose Fasta file, please input 1 and Text file, please input 2:";
		//cin>>g;	
		if(g==1 || g==2) 
	      f=true;
	     else
	      {cout<<"\n Please input just number 1 (Text file) or 2 (Fasta file) for type of input file:"; 
		   cin>>g;}
	    }
	    
	    
		//cout<<"\n Please enter a your data file address:";
		//getline(cin,address3);
		
		//getline(cin,address);
	    while(f7==false){
		cout << "\n";
		myfile4.open(address.c_str() , ios::out | ios::app | ios::binary);
		 if(!myfile4.is_open()){
                cout << "\n ERROR Your Data is not correct.\n";
                cout<<"\n Please enter a your data file address:";
		        getline(cin,address);}
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
	     
	     while(f9==false){
	  
	     if(s==1 || s==2) 
	      f9=true;
	     else
	      {cout<<"\n Please input just number 1 for one occurrence motif site per sequence, or 2 for any number of repetitions of motifs:"; 
	      cin>>s;}
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
			
			cout<<"\n-------------------------------------------------------------------------\n";
			//lml=22;
			//rml=0;
			lms=lml+rml;
			//md=2;
			if(md==1){
			nu=4;
			lm=lms;}
			else if (md==2){
			nu=16;	
			lm=lms-1;}
			//max=3
            //tf=3;
			//p=2;
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
			//g=2;
			//ming=0;
			//maxg=0;
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
				/*	if (k==0){
					cout<<">"<<i+1;
					cout<<'\n';
					k=1;
					}*/
											
					 if (ch!='\n'){				
					 cout << ch ;
					 if(j<2000 and i<2000){
					 str4[i][j]=toupper(ch);
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
					    
						lenstr2[i1]=j; 
						if(flag==true)
						//cout<<'\t'<<lenstr2[i1];
						sum=sum+lenstr2[i1];
						i1++;
						
						
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
		  cout<<'\n';
		  max2=i;
		  max=i;
		  k=0;
		  y=0;
		  if(g==1){
		  i=1;
		  while(i<i1){
			  if(str4[i][0] != '>'){
			  		    for(j=0; j<lenstr2[i]; j++)
							{
								if(str4[i][j]=='A' || str4[i][j]=='C' || str4[i][j]=='G' || str4[i][j]=='T')
		                        //cout<<str4[i][j];
		                        str2[k][y]=str4[i][j];
		                        y++;
		                   }}
		       if ((str4[i][0] == '>')||(i+1==i1)){
		         
		        lenstr2[k]=y;
		        k++;
		        	        
		        y=0;
		      }   
			   i++;	       
		   }
		   max=k;
		  }
		  
			 
		 // cout<<'\n'<<"Number of sequence:"<<max<<"  Number of line:"<<max<<'\n';
		   
		  
		  i1=0;
		  /*
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
		       else */
		      if(g==2){
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
		//cout<<">"<<i+1<< "\t"<<sigb[i][0]<<"\n";
		  
		  
	         for(k=0 ; k<lenstr2[i] ; k++)
	         {
				str2[i][k]=toupper(str2[i][k]);
	    
	         //cout<<str2[i][k];
	         
		 }
	      //   cout<<"\t"<<lenstr2[i]<<"\t"<<sigb[i][1]<<'\n';
	     //cout<<'\n';
		 }
		  sum=0;
		  g=0;
		  k=0;
          // printf("\n--------------------------------------------------------------------\n");
                for(i=0 ; i<(max2) ; i++)
                if(str4[i][0] =='>'){
					
                for(j=0 ; str4[i][j] !='\0' ; j++){
                str5[k][j]=str4[i][j];
                
                }
                k++;
                }
             
                
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
	 
	 /*  cout<<"\n----------REVERSE------------------\n";
			for(i=0 ; i<max ; i++) {
				cout<<">"<<i+1<<'\n';
				for(j=0 ; j<lenstr2[i] ; j++)
					cout<<str3[i][j];
					cout<<'\n';
				}*/
			 
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
		  
		//  for(i=0 ; i<max ; i++)
		//    cout<<rndnuml[i][r]<<":"<<rndnumr[i][r]<<" "<<rndnumr[i][r]-rndnuml[i][r]-4<<"\n";
		  
		 
			 
			
		 }
		 
		 //-------------------------------------------------------------
		
		 void startlocation()
		  {
			  
			//const int n1=lm , n2=max;
			//char ran1[n2][n1]; 
			  
			 
			 
		     //char ran1[n2][n1]; 
			  
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
		 
		// printf("\nTherefore the resulting Position Probability Matrix (PPM):\n");
		// printf("\n Column1  Column2  Column3  Column4  Column5\n");
		 sum=0;
		 for(i=0 ; i<lm ; i++){
		//	  cout<<da[i]<<"\t";
			    for(j=0 ; j<lm ; j++){
					freq1[i][j]=(float(freq[i][j])/(max+1));
					sum=sum+freq1[i][j];
			//		if(j<11)
			//       printf(" %.2f   ",freq1[i][j]);
			   }
			
		//cout<<'\n' ;				 
		 }
	//	 printf("\nThe Added total Table PPM:%.2f \n",sum);
		 
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
		//	cout<<"\nprint nucleotide count of random select PFM:\n";
		//		   printf("   Backgrand   \n");
				  for(i=0 ; i<nu ; i++){
		//            cout<<da[i]<<"\t"<<BG[i]<<"\t";
		            sum=sum+BG[i];
		            sum2=sum2+BG2[i];
		//		      for(j=0 ; j<(lm-1) ; j++)
		//		          printf("%d  ",freq[i][j]);
		//	      cout<<"\n";
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
			      
	/*		  
			 	 for (l=0 ; l<a ; l++){
					 cout<<l<<":";
			 	 for (j=0 ; j<lm ; j++)
			 	 cout<<seq2[l][j];
			 	 
			 	 cout<<"\t"<<" "<<positionl[l]<<","<<positionr[l];
			// 	if (l%3==0)
			 	 cout<<"\n";
			 	 
			 	 }*/  
			 }
		
		//--------------------------------------------------------------
		
		void score(){
						
		//	cout<<"\n-----------------calculate score for seq"<<selseq<<"----------------\n";
		//	cout<<" \n-----------------------------------------\nselect sequance "<<selseq<< "\n";
						 
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
				/*	   
					   if(j<(lm-1))
					   cout<<"+";
					   else
					  printf("/%.6f",div);   */
					   
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
			      
			/*
			 	 for (l=0 ; l<a ; l++){
					 cout<<l<<":";
			 	 for (j=0 ; j<lm ; j++)
			 	 cout<<seq4[l][j];
			 	 
		 //	 cout<<"\t"<<" "<<positionl[l][1]<<","<<positionr[l][1]<<" : "<<positionr[l][0]-positionl[l][0]-lml;
		//	 	if (l%3==0)
			 	 cout<<"\n";  
			 	 
			 	 }	*/
	       }
	
		//--------------------------------------------------------------
			 
			 //---------------------------------------------------------
			 void score2twoway(){
						
		//	cout<<"\n-----------------calculate score for seq"<<selseq<<"----------------\n";
		//	cout<<" \n-----------------------------------------\nselect sequance "<<selseq<< "\n";
						 
			// sum2[0]=0;
			// sum2[1]=0;
			 
		   
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
				/*	   if(j<lm-1)
					   cout<<"+";
					   else
					  printf("/%.6f",div[1]);  
					  */ 
					}
					score2[i][0]=score2[i][0]/div1[0];
					score2[i][1]=score2[i][1]/div1[1];
					//cout<<"="<<score2[i][0]<<" number1:"<<i<<"\n";
					//cout<<"="<<score2[i][1]<<" number2:"<<i<<"\n";
					
				//	sum2[0]=sum2[0]+score1[i][0];
				//	sum2[1]=sum2[1]+score1[i][1];
					
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
				 
			//	cout<<"\nMaximume Value Number:"<<score1[k1][0]<<"\t"<<score1[k2][1]<<"\n";
		 // if (maxscor[0]<maxscor[1])
		  //{
				rndnuml[z][r]=positionl[k1][0];
				rndnumr[z][r]=positionr[k1][0];
				state[z][r]='P';
			//}
			//else{
				rndnuml2[z][r]=positionl[k2][1];
				rndnumr2[z][r]=positionr[k2][1];
				state2[z][r]='N';
			//}
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
					 						
					 
	//		  cout<<"Select Random:"<<rndsel<<"\n";
			  
			  
			  
			  for(j=min ; j<a ; j++){
				  
			  if (rndsel > score1[j] and rndsel <= score1[j+1] )
			  score1[j]++;
			  
			  if(rndsel==0)
			  score1[0]++;
			  
			  }
			  
			  	  
		//	  cout<<"\n";
			  
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
			
			
	//		cout<<"\n-----------------------------------------------------";
	//		 printf("\nAfter Calculate 64 step , We have 64 SubSequnce:\n");
			 
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
		        	     
				
				
				
		/*	
			for(i=0 ; i<max ; i++){
				cout<<">"<<i+1;
				cout<<"\n";
			   for(j=0 ; j<12 ; j++)
			        printf("%c",seq1[i][j]);
			        cout<<"\n";
		} */
		
		count_nucleotide(seq1);
			
			
		
	/*	cout<<"\nprint nucleotide count of random select PFM:\n";
			   printf("  \n");
				  for(i=0 ; i<=15 ; i++){
		            cout<<da[i]<<"  ";
				      for(j=0 ; j<11; j++)
				          printf("%d  ",freq[i][j]);
				      cout<<"\n";
				}  */
				
		//		cout<<"\nprint LIKELIHOOD: ((MatrixPFM[i]+0.0625 )/ (total number of colum+1))\n";
				for(i=0 ; i<nu ; i++){
		//			  cout<<da[i]<<"\t";
					     for(j=0 ; j<(lm) ; j++){
							 if(md==1)
			                   freq1[i][j]=(float((freq[i][j])+0.25)/(max+1));
			                 else if (md==2)
			                   freq1[i][j]=(float((freq[i][j])+0.0625)/(max+1));
		//		          printf("%.2f ",freq1[i][j]);
					  }
		//		      cout<<"\n";
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
				//cout<<"\nTotal Added all Colums is:"<<entropytotal[r][0];
		    	
				
			
			
		}	     
		//--------------------------------------------------------------
			void step1(){
	//	cout<<"\n\n------Step1 By New Sequence Computional (Seq1 , Seq3)-------\n";	
		 
		selseq=z;
		//max=lenstr2[z];
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
		//randomgenerate();
		initial=z;
		//randomly();
			     
		
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
		  
		  
	//	cout<<"\n";
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
				//entropytotal[r][0]=f2;
				testi[r]=f1;
				//cout<<"\nentropytotal[0]:"<<f2<<"\tentropytotal[1]:"<<f1;
				//cout<<"\nNumber Total Step Repeat is:"<<temp_e[1];
				
				x2++;
				//check[x2]=f1;
				
				
			}
			else
			{
				
				x2=temp_e[1];
				
				//check[x2]=f1;
				temp_e[1]++;
				
				f2=f1;
			}
		}	
		if(temp_e[1]>=10){
			testi[r]=f1;
			bb=true;
			//cout<<"\nentropytotal[0]:"<<f2<<"\tentropytotal[1]:"<<f1;
			//	cout<<"\nNumber Total Step Repeat is:"<<temp_e[1];
		}
		
		//cout<<"\n"; 
		
		
			//for(i=0 ; i<x2 ; i++)
			//cout<<check[i]<<"\n";
			        
    		x=0;		
		}
		//--------------------------------------------------------------	
		void step21(){
			
			for(i1=0 ; i1<tf ; i1++){
		//cout<<"\n----------------------------------------------------------------------\n";	
		
		bb=false;
		
	    step11();
	    
	       // cout<<"\n##########NEW Genrate for Calculate to find motif of Step: "<<r+2<<"  ############\n" ;   
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
		  
		  cout<<"\n-----------------------------------------------------------------------------\n";
		  
		   
                 
              	
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
			  if(g1=="1"){
				  for(j=0 ; str5[i][j] !='\n' ; j++)
				  cout<<str5[i][j];
			  }
			  else {
				cout<<">"<<i+1;
				}
				
				cout<<"\t"<<"Direction: "<<state[i][0];
				cout<<"\n";
			
			   for(j=0 ; j<lms ; j++)
			        printf("%c",finalmotif[i][j]);
			        cout<<"\n";
		} 
			  
		  
		//  for(i=0 ; i<max ; i++)
		  //cout<<rndnuml[i][l]<<"\t"<<rndnumr[i][l]<<"\n";
		
			
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
		
		if(s==2){
		secondmotif();	
		}
		 
	}
		
		void secondmotif(){
			
			//int k5,j3,i3,a1,l3=0;
               //int scoremotif1[max];
                char match[100];
               int scoremotif2[1000][200];
                //string secmotif[1000][2000];
                

                cout<<"\n---------------------------New motifs discovery position------------------------------\n";
                md=1;
                nu=4;
                lm=lms;
                da[0]="A"; da[1]="C"; da[2]="G"; da[3]="T";
               count_nucleotide(finalmotif);
               
               
                
                for (i = 0; i < lms; i++)
                {
					
                    k = 0;
                    l = 0;
                    for (j = 0; j < nu; j++)
                    {                       
                        if (freq[j][i] > k)
                        {
                            k = freq[j][i];
                            l = j;
                            
                        }

                    }
                
                    if (l == 0)
                    {
                        match[i] = 'A';
                    }
                    else if (l == 1)
                    {
                        match[i] = 'C';
                    }
                    else if (l == 2)
                    {
                        match[i] = 'G';
                    }
                    else if (l == 3)
                    {
                        match[i] = 'T';
                    }
				
                }
                
                cout<<"The best match of sequences for motif detection:\n\t";
                for (i = 0; i <lms; i++)
                    cout<<match[i]<<"\t";
                cout<<"\n";
                

                for(i=0; i<max; i++)
                {
					temp_e[i]=0;
                    for(j=0; j<lm; j++)
                    {
						subnuc="";
                        for(k=0; k<nu; k++)
                        {
							subnuc=finalmotif[i][j];
							if(md==2)
							subnuc=subnuc+finalmotif[i][j];
							
                            if (subnuc== da[k])
                            {
                                temp_e[i] += freq[k][j];
                                
                            }
                        }
                    }
                    if (i == 0)
                    {
                        l2 = 0;
                        min = temp_e[0];
                    }

                    if(min > temp_e[i])
                    {
                        min = temp_e[i];
                        l2 = i;
                    }

                    //cout<< i << ":" << temp_e[i] << "\n";
                }
                //cout<< "\n Minimum:" << min<<"\n";
               //cout<< "Min:" << l2 << "-" << temp_e[l2];
                //cout<< "\n";
                    subnuc="";
                for (i=0; i<max; i++)
                {
                    
                            {
                                
                                a = 0;
                                
                                for (i1 = ming; i1 <= maxg; i1++)
                                {

                                    for (l = 0; l < (lenstr2[i] - lms - i1); l++)
                                    {
                                        scoremotif2[i][l] = 0;
                                        k = 0;
                                       if ( l > (initialmotif[i][1] + rml) || l< (initialmotif[i][0]-lms-i1))
                                        {
											subnuc="";
                                             for (j = 0; j < lms; j++)
                                            {
                                                if (j < lml)
                                                {
                                                    seq2[a][j] = str2[i][l + j];
                                                    for (k2 = 0; k2 < nu; k2++)
                                                    {
														subnuc=seq2[a][j];
														if(md==2)
							                            subnuc=subnuc+seq2[a][j];
							                            
                                                        if (subnuc == da[k2])
                                                        {
                                                            scoremotif2[i][l] += freq[k2][j];
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    seq2[a][j] = str2[i][l + j + i1];
                                                    for (k2 = 0; k2 < nu; k2++)
                                                    {
														subnuc=seq2[a][j];
														if(md==2)
							                            subnuc=subnuc+seq2[a][j];
							                            
                                                        if (subnuc == da[k2])
                                                        {
                                                            scoremotif2[i][l] += freq[k2][j];
                                                        }
                                                    }
                                                }

                                               //cout<< seq2[a][j];
                                               //secmotif[i][a1] += seq2[a][j];
                                               //subnuc1 = subnuc1+seq2[a][j];
                                            }
                                            subnuc1 =seq2[a];

                                            //cout<< " - " << scoremotif2[i][l] << "\n";
                                            //cout<< " - " << subnuc << "\n";

                                            if (min <= scoremotif2[i][l])
                                            {
												x=l+1+i1+lml;
												if(g1=="1")
				                                   for(A=0 ; str5[i][A] !='\n' ; A++)
				                                       cout<<str5[i][A];
				                                    else				                                       
                                                      cout<<"Site:" << (i) ;
                                                
                                                cout<< "\tLeft Position:" << (l)<<", Right Position:"<<(x) << " - " << subnuc1 << "\n";
                                                
                                                subnuc1="";
                                            } 
                                           
                                           a++; 
                                        }  
                                    }

                        }
                    }
                }
			
			
			
		}
		
		 
                //std::vector<int> lenstr2;
                char ch,str2[1000][1000],str3[1000][1000],str4[2000][1000],str5[1000][1000],state[1000][100],state2[1000][100];
	            int i , i1,j,k1,k2,k,l,l2,md,nu,lms,tf,p,rnd,rnd1,rnd2,rnd3,nmax,min,max,max2,ming,maxg,x,y,A,B,C,D,a,b,r,ns,g,z,lml,rml,lm,s;
	            int selseq,initial,lenstr2[1000],freq[16][50],rndnuml[1000][100],rndnumr[1000][100],rndnuml2[1000][100],rndnumr2[1000][100],initialmotif[1000][2],sigb[1000][2];
	            int temp_e[1000],positionl[15000][2],positionr[15000][2];
	            float freq1[16][50],freq2[4][50],score1[15000],score2[4000][2];
	            float BG[16],BG2[16],entropytotal[100][2],entropy[50],minentropy[100],testi[100];
	            float rndsel,sum,sum2,sum3,t,div,div1[2],maxscor[2],maxsum[500][2];
	            string subnuc,subnuc1;
	            bool flag,bb;
                char line,finalmotif[1000][50],strmotif[1000][50],seq1[1000][50],seq5[1000][50],seq2[15000][50],seq4[4000][50],ran1[1000][50];
                string da[16];
                string g1,seq,temp,temp2,temp3,address,input;
                ifstream myfile1,myfile2,myfile3,myfile4;
                FILE *student;
                ostringstream buff;
};

int main(int argc, char *argv[])
{
	
	
	//Some stuff to interact with the class will go here
	Computer computer_one;
	 
	 string input2;
	 input2=argv[1];
	 input2+=" ";
	 int i=2;
	 while(i < argc)
	 {
	 input2+=argv[i];
	 input2+=" ";
	 i++;
	 }
	 
	     
	computer_one.read(input2);
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
	
	
	//computer_one.secondmotif();
	
	
	

	
	fclose(stdout);
	
	
	return 0;
}
