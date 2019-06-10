//
//  AppDelegate.h
//  维度电影
//
//  Created by 王俊 on 2019/6/9.
//  Copyright © 2019年 BW. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

