//
//  ViewController.m
//  AKInstalledAppList
//
//  Created by Arafat on 07/04/2016.
//  Copyright © 2016 Arafat Khan. All rights reserved.
//

#import "ViewController.h"
#import "LSApplicationProxy.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [self showInstalledAppList];
}

-(void)showInstalledAppList{
    
    
    Class LSApplicationWorkspace_class = objc_getClass("LSApplicationWorkspace");
    NSObject* workspace = [LSApplicationWorkspace_class performSelector:@selector(defaultWorkspace)];
    
    
    for (LSApplicationProxy *apps in [workspace performSelector:@selector(allApplications)])
    {
        
        NSLog(@"%@",apps.applicationIdentifier);
        NSLog(@"");
        
        NSString *localizedName = apps.localizedName;
        
        if([apps.applicationIdentifier isEqualToString:@"YOUR APP IDENTIFIER"])
        {
            NSLog(@"\nlocalizedName: %@",localizedName);
            NSLog(@"minimumSystemVersion: %@",apps.minimumSystemVersion);
            NSLog(@"fileSharingEnabled: %d",apps.fileSharingEnabled);
            NSLog(@"sdkVersion: %@",apps.sdkVersion);
            NSLog(@"teamID: %@",apps.teamID);
            
        }
    }
    
}


@end
