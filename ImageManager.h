//
//  ImageManager.h
//  MyUtils
//
//  Created by Tushar Mohan on 01/12/16.
//  Copyright © 2017 Tushar Mohan. All rights reserved.
//

//MIT License
//
//Copyright (c) 2017 Tushar
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#define DEBUG_MODE 0
#define kResourceBasePath @"http://lorempixel.com"

@interface ImageManager : NSObject

/**
 * Returns a UIImage object once it has been retreived from the web server.
 */
+ (void)loadImageWithName:(NSString*)name withCompletion:(void (^)(UIImage* image))setImage;

/**
 * To flush the session data after user exists/ terminates the session
 */
+ (void)clearDiskCache;

/**
 * Removes the resource
 
 @param fileName name of file to be purged
 */
+ (void)removeResourceForPathName:(NSString*)fileName;

/**
 * Calculates the size of the cache folder

 @return the size in bytes
 */
+ (unsigned long long int)getCacheSize;

@end

#define _gImageManager [ImageManager]
