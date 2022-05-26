
    /*
    CH-230-A
    a13p1.cpp
    Lars Schuster
    lschuster@jacobs-university.de
    */
     
    #include <fstream>
    #include <iostream>
    #include <cstdlib>
    #include <string.h>
     
    int main()
    {
        char inpfile[50], outpfile[50], buffer[100];//set variables
        std::cin.get(inpfile,50);//get name of file
     
        for (int i = 0; inpfile[i] != '.'; i++)
        {
            outpfile[i] = inpfile[i];
        }//copy part before dot
        
        outpfile[strlen(outpfile)-1] = '\0';//delete space
     
        strcat(outpfile,"_copy.txt");//add new suffix
     
        std::ifstream inp(inpfile);
        if (!inp.good()) {
            std::cerr << "Error opening input file " << std::endl;
            exit(1);
        }//check if file opened properly
     
        std::ofstream outp(outpfile);
        if (!outp.good()) 
        {
            std::cerr << "Error opening output file" << std::endl;
            exit(2);
        }
     
        while (!inp.eof())
        {
            inp.getline(buffer,100);//copy line by line
            outp << buffer;
            if (!inp.eof())
            {//add newline if end of file is not reached
                outp << "\n";
            }
            
        }//until end of file
        
        inp.close();
        outp.close();//close the files
        
        return 0;
    }
     
     
        /*
        char* tok = strtok(ifile,".");
        while(tok != NULL)
        {
            tok = strtok(NULL,".");
        }*/


