#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 /**
  *  A function for finding a median between n numbers
  */
template < typename T >
T Median(T begin ,T end , int num)
{
    if(num == 1 || (end - begin) % num != 0 ){ // if num = 1 or num not divide the size of the container
        return end;
    }
    vector<double> vec; // Array Divide the container into several arrays
    T it = begin;
    while(it != end){
        for (auto i = 0 ; i < num ; i++){
            vec.push_back(*it);
            ++it;
        }
        sort(vec.begin(),vec.end());
        if(num % 2 != 0){
            *begin=vec[num/2];
        }
        else{
            int num1 = vec[num/2 -1];
            int num2 = vec[num/2];
            *begin =(num1+num2)/2;
        }
        vec.clear();
        ++begin;
    }
    return begin;
}
 /**
  *  Function to swap any two numbers in the container
  */
template < typename T >
T Transpose( T begin ,T end)
{
    T it = begin;
    if((end - begin) % 2 != 0 ){
    while(it != end-1){
        iter_swap(it, it+1);
        it+=2;
        }
        return end-1;
    }
    else{
    while(it != end){
        iter_swap(it, it+1);
        it+=2;
        }
    }
    return end;
}
/**
  *  Function to run a function lambada any two numbers in the container
  */
template < typename T , typename P>
 T Transformations( T begin , T end ,P&& lambda)
{
    if((end - begin )% 2 != 0)
        return end;
    T it = begin;
    while(it != end){
        auto a = lambda(*it , *(it+1));
        *begin = a;
        ++begin;
        it+=2;
    }
    return begin;
}

