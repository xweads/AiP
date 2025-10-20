#include <iostream>

int ** create(size_t rows,size_t cols);
void remove(int ** m, size_t rows,size_t cols);
void input(int ** m, size_t rows,size_t cols){
    for (size_t i=0;i<rows && std::cin;++i){
        for (size_t j=0;j<cols&& std::cin;++j){
            std::cin>>m[i][j]
        }
    }
}
void output(const * int * m, size_t rows,size_t cols);
int main() {
    size_t rows=0,cols=0;
    std::cin>>rows>>cols;
    
    int ** m = create(rows,cols);
    input(m,rows,cols);
    if (!std::cin){
        remove(m,rows,cols);
        return 1;
    }
    output(m,rows,cols);
    remove(m,rows,cols);
    std::cout<<"\n";
}
