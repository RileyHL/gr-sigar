<<<<<<< HEAD






<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
  <link rel="dns-prefetch" href="https://assets-cdn.github.com">
  <link rel="dns-prefetch" href="https://avatars0.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars1.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars2.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars3.githubusercontent.com">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">



  <link crossorigin="anonymous" media="all" integrity="sha512-eYhUAIv4O/68uoHkCtYXVTxc5Q92+NKMtOryYR5Svt7vDp34XkrggN5j4lrKyiB0B2HUyrAYvAb3tlhmFGhivg==" rel="stylesheet" href="https://assets-cdn.github.com/assets/frameworks-592c4aa40e940d1b0607a3cf272916ff.css" />
  <link crossorigin="anonymous" media="all" integrity="sha512-LUrF+o8wSTstABZwkJhSTy+PQCtGPf92OmcqBwdTsQyKTZ3JTXFyiTiLtXX2/PUT7ofgLcU5FNcBN7E+RQlWGQ==" rel="stylesheet" href="https://assets-cdn.github.com/assets/github-96ebb1551fc5dba84c6d2a0fa7b1cfcf.css" />
  
  
  
  

  <meta name="viewport" content="width=device-width">
  
  <title>gr-scan/scanner_sink.hpp at testing · RileyHL/gr-scan</title>
    <meta name="description" content="GitHub is where people build software. More than 27 million people use GitHub to discover, fork, and contribute to over 80 million projects.">
  <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    
    <meta property="og:image" content="https://avatars0.githubusercontent.com/u/34321239?s=400&amp;v=4" /><meta property="og:site_name" content="GitHub" /><meta property="og:type" content="object" /><meta property="og:title" content="RileyHL/gr-scan" /><meta property="og:url" content="https://github.com/RileyHL/gr-scan" /><meta property="og:description" content="Version of gr-scan for recording I/Q Data of detected signals" />

  <link rel="assets" href="https://assets-cdn.github.com/">
  <link rel="web-socket" href="wss://live.github.com/_sockets/VjI6MjU3ODg1NzAyOmUyMWRhZjU2ZTJkMDBlMzhiYTdkZGUxMmQ1NThlZGY2Nzk5MGY0YTAzNjk0YTdmY2RmMDM1OGVjNDFlZTIzNWQ=--0e07d9560285512b9dc2380cee470ca9a409670b">
  <meta name="pjax-timeout" content="1000">
  <link rel="sudo-modal" href="/sessions/sudo_modal">
  <meta name="request-id" content="CB01:5D4C:E4B831:1C38D56:5AD29545" data-pjax-transient>


  

  <meta name="selected-link" value="repo_source" data-pjax-transient>

    <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
  <meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
  <meta name="google-site-verification" content="GXs5KoUUkNCoaAZn7wPN-t01Pywp9M3sEjnt_3_ZWPc">
    <meta name="google-analytics" content="UA-3769691-2">

<meta name="octolytics-host" content="collector.githubapp.com" /><meta name="octolytics-app-id" content="github" /><meta name="octolytics-event-url" content="https://collector.githubapp.com/github-external/browser_event" /><meta name="octolytics-dimension-request_id" content="CB01:5D4C:E4B831:1C38D56:5AD29545" /><meta name="octolytics-dimension-region_edge" content="iad" /><meta name="octolytics-dimension-region_render" content="iad" /><meta name="octolytics-actor-id" content="34321239" /><meta name="octolytics-actor-login" content="RileyHL" /><meta name="octolytics-actor-hash" content="a8eacb00f2c47d0b3ac5ac702d58b4fe8b9ea9a14b4f2dbbf402bc3512e81294" />
<meta name="analytics-location" content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" />




  <meta class="js-ga-set" name="dimension1" content="Logged In">


  

      <meta name="hostname" content="github.com">
    <meta name="user-login" content="RileyHL">

      <meta name="expected-hostname" content="github.com">
    <meta name="js-proxy-site-detection-payload" content="YjNkYTRmMmJlYTQ5MTZhOGExNjdlODhmYTE4YTdkZTFlMTNiNjgwODg3ZDQwM2I3MDJiYmE3NDIyNzg0OTI2NHx7InJlbW90ZV9hZGRyZXNzIjoiMTczLjk1LjE1NS4xMCIsInJlcXVlc3RfaWQiOiJDQjAxOjVENEM6RTRCODMxOjFDMzhENTY6NUFEMjk1NDUiLCJ0aW1lc3RhbXAiOjE1MjM3NTAyMjgsImhvc3QiOiJnaXRodWIuY29tIn0=">

    <meta name="enabled-features" content="LOG_ACCESSIBILITY,UNIVERSE_BANNER,FREE_TRIALS,MARKETPLACE_INSIGHTS,MARKETPLACE_SELF_SERVE,MARKETPLACE_INSIGHTS_CONVERSION_PERCENTAGES">

  <meta name="html-safe-nonce" content="1dccc26fa580257524766220389b67a244ecfe59">

  <meta http-equiv="x-pjax-version" content="402da7acb22ff2e9e7f63736b021d40d">
  

      <link href="https://github.com/RileyHL/gr-scan/commits/testing.atom" rel="alternate" title="Recent Commits to gr-scan:testing" type="application/atom+xml">

  <meta name="description" content="Version of gr-scan for recording I/Q Data of detected signals">
  <meta name="go-import" content="github.com/RileyHL/gr-scan git https://github.com/RileyHL/gr-scan.git">

  <meta name="octolytics-dimension-user_id" content="34321239" /><meta name="octolytics-dimension-user_login" content="RileyHL" /><meta name="octolytics-dimension-repository_id" content="117919910" /><meta name="octolytics-dimension-repository_nwo" content="RileyHL/gr-scan" /><meta name="octolytics-dimension-repository_public" content="true" /><meta name="octolytics-dimension-repository_is_fork" content="false" /><meta name="octolytics-dimension-repository_network_root_id" content="117919910" /><meta name="octolytics-dimension-repository_network_root_nwo" content="RileyHL/gr-scan" /><meta name="octolytics-dimension-repository_explore_github_marketplace_ci_cta_shown" content="true" />


    <link rel="canonical" href="https://github.com/RileyHL/gr-scan/blob/testing/scanner_sink.hpp" data-pjax-transient>


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#000000">
  <link rel="icon" type="image/x-icon" class="js-site-favicon" href="https://assets-cdn.github.com/favicon.ico">

<meta name="theme-color" content="#1e2327">


  <meta name="u2f-support" content="true">

<link rel="manifest" href="/manifest.json" crossOrigin="use-credentials">

  </head>

  <body class="logged-in env-production page-blob">
    

  <div class="position-relative js-header-wrapper ">
    <a href="#start-of-content" tabindex="1" class="p-3 bg-blue text-white show-on-focus js-skip-to-content">Skip to content</a>
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"><div class="progress"></div></div>

    
    
    



        
<header class="Header  f5" role="banner">
  <div class="d-flex flex-justify-between px-3 container-lg">
    <div class="d-flex flex-justify-between ">
      <div class="">
        <a class="header-logo-invertocat" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <svg height="32" class="octicon octicon-mark-github" viewBox="0 0 16 16" version="1.1" width="32" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>

      </div>

    </div>

    <div class="HeaderMenu d-flex flex-justify-between flex-auto">
      <div class="d-flex">
            <div class="">
              <div class="header-search scoped-search site-scoped-search js-site-search" role="search">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="js-site-search-form" data-scoped-search-url="/RileyHL/gr-scan/search" data-unscoped-search-url="/search" action="/RileyHL/gr-scan/search" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" />
    <label class="form-control header-search-wrapper  js-chromeless-input-container">
          <a class="header-search-scope no-underline" href="/RileyHL/gr-scan/blob/testing/scanner_sink.hpp">This repository</a>
      <input type="text"
        class="form-control header-search-input  js-site-search-focus js-site-search-field is-clearable"
        data-hotkey="s,/"
        name="q"
        value=""
        placeholder="Search"
        aria-label="Search this repository"
        data-unscoped-placeholder="Search GitHub"
        data-scoped-placeholder="Search"
        autocapitalize="off"
        >
        <input type="hidden" class="js-site-search-type-field" name="type" >
    </label>
</form></div>

            </div>

          <ul class="d-flex pl-2 flex-items-center text-bold list-style-none" role="navigation">
            <li>
              <a class="js-selected-navigation-item HeaderNavlink px-2" data-hotkey="g p" data-ga-click="Header, click, Nav menu - item:pulls context:user" aria-label="Pull requests you created" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls" href="/pulls">
                Pull requests
</a>            </li>
            <li>
              <a class="js-selected-navigation-item HeaderNavlink px-2" data-hotkey="g i" data-ga-click="Header, click, Nav menu - item:issues context:user" aria-label="Issues you created" data-selected-links="/issues /issues/assigned /issues/mentioned /issues" href="/issues">
                Issues
</a>            </li>
                <li>
                  <a class="js-selected-navigation-item HeaderNavlink px-2" data-ga-click="Header, click, Nav menu - item:marketplace context:user" data-selected-links=" /marketplace" href="/marketplace">
                    Marketplace
</a>                </li>
            <li>
              <a class="js-selected-navigation-item HeaderNavlink px-2" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship showcases showcases_search showcases_landing /explore" href="/explore">
                Explore
</a>            </li>
          </ul>
      </div>

      <div class="d-flex">
        
<ul class="user-nav d-flex flex-items-center list-style-none" id="user-links">
  <li class="dropdown js-menu-container">
    <span class="d-inline-block  px-2">
      
    <a aria-label="You have no unread notifications" class="notification-indicator tooltipped tooltipped-s  js-socket-channel js-notification-indicator" data-hotkey="g n" data-ga-click="Header, go to notifications, icon:read" data-channel="notification-changed:34321239" href="/notifications">
        <span class="mail-status "></span>
        <svg class="octicon octicon-bell" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"/></svg>
</a>
    </span>
  </li>

  <li class="dropdown js-menu-container">
    <details class="dropdown-details details-reset js-dropdown-details d-flex px-2 flex-items-center">
      <summary class="HeaderNavlink"
         aria-label="Create new…"
         data-ga-click="Header, create new, icon:add">
        <svg class="octicon octicon-plus float-left mr-1 mt-1" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 9H7v5H5V9H0V7h5V2h2v5h5z"/></svg>
        <span class="dropdown-caret mt-1"></span>
      </summary>

      <ul class="dropdown-menu dropdown-menu-sw">
        
<a class="dropdown-item" href="/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a class="dropdown-item" href="/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>

<a class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a class="dropdown-item" href="/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>



  <div class="dropdown-divider"></div>
  <div class="dropdown-header">
    <span title="RileyHL/gr-scan">This repository</span>
  </div>
    <a class="dropdown-item" href="/RileyHL/gr-scan/issues/new" data-ga-click="Header, create new issue">
      New issue
    </a>

      </ul>
    </details>
  </li>

  <li class="dropdown js-menu-container">

    <details class="dropdown-details details-reset js-dropdown-details d-flex pl-2 flex-items-center">
      <summary class="HeaderNavlink name mt-1"
        aria-label="View profile and more"
        data-ga-click="Header, show menu, icon:avatar">
        <img alt="@RileyHL" class="avatar float-left mr-1" src="https://avatars3.githubusercontent.com/u/34321239?s=40&amp;v=4" height="20" width="20">
        <span class="dropdown-caret"></span>
      </summary>

      <ul class="dropdown-menu dropdown-menu-sw">
        <li class="dropdown-header header-nav-current-user css-truncate">
          Signed in as <strong class="css-truncate-target">RileyHL</strong>
        </li>

        <li class="dropdown-divider"></li>

        <li><a class="dropdown-item" href="/RileyHL" data-ga-click="Header, go to profile, text:your profile">
          Your profile
        </a></li>
        <li><a class="dropdown-item" href="/RileyHL?tab=stars" data-ga-click="Header, go to starred repos, text:your stars">
          Your stars
        </a></li>
          <li><a class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, your gists, text:your gists">Your gists</a></li>

        <li class="dropdown-divider"></li>

        <li><a class="dropdown-item" href="https://help.github.com" data-ga-click="Header, go to help, text:help">
          Help
        </a></li>

        <li><a class="dropdown-item" href="/settings/profile" data-ga-click="Header, go to settings, icon:settings">
          Settings
        </a></li>

        <li><!-- '"` --><!-- </textarea></xmp> --></option></form><form class="logout-form" action="/logout" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="TSUv+givLVYaa3W+T6pV8sHPF3tag4OAtSM1bxJwuyRTPlhcMh1GGP+D4/1OGrF1dn1hm8IhiN36McoBeKRSEw==" />
          <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
            Sign out
          </button>
        </form></li>
      </ul>
    </details>
  </li>
</ul>



        <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="sr-only right-0" action="/logout" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="YJwmhnZnNDkrQ/vcPi3wS0kXsihPsei2QKd8JrOwg0l+h1EgTNVfd86rbZ8/nRTM/qXEyNcT4+sPtYNI2WRqfg==" />
          <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
            Sign out
          </button>
</form>      </div>
    </div>
  </div>
</header>

      

  </div>

  <div id="start-of-content" class="show-on-focus"></div>

    <div id="js-flash-container">
</div>



  <div role="main" class="application-main ">
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode" class="">
    <div id="js-repo-pjax-container" data-pjax-container >
      







  <div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav  ">
    <div class="repohead-details-container clearfix container">

      <ul class="pagehead-actions">
  <li>
        <!-- '"` --><!-- </textarea></xmp> --></option></form><form data-autosubmit="true" data-remote="true" class="js-social-container" action="/notifications/subscribe" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="IaHb0CeAGLx+uARDAeB4Uxniw7Pg9Ecu32uanmZzhEYHT0F8GKsF6gTPu+fOfYCp9udTnj/ojQ2WxINwhiz/9w==" />      <input type="hidden" name="repository_id" id="repository_id" value="117919910" class="form-control" />

        <div class="select-menu js-menu-container js-select-menu">
          <a href="/RileyHL/gr-scan/subscription"
            class="btn btn-sm btn-with-count select-menu-button js-menu-target"
            role="button"
            aria-haspopup="true"
            aria-expanded="false"
            aria-label="Toggle repository notifications menu"
            data-ga-click="Repository, click Watch settings, action:blob#show">
            <span class="js-select-button">
                <svg class="octicon octicon-eye" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                Watch
            </span>
          </a>
          <a class="social-count js-social-count"
            href="/RileyHL/gr-scan/watchers"
            aria-label="0 users are watching this repository">
            0
          </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content">
            <div class="select-menu-header js-navigation-enable" tabindex="-1">
              <svg class="octicon octicon-x js-menu-close" role="img" aria-label="Close" viewBox="0 0 12 16" version="1.1" width="12" height="16"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
              <span class="select-menu-title">Notifications</span>
            </div>

              <div class="select-menu-list js-navigation-container" role="menu">

                <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                  <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input type="radio" name="do" id="do_included" value="included" checked="checked" />
                    <span class="select-menu-item-heading">Not watching</span>
                    <span class="description">Be notified when participating or @mentioned.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg class="octicon octicon-eye" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                      Watch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input type="radio" name="do" id="do_subscribed" value="subscribed" />
                    <span class="select-menu-item-heading">Watching</span>
                    <span class="description">Be notified of all conversations.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg class="octicon octicon-eye" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                        Unwatch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input type="radio" name="do" id="do_ignore" value="ignore" />
                    <span class="select-menu-item-heading">Ignoring</span>
                    <span class="description">Never be notified.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg class="octicon octicon-mute" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z"/></svg>
                        Stop ignoring
                    </span>
                  </div>
                </div>

              </div>

            </div>
          </div>
        </div>
</form>
  </li>

  <li>
    
  <div class="js-toggler-container js-social-container starring-container ">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="starred js-social-form" action="/RileyHL/gr-scan/unstar" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="lgYh8N3Rq+r2MaBhqCesc81YeK9akB+fJyhOHg8w+Klz//26N9rvdaLPwU5o9SVsI82TPLonSfeS/knoEulauw==" />
      <input type="hidden" name="context" value="repository"></input>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar RileyHL/gr-scan"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <svg class="octicon octicon-star" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/RileyHL/gr-scan/stargazers"
           aria-label="0 users starred this repository">
          0
        </a>
</form>
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="unstarred js-social-form" action="/RileyHL/gr-scan/star" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="mA6OBtSXd95x9T4ez6QUH/8t9MBgi7p8hn9PQvqwknJmdC7OmfagFiRBm9ONo/nEhmC9UNbPv/oVSKW7I6kBGQ==" />
      <input type="hidden" name="context" value="repository"></input>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star RileyHL/gr-scan"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <svg class="octicon octicon-star" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Star
      </button>
        <a class="social-count js-social-count" href="/RileyHL/gr-scan/stargazers"
           aria-label="0 users starred this repository">
          0
        </a>
</form>  </div>

  </li>

  <li>
          <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="btn-with-count" action="/RileyHL/gr-scan/fork" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="OZpLenlBkv9hXf2Cb6nZLVxgJnjwUOr3feMM7F4EeSMjbR+u5vAG2+MmCq8IXan7D10BRO0LCUqE11918DDPvg==" />
            <button
                type="submit"
                class="btn btn-sm btn-with-count"
                data-ga-click="Repository, show fork modal, action:blob#show; text:Fork"
                title="Fork your own copy of RileyHL/gr-scan to your account"
                aria-label="Fork your own copy of RileyHL/gr-scan to your account">
              <svg class="octicon octicon-repo-forked" viewBox="0 0 10 16" version="1.1" width="10" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
              Fork
            </button>
</form>
    <a href="/RileyHL/gr-scan/network" class="social-count"
       aria-label="1 user forked this repository">
      1
    </a>
  </li>
</ul>

      <h1 class="public ">
  <svg class="octicon octicon-repo" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
  <span class="author" itemprop="author"><a class="url fn" rel="author" href="/RileyHL">RileyHL</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a data-pjax="#js-repo-pjax-container" href="/RileyHL/gr-scan">gr-scan</a></strong>

</h1>

    </div>
    
<nav class="reponav js-repo-nav js-sidenav-container-pjax container"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a class="js-selected-navigation-item selected reponav-item" itemprop="url" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages /RileyHL/gr-scan/tree/testing" href="/RileyHL/gr-scan/tree/testing">
      <svg class="octicon octicon-code" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>

    <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
      <a itemprop="url" data-hotkey="g i" class="js-selected-navigation-item reponav-item" data-selected-links="repo_issues repo_labels repo_milestones /RileyHL/gr-scan/issues" href="/RileyHL/gr-scan/issues">
        <svg class="octicon octicon-issue-opened" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7 2.3c3.14 0 5.7 2.56 5.7 5.7s-2.56 5.7-5.7 5.7A5.71 5.71 0 0 1 1.3 8c0-3.14 2.56-5.7 5.7-5.7zM7 1C3.14 1 0 4.14 0 8s3.14 7 7 7 7-3.14 7-7-3.14-7-7-7zm1 3H6v5h2V4zm0 6H6v2h2v-2z"/></svg>
        <span itemprop="name">Issues</span>
        <span class="Counter">0</span>
        <meta itemprop="position" content="2">
</a>    </span>

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a data-hotkey="g p" itemprop="url" class="js-selected-navigation-item reponav-item" data-selected-links="repo_pulls checks /RileyHL/gr-scan/pulls" href="/RileyHL/gr-scan/pulls">
      <svg class="octicon octicon-git-pull-request" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
      <span itemprop="name">Pull requests</span>
      <span class="Counter">0</span>
      <meta itemprop="position" content="3">
</a>  </span>

    <a data-hotkey="g b" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /RileyHL/gr-scan/projects" href="/RileyHL/gr-scan/projects">
      <svg class="octicon octicon-project" viewBox="0 0 15 16" version="1.1" width="15" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/></svg>
      Projects
      <span class="Counter" >0</span>
</a>
    <a class="js-selected-navigation-item reponav-item" data-hotkey="g w" data-selected-links="repo_wiki /RileyHL/gr-scan/wiki" href="/RileyHL/gr-scan/wiki">
      <svg class="octicon octicon-book" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3 5h4v1H3V5zm0 3h4V7H3v1zm0 2h4V9H3v1zm11-5h-4v1h4V5zm0 2h-4v1h4V7zm0 2h-4v1h4V9zm2-6v9c0 .55-.45 1-1 1H9.5l-1 1-1-1H2c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h5.5l1 1 1-1H15c.55 0 1 .45 1 1zm-8 .5L7.5 3H2v9h6V3.5zm7-.5H9.5l-.5.5V12h6V3z"/></svg>
      Wiki
</a>

  <a class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors dependency_graph pulse /RileyHL/gr-scan/pulse" href="/RileyHL/gr-scan/pulse">
    <svg class="octicon octicon-graph" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"/></svg>
    Insights
</a>
    <a class="js-selected-navigation-item reponav-item" data-selected-links="repo_settings repo_branch_settings hooks integration_installations repo_keys_settings /RileyHL/gr-scan/settings" href="/RileyHL/gr-scan/settings">
      <svg class="octicon octicon-gear" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"/></svg>
      Settings
</a>
</nav>


  </div>

<div class="container new-discussion-timeline experiment-repo-nav  ">
  <div class="repository-content ">

    
  <a class="d-none js-permalink-shortcut" data-hotkey="y" href="/RileyHL/gr-scan/blob/0a4305d726ecdc6ef1929001621dfe13a39d3a0b/scanner_sink.hpp">Permalink</a>

  <!-- blob contrib key: blob_contributors:v21:95b5e317f0fed0f45487717b1510b35a -->

  <div class="file-navigation">
    
<div class="select-menu branch-select-menu js-menu-container js-select-menu float-left">
  <button class=" btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    
    type="button" aria-label="Switch branches or tags" aria-expanded="false" aria-haspopup="true">
      <i>Branch:</i>
      <span class="js-select-button css-truncate-target">testing</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg class="octicon octicon-x js-menu-close" role="img" aria-label="Close" viewBox="0 0 12 16" version="1.1" width="12" height="16"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Find or create a branch…" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Find or create a branch…" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/RileyHL/gr-scan/blob/FM_eval2/scanner_sink.hpp"
               data-name="FM_eval2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                FM_eval2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/RileyHL/gr-scan/blob/filesrc_testing/scanner_sink.hpp"
               data-name="filesrc_testing"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                filesrc_testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/RileyHL/gr-scan/blob/master/scanner_sink.hpp"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/RileyHL/gr-scan/blob/testing/scanner_sink.hpp"
               data-name="testing"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                testing
              </span>
            </a>
        </div>

          <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" action="/RileyHL/gr-scan/branches" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="Vly4Gfju16SJ+GHhxwnDcEPCb6vcSK/9s8dp7N7TTRofJvAteSqcoSWWvy37CkK1Aw5veXIrXWSdp6ML1kRElQ==" />
          <svg class="octicon octicon-git-branch select-menu-item-icon" viewBox="0 0 10 16" version="1.1" width="10" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M10 5c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v.3c-.02.52-.23.98-.63 1.38-.4.4-.86.61-1.38.63-.83.02-1.48.16-2 .45V4.72a1.993 1.993 0 0 0-1-3.72C.88 1 0 1.89 0 3a2 2 0 0 0 1 1.72v6.56c-.59.35-1 .99-1 1.72 0 1.11.89 2 2 2 1.11 0 2-.89 2-2 0-.53-.2-1-.53-1.36.09-.06.48-.41.59-.47.25-.11.56-.17.94-.17 1.05-.05 1.95-.45 2.75-1.25S8.95 7.77 9 6.73h-.02C9.59 6.37 10 5.73 10 5zM2 1.8c.66 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2C1.35 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2zm0 12.41c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm6-8c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
            <div class="select-menu-item-text">
              <span class="select-menu-item-heading">Create branch: <span class="js-new-item-name"></span></span>
              <span class="description">from ‘testing’</span>
            </div>
            <input type="hidden" name="name" id="name" class="js-new-item-value">
            <input type="hidden" name="branch" id="branch" value="testing">
            <input type="hidden" name="path" id="path" value="scanner_sink.hpp">
</form>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

    <div class="BtnGroup float-right">
      <a href="/RileyHL/gr-scan/find/testing"
            class="js-pjax-capture-input btn btn-sm BtnGroup-item"
            data-pjax
            data-hotkey="t">
        Find file
      </a>
      <clipboard-copy
            for="blob-path"
            aria-label="Copy file path to clipboard"
            class="btn btn-sm BtnGroup-item tooltipped tooltipped-s"
            copied-label="Copied!">
        Copy path
      </clipboard-copy>
    </div>
    <div id="blob-path" class="breadcrumb">
      <span class="repo-root js-repo-root"><span class="js-path-segment"><a data-pjax="true" href="/RileyHL/gr-scan/tree/testing"><span>gr-scan</span></a></span></span><span class="separator">/</span><strong class="final-path">scanner_sink.hpp</strong>
    </div>
  </div>


  <include-fragment src="/RileyHL/gr-scan/contributors/testing/scanner_sink.hpp" class="commit-tease">
    <div>
      Fetching contributors&hellip;
    </div>

    <div class="commit-tease-contributors">
      <img alt="" class="loader-loading float-left" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" height="16" />
      <span class="loader-error">Cannot retrieve contributors at this time</span>
    </div>
</include-fragment>


  <div class="file">
    <div class="file-header">
  <div class="file-actions">

    <div class="BtnGroup">
      <a id="raw-url" class="btn btn-sm BtnGroup-item" href="/RileyHL/gr-scan/raw/testing/scanner_sink.hpp">Raw</a>
        <a class="btn btn-sm js-update-url-with-hash BtnGroup-item" data-hotkey="b" href="/RileyHL/gr-scan/blame/testing/scanner_sink.hpp">Blame</a>
      <a rel="nofollow" class="btn btn-sm BtnGroup-item" href="/RileyHL/gr-scan/commits/testing/scanner_sink.hpp">History</a>
    </div>

        <a class="btn-octicon tooltipped tooltipped-nw"
           href="https://desktop.github.com"
           aria-label="Open this file in GitHub Desktop"
           data-ga-click="Repository, open with desktop, type:windows">
            <svg class="octicon octicon-device-desktop" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z"/></svg>
        </a>

          <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="inline-form js-update-url-with-hash" action="/RileyHL/gr-scan/edit/testing/scanner_sink.hpp" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="usy7fw4vwyeHcuIQ4aXmOsxZzvrmxQRV1y+EYEhUhCnOZ3hxA7vLkvtMqzAS4qHcS3jpBhtKtgHNzuHJVydMoA==" />
            <button class="btn-octicon tooltipped tooltipped-nw" type="submit"
              aria-label="Edit this file" data-hotkey="e" data-disable-with>
              <svg class="octicon octicon-pencil" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>
            </button>
</form>
        <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="inline-form" action="/RileyHL/gr-scan/delete/testing/scanner_sink.hpp" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="IZg+Y+P83aF0j/Oq9ygx+SBDjI6u1g8SuTRsfoubBu5mVdLR3vponBXRclebVmZnD3jhho9GZA2pXS4brMozcA==" />
          <button class="btn-octicon btn-octicon-danger tooltipped tooltipped-nw" type="submit"
            aria-label="Delete this file" data-disable-with>
            <svg class="octicon octicon-trashcan" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"/></svg>
          </button>
</form>  </div>

  <div class="file-info">
      387 lines (346 sloc)
      <span class="file-info-divider"></span>
    15.7 KB
  </div>
</div>

    

  <div itemprop="text" class="blob-wrapper data type-c">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line"> <span class="pl-c"><span class="pl-c">/*</span></span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	gr-scan - A GNU Radio signal scanner</span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	Copyright (C) 2015 Jason A. Donenfeld &lt;Jason@zx2c4.com&gt;. All Rights Reserved.</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	Copyright (C) 2012  Nicholas Tomlinson</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	This program is free software: you can redistribute it and/or modify</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	it under the terms of the GNU General Public License as published by</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	the Free Software Foundation, either version 3 of the License, or</span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	(at your option) any later version.</span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	This program is distributed in the hope that it will be useful,</span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	but WITHOUT ANY WARRANTY; without even the implied warranty of</span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	GNU General Public License for more details.</span></td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	You should have received a copy of the GNU General Public License</span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	along with this program.  If not, see &lt;http://www.gnu.org/licenses/&gt;.</span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>ctime<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>chrono<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>thread<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>set<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>utility<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>vector<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>boost/shared_ptr.hpp<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>experimental/filesystem<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>gnuradio/top_block.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>gnuradio/block.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>gnuradio/io_signature.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>gnuradio/blocks/file_sink.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>osmosdr/source.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line"><span class="pl-k">class</span> <span class="pl-en">scanner_sink</span> : <span class="pl-k">public</span> <span class="pl-en">gr</span>::block</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line"><span class="pl-k">public:</span></td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">	<span class="pl-en">scanner_sink</span>(osmosdr::source::sptr source, <span class="pl-k">unsigned</span> <span class="pl-k">int</span> vector_length, <span class="pl-k">double</span> centre_freq_1,</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line">		     <span class="pl-k">double</span> centre_freq_2, <span class="pl-k">double</span> bandwidth0, <span class="pl-k">double</span> bandwidth1, <span class="pl-k">double</span> bandwidth2,</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line">		     <span class="pl-k">double</span> step, <span class="pl-k">unsigned</span> <span class="pl-k">int</span> avg_size, <span class="pl-k">double</span> spread, <span class="pl-k">double</span> threshold, <span class="pl-k">double</span> ptime,</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">		     gr::blocks::file_meta_sink::sptr fs, gr::blocks::throttle::sptr thr,</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">				 <span class="pl-k">const</span> std::string &amp;outcsv) :</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">		<span class="pl-en">gr::block</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>scanner_sink<span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line">			  <span class="pl-en">gr::io_signature::make</span>(<span class="pl-c1">1</span>, <span class="pl-c1">1</span>, <span class="pl-k">sizeof</span> (<span class="pl-k">float</span>) * vector_length),</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line">			  gr::io_signature::make(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>, <span class="pl-c1">0</span>)),</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line">		m_source(source), <span class="pl-c"><span class="pl-c">//</span>We need the source in order to be able to control it</span></td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">		m_buffer(<span class="pl-k">new</span> <span class="pl-k">float</span>[vector_length]), <span class="pl-c"><span class="pl-c">//</span>buffer into which we accumulate the total for averaging</span></td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">		m_vector_length(vector_length), <span class="pl-c"><span class="pl-c">//</span>size of the FFT</span></td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line">		m_count(<span class="pl-c1">0</span>), <span class="pl-c"><span class="pl-c">//</span>number of FFTs totalled in the buffer</span></td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line">		m_wait_count(<span class="pl-c1">0</span>), <span class="pl-c"><span class="pl-c">//</span>number of times we&#39;ve listenned on this frequency</span></td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line">		m_avg_size(avg_size), <span class="pl-c"><span class="pl-c">//</span>the number of FFTs we should average over</span></td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line">		m_step(step), <span class="pl-c"><span class="pl-c">//</span>the amount by which the frequency shold be incremented</span></td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">		m_centre_freq_1(centre_freq_1), <span class="pl-c"><span class="pl-c">//</span>start frequency (and then current frequency)</span></td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line">		m_centre_freq_2(centre_freq_2), <span class="pl-c"><span class="pl-c">//</span>end frequency</span></td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">		m_bandwidth0(bandwidth0), <span class="pl-c"><span class="pl-c">//</span>samples per second</span></td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">		m_bandwidth1(bandwidth1), <span class="pl-c"><span class="pl-c">//</span>fine window (band)width</span></td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">		m_bandwidth2(bandwidth2), <span class="pl-c"><span class="pl-c">//</span>coarse window (band)width</span></td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">		m_threshold(threshold), <span class="pl-c"><span class="pl-c">//</span>threshold in dB for discovery</span></td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">		m_spread(spread), <span class="pl-c"><span class="pl-c">//</span>minumum distance between radio signals (overlapping scans might produce slightly different frequencies)</span></td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line">		m_time(ptime), <span class="pl-c"><span class="pl-c">//</span>the amount of time to listen on the same frequency for</span></td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line">		m_start_time(time(<span class="pl-c1">0</span>)), <span class="pl-c"><span class="pl-c">//</span>the start time of the scan (useful for logging/reporting/monitoring)</span></td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">		m_fs(fs),</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">		m_thr(thr),</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">		m_outcsv(<span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">ZeroBuffer</span>();</td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">//</span> Create directory for the IQ files, if outcsv is not empty, chech csv directory</span></td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line">	  <span class="pl-c1">create_run_dirs</span>(!outcsv.<span class="pl-c1">empty</span>());</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">std::remove</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>blank.bin.hdr<span class="pl-pds">&quot;</span></span>); <span class="pl-c"><span class="pl-c">//</span> Clean up from initialization of file meta sink</span></td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">std::remove</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>blank.bin<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">		m_work_done = <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (!outcsv.<span class="pl-c1">empty</span>()) {</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">bool</span> write_csv_header = <span class="pl-c1">access</span>((m_run_info + outcsv).<span class="pl-c1">c_str</span>(), F_OK) == -<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">			m_outcsv = <span class="pl-c1">fopen</span>((m_csv_dir+m_run_info+outcsv).<span class="pl-c1">c_str</span>(), <span class="pl-s"><span class="pl-pds">&quot;</span>a+<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (!m_outcsv) {</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">fprintf</span>(stderr, <span class="pl-s"><span class="pl-pds">&quot;</span>[-] Error opening output CSV file %s<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, outcsv.<span class="pl-c1">c_str</span>());</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">exit</span>(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (write_csv_header) {</td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">fprintf</span>(m_outcsv, <span class="pl-s"><span class="pl-pds">&quot;</span>time,frequency_mhz,width_khz,peak,dif,filename,mod_type,certainty<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">fflush</span>(m_outcsv);</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">virtual</span> <span class="pl-en">~scanner_sink</span>()</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">delete []</span>m_buffer; <span class="pl-c"><span class="pl-c">//</span>delete the buffer</span></td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (m_outcsv)</td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">fclose</span>(m_outcsv);</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line"><span class="pl-k">private:</span></td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">virtual</span> <span class="pl-k">int</span> <span class="pl-en">general_work</span>(<span class="pl-k">int</span> noutput_items, gr_vector_int &amp;ninput_items, gr_vector_const_void_star &amp;input_items, gr_vector_void_star &amp;output_items)</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (<span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; ninput_items[<span class="pl-c1">0</span>]; ++i)</td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ProcessVector</span>(<span class="pl-k">static_cast</span>&lt;<span class="pl-k">const</span> <span class="pl-k">float</span> *&gt;(input_items[<span class="pl-c1">0</span>]) + i * m_vector_length);</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">consume_each</span>(ninput_items[<span class="pl-c1">0</span>]);</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (m_work_done)</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">			<span class="pl-c"><span class="pl-c">/*</span>Returning -1 signals to the gnuradio scheduler that all work is done.</span></td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				Doing so will cleanly shutdown the flow graph, exit normally, and bring</span></td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				about world peace. However, because there is a fork in the connections,</span></td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				one path goes to a file sink and one to a this sink, gnuradio can&#39;t</span></td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				handle propagating the WORK_DONE signal to the other branch and a</span></td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				segfault occurs. This entire API is held together with duct tape and</span></td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				wishful thinking. I mean holy hell, how friggin hard is it to exit a</span></td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				process cleanly? And all the scheduler would have to do is pass WORK_DONE</span></td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				to the top_block and then the top_block would immediately discconect the</span></td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				blocks. *MINDBLOWN* Where&#39;s my Nobel, because clearly I&#39;m thinking on</span></td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				a totally different level. I&#39;m playing 67D, underwater connect four over</span></td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line"><span class="pl-c">				here.</span></td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line">			<span class="pl-c"><span class="pl-c">//</span>return -1;</span></td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">void</span> <span class="pl-en">ProcessVector</span>(<span class="pl-k">const</span> <span class="pl-k">float</span> *input)</td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">//</span>Add the FFT to the total</span></td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (<span class="pl-k">unsigned</span> <span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; m_vector_length; ++i)</td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line">			m_buffer[i] += input[i];</td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line">		++m_count; <span class="pl-c"><span class="pl-c">//</span>increment the total</span></td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (m_avg_size != m_count)</td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span>; <span class="pl-c"><span class="pl-c">//</span>we haven&#39;t yet averaged over the number we intended to</span></td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">double</span> freqs[m_vector_length]; <span class="pl-c"><span class="pl-c">//</span>for convenience</span></td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">float</span> bands0[m_vector_length]; <span class="pl-c"><span class="pl-c">//</span>bands in order of frequency</span></td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">float</span> bands1[m_vector_length]; <span class="pl-c"><span class="pl-c">//</span>fine window bands</span></td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">float</span> bands2[m_vector_length]; <span class="pl-c"><span class="pl-c">//</span>coarse window bands</span></td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">Rearrange</span>(bands0, freqs, m_centre_freq_1, m_bandwidth0); <span class="pl-c"><span class="pl-c">//</span>organise the buffer into a convenient order (saves to bands0)</span></td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">GetBands</span>(bands0, bands1, m_bandwidth1); <span class="pl-c"><span class="pl-c">//</span>apply the fine window (saves to bands1)</span></td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">GetBands</span>(bands0, bands2, m_bandwidth2); <span class="pl-c"><span class="pl-c">//</span>apply the coarse window (saves to bands2)</span></td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PrintSignals</span>(freqs, bands1, bands2);</td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line">		m_count = <span class="pl-c1">0</span>; <span class="pl-c"><span class="pl-c">//</span>next time, we&#39;re starting from scratch - so note this</span></td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">ZeroBuffer</span>(); <span class="pl-c"><span class="pl-c">//</span>get ready to start again</span></td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line">		++m_wait_count; <span class="pl-c"><span class="pl-c">//</span>we&#39;ve just done another listen</span></td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (m_time / (m_bandwidth0 / <span class="pl-k">static_cast</span>&lt;<span class="pl-k">double</span>&gt;(m_vector_length * m_avg_size)) &lt;= m_wait_count) { <span class="pl-c"><span class="pl-c">//</span>if we should move to the next frequency</span></td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">for</span> (;;) { <span class="pl-c"><span class="pl-c">//</span>keep moving to the next frequency until we get to one we can listen on (copes with holes in the tunable range)</span></td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">if</span> (m_centre_freq_2 &lt;= m_centre_freq_1) { <span class="pl-c"><span class="pl-c">//</span>we reached the end!</span></td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code blob-code-inner js-file-line">					<span class="pl-c1">fprintf</span>(stderr, <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span>[*] Finished scanning<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>); <span class="pl-c"><span class="pl-c">//</span>say we&#39;re exiting</span></td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code blob-code-inner js-file-line">					m_work_done = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code blob-code-inner js-file-line">					<span class="pl-c"><span class="pl-c">//</span>break;</span></td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code blob-code-inner js-file-line">					<span class="pl-c"><span class="pl-c">/*</span>Ham-fisted, bull-in-a-china-shop solution to closing because</span></td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code blob-code-inner js-file-line"><span class="pl-c">						gnuradio wants to crush any remaining hope out of your pathetic</span></td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code blob-code-inner js-file-line"><span class="pl-c">						existence.</span></td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code blob-code-inner js-file-line"><span class="pl-c">					<span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code blob-code-inner js-file-line">					<span class="pl-c1">exit</span>(<span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code blob-code-inner js-file-line">				}</td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code blob-code-inner js-file-line">				m_centre_freq_1 += m_step; <span class="pl-c"><span class="pl-c">//</span>calculate the frequency we should change to</span></td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">double</span> actual = m_source-&gt;<span class="pl-c1">set_center_freq</span>(m_centre_freq_1); <span class="pl-c"><span class="pl-c">//</span>change frequency</span></td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">if</span> ((m_centre_freq_1 - actual &lt; <span class="pl-c1">10.0</span>) &amp;&amp; (actual - m_centre_freq_1 &lt; <span class="pl-c1">10.0</span>)) <span class="pl-c"><span class="pl-c">//</span>success</span></td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code blob-code-inner js-file-line">					<span class="pl-k">break</span>; <span class="pl-c"><span class="pl-c">//</span>so stop changing frequency</span></td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code blob-code-inner js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code blob-code-inner js-file-line">			m_wait_count = <span class="pl-c1">0</span>; <span class="pl-c"><span class="pl-c">//</span>new frequency - we&#39;ve listened 0 times on it</span></td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">void</span> <span class="pl-en">PrintSignals</span>(<span class="pl-k">double</span> *freqs, <span class="pl-k">float</span> *bands1, <span class="pl-k">float</span> *bands2)</td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">/*</span> Calculate the current time after start <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> <span class="pl-k">int</span> t = <span class="pl-c1">time</span>(<span class="pl-c1">NULL</span>) - m_start_time;</td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> <span class="pl-k">int</span> hours = t / <span class="pl-c1">3600</span>;</td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> <span class="pl-k">int</span> minutes = (t % <span class="pl-c1">3600</span>) / <span class="pl-c1">60</span>;</td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> <span class="pl-k">int</span> seconds = t % <span class="pl-c1">60</span>;</td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">//</span>Print that we finished scanning something</span></td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">fprintf</span>(stderr, <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span>%02u:%02u:%02u: Finished scanning %f MHz - %f MHz<span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code blob-code-inner js-file-line">			hours, minutes, seconds, (m_centre_freq_1 - m_bandwidth0 / <span class="pl-c1">2.0</span>) / <span class="pl-c1">1000000.0</span>, (m_centre_freq_1 + m_bandwidth0 / <span class="pl-c1">2.0</span>) / <span class="pl-c1">1000000.0</span>);</td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">/*</span> Calculate the differences between the fine and coarse window bands <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">float</span> diffs[m_vector_length];</td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (<span class="pl-k">unsigned</span> <span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; m_vector_length; ++i)</td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code blob-code-inner js-file-line">			diffs[i] = bands1[i] - bands2[i];</td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">/*</span> Look through to find signals <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">//</span>start with no signal found (note: diffs[0] should always be very negative because of the way the windowing function works)</span></td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">bool</span> sig = <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> <span class="pl-k">int</span> peak = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (<span class="pl-k">unsigned</span> <span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; m_vector_length; ++i) {</td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (sig) { <span class="pl-c"><span class="pl-c">//</span>we&#39;re already in a signal</span></td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">if</span> (diffs[peak] &lt; diffs[i]) <span class="pl-c"><span class="pl-c">//</span>we found a rough end to the signal</span></td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code blob-code-inner js-file-line">					peak = i;</td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">if</span> (diffs[i] &lt; m_threshold) { <span class="pl-c"><span class="pl-c">//</span>we&#39;re transitionning to the end</span></td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code blob-code-inner js-file-line">					<span class="pl-c"><span class="pl-c">/*</span> look for the &quot;start&quot; of the signal <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code blob-code-inner js-file-line">					<span class="pl-k">unsigned</span> <span class="pl-k">int</span> min = peak; <span class="pl-c"><span class="pl-c">//</span>scan outwards for the minimum</span></td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code blob-code-inner js-file-line">					<span class="pl-k">while</span> ((diffs[min] &gt; diffs[peak] - <span class="pl-c1">3.0</span>) &amp;&amp; (min &gt; <span class="pl-c1">0</span>)){ <span class="pl-c"><span class="pl-c">//</span>while the signal is still more than half power</span></td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code blob-code-inner js-file-line">						min--;</td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code blob-code-inner js-file-line">					}</td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code blob-code-inner js-file-line">					<span class="pl-c"><span class="pl-c">/*</span> look for the &quot;end&quot; <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code blob-code-inner js-file-line">					<span class="pl-k">unsigned</span> <span class="pl-k">int</span> max = peak;</td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code blob-code-inner js-file-line">					<span class="pl-k">while</span> ((diffs[max] &gt; diffs[peak] - <span class="pl-c1">3.0</span>) &amp;&amp; (max &lt; m_vector_length - <span class="pl-c1">1</span>))</td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code blob-code-inner js-file-line">						max++;</td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code blob-code-inner js-file-line">					sig = <span class="pl-c1">false</span>; <span class="pl-c"><span class="pl-c">//</span>we&#39;re now in no signal state</span></td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code blob-code-inner js-file-line">					<span class="pl-c"><span class="pl-c">/*</span> Print the signal if it&#39;s a genuine hit <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code blob-code-inner js-file-line">					<span class="pl-k">if</span> (<span class="pl-c1">TrySignal</span>(freqs[max], freqs[min])) {</td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code blob-code-inner js-file-line">						<span class="pl-c1">fprintf</span>(stderr, <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span>[+] %02u:%02u:%02u: Found signal: at %f MHz of width %f kHz, peak power %f dB (difference %f dB) <span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code blob-code-inner js-file-line">							hours, minutes, seconds, (freqs[max] + freqs[min]) / <span class="pl-c1">2000000.0</span>, (freqs[max] - freqs[min])/<span class="pl-c1">1000.0</span>, bands1[peak], diffs[peak]);</td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code blob-code-inner js-file-line">						<span class="pl-c1">WriteCSV</span>((freqs[max] + freqs[min]) / <span class="pl-c1">2000000.0</span>,</td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code blob-code-inner js-file-line">							 (freqs[max] - freqs[min])/<span class="pl-c1">1000.0</span>,</td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code blob-code-inner js-file-line">							 bands1[peak], diffs[peak]);</td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code blob-code-inner js-file-line">					}</td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code blob-code-inner js-file-line">				}</td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code blob-code-inner js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">else</span> <span class="pl-k">if</span> (diffs[i] &gt;= m_threshold) { <span class="pl-c"><span class="pl-c">//</span>we found a signal!</span></td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code blob-code-inner js-file-line">				peak = i;</td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code blob-code-inner js-file-line">				sig = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code blob-code-inner js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">bool</span> <span class="pl-en">TrySignal</span>(<span class="pl-k">double</span> min, <span class="pl-k">double</span> max)</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">double</span> mid = (min + max) / <span class="pl-c1">2.0</span>; <span class="pl-c"><span class="pl-c">//</span>calculate the midpoint of the signal</span></td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">/*</span> check to see if the signal is too close to the centre frequency (a signal often erroniously appears there) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> ((mid - m_centre_freq_1 &lt; m_spread) &amp;&amp; (m_centre_freq_1 - mid &lt; m_spread))</td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span> <span class="pl-c1">false</span>; <span class="pl-c"><span class="pl-c">//</span>if so, this is not a genuine hit</span></td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">/*</span> check to see if the signal is close to any other (the same signal often appears with a slightly different centre frequency) <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">BOOST_FOREACH</span> (<span class="pl-k">double</span> <span class="pl-c1">signal</span>, m_signals){</td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> ((mid - <span class="pl-c1">signal</span> &lt; m_spread) &amp;&amp; (<span class="pl-c1">signal</span> - mid &lt; m_spread)) <span class="pl-c"><span class="pl-c">//</span>too close</span></td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">return</span> <span class="pl-c1">false</span>; <span class="pl-c"><span class="pl-c">//</span>if so, this is not a genuine hit</span></td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">/*</span> Genuine hit!:D <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code blob-code-inner js-file-line">		m_signals.<span class="pl-c1">insert</span>(mid); <span class="pl-c"><span class="pl-c">//</span>add to the set of signals</span></td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>; <span class="pl-c"><span class="pl-c">//</span>genuine hit</span></td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">void</span> <span class="pl-en">Rearrange</span>(<span class="pl-k">float</span> *bands, <span class="pl-k">double</span> *freqs, <span class="pl-k">double</span> centre, <span class="pl-k">double</span> bandwidth)</td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">double</span> samplewidth = bandwidth/(<span class="pl-k">double</span>)m_vector_length;</td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (<span class="pl-k">unsigned</span> <span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; m_vector_length; ++i) {</td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code blob-code-inner js-file-line">			<span class="pl-c"><span class="pl-c">/*</span> FFT is arranged starting at 0 Hz at the start, rather than in the middle <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (i &lt; m_vector_length / <span class="pl-c1">2</span>) <span class="pl-c"><span class="pl-c">//</span>lower half of the fft</span></td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code blob-code-inner js-file-line">				bands[i + m_vector_length / <span class="pl-c1">2</span>] = m_buffer[i] / <span class="pl-k">static_cast</span>&lt;<span class="pl-k">float</span>&gt;(m_avg_size);</td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">else</span> <span class="pl-c"><span class="pl-c">//</span>upper half of the fft</span></td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code blob-code-inner js-file-line">				bands[i - m_vector_length / <span class="pl-c1">2</span>] = m_buffer[i] / <span class="pl-k">static_cast</span>&lt;<span class="pl-k">float</span>&gt;(m_avg_size);</td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code blob-code-inner js-file-line">			freqs[i] = centre + i * samplewidth - bandwidth / <span class="pl-c1">2.0</span>; <span class="pl-c"><span class="pl-c">//</span>calculate the frequency of this sample</span></td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">void</span> <span class="pl-en">GetBands</span>(<span class="pl-k">float</span> *powers, <span class="pl-k">float</span> *bands, <span class="pl-k">unsigned</span> <span class="pl-k">int</span> bandwidth)</td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">double</span> samplewidth = m_bandwidth0 / <span class="pl-k">static_cast</span>&lt;<span class="pl-k">double</span>&gt;(m_vector_length); <span class="pl-c"><span class="pl-c">//</span>the width in Hz of each sample</span></td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> <span class="pl-k">int</span> bandwidth_samples = bandwidth / samplewidth; <span class="pl-c"><span class="pl-c">//</span>the number of samples in our window</span></td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (<span class="pl-k">unsigned</span> <span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; m_vector_length; ++i) <span class="pl-c"><span class="pl-c">//</span>we&#39;re averaging, so start with 0</span></td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code blob-code-inner js-file-line">			bands[i] = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (<span class="pl-k">unsigned</span> <span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; m_vector_length; ++i){ <span class="pl-c"><span class="pl-c">//</span>over the entire FFT</span></td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code blob-code-inner js-file-line">			<span class="pl-c"><span class="pl-c">//</span>make sure the buffer contains the entire window</span></td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> ((i &gt;= bandwidth_samples / <span class="pl-c1">2</span>) &amp;&amp; (i &lt; m_vector_length + bandwidth_samples / <span class="pl-c1">2</span> - bandwidth_samples)){</td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">for</span> (<span class="pl-k">unsigned</span> <span class="pl-k">int</span> j = <span class="pl-c1">0</span>; j &lt; bandwidth_samples; ++j) <span class="pl-c"><span class="pl-c">//</span>iterate over the window for averaging</span></td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code blob-code-inner js-file-line">					bands[i + j - bandwidth_samples / <span class="pl-c1">2</span>] += powers[i] / <span class="pl-k">static_cast</span>&lt;<span class="pl-k">float</span>&gt;(bandwidth_samples); <span class="pl-c"><span class="pl-c">//</span>add this sample to the bands</span></td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code blob-code-inner js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">void</span> <span class="pl-en">ZeroBuffer</span>()</td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">/*</span> writes zeros to m_buffer <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (<span class="pl-k">unsigned</span> <span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; m_vector_length; ++i)</td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code blob-code-inner js-file-line">			m_buffer[i] = <span class="pl-c1">0.0</span>;</td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">void</span> <span class="pl-en">WriteCSV</span>(<span class="pl-k">float</span> freq, <span class="pl-k">float</span> width, <span class="pl-k">float</span> peak, <span class="pl-k">float</span> diff)</td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">time_t</span> timer;</td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">struct</span> <span class="pl-en">tm</span> *tm_info;</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">char</span> buf[<span class="pl-c1">26</span>];</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">char</span> time_stamp[<span class="pl-c1">7</span>];</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (!m_outcsv)</td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">time</span>(&amp;timer);</td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code blob-code-inner js-file-line">		tm_info = <span class="pl-c1">localtime</span>(&amp;timer);</td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">strftime</span>(buf, <span class="pl-k">sizeof</span>(buf), <span class="pl-s"><span class="pl-pds">&quot;</span>%Y%m%d_%H%M%S<span class="pl-pds">&quot;</span></span>, tm_info);</td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">strftime</span>(time_stamp, <span class="pl-c1">7</span>, <span class="pl-s"><span class="pl-pds">&quot;</span>%H%M%S<span class="pl-pds">&quot;</span></span>, tm_info);</td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">//</span> Record IQ data and return name of file</span></td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code blob-code-inner js-file-line">		std::string filename = <span class="pl-c1">RecordIQ</span>(freq, width, time_stamp);</td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">fprintf</span>(m_outcsv, <span class="pl-s"><span class="pl-pds">&quot;</span>%s,%f,%f,%f,%f,%s,%s,%f<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, buf, freq, width, peak, diff, filename.<span class="pl-c1">c_str</span>(), <span class="pl-s"><span class="pl-pds">&quot;</span>unk<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">0.0</span>);</td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">fflush</span>(m_outcsv);</td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">void</span> <span class="pl-en">create_run_dirs</span>(<span class="pl-k">bool</span> csv)</td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">char</span> dat[<span class="pl-c1">10</span>]; <span class="pl-c"><span class="pl-c">//</span> Date</span></td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">char</span> ts[<span class="pl-c1">7</span>];   <span class="pl-c"><span class="pl-c">//</span> time stamp</span></td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">strftime</span>(dat, <span class="pl-c1">10</span>, <span class="pl-s"><span class="pl-pds">&quot;</span>%d%b%Y<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">localtime</span>(&amp;m_start_time)); <span class="pl-c"><span class="pl-c">//</span> Format date</span></td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">strftime</span>(ts, <span class="pl-c1">7</span>, <span class="pl-s"><span class="pl-pds">&quot;</span>%H%M%S<span class="pl-pds">&quot;</span></span>, <span class="pl-c1">localtime</span>(&amp;m_start_time));   <span class="pl-c"><span class="pl-c">//</span> Format time stamp</span></td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code blob-code-inner js-file-line">			std::string bin_dir = <span class="pl-s"><span class="pl-pds">&quot;</span>bin_files<span class="pl-pds">&quot;</span></span>;              					 <span class="pl-c"><span class="pl-c">//</span> Main bin directory</span></td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code blob-code-inner js-file-line">			m_csv_dir = <span class="pl-s"><span class="pl-pds">&quot;</span>csv_files/<span class="pl-pds">&quot;</span></span>;																	 <span class="pl-c"><span class="pl-c">//</span> Directory for CSV file</span></td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code blob-code-inner js-file-line">			std::string soi_dir = <span class="pl-s"><span class="pl-pds">&quot;</span>SOI_<span class="pl-pds">&quot;</span></span>;                 						<span class="pl-c"><span class="pl-c">//</span> Daily runs</span></td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code blob-code-inner js-file-line">			soi_dir.<span class="pl-c1">append</span>(dat);                           						<span class="pl-c"><span class="pl-c">//</span> Append date</span></td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code blob-code-inner js-file-line">			std::string run_dir = <span class="pl-s"><span class="pl-pds">&quot;</span>run_<span class="pl-pds">&quot;</span></span>;                 						<span class="pl-c"><span class="pl-c">//</span> Individual run directory</span></td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code blob-code-inner js-file-line">			run_dir.<span class="pl-c1">append</span>(ts);                            						<span class="pl-c"><span class="pl-c">//</span> append time stamp</span></td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code blob-code-inner js-file-line">			m_iq_dir = bin_dir + <span class="pl-s"><span class="pl-pds">&quot;</span>/<span class="pl-pds">&quot;</span></span> + soi_dir + <span class="pl-s"><span class="pl-pds">&quot;</span>/<span class="pl-pds">&quot;</span></span> + run_dir + <span class="pl-s"><span class="pl-pds">&quot;</span>/<span class="pl-pds">&quot;</span></span>; <span class="pl-c"><span class="pl-c">//</span> Complete file path</span></td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code blob-code-inner js-file-line">			m_run_info = soi_dir + <span class="pl-s"><span class="pl-pds">&quot;</span>-<span class="pl-pds">&quot;</span></span> + run_dir + <span class="pl-s"><span class="pl-pds">&quot;</span>-<span class="pl-pds">&quot;</span></span>;								<span class="pl-c"><span class="pl-c">//</span> CSV file prefix</span></td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code blob-code-inner js-file-line">	    <span class="pl-c"><span class="pl-c">//</span> Check to see if daily directory exists</span></td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (!<span class="pl-c1">std::experimental::filesystem::is_directory</span>(bin_dir + <span class="pl-s"><span class="pl-pds">&quot;</span>/<span class="pl-pds">&quot;</span></span> + soi_dir))</td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code blob-code-inner js-file-line">			{</td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code blob-code-inner js-file-line">				<span class="pl-c"><span class="pl-c">//</span> Make sure main directory exists</span></td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">if</span>(!<span class="pl-c1">std::experimental::filesystem::is_directory</span>(bin_dir))</td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code blob-code-inner js-file-line">				{</td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code blob-code-inner js-file-line">					<span class="pl-c"><span class="pl-c">//</span> Create main directory if absent</span></td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code blob-code-inner js-file-line">					<span class="pl-c1">std::experimental::filesystem::create_directory</span>(bin_dir);</td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code blob-code-inner js-file-line">				}</td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code blob-code-inner js-file-line">				<span class="pl-c"><span class="pl-c">//</span> Create daily directory if absent</span></td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">std::experimental::filesystem::create_directory</span>(bin_dir + <span class="pl-s"><span class="pl-pds">&quot;</span>/<span class="pl-pds">&quot;</span></span> +soi_dir);</td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code blob-code-inner js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code blob-code-inner js-file-line">			<span class="pl-c"><span class="pl-c">//</span> Create run directory</span></td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">std::experimental::filesystem::create_directory</span>(m_iq_dir);</td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code blob-code-inner js-file-line">			<span class="pl-c"><span class="pl-c">//</span> csv will be true if an output csv file was specified, so we should check</span></td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code blob-code-inner js-file-line">			<span class="pl-c"><span class="pl-c">//</span> the existence of the csv_directory</span></td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> ((csv) &amp;&amp; (!<span class="pl-c1">std::experimental::filesystem::is_directory</span>(m_csv_dir)))</td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code blob-code-inner js-file-line">			{</td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">std::experimental::filesystem::create_directory</span>(m_csv_dir);</td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code blob-code-inner js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code blob-code-inner js-file-line">	std::string <span class="pl-en">RecordIQ</span>(<span class="pl-k">float</span> frq, <span class="pl-k">float</span> bw, <span class="pl-k">char</span> clk_time[<span class="pl-c1">7</span>])</td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code blob-code-inner js-file-line">		m_source-&gt;<span class="pl-c1">set_center_freq</span>(frq*<span class="pl-c1">1000000</span>);  <span class="pl-c"><span class="pl-c">//</span> Set source to current freq</span></td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code blob-code-inner js-file-line">		m_source-&gt;<span class="pl-c1">set_sample_rate</span>(bw*<span class="pl-c1">2000</span>);      <span class="pl-c"><span class="pl-c">//</span> Set sample rate to twice bw</span></td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code blob-code-inner js-file-line">		m_thr-&gt;<span class="pl-c1">set_sample_rate</span>(bw*<span class="pl-c1">2000</span>);         <span class="pl-c"><span class="pl-c">//</span> Set throttle to sample rate</span></td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code blob-code-inner js-file-line">		<span class="pl-c"><span class="pl-c">//</span> Generate filename</span></td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code blob-code-inner js-file-line">		std::string file_name = m_iq_dir + <span class="pl-c1">std::to_string</span>(frq) + <span class="pl-s"><span class="pl-pds">&quot;</span>-<span class="pl-pds">&quot;</span></span> + <span class="pl-c1">std::to_string</span>(bw)+<span class="pl-s"><span class="pl-pds">&quot;</span>_<span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code blob-code-inner js-file-line">		file_name.<span class="pl-c1">append</span>(clk_time);               <span class="pl-c"><span class="pl-c">//</span> Append time stamp</span></td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code blob-code-inner js-file-line">		m_fs-&gt;<span class="pl-c1">open</span>(file_name + <span class="pl-s"><span class="pl-pds">&quot;</span>.bin<span class="pl-pds">&quot;</span></span>);           <span class="pl-c"><span class="pl-c">//</span> Tell file sink to open a file</span></td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">std::this_thread::sleep_for</span>(<span class="pl-c1">std::chrono::milliseconds</span>(<span class="pl-c1">400</span>));                                <span class="pl-c"><span class="pl-c">//</span> Wait 400ms</span></td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code blob-code-inner js-file-line">		m_fs-&gt;<span class="pl-c1">close</span>();                           <span class="pl-c"><span class="pl-c">//</span> Tell file sink to close file</span></td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code blob-code-inner js-file-line">		m_source-&gt;<span class="pl-c1">set_sample_rate</span>(m_bandwidth0); <span class="pl-c"><span class="pl-c">//</span> Reset source bw</span></td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code blob-code-inner js-file-line">		m_thr-&gt;<span class="pl-c1">set_sample_rate</span>(m_bandwidth0);    <span class="pl-c"><span class="pl-c">//</span> Reset throttle bandwidth</span></td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> (file_name+<span class="pl-s"><span class="pl-pds">&quot;</span>.bin<span class="pl-pds">&quot;</span></span>);                <span class="pl-c"><span class="pl-c">//</span> Return filename</span></td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">bool</span> m_work_done;</td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code blob-code-inner js-file-line">	std::string m_iq_dir;</td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code blob-code-inner js-file-line">	std::string m_csv_dir;</td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code blob-code-inner js-file-line">	std::string m_run_info;</td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code blob-code-inner js-file-line">	std::set&lt;<span class="pl-k">double</span>&gt; m_signals;</td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code blob-code-inner js-file-line">	osmosdr::source::sptr m_source;</td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">float</span> *m_buffer;</td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> m_vector_length;</td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> m_count;</td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> m_wait_count;</td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> m_avg_size;</td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">double</span> m_step;</td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">double</span> m_centre_freq_1;</td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">double</span> m_centre_freq_2;</td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">double</span> m_bandwidth0;</td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">double</span> m_bandwidth1;</td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">double</span> m_bandwidth2;</td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">double</span> m_threshold;</td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">double</span> m_spread;</td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">double</span> m_time;</td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">time_t</span> m_start_time;</td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code blob-code-inner js-file-line">	gr::blocks::file_meta_sink::sptr m_fs; <span class="pl-c"><span class="pl-c">//</span>define file_sink</span></td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code blob-code-inner js-file-line">	gr::blocks::throttle::sptr m_thr; <span class="pl-c"><span class="pl-c">//</span> throttle</span></td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">FILE</span> *m_outcsv;</td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> Shared pointer thing gnuradio is fond of <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> boost::shared_ptr&lt;scanner_sink&gt; scanner_sink_sptr;</td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code blob-code-inner js-file-line">scanner_sink_sptr <span class="pl-en">make_scanner_sink</span>(osmosdr::source::sptr source, <span class="pl-k">unsigned</span> <span class="pl-k">int</span> vector_length, <span class="pl-k">double</span> centre_freq_1, <span class="pl-k">double</span> centre_freq_2, <span class="pl-k">double</span> bandwidth0, <span class="pl-k">double</span> bandwidth1, <span class="pl-k">double</span> bandwidth2, <span class="pl-k">double</span> step, <span class="pl-k">unsigned</span> <span class="pl-k">int</span> avg_size, <span class="pl-k">double</span> spread, <span class="pl-k">double</span> threshold, <span class="pl-k">double</span> ptime, gr::blocks::file_meta_sink::sptr fs, gr::blocks::throttle::sptr thr, <span class="pl-k">const</span> std::string &amp;outcsv)</td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> boost::shared_ptr&lt;scanner_sink&gt;(<span class="pl-k">new</span> <span class="pl-c1">scanner_sink</span>(source, vector_length, centre_freq_1, centre_freq_2, bandwidth0, bandwidth1, bandwidth2, step, avg_size, spread, threshold, ptime, fs, thr, outcsv));</td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
</table>

  <div class="BlobToolbar position-absolute js-file-line-actions dropdown js-menu-container js-select-menu d-none" aria-hidden="true">
    <button class="btn-octicon ml-0 px-2 p-0 bg-white border border-gray-dark rounded-1 dropdown-toggle js-menu-target" id="js-file-line-action-button" type="button" aria-expanded="false" aria-haspopup="true" aria-label="Inline file action toolbar" aria-controls="inline-file-actions">
      <svg class="octicon octicon-kebab-horizontal" viewBox="0 0 13 16" version="1.1" width="13" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 9a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3zm5 0a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3zm5 0a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3z"/></svg>
    </button>
    <div class="dropdown-menu-content js-menu-content" id="inline-file-actions">
      <ul class="BlobToolbar-dropdown dropdown-menu dropdown-menu-se mt-2">
        <li><clipboard-copy class="dropdown-item" style="cursor:pointer;" id="js-copy-lines" data-original-text="Copy lines">Copy lines</clipboard-copy></li>
        <li><clipboard-copy class="dropdown-item" id="js-copy-permalink" style="cursor:pointer;" data-original-text="Copy permalink">Copy permalink</clipboard-copy></li>
        <li><a class="dropdown-item js-update-url-with-hash" id="js-view-git-blame" href="/RileyHL/gr-scan/blame/0a4305d726ecdc6ef1929001621dfe13a39d3a0b/scanner_sink.hpp">View git blame</a></li>
          <li><a class="dropdown-item" id="js-new-issue" href="/RileyHL/gr-scan/issues/new">Open new issue</a></li>
      </ul>
    </div>
  </div>

  </div>

  </div>

  <button type="button" data-facebox="#jump-to-line" data-facebox-class="linejump" data-hotkey="l" class="d-none">Jump to Line</button>
  <div id="jump-to-line" style="display:none">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="js-jump-to-line-form" action="" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" />
      <input class="form-control linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
      <button type="submit" class="btn">Go</button>
</form>  </div>


  </div>
  <div class="modal-backdrop js-touch-events"></div>
</div>

    </div>
  </div>

  </div>

      
<div class="footer container-lg px-3" role="contentinfo">
  <div class="position-relative d-flex flex-justify-between pt-6 pb-2 mt-6 f6 text-gray border-top border-gray-light ">
    <ul class="list-style-none d-flex flex-wrap ">
      <li class="mr-3">&copy; 2018 <span title="0.31131s from unicorn-3321786183-tmzws">GitHub</span>, Inc.</li>
        <li class="mr-3"><a data-ga-click="Footer, go to terms, text:terms" href="https://github.com/site/terms">Terms</a></li>
        <li class="mr-3"><a data-ga-click="Footer, go to privacy, text:privacy" href="https://github.com/site/privacy">Privacy</a></li>
        <li class="mr-3"><a href="https://help.github.com/articles/github-security/" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li class="mr-3"><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a data-ga-click="Footer, go to help, text:help" href="https://help.github.com">Help</a></li>
    </ul>

    <a aria-label="Homepage" title="GitHub" class="footer-octicon" href="https://github.com">
      <svg height="24" class="octicon octicon-mark-github" viewBox="0 0 16 16" version="1.1" width="24" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
   <ul class="list-style-none d-flex flex-wrap ">
        <li class="mr-3"><a data-ga-click="Footer, go to contact, text:contact" href="https://github.com/contact">Contact GitHub</a></li>
      <li class="mr-3"><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li class="mr-3"><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li class="mr-3"><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li class="mr-3"><a href="https://blog.github.com" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a data-ga-click="Footer, go to about, text:about" href="https://github.com/about">About</a></li>

    </ul>
  </div>
  <div class="d-flex flex-justify-center pb-6">
    <span class="f6 text-gray-light"></span>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
    You can't perform that action at this time.
  </div>


    
    <script crossorigin="anonymous" integrity="sha512-d4PH9lRwKrDe+8uVWwZoewIyD6u0d8n4JgHaUfWEy261ymA5nxRbDQEPDmZQBEgZYaXEMFCCB7VilZGMVuLx5w==" type="application/javascript" src="https://assets-cdn.github.com/assets/frameworks-d941de838fad400fb91238d23684a777.js"></script>
    
    <script crossorigin="anonymous" async="async" integrity="sha512-QoRSvLZ8gKtFbqZVGgdrfbouqZxmsKQnXe3pFtFd1ZtfoJIVsRTLnhFI26PW/5ts/4Rrsf8jssqJCNVYCsCp7A==" type="application/javascript" src="https://assets-cdn.github.com/assets/github-d19623a69cc756b5a2cbda89154a69e9.js"></script>
    
    
    
    
  <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner d-none">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
  </div>
</div>

  <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;" tabindex="0">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box box-shadow-large" style="width:360px;">
  </div>
</div>

<div id="hovercard-aria-description" class="sr-only">
  Press h to open a hovercard with more details.
</div>


  </body>
</html>

=======
 /*
	gr-scan - A GNU Radio signal scanner
	Copyright (C) 2015 Jason A. Donenfeld <Jason@zx2c4.com>. All Rights Reserved.
	Copyright (C) 2012  Nicholas Tomlinson

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <ctime>
#include <chrono>
#include <thread>
#include <set>
#include <utility>
#include <vector>
#include <boost/shared_ptr.hpp>
#include <experimental/filesystem>

#include <gnuradio/top_block.h>
#include <gnuradio/block.h>
#include <gnuradio/io_signature.h>
#include <gnuradio/blocks/file_sink.h>
#include <osmosdr/source.h>


class scanner_sink : public gr::block
{
public:
	scanner_sink(osmosdr::source::sptr source, unsigned int vector_length, double centre_freq_1,
		     double centre_freq_2, double bandwidth0, double bandwidth1, double bandwidth2,
		     double step, unsigned int avg_size, double spread, double threshold, double ptime,
		     gr::blocks::file_meta_sink::sptr fs, gr::blocks::throttle::sptr thr,
				 const std::string &outcsv) :
		gr::block("scanner_sink",
			  gr::io_signature::make(1, 1, sizeof (float) * vector_length),
			  gr::io_signature::make(0, 0, 0)),
		m_source(source), //We need the source in order to be able to control it
		m_buffer(new float[vector_length]), //buffer into which we accumulate the total for averaging
		m_vector_length(vector_length), //size of the FFT
		m_count(0), //number of FFTs totalled in the buffer
		m_wait_count(0), //number of times we've listenned on this frequency
		m_avg_size(avg_size), //the number of FFTs we should average over
		m_step(step), //the amount by which the frequency shold be incremented
		m_centre_freq_1(centre_freq_1), //start frequency (and then current frequency)
		m_centre_freq_2(centre_freq_2), //end frequency
		m_bandwidth0(bandwidth0), //samples per second
		m_bandwidth1(bandwidth1), //fine window (band)width
		m_bandwidth2(bandwidth2), //coarse window (band)width
		m_threshold(threshold), //threshold in dB for discovery
		m_spread(spread), //minumum distance between radio signals (overlapping scans might produce slightly different frequencies)
		m_time(ptime), //the amount of time to listen on the same frequency for
		m_start_time(time(0)), //the start time of the scan (useful for logging/reporting/monitoring)
		m_fs(fs),
		m_thr(thr),
		m_outcsv(NULL)
	{
		ZeroBuffer();
		// Create directory for the IQ files, if outcsv is not empty, chech csv directory
	  create_run_dirs(!outcsv.empty());
		std::remove("blank.bin.hdr"); // Clean up from initialization of file meta sink
		std::remove("blank.bin");
		m_work_done = false;
		if (!outcsv.empty()) {
			bool write_csv_header = access((m_run_info + outcsv).c_str(), F_OK) == -1;
			m_outcsv = fopen((m_csv_dir+m_run_info+outcsv).c_str(), "a+");
			if (!m_outcsv) {
				fprintf(stderr, "[-] Error opening output CSV file %s\n", outcsv.c_str());
				exit(1);
			}
			if (write_csv_header) {
				fprintf(m_outcsv, "time,frequency_mhz,width_khz,peak,dif,filename,mod_type,certainty\n");
				fflush(m_outcsv);
			}
		}
	}

	virtual ~scanner_sink()
	{
		delete []m_buffer; //delete the buffer
		if (m_outcsv)
			fclose(m_outcsv);
	}

private:
	virtual int general_work(int noutput_items, gr_vector_int &ninput_items, gr_vector_const_void_star &input_items, gr_vector_void_star &output_items)
	{
		for (int i = 0; i < ninput_items[0]; ++i)
			ProcessVector(static_cast<const float *>(input_items[0]) + i * m_vector_length);

		consume_each(ninput_items[0]);
		if (m_work_done)
		{
			/*Returning -1 signals to the gnuradio scheduler that all work is done.
				Doing so will cleanly shutdown the flow graph, exit normally, and bring
				about world peace. However, because there is a fork in the connections,
				one path goes to a file sink and one to a this sink, gnuradio can't
				handle propagating the WORK_DONE signal to the other branch and a
				segfault occurs. This entire API is held together with duct tape and
				wishful thinking. I mean holy hell, how friggin hard is it to exit a
				process cleanly? And all the scheduler would have to do is pass WORK_DONE
				to the top_block and then the top_block would immediately discconect the
				blocks. *MINDBLOWN* Where's my Nobel, because clearly I'm thinking on
				a totally different level. I'm playing 67D, underwater connect four over
				here.
			*/
			//return -1;
			return 0;
		}
		else
		{
			return 0;
		}
	}

	void ProcessVector(const float *input)
	{
		//Add the FFT to the total
		for (unsigned int i = 0; i < m_vector_length; ++i)
			m_buffer[i] += input[i];
		++m_count; //increment the total

		if (m_avg_size != m_count)
			return; //we haven't yet averaged over the number we intended to

		double freqs[m_vector_length]; //for convenience
		float bands0[m_vector_length]; //bands in order of frequency
		float bands1[m_vector_length]; //fine window bands
		float bands2[m_vector_length]; //coarse window bands

		Rearrange(bands0, freqs, m_centre_freq_1, m_bandwidth0); //organise the buffer into a convenient order (saves to bands0)
		GetBands(bands0, bands1, m_bandwidth1); //apply the fine window (saves to bands1)
		GetBands(bands0, bands2, m_bandwidth2); //apply the coarse window (saves to bands2)
		PrintSignals(freqs, bands1, bands2);

		m_count = 0; //next time, we're starting from scratch - so note this
		ZeroBuffer(); //get ready to start again
		++m_wait_count; //we've just done another listen
		if (m_time / (m_bandwidth0 / static_cast<double>(m_vector_length * m_avg_size)) <= m_wait_count) { //if we should move to the next frequency
			for (;;) { //keep moving to the next frequency until we get to one we can listen on (copes with holes in the tunable range)
				if (m_centre_freq_2 <= m_centre_freq_1) { //we reached the end!
					fprintf(stderr, "\n[*] Finished scanning\n"); //say we're exiting
					m_work_done = true;
					//break;
					/*Ham-fisted, bull-in-a-china-shop solution to closing because
						gnuradio wants to crush any remaining hope out of your pathetic
						existence.
					*/
					exit(0);
				}
				m_centre_freq_1 += m_step; //calculate the frequency we should change to
				double actual = m_source->set_center_freq(m_centre_freq_1); //change frequency
				if ((m_centre_freq_1 - actual < 10.0) && (actual - m_centre_freq_1 < 10.0)) //success
					break; //so stop changing frequency
			}
			m_wait_count = 0; //new frequency - we've listened 0 times on it
		}
	}

	void PrintSignals(double *freqs, float *bands1, float *bands2)
	{
		/* Calculate the current time after start */
		unsigned int t = time(NULL) - m_start_time;
		unsigned int hours = t / 3600;
		unsigned int minutes = (t % 3600) / 60;
		unsigned int seconds = t % 60;

		//Print that we finished scanning something
		fprintf(stderr, "\n%02u:%02u:%02u: Finished scanning %f MHz - %f MHz",
			hours, minutes, seconds, (m_centre_freq_1 - m_bandwidth0 / 2.0) / 1000000.0, (m_centre_freq_1 + m_bandwidth0 / 2.0) / 1000000.0);

		/* Calculate the differences between the fine and coarse window bands */
		float diffs[m_vector_length];
		for (unsigned int i = 0; i < m_vector_length; ++i)
			diffs[i] = bands1[i] - bands2[i];

		/* Look through to find signals */
		//start with no signal found (note: diffs[0] should always be very negative because of the way the windowing function works)
		bool sig = false;
		unsigned int peak = 0;
		for (unsigned int i = 0; i < m_vector_length; ++i) {
			if (sig) { //we're already in a signal
				if (diffs[peak] < diffs[i]) //we found a rough end to the signal
					peak = i;

				if (diffs[i] < m_threshold) { //we're transitionning to the end
					/* look for the "start" of the signal */
					unsigned int min = peak; //scan outwards for the minimum
					while ((diffs[min] > diffs[peak] - 3.0) && (min > 0)){ //while the signal is still more than half power
						min--;
					}

					/* look for the "end" */
					unsigned int max = peak;
					while ((diffs[max] > diffs[peak] - 3.0) && (max < m_vector_length - 1))
						max++;
					sig = false; //we're now in no signal state

					/* Print the signal if it's a genuine hit */
					if (TrySignal(freqs[max], freqs[min])) {
						fprintf(stderr, "\n[+] %02u:%02u:%02u: Found signal: at %f MHz of width %f kHz, peak power %f dB (difference %f dB) ",
							hours, minutes, seconds, (freqs[max] + freqs[min]) / 2000000.0, (freqs[max] - freqs[min])/1000.0, bands1[peak], diffs[peak]);
						WriteCSV((freqs[max] + freqs[min]) / 2000000.0,
							 (freqs[max] - freqs[min])/1000.0,
							 bands1[peak], diffs[peak]);
					}
				}
			}
			else if (diffs[i] >= m_threshold) { //we found a signal!
				peak = i;
				sig = true;
			}
		}
	}

	bool TrySignal(double min, double max)
	{
		double mid = (min + max) / 2.0; //calculate the midpoint of the signal

		/* check to see if the signal is too close to the centre frequency (a signal often erroniously appears there) */
		if ((mid - m_centre_freq_1 < m_spread) && (m_centre_freq_1 - mid < m_spread))
			return false; //if so, this is not a genuine hit

		/* check to see if the signal is close to any other (the same signal often appears with a slightly different centre frequency) */
		BOOST_FOREACH (double signal, m_signals){
			if ((mid - signal < m_spread) && (signal - mid < m_spread)) //too close
				return false; //if so, this is not a genuine hit
		}

		/* Genuine hit!:D */
		m_signals.insert(mid); //add to the set of signals
		return true; //genuine hit
	}

	void Rearrange(float *bands, double *freqs, double centre, double bandwidth)
	{
		double samplewidth = bandwidth/(double)m_vector_length;
		for (unsigned int i = 0; i < m_vector_length; ++i) {
			/* FFT is arranged starting at 0 Hz at the start, rather than in the middle */
			if (i < m_vector_length / 2) //lower half of the fft
				bands[i + m_vector_length / 2] = m_buffer[i] / static_cast<float>(m_avg_size);
			else //upper half of the fft
				bands[i - m_vector_length / 2] = m_buffer[i] / static_cast<float>(m_avg_size);

			freqs[i] = centre + i * samplewidth - bandwidth / 2.0; //calculate the frequency of this sample
		}
	}

	void GetBands(float *powers, float *bands, unsigned int bandwidth)
	{
		double samplewidth = m_bandwidth0 / static_cast<double>(m_vector_length); //the width in Hz of each sample
		unsigned int bandwidth_samples = bandwidth / samplewidth; //the number of samples in our window
		for (unsigned int i = 0; i < m_vector_length; ++i) //we're averaging, so start with 0
			bands[i] = 0.0;

		for (unsigned int i = 0; i < m_vector_length; ++i){ //over the entire FFT
			//make sure the buffer contains the entire window
			if ((i >= bandwidth_samples / 2) && (i < m_vector_length + bandwidth_samples / 2 - bandwidth_samples)){
				for (unsigned int j = 0; j < bandwidth_samples; ++j) //iterate over the window for averaging
					bands[i + j - bandwidth_samples / 2] += powers[i] / static_cast<float>(bandwidth_samples); //add this sample to the bands
			}
		}
	}

	void ZeroBuffer()
	{
		/* writes zeros to m_buffer */
		for (unsigned int i = 0; i < m_vector_length; ++i)
			m_buffer[i] = 0.0;
	}

	void WriteCSV(float freq, float width, float peak, float diff)
	{
		time_t timer;
		struct tm *tm_info;
		char buf[26];
		char time_stamp[7];

		if (!m_outcsv)
			return;

		time(&timer);
		tm_info = localtime(&timer);
		strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", tm_info);
		strftime(time_stamp, 7, "%H%M%S", tm_info);
		// Record IQ data and return name of file
		std::string filename = RecordIQ(freq, width, time_stamp);
		fprintf(m_outcsv, "%s,%f,%f,%f,%f,%s,%s,%f\n", buf, freq, width, peak, diff, filename.c_str(), "unk", 0.0);
		fflush(m_outcsv);
	}

	void create_run_dirs(bool csv)
		{
			char dat[10]; // Date
			char ts[7];   // time stamp
			strftime(dat, 10, "%d%b%Y", localtime(&m_start_time)); // Format date
			strftime(ts, 7, "%H%M%S", localtime(&m_start_time));   // Format time stamp

			std::string bin_dir = "bin_files";              					 // Main bin directory
			m_csv_dir = "csv_files/";																	 // Directory for CSV file
			std::string soi_dir = "SOI_";                 						// Daily runs
			soi_dir.append(dat);                           						// Append date
			std::string run_dir = "run_";                 						// Individual run directory
			run_dir.append(ts);                            						// append time stamp
			m_iq_dir = bin_dir + "/" + soi_dir + "/" + run_dir + "/"; // Complete file path
			m_run_info = soi_dir + "-" + run_dir + "-";								// CSV file prefix

	    // Check to see if daily directory exists
			if (!std::experimental::filesystem::is_directory(bin_dir + "/" + soi_dir))
			{
				// Make sure main directory exists
				if(!std::experimental::filesystem::is_directory(bin_dir))
				{
					// Create main directory if absent
					std::experimental::filesystem::create_directory(bin_dir);
				}
				// Create daily directory if absent
				std::experimental::filesystem::create_directory(bin_dir + "/" +soi_dir);
			}
			// Create run directory
			std::experimental::filesystem::create_directory(m_iq_dir);

			// csv will be true if an output csv file was specified, so we should check
			// the existence of the csv_directory
			if ((csv) && (!std::experimental::filesystem::is_directory(m_csv_dir)))
			{
				std::experimental::filesystem::create_directory(m_csv_dir);
			}
		}

	std::string RecordIQ(float frq, float bw, char clk_time[7])
	{
		m_source->set_center_freq(frq*1000000);  // Set source to current freq
		m_source->set_sample_rate(bw*2000);      // Set sample rate to twice bw
		m_thr->set_sample_rate(bw*2000);         // Set throttle to sample rate
		// Generate filename
		std::string file_name = m_iq_dir + std::to_string(frq) + "-" + std::to_string(bw)+"_";
		file_name.append(clk_time);               // Append time stamp
		m_fs->open(file_name + ".bin");           // Tell file sink to open a file
		std::this_thread::sleep_for(std::chrono::milliseconds(400));                                // Wait 400ms
		m_fs->close();                           // Tell file sink to close file
		m_source->set_sample_rate(m_bandwidth0); // Reset source bw
		m_thr->set_sample_rate(m_bandwidth0);    // Reset throttle bandwidth
		return (file_name+".bin");                // Return filename
	}

	bool m_work_done;
	std::string m_iq_dir;
	std::string m_csv_dir;
	std::string m_run_info;
	std::set<double> m_signals;
	osmosdr::source::sptr m_source;
	float *m_buffer;
	unsigned int m_vector_length;
	unsigned int m_count;
	unsigned int m_wait_count;
	unsigned int m_avg_size;
	double m_step;
	double m_centre_freq_1;
	double m_centre_freq_2;
	double m_bandwidth0;
	double m_bandwidth1;
	double m_bandwidth2;
	double m_threshold;
	double m_spread;
	double m_time;
	time_t m_start_time;
	gr::blocks::file_meta_sink::sptr m_fs; //define file_sink
	gr::blocks::throttle::sptr m_thr; // throttle
	FILE *m_outcsv;
};

/* Shared pointer thing gnuradio is fond of */
typedef boost::shared_ptr<scanner_sink> scanner_sink_sptr;
scanner_sink_sptr make_scanner_sink(osmosdr::source::sptr source, unsigned int vector_length, double centre_freq_1, double centre_freq_2, double bandwidth0, double bandwidth1, double bandwidth2, double step, unsigned int avg_size, double spread, double threshold, double ptime, gr::blocks::file_meta_sink::sptr fs, gr::blocks::throttle::sptr thr, const std::string &outcsv)
{
	return boost::shared_ptr<scanner_sink>(new scanner_sink(source, vector_length, centre_freq_1, centre_freq_2, bandwidth0, bandwidth1, bandwidth2, step, avg_size, spread, threshold, ptime, fs, thr, outcsv));
}
>>>>>>> 0a4305d726ecdc6ef1929001621dfe13a39d3a0b
