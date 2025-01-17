from django.shortcuts import render
from .forms import CreatePostForm

# Create your views here.
def home(request):

    
    form = CreatePostForm
    return render(request,'app/index.html',{'form':form})