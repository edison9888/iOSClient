//
//  DoubleTapSegmentedControl.m
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import "DoubleTapSegmentedControl.h"


@implementation DoubleTapSegmentedControl
@synthesize delegate;

// Catch touches and trigger the delegate
-(void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
	[super touchesBegan:touches withEvent:event];
	if (self.delegate) [self.delegate performSegmentAction:self];
}

@end
