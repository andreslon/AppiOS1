//
//  ViewController.h
//  AppiOS1
//
//  Created by Sorey Garcia on 7/3/15.
//  Copyright (c) 2015 andreslon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController<MKMapViewDelegate>
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UITextField *viewTweetBody;
@property  (strong,nonatomic) Tweet *tweet;
- (IBAction)tweetAction:(id)sender;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end

