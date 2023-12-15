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
    std::string modelPath;
    
};

class Inference : public Base {
};
    
} // namespace inference
} // namespace inference_framework


#endif