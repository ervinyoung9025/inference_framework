#ifndef INFERENCE_H
#define INFERENCE_H

#include <string>

namespace inference_framework
{
namespace inference
{
enum InferenceStatus {

};

class Base {
public:
    Base();
    virtual ~Base();
private:
    std::string model_path;
    
};

class Inference : public Base {
public:
    Inference();
    virtual ~Inference();
};
    
} // namespace inference
} // namespace inference_framework

#endif