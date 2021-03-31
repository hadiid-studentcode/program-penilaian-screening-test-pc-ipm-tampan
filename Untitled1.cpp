#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;

int main(){
	
	string namaj,jabatanj;
	float nilai1,nilai2,nilai3,nilai4,nilai;
	char opsi;
	
	system("color 0");
	
	
	
	
	cout<<"PROGRAM PENILAIAN SCREENING TEST PC IPM TAMPAN 2021"<<endl<<endl;
	cout<<"==================================================="<<endl<<endl;
	
	cout<<"NAMA LENGKAP JURI : "; // nama juri
	getline (cin, namaj);
	
	cout<<"\nJABATAN : ";   // jabatan juri
	getline (cin, jabatanj);
	
	cout<<"\nSAYA MENERIMA DAN BERTANGGUNG JAWAB ATAS PENILAIAN SAYA [y/n] : "; //pertanyataan
	cin>>opsi;
	
	do{
	
	if(opsi=='y'){
		
	system("cls");
	
	string namap;
	string utusanp;
	
	cout<<"===================================================================="<<endl;
	
	cout<<"\nNAMA PESERTA : ";  //nama peserta
	cin>>namap;
	
	cout<<"\nUTUSAN : ";    //utusan peserta
	cin>>utusanp;
	
	cout<<"\n=================================================================="<<endl;
	
	cout<<"PENILAIAN PESERTA : "<<endl<<endl;  //penilaian peserta 
	
	cout<<"------------------------------------------------------------------"<<endl<<endl;
	
	cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<endl;   //nilai 1
	cout<<"   ( BERIKUT PILIHAN TEST AKAN DIUJIKAN )"<<endl;
	cout<<"	   AL-QALAM : 1-3"<<endl;
	cout<<"	   2 AYAT TERAKHIR SURAH AL-BAQARAH"<<endl;
	cout<<"    ayat tentang perkaderan"<<endl<<endl;
	

	cout<<"NILAI POINT [ MAX 25 POINT ] : POINT ";
	cin>>nilai1;

	
	cout<<"-------------------------------------------------------------------"<<endl<<endl;
	
	cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<endl<<endl;  //nilai 2
	
	
	cout<<"NILAI POINT [ MAX 25 POINT ] : POINT ";
	cin>>nilai2;


	
	cout<<"-------------------------------------------------------------------"<<endl<<endl;
	
	cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<endl<<endl; // nilai 3
	

	
	cout<<"NILAI POINT [ MAX 25 POINT ] : POINT ";
	cin>>nilai3;

	
	
	cout<<"-------------------------------------------------------------------"<<endl<<endl;
	
	cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<endl<<endl; //nilai 4
	
		
	cout<<"NILAI POINT [ MAX 25 POINT ] : POINT ";
	cin>>nilai4;
		
	
cout<<"-------------------------------------------------------------------"<<endl<<endl;	
system("cls");
	nilai = nilai1+nilai2+nilai3+nilai4;
	
	if(nilai>=91.75){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" A  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
		
		
		
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" A  "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=83.25){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" A-  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" A-  "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=75){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" B+  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" B+ "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}		
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=66.75){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" B  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" B  "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}	
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=50){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" C+  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" c+  "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}	
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=41.75){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" C  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" C  "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}	
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=33.25){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" C-  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" C- "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}	
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=25){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" D+  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
		ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" D+  "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=16.75){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" D  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" D  "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=8.25){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" D-  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" D-  "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}	
		
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=4.13){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" E+  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" E+  "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}	
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}else if(nilai>=0){
		system("cls");
		
		cout<<"NAMA JURI : "<<namaj<<endl;
		cout<<"JABATAN   : "<<jabatanj<<endl;
		cout<<"______________________"<<endl;
		
		cout<<"NAMA PESERTA : "<<namap<<endl;
		cout<<"UTUSAN PESERTA : "<<utusanp<<endl;
		cout<<"__________________________"<<endl;
		cout<<"1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		cout<<"2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		cout<<"3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		cout<<"4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		cout<<"__________________________"<<endl;
		cout<<"nilai rata-rata : "<<nilai<<" POINT  / "" E  "<<endl<<endl;
		cout<<"____________________________________________________"<<endl<<endl;
		
	ofstream myfile;
	myfile.open("D:/hadiid/IPM/data screnning/nilai screening test ipm tampan.doc", ios::app);
	
	
	if(!myfile.fail()){
		
		myfile<<"- NAMA JURI : "<<namaj<<endl;
		myfile<<"  JABATAN   : "<<jabatanj<<endl;
		myfile<<"_________________________"<<endl;
		myfile<<" NAMA PESERTA : "<<namap<<endl;
		myfile<<" UTUSAN PESERTA : "<<utusanp<<endl;
		myfile<<"__________________________"<<endl;
		myfile<<" 1. BACA DAN HAPALAN AYAT AL-QUR'AN"<<" : "<<nilai1<<" POINT "<<endl;
		myfile<<" 2. KE-IPMAN ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai2<<" POINT "<<endl;
		myfile<<" 3. KEMUHAMMADIYAH ( 3 PERTANYAAN RANDOM DARI JURI )"<<" : "<<nilai3<<" POINT "<<endl;
		myfile<<" 4. ANALISIS SOSIAL ( BERUPA TANGGAPAN MEREKA MENGENAI SATU KEJADIAN SOSIAL )"<<" : "<<nilai4<<" POINT "<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl;
		myfile<<"nilai rata-rata : "<<nilai<<" POINT  / "" E  "<<endl<<endl;
		myfile<<"_______________________________________________________________________________________________________"<<endl<<endl;
		
		myfile.close();
		cout<<"nilai telah ditulis ke dalam file............"<<endl;
		cout<<"_____________________________________________"<<endl<<endl;
	}else{
		cout<<"file tidak ditemukan"<<endl;
	}	
		
		cout<<"HALLO "<<namaj<<" APAKAH MASIH ADA LAGI ? [y/n] : ";
		cin>>opsi;
	
	}
	
}else if(opsi=='n'){
	system("cls");
	cout<<"TERIMA KASIH "<<namaj<<" TELAH BERKUNJUNG :)"<<endl;
	cout<<"\nNUUN WALQALAMI WAMAA YASTHURUN"<<endl;
	cout<<"WASSALAMUALAIKUM WARAHMATULLAHI WABARAKATUH"<<endl;
	cout<<"IPM JAYA!!!"<<endl;	
	break;
	cin.get();
}else{
	system("cls");
	cout<<"\nMOHON MAAF "<<namaj<<" SEBAIKNYA ANDA MEMILIH [y/n] !!";
}
}while(opsi=='y');
	
	cin.get();
	return 0;
}
