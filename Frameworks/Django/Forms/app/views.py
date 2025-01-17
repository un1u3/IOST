from django.shortcuts import render, redirect
from .forms import ProfileForm

# Create your views here.
def home(request):
    if request.method == 'POST':
        form = ProfileForm(request.POST, request.FILES)  # Include request.FILES for handling file uploads
        if form.is_valid():
            form.save()  # Save the form data to the database
            return redirect('home')  # Redirect to the home page or another page after form submission
    else:
        form = ProfileForm()  # Initialize an empty form for GET request
    
    return render(request, 'app/forms.html', {'form': form})  # Render the form in the template
