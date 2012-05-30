//
//  ProductCell.m
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import "ProductCell.h"


@implementation ProductCell

@synthesize proImage;
@synthesize scrImage;
@synthesize title;
@synthesize price;

- (void)dealloc
{
    [proImage release];
    [scrImage release];
    [title release];
    [price release];
    [super dealloc];
}

#pragma mark - View lifecycle

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
