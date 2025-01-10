from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def myfunction(request):
    return HttpResponse("Hello Django")


def home(request):
    return HttpResponse("Hello Home")

def myfunc2(request):
    a = 10 + 10 
    return HttpResponse(a)

