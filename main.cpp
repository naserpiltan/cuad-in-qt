#include <QtCore/QCoreApplication>
#include <iostream>
using namespace std;
#include <cuda_runtime.h>


extern "C"
cudaError_t cuda_main();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // run your cuda application
    cudaError_t cuerr = cuda_main();
    // check for errors is always a good practice!
    if (cuerr != cudaSuccess)
    {
        cout << "CUDA Error: " << cudaGetErrorString( cuerr ) << endl;
    }
    else
    {
        cout<<"cuda success"<<endl;
    }

    return a.exec();
}
