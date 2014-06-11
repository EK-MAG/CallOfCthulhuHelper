//
//  InvestigatorsWC.m
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 10.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import "InvestigatorsWC.h"

@interface InvestigatorsWC ()

@property (nonatomic, strong) NSArray *arrayyy;

@end

@implementation InvestigatorsWC

- (void)windowDidLoad
{
    [super windowDidLoad];

    [self.textFieldName setHidden:YES];
}


#pragma mark model
-(Investigator *)getCurrentInvestigator {
    if ([[self.investigatorArrayController selectedObjects] count] > 0) {
        return [self.investigatorArrayController selectedObjects][0];
    } else {
        return nil;
    }
}


#pragma mark buttons

- (IBAction)btnEditName:(id)sender {
    [self.textFieldName setHidden:NO];
}

#pragma mark NSTextField Delegate
- (void)controlTextDidEndEditing:(NSNotification *)obj {
    [self.textFieldName setHidden:YES];
}
@end
