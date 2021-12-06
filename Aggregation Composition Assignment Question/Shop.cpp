/*
 * Shop.cpp
 *
 *  Created on: Dec 4, 2021
 *      Author: asharbinkhalil
 */

#include "Shop.h"

void Shop::manufactureComputer()
	{

	int count;
		cout <<"Enter Number OF Computers:\n" ;
		cin >> count ;
		cp = new Computer[count];
		for (int i = 0 ; i < count ; i++)
		{
		int add,sub,nr,sr,ck;
		float e ;
		cout<<"Enter no of Adders: \n" ;
		cin>>add ;
		cout<<"Enter no of Subtracters: \n" ;
		cin>>sub ;
		cout<<"Enter no of Registers of ALU : \n" ;
		cin >>nr;
		cout << "Enter size of Registers of ALU : \n" ;
		cin >> sr ;
		cout << "Enter time of clock of CU : \n";
		cin >> ck ;
		CPU *pc = new CPU ;
		pc->getAlu().setNoOfAdders(add);
		pc->getAlu().setNoOfSubtractors(sub);
		pc->getAlu().setNoOfRegisters(nr);
		pc->getAlu().setsizeOfRegisters(sr);
		pc->getCu().setClock(ck);
		cp[i].setCpu(pc);
		int cpc ;
		cout << "Enter capacity of physical memory of computer :" ;
		cin >> cpc ;
		PhysicalMemory *PM = new PhysicalMemory ;
		PM->setCapacity(cpc) ;
		cp[i].setPm(PM);
		MainMemory *mm= new MainMemory();
		cout<<"Enter Capacity Of main Memory";
		int cpcc;
		cin>>cpcc;
		mm->setCapacity(cpcc);
		mm->setTechnologyType("ACHY WALI");
		int ports ;
		cout << "Enter no of ports in computer : max 4 " ;
		cin >> ports ;
		Port *P = new Port [ports];
		string pp[] = {"VGA" , "HDMI" , "USB-A" , "USB-C"};
		for(int b=0; b<ports; b++)
		{
			int choice;
		cout<<"select any VGA(1) , HDMI(2), USB-A(3) , USB-C(4)\n";
		cin>>choice;
		P[b].setType(pp[choice]);
			cout<<"select baud rate\n";
			int choicebr;
			cin>>choicebr;
			P[i].setBaudRate(choicebr);
		}
		}
	}

	void Shop::viewList()
	{
		for(int i=0; i<1; i++)
		{
		cout << "No of Adders of ALU : " ;
		cout << cp[i].getCpu()->getAlu().getNoOfAdders() ;
		cout << "\nNo of Subtracters of ALU : " ;
		cout << cp[i].getCpu()->getAlu().getNoOfSubtractors() ;
		cout << "\nNo of Registers of ALU : " ;
		cout << cp[i].getCpu()->getAlu().getNoOfRegisters() ;
		cout << "\nSize of Registers of ALU : " ;
		cout << cp[i].getCpu()->getAlu().getsizeOfRegisters() ;
		cout << "\nClock time of CU : " ;
		cout << cp[i].getCpu()->getCu().getClock();
		cout << "\nCapacity of physical memory of computer : " ;
		cout << cp[i].getPm()->getCapacity() ;
		cout << "\nPorts of computer : \n";
		for(int y=0; y<4; y++)
		{
			cout<<"port type is \n";
			cout<<cp[y].getMb()->getPorts()->getType();
			cout<<"baud rate is \n";
			cout<<cp[y].getMb()->getPorts()->getBaudRate();
		}
		}
		}
