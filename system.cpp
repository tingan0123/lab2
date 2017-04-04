#include"system.h"
#include<cmath>
		int System::getK(){
			return this->K;
		}
		int System::getRa(){
			return this->Ra;
		}
		int System::getRb(){
			return this->Rb;
		}
		void System::setK(int tmpK){
			this->K = tmpK;
		}
		void System::setRa(int tmpRa){
			this->Ra = tmpRa;
		}
		void System::setRb(int tmpRb){
			this->Rb = tmpRb;
		}
		void System::calculate(float Sa ){
			int tmpRa = getRa();
			int tmpRb = getRb();
			
			float Ea, Eb;
			Ea = 1/(1+pow(10,(this->Rb-this->Ra)/400.f));
			Eb = 1/(1+pow(10,(this->Ra-this->Rb)/400.f));
			this->Ra = tmpRa + this->K*(Sa - Ea);
			this->Rb = tmpRb + this->K*((1-Sa) - Eb); 
		}

