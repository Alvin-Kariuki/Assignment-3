#ifndef CITRUSFRUITS_H
#define CITRUSFRUITS_H
 class CitrusFruit{
  protected:
    float ph;
  public:
    CitrusFruit(float ph) : ph(ph){}
    virtual const char * getName();
    virtual float getPh();
 };
#endif