# GaragedoorOpener

I made a automatic garage door IoT device so I could open and close my garage door with my android phone. 

To keep it very simple, I used the Particle Photon wifi board together with a relay.
Basically the Photon listens for an function-event on the Particle Console which will be activated as a web request. At first, I used it in conjunction with the IFTTT service, but often had long responce time and timeouts with the IFTTT app. So found the app *HTTP Shortcuts* which I used to send a post request to the Particle Console with a bearer token authentiation and a body parameter
