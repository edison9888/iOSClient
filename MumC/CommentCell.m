//
//  CommentCell.m
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import "CommentCell.h"


@implementation CommentCell

@synthesize item_title;
@synthesize item_create;
@synthesize item_content;

- (void)dealloc
{
    [item_create release];
    [item_content release];
    [item_title release];
    [super dealloc];
}


- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
