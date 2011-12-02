//
//  VideoToWebsocketsViewController.m
//  VideoToWebsockets
//
//  Created by James George on 12/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "VideoToWebsocketsViewController.h"

@implementation VideoToWebsocketsViewController
@synthesize socketConnection;

- (void)dealloc
{
    [super dealloc];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad
{
    //self.socketConnection = [[VTWSVideoSenderConnection alloc] init];
    //[self.socketConnection startMyWebSocket];  
    
    [super viewDidLoad];
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}


#pragma mark Actions
- (IBAction) sendString:(id)sender
{
    [self.socketConnection sendTest];
}

@end
