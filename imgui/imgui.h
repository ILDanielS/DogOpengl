




<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
  <link rel="dns-prefetch" href="https://github.githubassets.com">
  <link rel="dns-prefetch" href="https://avatars0.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars1.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars2.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars3.githubusercontent.com">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">



  <link crossorigin="anonymous" media="all" integrity="sha512-jFUBCdWOA1Ov3xo3oFMBwsdP4Up2K1bRnP4QYI5WqvpaIYxWVek89k2M0oyTbNhYMViGtxJB3Vdwcw8ln8hGQw==" rel="stylesheet" href="https://github.githubassets.com/assets/frameworks-8c550109d58e0353afdf1a37a05301c2.css" />
  
    <link crossorigin="anonymous" media="all" integrity="sha512-W5+OY/xW8V+LIAgg/LOCwIIp6enwXwXxqbFsvPpDC4MJCzZTZ1Wln8eDnNTHs4+xpP+F7/47pQAmpcLATRI9FQ==" rel="stylesheet" href="https://github.githubassets.com/assets/github-5b9f8e63fc56f15f8b200820fcb382c0.css" />
    
    
    
    


  <meta name="viewport" content="width=device-width">
  
  <title>imgui/imgui.h at master · ocornut/imgui</title>
    <meta name="description" content="Dear ImGui: Bloat-free Graphical User interface for C++ with minimal dependencies - ocornut/imgui">
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">
  <meta name="apple-itunes-app" content="app-id=1477376905">

    <meta name="twitter:image:src" content="https://repository-images.githubusercontent.com/22067521/01b5ff00-53d7-11ea-86fa-52aee7e335a2" /><meta name="twitter:site" content="@github" /><meta name="twitter:card" content="summary_large_image" /><meta name="twitter:title" content="ocornut/imgui" /><meta name="twitter:description" content="Dear ImGui: Bloat-free Graphical User interface for C++ with minimal dependencies - ocornut/imgui" />
    <meta property="og:image" content="https://repository-images.githubusercontent.com/22067521/01b5ff00-53d7-11ea-86fa-52aee7e335a2" /><meta property="og:site_name" content="GitHub" /><meta property="og:type" content="object" /><meta property="og:title" content="ocornut/imgui" /><meta property="og:url" content="https://github.com/ocornut/imgui" /><meta property="og:description" content="Dear ImGui: Bloat-free Graphical User interface for C++ with minimal dependencies - ocornut/imgui" />

  <link rel="assets" href="https://github.githubassets.com/">
    <link rel="shared-web-socket" href="wss://alive.github.com/_sockets/u/12471688/ws?session=eyJ2IjoiVjMiLCJ1IjoxMjQ3MTY4OCwicyI6NTY1NDU3OTU5LCJjIjozMTgyNTcyNDcxLCJ0IjoxNTk3NDkwMTIxfQ==--a99085974f8d443106f3d1b17e1c68ee2110ccbc96243f51dcbad9a2e848d9fd" data-refresh-url="/_ws">
  <link rel="sudo-modal" href="/sessions/sudo_modal">

  <meta name="request-id" content="C605:CA78:6B69C7D:9D8A5D9:5F37C3C9" data-pjax-transient="true" /><meta name="html-safe-nonce" content="dc8fff6e142caaa1ce73c76002aa6d309ad0bc8b" data-pjax-transient="true" /><meta name="visitor-payload" content="eyJyZWZlcnJlciI6Imh0dHBzOi8vZ2l0aHViLmNvbS9vY29ybnV0L2ltZ3VpIiwicmVxdWVzdF9pZCI6IkM2MDU6Q0E3ODo2QjY5QzdEOjlEOEE1RDk6NUYzN0MzQzkiLCJ2aXNpdG9yX2lkIjoiMjM2OTgwMjczNjA2MjQ1MDExOSIsInJlZ2lvbl9lZGdlIjoiYW1zIiwicmVnaW9uX3JlbmRlciI6ImlhZCJ9" data-pjax-transient="true" /><meta name="visitor-hmac" content="d9a38287968e224bd757488ab219752d2f064f7bfa9908948de230bdfc1aba49" data-pjax-transient="true" />

    <meta name="hovercard-subject-tag" content="repository:22067521" data-pjax-transient>


  <meta name="github-keyboard-shortcuts" content="repository,source-code" data-pjax-transient="true" />

  

  <meta name="selected-link" value="repo_source" data-pjax-transient>

    <meta name="google-site-verification" content="c1kuD-K2HIVF635lypcsWPoD4kilo5-jA_wBFyT4uMY">
  <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
  <meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
  <meta name="google-site-verification" content="GXs5KoUUkNCoaAZn7wPN-t01Pywp9M3sEjnt_3_ZWPc">

  <meta name="octolytics-host" content="collector.githubapp.com" /><meta name="octolytics-app-id" content="github" /><meta name="octolytics-event-url" content="https://collector.githubapp.com/github-external/browser_event" /><meta name="octolytics-dimension-ga_id" content="" class="js-octo-ga-id" /><meta name="octolytics-actor-id" content="12471688" /><meta name="octolytics-actor-login" content="ILDanielS" /><meta name="octolytics-actor-hash" content="c3421571b7f1bda01520574df98c47dfbef5590cf01288784fcc2f23f199afba" />

  <meta name="analytics-location" content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" />

  




    <meta name="google-analytics" content="UA-3769691-2">

  <meta class="js-ga-set" name="userId" content="5b27e1e20d6ef3ef20f13bdc61c12e3d">

<meta class="js-ga-set" name="dimension10" content="Responsive" data-pjax-transient>

<meta class="js-ga-set" name="dimension1" content="Logged In">



  

      <meta name="hostname" content="github.com">
    <meta name="user-login" content="ILDanielS">


      <meta name="expected-hostname" content="github.com">

      <meta name="js-proxy-site-detection-payload" content="YjNiMTYyNDc5OTAxMDE5ZDliNDM2M2FjYTJiMmI1YmU3NjlhYzZjYzY1MGY1NjU1MzBiNWY0ZGI5MzkzODU0Mnx7InJlbW90ZV9hZGRyZXNzIjoiNzcuMTI0LjM4LjgyIiwicmVxdWVzdF9pZCI6IkM2MDU6Q0E3ODo2QjY5QzdEOjlEOEE1RDk6NUYzN0MzQzkiLCJ0aW1lc3RhbXAiOjE1OTc0OTAxMjEsImhvc3QiOiJnaXRodWIuY29tIn0=">

    <meta name="enabled-features" content="MARKETPLACE_PENDING_INSTALLATIONS">

  <meta http-equiv="x-pjax-version" content="66d8b273ec5f3a08783c361b2e3f6945">
  

      <link href="https://github.com/ocornut/imgui/commits/master.atom" rel="alternate" title="Recent Commits to imgui:master" type="application/atom+xml">

  <meta name="go-import" content="github.com/ocornut/imgui git https://github.com/ocornut/imgui.git">

  <meta name="octolytics-dimension-user_id" content="8225057" /><meta name="octolytics-dimension-user_login" content="ocornut" /><meta name="octolytics-dimension-repository_id" content="22067521" /><meta name="octolytics-dimension-repository_nwo" content="ocornut/imgui" /><meta name="octolytics-dimension-repository_public" content="true" /><meta name="octolytics-dimension-repository_is_fork" content="false" /><meta name="octolytics-dimension-repository_network_root_id" content="22067521" /><meta name="octolytics-dimension-repository_network_root_nwo" content="ocornut/imgui" /><meta name="octolytics-dimension-repository_explore_github_marketplace_ci_cta_shown" content="false" />


    <link rel="canonical" href="https://github.com/ocornut/imgui/blob/master/imgui.h" data-pjax-transient>


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://github.githubassets.com/pinned-octocat.svg" color="#000000">
  <link rel="alternate icon" class="js-site-favicon" type="image/png" href="https://github.githubassets.com/favicons/favicon.png">
  <link rel="icon" class="js-site-favicon" type="image/svg+xml" href="https://github.githubassets.com/favicons/favicon.svg">

<meta name="theme-color" content="#1e2327">


  <link rel="manifest" href="/manifest.json" crossOrigin="use-credentials">

  </head>

  <body class="logged-in env-production page-responsive page-blob">
    

    <input type="hidden" value="uKmEiglM8bV2/7E/3uh8Je3KGn61gD7SzgmW+C57ReD+E+z/YNnG3/ZHtKTiSvxAbBEeBxwxziDjZoFia6h+qQ==" data-csrf="true" class="js-data-websocket-refresh-csrf" />

    <div class="position-relative js-header-wrapper ">
      <a href="#start-of-content" class="p-3 bg-blue text-white show-on-focus js-skip-to-content">Skip to content</a>
      <span class="progress-pjax-loader width-full js-pjax-loader-bar Progress position-fixed">
    <span style="background-color: #79b8ff;width: 0%;" class="Progress-item progress-pjax-loader-bar "></span>
</span>      
      



          <header class="Header py-md-0 js-details-container Details flex-wrap flex-md-nowrap px-3" role="banner">
  <div class="Header-item d-none d-md-flex">
    <a class="Header-link" href="https://github.com/" data-hotkey="g d"
  aria-label="Homepage " data-ga-click="Header, go to dashboard, icon:logo">
  <svg class="octicon octicon-mark-github v-align-middle" height="32" viewBox="0 0 16 16" version="1.1" width="32" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path></svg>
</a>

  </div>

  <div class="Header-item d-md-none">
    <button class="Header-link btn-link js-details-target" type="button" aria-label="Toggle navigation" aria-expanded="false">
      <svg height="24" class="octicon octicon-three-bars" viewBox="0 0 16 16" version="1.1" width="24" aria-hidden="true"><path fill-rule="evenodd" d="M1 2.75A.75.75 0 011.75 2h12.5a.75.75 0 110 1.5H1.75A.75.75 0 011 2.75zm0 5A.75.75 0 011.75 7h12.5a.75.75 0 110 1.5H1.75A.75.75 0 011 7.75zM1.75 12a.75.75 0 100 1.5h12.5a.75.75 0 100-1.5H1.75z"></path></svg>
    </button>
  </div>

  <div class="Header-item Header-item--full flex-column flex-md-row width-full flex-order-2 flex-md-order-none mr-0 mr-md-3 mt-3 mt-md-0 Details-content--hidden-not-important d-md-flex">
        <div class="header-search header-search-current js-header-search-current flex-auto  flex-self-stretch flex-md-self-auto mr-0 mr-md-3 mb-3 mb-md-0 scoped-search site-scoped-search js-site-search position-relative js-jump-to js-header-search-current-jump-to"
  role="combobox"
  aria-owns="jump-to-results"
  aria-label="Search or jump to"
  aria-haspopup="listbox"
  aria-expanded="false"
>
  <div class="position-relative">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="js-site-search-form" role="search" aria-label="Site" data-scope-type="Repository" data-scope-id="22067521" data-scoped-search-url="/ocornut/imgui/search" data-unscoped-search-url="/search" action="/ocornut/imgui/search" accept-charset="UTF-8" method="get">
      <label class="form-control input-sm header-search-wrapper p-0 header-search-wrapper-jump-to position-relative d-flex flex-justify-between flex-items-center js-chromeless-input-container">
        <input type="text"
          class="form-control input-sm header-search-input jump-to-field js-jump-to-field js-site-search-focus js-site-search-field is-clearable"
          data-hotkey="s,/"
          name="q"
          value=""
          placeholder="Search or jump to…"
          data-unscoped-placeholder="Search or jump to…"
          data-scoped-placeholder="Search or jump to…"
          autocapitalize="off"
          aria-autocomplete="list"
          aria-controls="jump-to-results"
          aria-label="Search or jump to…"
          data-jump-to-suggestions-path="/_graphql/GetSuggestedNavigationDestinations"
          spellcheck="false"
          autocomplete="off"
          >
          <input type="hidden" value="bcuEv5N9YFiENIRX24aQ7y4DrKKRiJaUpy284qSXX4MbErC0UOiNV+L2f9H3WadtzHGAvgFPHc7Vh8YjToelpw==" data-csrf="true" class="js-data-jump-to-suggestions-path-csrf" />
          <input type="hidden" class="js-site-search-type-field" name="type" >
            <img src="https://github.githubassets.com/images/search-key-slash.svg" alt="" class="mr-2 header-search-key-slash">

            <div class="Box position-absolute overflow-hidden d-none jump-to-suggestions js-jump-to-suggestions-container">
              
<ul class="d-none js-jump-to-suggestions-template-container">
  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-suggestion" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M11.5 7a4.499 4.499 0 11-8.998 0A4.499 4.499 0 0111.5 7zm-.82 4.74a6 6 0 111.06-1.06l3.04 3.04a.75.75 0 11-1.06 1.06l-3.04-3.04z"></path></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

</ul>

<ul class="d-none js-jump-to-no-results-template-container">
  <li class="d-flex flex-justify-center flex-items-center f5 d-none js-jump-to-suggestion p-2">
    <span class="text-gray">No suggested jump to results</span>
  </li>
</ul>

<ul id="jump-to-results" role="listbox" class="p-0 m-0 js-navigation-container jump-to-suggestions-results-container js-jump-to-suggestions-results-container">
  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-scoped-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M11.5 7a4.499 4.499 0 11-8.998 0A4.499 4.499 0 0111.5 7zm-.82 4.74a6 6 0 111.06-1.06l3.04 3.04a.75.75 0 11-1.06 1.06l-3.04-3.04z"></path></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-global-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M11.5 7a4.499 4.499 0 11-8.998 0A4.499 4.499 0 0111.5 7zm-.82 4.74a6 6 0 111.06-1.06l3.04 3.04a.75.75 0 11-1.06 1.06l-3.04-3.04z"></path></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>


    <li class="d-flex flex-justify-center flex-items-center p-0 f5 js-jump-to-suggestion">
      <img src="https://github.githubassets.com/images/spinners/octocat-spinner-128.gif" alt="Octocat Spinner Icon" class="m-2" width="28">
    </li>
</ul>

            </div>
      </label>
</form>  </div>
</div>


    <nav class="d-flex flex-column flex-md-row flex-self-stretch flex-md-self-auto" aria-label="Global">
    <a class="Header-link py-md-3 d-block d-md-none py-2 border-top border-md-top-0 border-white-fade-15" data-ga-click="Header, click, Nav menu - item:dashboard:user" aria-label="Dashboard" href="/dashboard">
      Dashboard
</a>
  <a class="js-selected-navigation-item Header-link py-md-3  mr-0 mr-md-3 py-2 border-top border-md-top-0 border-white-fade-15" data-hotkey="g p" data-ga-click="Header, click, Nav menu - item:pulls context:user" aria-label="Pull requests you created" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls" href="/pulls">
      Pull<span class="d-inline d-md-none d-lg-inline"> request</span>s
</a>
  <a class="js-selected-navigation-item Header-link py-md-3  mr-0 mr-md-3 py-2 border-top border-md-top-0 border-white-fade-15" data-hotkey="g i" data-ga-click="Header, click, Nav menu - item:issues context:user" aria-label="Issues you created" data-selected-links="/issues /issues/assigned /issues/mentioned /issues" href="/issues">
    Issues
</a>

    <div class="mr-0 mr-md-3 py-2 py-md-0 border-top border-md-top-0 border-white-fade-15">
      <a class="js-selected-navigation-item Header-link py-md-3 d-inline-block" data-ga-click="Header, click, Nav menu - item:marketplace context:user" data-octo-click="marketplace_click" data-octo-dimensions="location:nav_bar" data-selected-links=" /marketplace" href="/marketplace">
        Marketplace
</a>      

    </div>

  <a class="js-selected-navigation-item Header-link py-md-3  mr-0 mr-md-3 py-2 border-top border-md-top-0 border-white-fade-15" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship showcases showcases_search showcases_landing /explore" href="/explore">
    Explore
</a>


    <a class="Header-link d-block d-md-none mr-0 mr-md-3 py-2 py-md-3 border-top border-md-top-0 border-white-fade-15" href="/ILDanielS">
      <img class="avatar avatar-user" src="https://avatars2.githubusercontent.com/u/12471688?s=40&amp;v=4" width="20" height="20" alt="@ILDanielS" />
      ILDanielS
</a>
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form action="/logout" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="FbFRfz4Vw7a2/dtV0HjS7+Sn+M2AiWf7JXidOfz3qtH9S4pN672F7A1Dl5vsx3VS2V8ZWQ2PPG4kdRjAWcu0bA==" />
      <button type="submit" class="Header-link mr-0 mr-md-3 py-2 py-md-3 border-top border-md-top-0 border-white-fade-15 d-md-none btn-link d-block width-full text-left" data-ga-click="Header, sign out, icon:logout" style="padding-left: 2px;">
        <svg class="octicon octicon-sign-out v-align-middle" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M2 2.75C2 1.784 2.784 1 3.75 1h2.5a.75.75 0 010 1.5h-2.5a.25.25 0 00-.25.25v10.5c0 .138.112.25.25.25h2.5a.75.75 0 010 1.5h-2.5A1.75 1.75 0 012 13.25V2.75zm10.44 4.5H6.75a.75.75 0 000 1.5h5.69l-1.97 1.97a.75.75 0 101.06 1.06l3.25-3.25a.75.75 0 000-1.06l-3.25-3.25a.75.75 0 10-1.06 1.06l1.97 1.97z"></path></svg>
        Sign out
      </button>
</form></nav>

  </div>

  <div class="Header-item Header-item--full flex-justify-center d-md-none position-relative">
    <a class="Header-link" href="https://github.com/" data-hotkey="g d"
  aria-label="Homepage " data-ga-click="Header, go to dashboard, icon:logo">
  <svg class="octicon octicon-mark-github v-align-middle" height="32" viewBox="0 0 16 16" version="1.1" width="32" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path></svg>
</a>

  </div>

  <div class="Header-item mr-0 mr-md-3 flex-order-1 flex-md-order-none">
    

    <notification-indicator class="js-socket-channel" data-channel="eyJjIjoibm90aWZpY2F0aW9uLWNoYW5nZWQ6MTI0NzE2ODgiLCJ0IjoxNTk3NDkwMTIxfQ==--d871dc3e41892a9b73fd1f895807d0f012a730fc0840aef3a6df00b043877ca5">
      <a href="/notifications"
         class="Header-link notification-indicator position-relative tooltipped tooltipped-sw"
         aria-label="You have unread notifications"
         data-hotkey="g n"
         data-ga-click="Header, go to notifications, icon:unread"
         data-target="notification-indicator.link">
         <span class="mail-status unread" data-target="notification-indicator.modifier"></span>
         <svg class="octicon octicon-bell" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="M8 16a2 2 0 001.985-1.75c.017-.137-.097-.25-.235-.25h-3.5c-.138 0-.252.113-.235.25A2 2 0 008 16z"></path><path fill-rule="evenodd" d="M8 1.5A3.5 3.5 0 004.5 5v2.947c0 .346-.102.683-.294.97l-1.703 2.556a.018.018 0 00-.003.01l.001.006c0 .002.002.004.004.006a.017.017 0 00.006.004l.007.001h10.964l.007-.001a.016.016 0 00.006-.004.016.016 0 00.004-.006l.001-.007a.017.017 0 00-.003-.01l-1.703-2.554a1.75 1.75 0 01-.294-.97V5A3.5 3.5 0 008 1.5zM3 5a5 5 0 0110 0v2.947c0 .05.015.098.042.139l1.703 2.555A1.518 1.518 0 0113.482 13H2.518a1.518 1.518 0 01-1.263-2.36l1.703-2.554A.25.25 0 003 7.947V5z"></path></svg>
      </a>
    </notification-indicator>

  </div>


  <div class="Header-item position-relative d-none d-md-flex">
    <details class="details-overlay details-reset">
  <summary class="Header-link"
      aria-label="Create new…"
      data-ga-click="Header, create new, icon:add">
    <svg class="octicon octicon-plus" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 2a.75.75 0 01.75.75v4.5h4.5a.75.75 0 010 1.5h-4.5v4.5a.75.75 0 01-1.5 0v-4.5h-4.5a.75.75 0 010-1.5h4.5v-4.5A.75.75 0 018 2z"></path></svg> <span class="dropdown-caret"></span>
  </summary>
  <details-menu class="dropdown-menu dropdown-menu-sw mt-n2">
    
<a role="menuitem" class="dropdown-item" href="/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a role="menuitem" class="dropdown-item" href="/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>

<a role="menuitem" class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a role="menuitem" class="dropdown-item" href="/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>


  <div role="none" class="dropdown-divider"></div>
  <div class="dropdown-header">
    <span title="ocornut/imgui">This repository</span>
  </div>
    <a role="menuitem" class="dropdown-item" href="/ocornut/imgui/issues/new/choose" data-ga-click="Header, create new issue" data-skip-pjax>
      New issue
    </a>


  </details-menu>
</details>

  </div>

  <div class="Header-item position-relative mr-0 d-none d-md-flex">
    
  <details class="details-overlay details-reset js-feature-preview-indicator-container" data-feature-preview-indicator-src="/users/ILDanielS/feature_preview/indicator_check">

  <summary class="Header-link"
    aria-label="View profile and more"
    data-ga-click="Header, show menu, icon:avatar">
    <img
  alt="@ILDanielS"
  width="20"
  height="20"
  src="https://avatars1.githubusercontent.com/u/12471688?s=60&amp;v=4"
  class="avatar avatar-user " />

      <span class="feature-preview-indicator js-feature-preview-indicator" style="top: 10px;" hidden></span>
    <span class="dropdown-caret"></span>
  </summary>
  <details-menu class="dropdown-menu dropdown-menu-sw mt-n2" style="width: 180px" >
    <div class="header-nav-current-user css-truncate"><a role="menuitem" class="no-underline user-profile-link px-3 pt-2 pb-2 mb-n2 mt-n1 d-block" href="/ILDanielS" data-ga-click="Header, go to profile, text:Signed in as">Signed in as <strong class="css-truncate-target">ILDanielS</strong></a></div>
    <div role="none" class="dropdown-divider"></div>

      <div class="pl-3 pr-3 f6 user-status-container js-user-status-context lh-condensed" data-url="/users/status?compact=1&amp;link_mentions=0&amp;truncate=1">
        
<div class="js-user-status-container rounded-1 px-2 py-1 mt-2 border"
  data-team-hovercards-enabled>
  <details class="js-user-status-details details-reset details-overlay details-overlay-dark">
    <summary class="btn-link btn-block link-gray no-underline js-toggle-user-status-edit toggle-user-status-edit "
      role="menuitem" data-hydro-click="{&quot;event_type&quot;:&quot;user_profile.click&quot;,&quot;payload&quot;:{&quot;profile_user_id&quot;:8225057,&quot;target&quot;:&quot;EDIT_USER_STATUS&quot;,&quot;user_id&quot;:12471688,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;}}" data-hydro-click-hmac="101e47a752bcc71ef44dae1ce9fd7175b7795b38a4e98a90689d9562138c3875">
      <div class="d-flex flex-items-center flex-items-stretch">
        <div class="f6 lh-condensed user-status-header d-flex user-status-emoji-only-header circle">
          <div class="user-status-emoji-container flex-shrink-0 mr-2 d-flex flex-items-center flex-justify-center lh-condensed-ultra v-align-bottom">
            <svg class="octicon octicon-smiley" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM5 8a1 1 0 100-2 1 1 0 000 2zm7-1a1 1 0 11-2 0 1 1 0 012 0zM5.32 9.636a.75.75 0 011.038.175l.007.009c.103.118.22.222.35.31.264.178.683.37 1.285.37.602 0 1.02-.192 1.285-.371.13-.088.247-.192.35-.31l.007-.008a.75.75 0 111.222.87l-.614-.431c.614.43.614.431.613.431v.001l-.001.002-.002.003-.005.007-.014.019a1.984 1.984 0 01-.184.213c-.16.166-.338.316-.53.445-.63.418-1.37.638-2.127.629-.946 0-1.652-.308-2.126-.63a3.32 3.32 0 01-.715-.657l-.014-.02-.005-.006-.002-.003v-.002h-.001l.613-.432-.614.43a.75.75 0 01.183-1.044h.001z"></path></svg>
          </div>
        </div>
        <div class="
          
           user-status-message-wrapper f6 min-width-0"
           style="line-height: 20px;" >
          <div class="css-truncate css-truncate-target width-fit text-gray-dark text-left">
              <span class="text-gray">Set status</span>
          </div>
        </div>
      </div>
    </summary>
    <details-dialog class="details-dialog rounded-1 anim-fade-in fast Box Box--overlay" role="dialog" tabindex="-1">
      <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="position-relative flex-auto js-user-status-form" action="/users/status?circle=0&amp;compact=1&amp;link_mentions=0&amp;truncate=1" accept-charset="UTF-8" method="post"><input type="hidden" name="_method" value="put" /><input type="hidden" name="authenticity_token" value="8OuGr/aRmenjr4aIfhLURGq4LX6KJQ1kpECgHL+FUkgHPWGuwiVlmQ6VyR/ZPq3gtujE/feXeixicOgYhfhnVA==" />
        <div class="Box-header bg-gray border-bottom p-3">
          <button class="Box-btn-octicon js-toggle-user-status-edit btn-octicon float-right" type="reset" aria-label="Close dialog" data-close-dialog>
            <svg class="octicon octicon-x" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path></svg>
          </button>
          <h3 class="Box-title f5 text-bold text-gray-dark">Edit status</h3>
        </div>
        <input type="hidden" name="emoji" class="js-user-status-emoji-field" value="">
        <input type="hidden" name="organization_id" class="js-user-status-org-id-field" value="">
        <div class="px-3 py-2 text-gray-dark">
          <div class="js-characters-remaining-container position-relative mt-2">
            <div class="input-group d-table form-group my-0 js-user-status-form-group">
              <span class="input-group-button d-table-cell v-align-middle" style="width: 1%">
                <button type="button" aria-label="Choose an emoji" class="btn-outline btn js-toggle-user-status-emoji-picker btn-open-emoji-picker p-0">
                  <span class="js-user-status-original-emoji" hidden></span>
                  <span class="js-user-status-custom-emoji"></span>
                  <span class="js-user-status-no-emoji-icon" >
                    <svg class="octicon octicon-smiley" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM5 8a1 1 0 100-2 1 1 0 000 2zm7-1a1 1 0 11-2 0 1 1 0 012 0zM5.32 9.636a.75.75 0 011.038.175l.007.009c.103.118.22.222.35.31.264.178.683.37 1.285.37.602 0 1.02-.192 1.285-.371.13-.088.247-.192.35-.31l.007-.008a.75.75 0 111.222.87l-.614-.431c.614.43.614.431.613.431v.001l-.001.002-.002.003-.005.007-.014.019a1.984 1.984 0 01-.184.213c-.16.166-.338.316-.53.445-.63.418-1.37.638-2.127.629-.946 0-1.652-.308-2.126-.63a3.32 3.32 0 01-.715-.657l-.014-.02-.005-.006-.002-.003v-.002h-.001l.613-.432-.614.43a.75.75 0 01.183-1.044h.001z"></path></svg>
                  </span>
                </button>
              </span>
              <text-expander keys=": @" data-mention-url="/autocomplete/user-suggestions" data-emoji-url="/autocomplete/emoji">
                <input
                  type="text"
                  autocomplete="off"
                  data-no-org-url="/autocomplete/user-suggestions"
                  data-org-url="/suggestions?mention_suggester=1"
                  data-maxlength="80"
                  class="d-table-cell width-full form-control js-user-status-message-field js-characters-remaining-field"
                  placeholder="What's happening?"
                  name="message"
                  value=""
                  aria-label="What is your current status?">
              </text-expander>
              <div class="error">Could not update your status, please try again.</div>
            </div>
            <div style="margin-left: 53px" class="my-1 text-small label-characters-remaining js-characters-remaining" data-suffix="remaining" hidden>
              80 remaining
            </div>
          </div>
          <include-fragment class="js-user-status-emoji-picker" data-url="/users/status/emoji"></include-fragment>
          <div class="overflow-auto ml-n3 mr-n3 px-3 border-bottom" style="max-height: 33vh">
            <div class="user-status-suggestions js-user-status-suggestions collapsed overflow-hidden">
              <h4 class="f6 text-normal my-3">Suggestions:</h4>
              <div class="mx-3 mt-2 clearfix">
                  <div class="float-left col-6">
                      <button type="button" value=":palm_tree:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="palm_tree" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f334.png">🌴</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          On vacation
                        </div>
                      </button>
                      <button type="button" value=":face_with_thermometer:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="face_with_thermometer" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f912.png">🤒</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Out sick
                        </div>
                      </button>
                  </div>
                  <div class="float-left col-6">
                      <button type="button" value=":house:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="house" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f3e0.png">🏠</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Working from home
                        </div>
                      </button>
                      <button type="button" value=":dart:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="dart" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f3af.png">🎯</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Focusing
                        </div>
                      </button>
                  </div>
              </div>
            </div>
            <div class="user-status-limited-availability-container">
              <div class="form-checkbox my-0">
                <input type="checkbox" name="limited_availability" value="1" class="js-user-status-limited-availability-checkbox" data-default-message="I may be slow to respond." aria-describedby="limited-availability-help-text-truncate-true-compact-true" id="limited-availability-truncate-true-compact-true">
                <label class="d-block f5 text-gray-dark mb-1" for="limited-availability-truncate-true-compact-true">
                  Busy
                </label>
                <p class="note" id="limited-availability-help-text-truncate-true-compact-true">
                  When others mention you, assign you, or request your review,
                  GitHub will let them know that you have limited availability.
                </p>
              </div>
            </div>
          </div>
          <div class="d-inline-block f5 mr-2 pt-3 pb-2" >
  <div class="d-inline-block mr-1">
    Clear status
  </div>

  <details class="js-user-status-expire-drop-down f6 dropdown details-reset details-overlay d-inline-block mr-2">
    <summary class="btn btn-sm v-align-baseline" aria-haspopup="true">
      <div class="js-user-status-expiration-interval-selected d-inline-block v-align-baseline">
        Never
      </div>
      <div class="dropdown-caret"></div>
    </summary>

    <ul class="dropdown-menu dropdown-menu-se pl-0 overflow-auto" style="width: 220px; max-height: 15.5em">
      <li>
        <button type="button" class="btn-link dropdown-item js-user-status-expire-button ws-normal" title="Never">
          <span class="d-inline-block text-bold mb-1">Never</span>
          <div class="f6 lh-condensed">Keep this status until you clear your status or edit your status.</div>
        </button>
      </li>
      <li class="dropdown-divider" role="none"></li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 30 minutes" value="2020-08-15T14:45:21+03:00">
            in 30 minutes
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 1 hour" value="2020-08-15T15:15:21+03:00">
            in 1 hour
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 4 hours" value="2020-08-15T18:15:21+03:00">
            in 4 hours
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="today" value="2020-08-15T23:59:59+03:00">
            today
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="this week" value="2020-08-16T23:59:59+03:00">
            this week
          </button>
        </li>
    </ul>
  </details>
  <input class="js-user-status-expiration-date-input" type="hidden" name="expires_at" value="">
</div>

          <include-fragment class="js-user-status-org-picker" data-url="/users/status/organizations"></include-fragment>
        </div>
        <div class="d-flex flex-items-center flex-justify-between p-3 border-top">
          <button type="submit" disabled class="width-full btn btn-primary mr-2 js-user-status-submit">
            Set status
          </button>
          <button type="button" disabled class="width-full js-clear-user-status-button btn ml-2 ">
            Clear status
          </button>
        </div>
</form>    </details-dialog>
  </details>
</div>

      </div>
      <div role="none" class="dropdown-divider"></div>

    <a role="menuitem" class="dropdown-item" href="/ILDanielS" data-ga-click="Header, go to profile, text:your profile" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;target&quot;:&quot;YOUR_PROFILE&quot;,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="405e9837c1362ae0045d4ccc46241d47187740d00abe8361542247d0613ab879" >Your profile</a>

    <a role="menuitem" class="dropdown-item" href="/ILDanielS?tab=repositories" data-ga-click="Header, go to repositories, text:your repositories" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;target&quot;:&quot;YOUR_REPOSITORIES&quot;,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="231911b4b6c00a84c1ba34d6523091e2c45a503de568b25c70d8b3fa86aa955d" >Your repositories</a>



    <a role="menuitem" class="dropdown-item" href="/ILDanielS?tab=projects" data-ga-click="Header, go to projects, text:your projects" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;target&quot;:&quot;YOUR_PROJECTS&quot;,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="0ec662cf8563136c37896f7a08121da6fab67c801bf4a32f5f5a6fc8df0cf850" >Your projects</a>


    <a role="menuitem" class="dropdown-item" href="/ILDanielS?tab=stars" data-ga-click="Header, go to starred repos, text:your stars" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;target&quot;:&quot;YOUR_STARS&quot;,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="ca73f063309845999962dd8e9108a1de5ab7296569a59a4c71f7135e5ec5998b" >Your stars</a>
      <a role="menuitem" class="dropdown-item" href="https://gist.github.com/mine" data-ga-click="Header, your gists, text:your gists" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;target&quot;:&quot;YOUR_GISTS&quot;,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="66adb37340607b779ed693b71a10636f8a695fdd879d01825612cc47d2df623b" >Your gists</a>





    <div role="none" class="dropdown-divider"></div>
      <a role="menuitem" class="dropdown-item" href="/settings/billing" data-ga-click="Header, go to billing, text:upgrade" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;target&quot;:&quot;UPGRADE&quot;,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="17ad9a8920529636a46319ccd2b6e122b58d508ae5b0d908dd9720dd9a1916cc" >Upgrade</a>
      
<div id="feature-enrollment-toggle" class="hide-sm hide-md feature-preview-details position-relative">
  <button
    type="button"
    class="dropdown-item btn-link"
    role="menuitem"
    data-feature-preview-trigger-url="/users/ILDanielS/feature_previews"
    data-feature-preview-close-details="{&quot;event_type&quot;:&quot;feature_preview.clicks.close_modal&quot;,&quot;payload&quot;:{&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}"
    data-feature-preview-close-hmac="4787fd30cab07bbeea0dd776632224185856a07e493b3faea6bb3fe517a9a508"
    data-hydro-click="{&quot;event_type&quot;:&quot;feature_preview.clicks.open_modal&quot;,&quot;payload&quot;:{&quot;link_location&quot;:&quot;user_dropdown&quot;,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}"
    data-hydro-click-hmac="0abd64dac9905ee3496f5383f5d54a289ba4febfe638a19ccadba2e9b644a295"
  >
    Feature preview
  </button>
    <span class="feature-preview-indicator js-feature-preview-indicator" hidden></span>
</div>

    <a role="menuitem" class="dropdown-item" href="https://docs.github.com" data-ga-click="Header, go to help, text:help" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;target&quot;:&quot;HELP&quot;,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="cc0aed706428a709141daa7ba7e8dbf2718d836dc29312795d64a8784fdbc362" >Help</a>
    <a role="menuitem" class="dropdown-item" href="/settings/profile" data-ga-click="Header, go to settings, icon:settings" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;target&quot;:&quot;SETTINGS&quot;,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="e570da4f7d5eade017c085cc8696443e68712a404f1a31390d46ebfec66a058c" >Settings</a>
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="logout-form" action="/logout" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="UCRxpo3NAUR2IPUYG7Va1SeY8CkR04Xiv2if8VUi2y+43qqUWGVHHs2eudYnCv1oGmARvZzV3ne+ZRoI8B7Fkg==" />
      
      <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;target&quot;:&quot;SIGN_OUT&quot;,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="12ac2001cd40d25f378504c7bab0c60369bc1e63d1d024e4b7bf6cd30cb88660"  role="menuitem">
        Sign out
      </button>
      <input type="text" name="required_field_aae9" hidden="hidden" class="form-control" /><input type="hidden" name="timestamp" value="1597490121684" class="form-control" /><input type="hidden" name="timestamp_secret" value="e08cfe6e32eebd42ffbf2225d255b7071945b1362d8ce3e6b34b6477ec021d89" class="form-control" />
</form>  </details-menu>
</details>

  </div>

</header>

          

    </div>

  <div id="start-of-content" class="show-on-focus"></div>




    <div id="js-flash-container">


  <template class="js-flash-template">
    <div class="flash flash-full  js-flash-template-container">
  <div class=" px-2" >
    <button class="flash-close js-flash-close" type="button" aria-label="Dismiss this message">
      <svg class="octicon octicon-x" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path></svg>
    </button>
    
      <div class="js-flash-template-message"></div>

  </div>
</div>
  </template>
</div>


  

  <include-fragment class="js-notification-shelf-include-fragment" data-base-src="https://github.com/notifications/beta/shelf"></include-fragment>



  <div
    class="application-main "
    data-commit-hovercards-enabled
    data-discussion-hovercards-enabled
    data-issue-and-pr-hovercards-enabled
  >
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode" class="">
    <main  >
      

  










  <div class="bg-gray-light pt-3 hide-full-screen mb-5">

    <div class="d-flex mb-3 px-3 px-md-4 px-lg-5">

      <div class="flex-auto min-width-0 width-fit mr-3">
        <h1 class=" d-flex flex-wrap flex-items-center break-word f3 text-normal">
    <svg class="octicon octicon-repo text-gray" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path></svg>
  <span class="author ml-2 flex-self-stretch" itemprop="author">
    <a class="url fn" rel="author" data-hovercard-type="user" data-hovercard-url="/users/ocornut/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut">ocornut</a>
  </span>
  <span class="mx-1 flex-self-stretch">/</span>
  <strong itemprop="name" class="mr-2 flex-self-stretch">
    <a data-pjax="#js-repo-pjax-container" href="/ocornut/imgui">imgui</a>
  </strong>
  
</h1>


      </div>

      <ul class="pagehead-actions flex-shrink-0 d-none d-md-inline" style="padding: 2px 0;">

  <li>
        <form data-remote="true" class="d-flex js-social-form js-social-container" action="/notifications/subscribe" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="kcT//OucA5Gk582x2OCEBihavbrZMbuyRSeeOqeoZYWQuS0GsXRmMUMR2WnrGdN2uY5hlZV+38/O1ePT0lTWsg==" />      <input type="hidden" name="repository_id" value="22067521">

      <details class="details-reset details-overlay select-menu hx_rsm">
        <summary class="btn btn-sm btn-with-count" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;WATCH_BUTTON&quot;,&quot;repository_id&quot;:22067521,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="75a0a1056902b67c4caf3194818b4002759b9e6c0a84854ad28ea6c59d942068" data-ga-click="Repository, click Watch settings, action:blob#show">          <span data-menu-button>
              <svg height="16" class="octicon octicon-eye" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path></svg>
              Watch
          </span>
          <span class="dropdown-caret"></span>
</summary>        <details-menu
          class="select-menu-modal position-absolute mt-5"
          style="z-index: 99;">
          <div class="select-menu-header">
            <span class="select-menu-title">Notifications</span>
          </div>
          <div class="select-menu-list">
            <button type="submit" name="do" value="included" class="select-menu-item width-full" aria-checked="true" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Not watching</span>
                <span class="description">Be notified only when participating or @mentioned.</span>
                <span class="hidden-select-button-text" data-menu-button-contents>
                  <svg height="16" class="octicon octicon-eye" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path></svg>
                  Watch
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="release_only" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Releases only</span>
                <span class="description">Be notified of new releases, and when participating or @mentioned.</span>
                <span class="hidden-select-button-text" data-menu-button-contents>
                  <svg height="16" class="octicon octicon-eye" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path></svg>
                  Unwatch releases
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="subscribed" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Watching</span>
                <span class="description">Be notified of all conversations.</span>
                <span class="hidden-select-button-text" data-menu-button-contents>
                  <svg class="octicon octicon-eye v-align-text-bottom" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path></svg>
                  Unwatch
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="ignore" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Ignoring</span>
                <span class="description">Never be notified.</span>
                <span class="hidden-select-button-text" data-menu-button-contents>
                  <svg height="16" class="octicon octicon-mute" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 2.75a.75.75 0 00-1.238-.57L3.472 5H1.75A1.75 1.75 0 000 6.75v2.5C0 10.216.784 11 1.75 11h1.723l3.289 2.82A.75.75 0 008 13.25V2.75zM4.238 6.32L6.5 4.38v7.24L4.238 9.68a.75.75 0 00-.488-.18h-2a.25.25 0 01-.25-.25v-2.5a.25.25 0 01.25-.25h2a.75.75 0 00.488-.18zm7.042-1.1a.75.75 0 10-1.06 1.06L11.94 8l-1.72 1.72a.75.75 0 101.06 1.06L13 9.06l1.72 1.72a.75.75 0 101.06-1.06L14.06 8l1.72-1.72a.75.75 0 00-1.06-1.06L13 6.94l-1.72-1.72z"></path></svg>
                  Stop ignoring
                </span>
              </div>
            </button>
          </div>
        </details-menu>
      </details>
        <a class="social-count js-social-count"
          href="/ocornut/imgui/watchers"
          aria-label="900 users are watching this repository">
          900
        </a>
</form>
  </li>

  <li>
      <div class="js-toggler-container js-social-container starring-container ">
    <form class="starred js-social-form" action="/ocornut/imgui/unstar" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="a3SG1FaMNy+KrPF4sD2pkL0JlVP2byZoYTDa2Ma+gwVYFDLA9L4D2FG3BpoVvrHol0/cpWTbTL5GpeTZznQ++Q==" />
      <input type="hidden" name="context" value="repository"></input>
      <button type="submit" class="btn btn-sm btn-with-count  js-toggler-target" aria-label="Unstar this repository" title="Unstar ocornut/imgui" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;UNSTAR_BUTTON&quot;,&quot;repository_id&quot;:22067521,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="b32d74b7915053424a83002aac0087dfad067ade88fdd3959c344e3d1d78b6f1" data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">        <svg height="16" class="octicon octicon-star-fill" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 .25a.75.75 0 01.673.418l1.882 3.815 4.21.612a.75.75 0 01.416 1.279l-3.046 2.97.719 4.192a.75.75 0 01-1.088.791L8 12.347l-3.766 1.98a.75.75 0 01-1.088-.79l.72-4.194L.818 6.374a.75.75 0 01.416-1.28l4.21-.611L7.327.668A.75.75 0 018 .25z"></path></svg>
        Unstar
</button>        <a class="social-count js-social-count" href="/ocornut/imgui/stargazers"
           aria-label="22245 users starred this repository">
           22.2k
        </a>
</form>
    <form class="unstarred js-social-form" action="/ocornut/imgui/star" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="ILkaUbabvB1Ayp34iuv4h+3U06xCjoo2NzslqzwShQ2nO7Y3RZnzYeGYm61ePPC/RTjbJeKPQZYcoT+OrGTh5g==" />
      <input type="hidden" name="context" value="repository"></input>
      <button type="submit" class="btn btn-sm btn-with-count  js-toggler-target" aria-label="Unstar this repository" title="Star ocornut/imgui" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;STAR_BUTTON&quot;,&quot;repository_id&quot;:22067521,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="00ee16d79554d3a46d6210591e9e61e3762b80381129782050e983370c64d3ef" data-ga-click="Repository, click star button, action:blob#show; text:Star">        <svg height="16" class="octicon octicon-star" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 .25a.75.75 0 01.673.418l1.882 3.815 4.21.612a.75.75 0 01.416 1.279l-3.046 2.97.719 4.192a.75.75 0 01-1.088.791L8 12.347l-3.766 1.98a.75.75 0 01-1.088-.79l.72-4.194L.818 6.374a.75.75 0 01.416-1.28l4.21-.611L7.327.668A.75.75 0 018 .25zm0 2.445L6.615 5.5a.75.75 0 01-.564.41l-3.097.45 2.24 2.184a.75.75 0 01.216.664l-.528 3.084 2.769-1.456a.75.75 0 01.698 0l2.77 1.456-.53-3.084a.75.75 0 01.216-.664l2.24-2.183-3.096-.45a.75.75 0 01-.564-.41L8 2.694v.001z"></path></svg>
        Star
</button>        <a class="social-count js-social-count" href="/ocornut/imgui/stargazers"
           aria-label="22245 users starred this repository">
          22.2k
        </a>
</form>  </div>

  </li>

  <li>
          <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="btn-with-count" action="/ocornut/imgui/fork" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="nY/Gk5+e1rTKDpGZYthY9u1lWWGRCKPu0fV4FRwopF5ggtzmiGXTgtuE3h8oa25PknTkkosS+XFyognkUUfLVw==" />
            <button class="btn btn-sm btn-with-count" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FORK_BUTTON&quot;,&quot;repository_id&quot;:22067521,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="46201241dd38bc40dd90d3d177a97d69a5437b1fe047bcc11bcc60ee8bf26f83" data-ga-click="Repository, show fork modal, action:blob#show; text:Fork" type="submit" title="Fork your own copy of ocornut/imgui to your account" aria-label="Fork your own copy of ocornut/imgui to your account">              <svg class="octicon octicon-repo-forked" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M5 3.25a.75.75 0 11-1.5 0 .75.75 0 011.5 0zm0 2.122a2.25 2.25 0 10-1.5 0v.878A2.25 2.25 0 005.75 8.5h1.5v2.128a2.251 2.251 0 101.5 0V8.5h1.5a2.25 2.25 0 002.25-2.25v-.878a2.25 2.25 0 10-1.5 0v.878a.75.75 0 01-.75.75h-4.5A.75.75 0 015 6.25v-.878zm3.75 7.378a.75.75 0 11-1.5 0 .75.75 0 011.5 0zm3-8.75a.75.75 0 100-1.5.75.75 0 000 1.5z"></path></svg>
              Fork
</button></form>
    <a href="/ocornut/imgui/network/members" class="social-count"
       aria-label="3790 users forked this repository">
      3.8k
    </a>
  </li>
</ul>

    </div>
    
<nav aria-label="Repository" data-pjax="#js-repo-pjax-container" class="js-repo-nav js-sidenav-container-pjax js-responsive-underlinenav overflow-hidden UnderlineNav px-3 px-md-4 px-lg-5 bg-gray-light">
  <ul class="UnderlineNav-body list-style-none ">
          <li class="d-flex">
        <a class="js-selected-navigation-item selected UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="code-tab" data-hotkey="g c" data-ga-click="Repository, Navigation click, Code tab" aria-current="page" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages repo_deployments /ocornut/imgui" href="/ocornut/imgui">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-code UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M4.72 3.22a.75.75 0 011.06 1.06L2.06 8l3.72 3.72a.75.75 0 11-1.06 1.06L.47 8.53a.75.75 0 010-1.06l4.25-4.25zm6.56 0a.75.75 0 10-1.06 1.06L13.94 8l-3.72 3.72a.75.75 0 101.06 1.06l4.25-4.25a.75.75 0 000-1.06l-4.25-4.25z"></path></svg>
            <span data-content="Code">Code</span>
              <span title="Not available" class="Counter "></span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="issues-tab" data-hotkey="g i" data-ga-click="Repository, Navigation click, Issues tab" data-selected-links="repo_issues repo_labels repo_milestones /ocornut/imgui/issues" href="/ocornut/imgui/issues">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-issue-opened UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 1.5a6.5 6.5 0 100 13 6.5 6.5 0 000-13zM0 8a8 8 0 1116 0A8 8 0 010 8zm9 3a1 1 0 11-2 0 1 1 0 012 0zm-.25-6.25a.75.75 0 00-1.5 0v3.5a.75.75 0 001.5 0v-3.5z"></path></svg>
            <span data-content="Issues">Issues</span>
              <span title="432" class="Counter ">432</span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="pull-requests-tab" data-hotkey="g p" data-ga-click="Repository, Navigation click, Pull requests tab" data-selected-links="repo_pulls checks /ocornut/imgui/pulls" href="/ocornut/imgui/pulls">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-git-pull-request UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.177 3.073L9.573.677A.25.25 0 0110 .854v4.792a.25.25 0 01-.427.177L7.177 3.427a.25.25 0 010-.354zM3.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122v5.256a2.251 2.251 0 11-1.5 0V5.372A2.25 2.25 0 011.5 3.25zM11 2.5h-1V4h1a1 1 0 011 1v5.628a2.251 2.251 0 101.5 0V5A2.5 2.5 0 0011 2.5zm1 10.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0zM3.75 12a.75.75 0 100 1.5.75.75 0 000-1.5z"></path></svg>
            <span data-content="Pull requests">Pull requests</span>
              <span title="106" class="Counter ">106</span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="actions-tab" data-hotkey="g a" data-ga-click="Repository, Navigation click, Actions tab" data-selected-links="repo_actions /ocornut/imgui/actions" href="/ocornut/imgui/actions">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-play UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM6.379 5.227A.25.25 0 006 5.442v5.117a.25.25 0 00.379.214l4.264-2.559a.25.25 0 000-.428L6.379 5.227z"></path></svg>
            <span data-content="Actions">Actions</span>
              <span title="Not available" class="Counter "></span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="wiki-tab" data-hotkey="g w" data-ga-click="Repository, Navigation click, Wikis tab" data-selected-links="repo_wiki /ocornut/imgui/wiki" href="/ocornut/imgui/wiki">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-book UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M0 1.75A.75.75 0 01.75 1h4.253c1.227 0 2.317.59 3 1.501A3.744 3.744 0 0111.006 1h4.245a.75.75 0 01.75.75v10.5a.75.75 0 01-.75.75h-4.507a2.25 2.25 0 00-1.591.659l-.622.621a.75.75 0 01-1.06 0l-.622-.621A2.25 2.25 0 005.258 13H.75a.75.75 0 01-.75-.75V1.75zm8.755 3a2.25 2.25 0 012.25-2.25H14.5v9h-3.757c-.71 0-1.4.201-1.992.572l.004-7.322zm-1.504 7.324l.004-5.073-.002-2.253A2.25 2.25 0 005.003 2.5H1.5v9h3.757a3.75 3.75 0 011.994.574z"></path></svg>
            <span data-content="Wiki">Wiki</span>
              <span title="Not available" class="Counter "></span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="security-tab" data-hotkey="g s" data-ga-click="Repository, Navigation click, Security tab" data-selected-links="security overview alerts policy token_scanning code_scanning /ocornut/imgui/security" href="/ocornut/imgui/security">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-shield UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.467.133a1.75 1.75 0 011.066 0l5.25 1.68A1.75 1.75 0 0115 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.7 1.7 0 01-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 011.217-1.667l5.25-1.68zm.61 1.429a.25.25 0 00-.153 0l-5.25 1.68a.25.25 0 00-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.2.2 0 00.154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.25.25 0 00-.174-.237l-5.25-1.68zM9 10.5a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.75a.75.75 0 10-1.5 0v3a.75.75 0 001.5 0v-3z"></path></svg>
            <span data-content="Security">Security</span>
              <span data-url="/ocornut/imgui/security/overall-count" title="Not available" class="js-security-tab-count Counter "></span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="insights-tab" data-ga-click="Repository, Navigation click, Insights tab" data-selected-links="repo_graphs repo_contributors dependency_graph dependabot_updates pulse people /ocornut/imgui/pulse" href="/ocornut/imgui/pulse">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-graph UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 1.75a.75.75 0 00-1.5 0v12.5c0 .414.336.75.75.75h14.5a.75.75 0 000-1.5H1.5V1.75zm14.28 2.53a.75.75 0 00-1.06-1.06L10 7.94 7.53 5.47a.75.75 0 00-1.06 0L3.22 8.72a.75.75 0 001.06 1.06L7 7.06l2.47 2.47a.75.75 0 001.06 0l5.25-5.25z"></path></svg>
            <span data-content="Insights">Insights</span>
              <span title="Not available" class="Counter "></span>
</a>      </li>

</ul>        <div class="position-absolute right-0 pr-3 pr-md-4 pr-lg-5 js-responsive-underlinenav-overflow" style="visibility:hidden;">
      <details class="details-overlay details-reset position-relative">
  <summary role="button">
              <div class="UnderlineNav-item mr-0 border-0">
            <svg class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="M8 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zM1.5 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zm13 0a1.5 1.5 0 100-3 1.5 1.5 0 000 3z"></path></svg>
            <span class="sr-only">More</span>
          </div>

</summary>            <details-menu role="menu" class="dropdown-menu dropdown-menu-sw ">
  
            <ul>
                <li data-menu-item="code-tab" hidden>
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /ocornut/imgui" href="/ocornut/imgui">
                    Code
</a>                </li>
                <li data-menu-item="issues-tab" hidden>
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /ocornut/imgui/issues" href="/ocornut/imgui/issues">
                    Issues
</a>                </li>
                <li data-menu-item="pull-requests-tab" hidden>
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /ocornut/imgui/pulls" href="/ocornut/imgui/pulls">
                    Pull requests
</a>                </li>
                <li data-menu-item="actions-tab" hidden>
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /ocornut/imgui/actions" href="/ocornut/imgui/actions">
                    Actions
</a>                </li>
                <li data-menu-item="wiki-tab" hidden>
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /ocornut/imgui/wiki" href="/ocornut/imgui/wiki">
                    Wiki
</a>                </li>
                <li data-menu-item="security-tab" hidden>
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /ocornut/imgui/security" href="/ocornut/imgui/security">
                    Security
</a>                </li>
                <li data-menu-item="insights-tab" hidden>
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /ocornut/imgui/pulse" href="/ocornut/imgui/pulse">
                    Insights
</a>                </li>
            </ul>

</details-menu>
</details>    </div>

</nav>
  </div>

<div class="container-xl clearfix new-discussion-timeline  px-3 px-md-4 px-lg-5">
  <div class="repository-content " >

    
    
  


    <a class="d-none js-permalink-shortcut" data-hotkey="y" href="/ocornut/imgui/blob/0e5b1ea297f9a0764c59ca29810c6b05c39fe6d2/imgui.h">Permalink</a>

    <!-- blob contrib key: blob_contributors:v22:84e7d512584efb5cd7f30bea2f9216d6 -->
    

    <div class="d-flex flex-items-start flex-shrink-0 pb-3 flex-wrap flex-md-nowrap flex-justify-between flex-md-justify-start">
      
<details class="details-reset details-overlay mr-0 mb-0 " id="branch-select-menu">
  <summary class="btn css-truncate"
           data-hotkey="w"
           title="Switch branches or tags">
    <svg text="gray" height="16" class="octicon octicon-git-branch text-gray" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M11.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122V6A2.5 2.5 0 0110 8.5H6a1 1 0 00-1 1v1.128a2.251 2.251 0 11-1.5 0V5.372a2.25 2.25 0 111.5 0v1.836A2.492 2.492 0 016 7h4a1 1 0 001-1v-.628A2.25 2.25 0 019.5 3.25zM4.25 12a.75.75 0 100 1.5.75.75 0 000-1.5zM3.5 3.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0z"></path></svg>
    <span class="css-truncate-target" data-menu-button>master</span>
    <span class="dropdown-caret"></span>
  </summary>

  <details-menu class="SelectMenu SelectMenu--hasFilter" src="/ocornut/imgui/refs/master/imgui.h?source_action=show&amp;source_controller=blob" preload>
    <div class="SelectMenu-modal">
      <include-fragment class="SelectMenu-loading" aria-label="Menu is loading">
        <svg class="octicon octicon-octoface anim-pulse" height="32" viewBox="0 0 16 16" version="1.1" width="32" aria-hidden="true"><path fill-rule="evenodd" d="M14.7 5.34c.13-.32.55-1.59-.13-3.31 0 0-1.05-.33-3.44 1.3-1-.28-2.07-.32-3.13-.32s-2.13.04-3.13.32c-2.39-1.64-3.44-1.3-3.44-1.3-.68 1.72-.26 2.99-.13 3.31C.49 6.21 0 7.33 0 8.69 0 13.84 3.33 15 7.98 15S16 13.84 16 8.69c0-1.36-.49-2.48-1.3-3.35zM8 14.02c-3.3 0-5.98-.15-5.98-3.35 0-.76.38-1.48 1.02-2.07 1.07-.98 2.9-.46 4.96-.46 2.07 0 3.88-.52 4.96.46.65.59 1.02 1.3 1.02 2.07 0 3.19-2.68 3.35-5.98 3.35zM5.49 9.01c-.66 0-1.2.8-1.2 1.78s.54 1.79 1.2 1.79c.66 0 1.2-.8 1.2-1.79s-.54-1.78-1.2-1.78zm5.02 0c-.66 0-1.2.79-1.2 1.78s.54 1.79 1.2 1.79c.66 0 1.2-.8 1.2-1.79s-.53-1.78-1.2-1.78z"></path></svg>
      </include-fragment>
    </div>
  </details-menu>
</details>

      <h2 id="blob-path" class="breadcrumb flex-auto min-width-0 text-normal mx-0 mx-md-3 width-full width-md-auto flex-order-1 flex-md-order-none mt-3 mt-md-0">
        <span class="js-repo-root text-bold"><span class="js-path-segment d-inline-block wb-break-all"><a data-pjax="true" href="/ocornut/imgui"><span>imgui</span></a></span></span><span class="separator">/</span><strong class="final-path">imgui.h</strong>
      </h2>
      <a href="/ocornut/imgui/find/master"
            class="js-pjax-capture-input btn mr-2 d-none d-md-block"
            data-pjax
            data-hotkey="t">
        Go to file
      </a>

      <details id="blob-more-options-details" class="details-overlay details-reset position-relative">
  <summary role="button">
              <span class="btn">
            <svg aria-label="More options" height="16" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" version="1.1" width="16" role="img"><path d="M8 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zM1.5 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zm13 0a1.5 1.5 0 100-3 1.5 1.5 0 000 3z"></path></svg>
          </span>

</summary>            <ul class="dropdown-menu dropdown-menu-sw">
            <li class="d-block d-md-none">
              <a class="dropdown-item d-flex flex-items-baseline" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FIND_FILE_BUTTON&quot;,&quot;repository_id&quot;:22067521,&quot;originating_url&quot;:&quot;https://github.com/ocornut/imgui/blob/master/imgui.h&quot;,&quot;user_id&quot;:12471688}}" data-hydro-click-hmac="362220ffb83206e31053f7258c789e5a72afec6883f8a46019a916aac1440852" data-ga-click="Repository, find file, location:repo overview" data-hotkey="t" data-pjax="true" href="/ocornut/imgui/find/master">
                <span class="flex-auto">Go to file</span>
                <span class="text-small text-gray" aria-hidden="true">T</span>
</a>            </li>
            <li data-toggle-for="blob-more-options-details">
              <button type="button" data-toggle-for="jumpto-line-details-dialog" class="btn-link dropdown-item">
                <span class="d-flex flex-items-baseline">
                  <span class="flex-auto">Go to line</span>
                  <span class="text-small text-gray" aria-hidden="true">L</span>
                </span>
              </button>
            </li>
            <li class="dropdown-divider" role="none"></li>
            <li>
              <clipboard-copy value="imgui.h" class="dropdown-item cursor-pointer" data-toggle-for="blob-more-options-details">
                Copy path
              </clipboard-copy>
            </li>
          </ul>

</details>    </div>



    <div class="Box d-flex flex-column flex-shrink-0 mb-3">
      
  <div class="Box-header Box-header--blue Details js-details-container">
      <div class="d-flex flex-items-center">
        <span class="flex-shrink-0 ml-n1 mr-n1 mt-n1 mb-n1">
          <a rel="author" data-skip-pjax="true" data-hovercard-type="user" data-hovercard-url="/users/ocornut/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut"><img class="avatar avatar-user" src="https://avatars2.githubusercontent.com/u/8225057?s=48&amp;v=4" width="24" height="24" alt="@ocornut" /></a>
        </span>
        <div class="flex-1 d-flex flex-items-center ml-3 min-width-0">
          <div class="css-truncate css-truncate-overflow">
            <a class="text-bold link-gray-dark" rel="author" data-hovercard-type="user" data-hovercard-url="/users/ocornut/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut">ocornut</a>

              <span>
                <a data-pjax="true" title="Scrolling: Avoid SetScroll, SetScrollFromPos functions from snapping on the edge of scroll limits. (#3379) + Demo: Rename &quot;Layout&quot; to &quot;Layout &amp; Scrolling&quot;." class="link-gray" href="/ocornut/imgui/commit/473a01adb0c334dc4c7f6432cc55098a9e6ac2d6">Scrolling: Avoid SetScroll, SetScrollFromPos functions from snapping …</a>
              </span>
          </div>

            <span class="hidden-text-expander ml-1 flex-shrink-0">
              <button type="button" class="ellipsis-expander js-details-target" aria-expanded="false">&hellip;</button>
            </span>

          <span class="ml-2">
            <include-fragment accept="text/fragment+html" src="/ocornut/imgui/commit/473a01adb0c334dc4c7f6432cc55098a9e6ac2d6/rollup?direction=e" class="d-inline"></include-fragment>
          </span>
        </div>
        <div class="ml-3 d-flex flex-shrink-0 flex-items-center flex-justify-end text-gray no-wrap">
          <span class="d-none d-md-inline">
            <span>Latest commit</span>
            <a class="text-small text-mono link-gray" href="/ocornut/imgui/commit/473a01adb0c334dc4c7f6432cc55098a9e6ac2d6" data-pjax>473a01a</a>
            <span itemprop="dateModified"><relative-time datetime="2020-08-05T15:09:40Z" class="no-wrap">Aug 5, 2020</relative-time></span>
          </span>

          <a data-pjax href="/ocornut/imgui/commits/master/imgui.h" class="ml-3 no-wrap link-gray-dark no-underline">
            <svg text="gray" height="16" class="octicon octicon-history text-gray" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.643 3.143L.427 1.927A.25.25 0 000 2.104V5.75c0 .138.112.25.25.25h3.646a.25.25 0 00.177-.427L2.715 4.215a6.5 6.5 0 11-1.18 4.458.75.75 0 10-1.493.154 8.001 8.001 0 101.6-5.684zM7.75 4a.75.75 0 01.75.75v2.992l2.028.812a.75.75 0 01-.557 1.392l-2.5-1A.75.75 0 017 8.25v-3.5A.75.75 0 017.75 4z"></path></svg>
            <span class="d-none d-sm-inline">
              <strong>History</strong>
            </span>
          </a>
        </div>
      </div>
        <div class="Details-content--hidden ml-5 mt-2"><pre class="mt-2 f6 ws-pre-wrap">…on the edge of scroll limits. (<a class="issue-link js-issue-link" data-error-text="Failed to load title" data-id="672423075" data-permission-text="Title is private" data-url="https://github.com/ocornut/imgui/issues/3379" data-hovercard-type="issue" data-hovercard-url="/ocornut/imgui/issues/3379/hovercard" href="https://github.com/ocornut/imgui/issues/3379">#3379</a>) + Demo: Rename "Layout" to "Layout &amp; Scrolling".</pre></div>

  </div>

  <div class="Box-body d-flex flex-items-center flex-auto border-bottom-0 flex-wrap" >
    <details class="details-reset details-overlay details-overlay-dark lh-default text-gray-dark float-left mr-3" id="blob_contributors_box">
      <summary class="link-gray-dark">
        <svg text="gray" height="16" class="octicon octicon-people text-gray" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M5.5 3.5a2 2 0 100 4 2 2 0 000-4zM2 5.5a3.5 3.5 0 115.898 2.549 5.507 5.507 0 013.034 4.084.75.75 0 11-1.482.235 4.001 4.001 0 00-7.9 0 .75.75 0 01-1.482-.236A5.507 5.507 0 013.102 8.05 3.49 3.49 0 012 5.5zM11 4a.75.75 0 100 1.5 1.5 1.5 0 01.666 2.844.75.75 0 00-.416.672v.352a.75.75 0 00.574.73c1.2.289 2.162 1.2 2.522 2.372a.75.75 0 101.434-.44 5.01 5.01 0 00-2.56-3.012A3 3 0 0011 4z"></path></svg>
        <strong>60</strong>
        
        contributors
      </summary>
      <details-dialog
        class="Box Box--overlay d-flex flex-column anim-fade-in fast"
        aria-label="Users who have contributed to this file"
        src="/ocornut/imgui/contributors-list/master/imgui.h" preload>
        <div class="Box-header">
          <button class="Box-btn-octicon btn-octicon float-right" type="button" aria-label="Close dialog" data-close-dialog>
            <svg class="octicon octicon-x" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path></svg>
          </button>
          <h3 class="Box-title">
            Users who have contributed to this file
          </h3>
        </div>
        <include-fragment class="octocat-spinner my-3" aria-label="Loading..."></include-fragment>
      </details-dialog>
    </details>
      <span class="">
    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/ocornut/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=ocornut">
      <img class="avatar mr-2 avatar-user" src="https://avatars2.githubusercontent.com/u/8225057?s=48&amp;v=4" width="24" height="24" alt="@ocornut" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/ShironekoBen/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=ShironekoBen">
      <img class="avatar mr-2 avatar-user" src="https://avatars2.githubusercontent.com/u/47202645?s=48&amp;v=4" width="24" height="24" alt="@ShironekoBen" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/septag/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=septag">
      <img class="avatar mr-2 avatar-user" src="https://avatars2.githubusercontent.com/u/5081921?s=48&amp;v=4" width="24" height="24" alt="@septag" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/rokups/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=rokups">
      <img class="avatar mr-2 avatar-user" src="https://avatars0.githubusercontent.com/u/19151258?s=48&amp;v=4" width="24" height="24" alt="@rokups" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/thedmd/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=thedmd">
      <img class="avatar mr-2 avatar-user" src="https://avatars1.githubusercontent.com/u/1197433?s=48&amp;v=4" width="24" height="24" alt="@thedmd" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/memononen/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=memononen">
      <img class="avatar mr-2 avatar-user" src="https://avatars0.githubusercontent.com/u/5249992?s=48&amp;v=4" width="24" height="24" alt="@memononen" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/haldean/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=haldean">
      <img class="avatar mr-2 avatar-user" src="https://avatars2.githubusercontent.com/u/187501?s=48&amp;v=4" width="24" height="24" alt="@haldean" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/jtilander/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=jtilander">
      <img class="avatar mr-2 avatar-user" src="https://avatars1.githubusercontent.com/u/373005?s=48&amp;v=4" width="24" height="24" alt="@jtilander" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/waywardmonkeys/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=waywardmonkeys">
      <img class="avatar mr-2 avatar-user" src="https://avatars3.githubusercontent.com/u/178582?s=48&amp;v=4" width="24" height="24" alt="@waywardmonkeys" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/nProtect/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=nProtect">
      <img class="avatar mr-2 avatar-user" src="https://avatars0.githubusercontent.com/u/5462517?s=48&amp;v=4" width="24" height="24" alt="@nProtect" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/nem0/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=nem0">
      <img class="avatar mr-2 avatar-user" src="https://avatars3.githubusercontent.com/u/153526?s=48&amp;v=4" width="24" height="24" alt="@nem0" /> 
</a>    <a class="avatar-link" data-hovercard-type="user" data-hovercard-url="/users/paperManu/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/ocornut/imgui/commits/master/imgui.h?author=paperManu">
      <img class="avatar mr-2 avatar-user" src="https://avatars3.githubusercontent.com/u/1152750?s=48&amp;v=4" width="24" height="24" alt="@paperManu" /> 
</a>
    <button type="button" class="btn-link lh-default" data-toggle-for="blob_contributors_box">
      +42
    </button>
</span>

  </div>
    </div>






    <div class="Box mt-3 position-relative
      ">
      
<div class="Box-header py-2 d-flex flex-column flex-shrink-0 flex-md-row flex-md-items-center">
  <div class="text-mono f6 flex-auto pr-3 flex-order-2 flex-md-order-1 mt-2 mt-md-0">

      2422 lines (2195 sloc)
      <span class="file-info-divider"></span>
    226 KB
  </div>

  <div class="d-flex py-1 py-md-0 flex-auto flex-order-1 flex-md-order-2 flex-sm-grow-0 flex-justify-between">

    <div class="BtnGroup">
      <a href="/ocornut/imgui/raw/master/imgui.h" id="raw-url" role="button" class="btn btn-sm BtnGroup-item ">Raw</a>
        <a href="/ocornut/imgui/blame/master/imgui.h" data-hotkey="b" role="button" class="btn js-update-url-with-hash btn-sm BtnGroup-item ">Blame</a>
    </div>

    <div>
          <a class="btn-octicon tooltipped tooltipped-nw js-remove-unless-platform"
             data-platforms="windows,mac"
             href="x-github-client://openRepo/https://github.com/ocornut/imgui?branch=master&amp;filepath=imgui.h"
             aria-label="Open this file in GitHub Desktop"
             data-ga-click="Repository, open with desktop">
              <svg class="octicon octicon-device-desktop" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.75 2.5h12.5a.25.25 0 01.25.25v7.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25v-7.5a.25.25 0 01.25-.25zM14.25 1H1.75A1.75 1.75 0 000 2.75v7.5C0 11.216.784 12 1.75 12h3.727c-.1 1.041-.52 1.872-1.292 2.757A.75.75 0 004.75 16h6.5a.75.75 0 00.565-1.243c-.772-.885-1.193-1.716-1.292-2.757h3.727A1.75 1.75 0 0016 10.25v-7.5A1.75 1.75 0 0014.25 1zM9.018 12H6.982a5.72 5.72 0 01-.765 2.5h3.566a5.72 5.72 0 01-.765-2.5z"></path></svg>
          </a>

          <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="inline-form js-update-url-with-hash" action="/ocornut/imgui/edit/master/imgui.h" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="9sdIJZwl7fQkB1OqT0iBqX2W2a8wNwGxIzFJYIIyT3BDrO6FxiKUW9qUnzGJJQfeYZb/t09tN6la0OUJaufdVA==" />
            <button class="btn-octicon tooltipped tooltipped-nw" type="submit"
              aria-label="Fork this project and edit the file" data-hotkey="e" data-disable-with>
              <svg class="octicon octicon-pencil" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11.013 1.427a1.75 1.75 0 012.474 0l1.086 1.086a1.75 1.75 0 010 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 01-.927-.928l.929-3.25a1.75 1.75 0 01.445-.758l8.61-8.61zm1.414 1.06a.25.25 0 00-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 000-.354l-1.086-1.086zM11.189 6.25L9.75 4.81l-6.286 6.287a.25.25 0 00-.064.108l-.558 1.953 1.953-.558a.249.249 0 00.108-.064l6.286-6.286z"></path></svg>
            </button>
</form>
          <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="inline-form" action="/ocornut/imgui/delete/master/imgui.h" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="1N+DbjokXSJh2eeHfVEQKhVsfVcprs9ceCVUHZp+3TLxp/24UNHs/iOQj9lJvA4Jlg+UTc4oLFRK3+ontcab/A==" />
            <button class="btn-octicon btn-octicon-danger tooltipped tooltipped-nw" type="submit"
              aria-label="Fork this project and delete the file" data-disable-with>
              <svg class="octicon octicon-trashcan" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M6.5 1.75a.25.25 0 01.25-.25h2.5a.25.25 0 01.25.25V3h-3V1.75zm4.5 0V3h2.25a.75.75 0 010 1.5H2.75a.75.75 0 010-1.5H5V1.75C5 .784 5.784 0 6.75 0h2.5C10.216 0 11 .784 11 1.75zM4.496 6.675a.75.75 0 10-1.492.15l.66 6.6A1.75 1.75 0 005.405 15h5.19c.9 0 1.652-.681 1.741-1.576l.66-6.6a.75.75 0 00-1.492-.149l-.66 6.6a.25.25 0 01-.249.225h-5.19a.25.25 0 01-.249-.225l-.66-6.6z"></path></svg>
            </button>
</form>    </div>
  </div>
</div>



      

  <div itemprop="text" class="Box-body p-0 blob-wrapper data type-c  gist-border-0">
      
<table class="highlight tab-size js-file-line-container" data-tab-size="4" data-paste-markdown-skip>
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> dear imgui, v1.78 WIP</span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> (headers)</span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Help:</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Read FAQ at http://dearimgui.org/faq</span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Newcomers, read &#39;Programmer guide&#39; in imgui.cpp for notes on how to setup Dear ImGui in your codebase.</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Call and read ImGui::ShowDemoWindow() in imgui_demo.cpp. All applications in examples/ are doing that.</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Read imgui.cpp for details, links and comments.</span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Resources:</span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - FAQ                   http://dearimgui.org/faq</span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Homepage &amp; latest     https://github.com/ocornut/imgui</span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Releases &amp; changelog  https://github.com/ocornut/imgui/releases</span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Gallery               https://github.com/ocornut/imgui/issues/3075 (please post your screenshots/video there!)</span></td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Glossary              https://github.com/ocornut/imgui/wiki/Glossary</span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Wiki                  https://github.com/ocornut/imgui/wiki</span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Issues &amp; support      https://github.com/ocornut/imgui/issues</span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span></span></td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line"><span class="pl-c">Index of this file:</span></td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// Header mess</span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// Forward declarations and basic types</span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// ImGui API (Dear ImGui end-user API)</span></td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// Flags &amp; Enumerations</span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// Memory allocations macros</span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// ImVector&lt;&gt;</span></td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// ImGuiStyle</span></td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// ImGuiIO</span></td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// Misc data structures (ImGuiInputTextCallbackData, ImGuiSizeCallbackData, ImGuiPayload)</span></td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// Obsolete functions</span></td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// Helpers (ImGuiOnceUponAFrame, ImGuiTextFilter, ImGuiTextBuffer, ImGuiStorage, ImGuiListClipper, ImColor)</span></td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// Draw List API (ImDrawCallback, ImDrawCmd, ImDrawIdx, ImDrawVert, ImDrawChannel, ImDrawListSplitter, ImDrawListFlags, ImDrawList, ImDrawData)</span></td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line"><span class="pl-c">// Font API (ImFontConfig, ImFontGlyph, ImFontGlyphRangesBuilder, ImFontAtlasFlags, ImFontAtlas, ImFont)</span></td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> once</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Configuration file with compile-time options (edit imconfig.h or #define IMGUI_USER_CONFIG to your own filename)</span></td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> IMGUI_USER_CONFIG</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> IMGUI_USER_CONFIG</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> !defined(IMGUI_DISABLE_INCLUDE_IMCONFIG_H) || defined(IMGUI_INCLUDE_IMCONFIG_H)</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>imconfig.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_DISABLE</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Header mess</span></td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Includes</span></td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>float.h<span class="pl-pds">&gt;</span></span>                  <span class="pl-c"><span class="pl-c">//</span> FLT_MIN, FLT_MAX</span></td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>stdarg.h<span class="pl-pds">&gt;</span></span>                 <span class="pl-c"><span class="pl-c">//</span> va_list, va_start, va_end</span></td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>stddef.h<span class="pl-pds">&gt;</span></span>                 <span class="pl-c"><span class="pl-c">//</span> ptrdiff_t, NULL</span></td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>string.h<span class="pl-pds">&gt;</span></span>                 <span class="pl-c"><span class="pl-c">//</span> memset, memmove, memcpy, strlen, strchr, strcpy, strcmp</span></td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Version</span></td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> (Integer encoded as XYYZZ for use in #if preprocessor conditionals. Work in progress versions typically starts at XYY99 then bounce up to XYY00, XYY01 etc. when release tagging happens)</span></td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IMGUI_VERSION</span>               <span class="pl-s"><span class="pl-pds">&quot;</span>1.78 WIP<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IMGUI_VERSION_NUM</span>           <span class="pl-c1">17703</span></td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IMGUI_CHECKVERSION</span>()        ImGui::DebugCheckVersionAndDataLayout(IMGUI_VERSION, <span class="pl-k">sizeof</span>(ImGuiIO), <span class="pl-k">sizeof</span>(ImGuiStyle), <span class="pl-k">sizeof</span>(ImVec2), <span class="pl-k">sizeof</span>(ImVec4), <span class="pl-k">sizeof</span>(ImDrawVert), <span class="pl-k">sizeof</span>(ImDrawIdx))</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Define attributes of all API symbols declarations (e.g. for DLL under Windows)</span></td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> IMGUI_API is used for core imgui functions, IMGUI_IMPL_API is used for the default bindings files (imgui_impl_xxx.h)</span></td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Using dear imgui via a shared library is not recommended, because we don&#39;t guarantee backward nor forward ABI compatibility (also function call overhead, as dear imgui is a call-heavy API)</span></td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_API</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IMGUI_API</span></td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_IMPL_API</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IMGUI_IMPL_API</span>              IMGUI_API</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper Macros</span></td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IM_ASSERT</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>assert.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_ASSERT</span>(<span class="pl-v">_EXPR</span>)            assert(_EXPR)                               <span class="pl-c"><span class="pl-c">//</span> You can override the default assert handler by editing imconfig.h</span></td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> !defined(IMGUI_USE_STB_SPRINTF) &amp;&amp; (defined(__clang__) || defined(__GNUC__))</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_FMTARGS</span>(<span class="pl-v">FMT</span>)             __attribute__((format(printf, FMT, FMT+<span class="pl-c1">1</span>))) <span class="pl-c"><span class="pl-c">//</span> To apply printf-style warnings to our functions.</span></td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_FMTLIST</span>(<span class="pl-v">FMT</span>)             __attribute__((format(printf, FMT, <span class="pl-c1">0</span>)))</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_FMTARGS</span>(<span class="pl-v">FMT</span>)</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_FMTLIST</span>(<span class="pl-v">FMT</span>)</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_ARRAYSIZE</span>(<span class="pl-v">_ARR</span>)          ((<span class="pl-k">int</span>)(<span class="pl-k">sizeof</span>(_ARR) / <span class="pl-k">sizeof</span>(*(_ARR))))     <span class="pl-c"><span class="pl-c">//</span> Size of a static C-style array. Don&#39;t use on pointers!</span></td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_UNUSED</span>(<span class="pl-v">_VAR</span>)             ((<span class="pl-k">void</span>)(_VAR))                              <span class="pl-c"><span class="pl-c">//</span> Used to silence &quot;unused variable warnings&quot;. Often useful as asserts may be stripped out from final builds.</span></td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> (__cplusplus &gt;= 201100)</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_OFFSETOF</span>(<span class="pl-v">_TYPE,_MEMBER</span>)  offsetof(_TYPE, _MEMBER)                    <span class="pl-c"><span class="pl-c">//</span> Offset of _MEMBER within _TYPE. Standardized as offsetof() in C++11</span></td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_OFFSETOF</span>(<span class="pl-v">_TYPE,_MEMBER</span>)  ((<span class="pl-c1">size_t</span>)&amp;(((_TYPE*)<span class="pl-c1">0</span>)-&gt;_MEMBER))           <span class="pl-c"><span class="pl-c">//</span> Offset of _MEMBER within _TYPE. Old style macro.</span></td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Warnings</span></td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> defined(__clang__)</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> clang diagnostic push</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> clang diagnostic ignored &quot;-Wold-style-cast&quot;</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> __has_warning(&quot;-Wzero-as-null-pointer-constant&quot;)</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> clang diagnostic ignored &quot;-Wzero-as-null-pointer-constant&quot;</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">elif</span> defined(__GNUC__)</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> GCC diagnostic push</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> GCC diagnostic ignored &quot;-Wpragmas&quot;                  <span class="pl-c"><span class="pl-c">//</span> warning: unknown option after &#39;#pragma GCC diagnostic&#39; kind</span></td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> GCC diagnostic ignored &quot;-Wclass-memaccess&quot;          <span class="pl-c"><span class="pl-c">//</span> [__GNUC__ &gt;= 8] warning: &#39;memset/memcpy&#39; clearing/writing an object of type &#39;xxxx&#39; with no trivial copy-assignment; use assignment or value-initialization instead</span></td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Forward declarations and basic types</span></td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Forward declarations</span></td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawChannel</span>;               <span class="pl-c"><span class="pl-c">//</span> Temporary storage to output draw commands out of order, used by ImDrawListSplitter and ImDrawList::ChannelsSplit()</span></td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawCmd</span>;                   <span class="pl-c"><span class="pl-c">//</span> A single draw command within a parent ImDrawList (generally maps to 1 GPU draw call, unless it is a callback)</span></td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawData</span>;                  <span class="pl-c"><span class="pl-c">//</span> All draw command lists required to render the frame + pos/size coordinates to use for the projection matrix.</span></td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawList</span>;                  <span class="pl-c"><span class="pl-c">//</span> A single draw command list (generally one per window, conceptually you may see this as a dynamic &quot;mesh&quot; builder)</span></td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawListSharedData</span>;        <span class="pl-c"><span class="pl-c">//</span> Data shared among multiple draw lists (typically owned by parent ImGui context, but you may create one yourself)</span></td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawListSplitter</span>;          <span class="pl-c"><span class="pl-c">//</span> Helper to split a draw list into different layers which can be drawn into out of order, then flattened back.</span></td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawVert</span>;                  <span class="pl-c"><span class="pl-c">//</span> A single vertex (pos + uv + col = 20 bytes by default. Override layout with IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT)</span></td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFont</span>;                      <span class="pl-c"><span class="pl-c">//</span> Runtime data for a single font within a parent ImFontAtlas</span></td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFontAtlas</span>;                 <span class="pl-c"><span class="pl-c">//</span> Runtime data for multiple fonts, bake multiple fonts into a single texture, TTF/OTF font loader</span></td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFontConfig</span>;                <span class="pl-c"><span class="pl-c">//</span> Configuration data when adding a font or merging fonts</span></td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFontGlyph</span>;                 <span class="pl-c"><span class="pl-c">//</span> A single font glyph (code point + coordinates within in ImFontAtlas + offset)</span></td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFontGlyphRangesBuilder</span>;    <span class="pl-c"><span class="pl-c">//</span> Helper to build glyph ranges from text/string data</span></td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImColor</span>;                     <span class="pl-c"><span class="pl-c">//</span> Helper functions to create a color that can be converted to either u32 or float4 (*OBSOLETE* please avoid using)</span></td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiContext</span>;                <span class="pl-c"><span class="pl-c">//</span> Dear ImGui context (opaque structure, unless including imgui_internal.h)</span></td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiIO</span>;                     <span class="pl-c"><span class="pl-c">//</span> Main configuration and I/O between your application and ImGui</span></td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiInputTextCallbackData</span>;  <span class="pl-c"><span class="pl-c">//</span> Shared state of InputText() when using custom ImGuiInputTextCallback (rare/advanced use)</span></td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiListClipper</span>;            <span class="pl-c"><span class="pl-c">//</span> Helper to manually clip large list of items</span></td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiOnceUponAFrame</span>;         <span class="pl-c"><span class="pl-c">//</span> Helper for running a block of code not more than once a frame, used by IMGUI_ONCE_UPON_A_FRAME macro</span></td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiPayload</span>;                <span class="pl-c"><span class="pl-c">//</span> User data payload for drag and drop operations</span></td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiSizeCallbackData</span>;       <span class="pl-c"><span class="pl-c">//</span> Callback data when using SetNextWindowSizeConstraints() (rare/advanced use)</span></td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiStorage</span>;                <span class="pl-c"><span class="pl-c">//</span> Helper for key-&gt;value storage</span></td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiStyle</span>;                  <span class="pl-c"><span class="pl-c">//</span> Runtime data for styling/colors</span></td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiTextBuffer</span>;             <span class="pl-c"><span class="pl-c">//</span> Helper to hold and append into a text buffer (~string builder)</span></td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiTextFilter</span>;             <span class="pl-c"><span class="pl-c">//</span> Helper to parse and apply text filters (e.g. &quot;aaaaa[,bbbbb][,ccccc]&quot;)</span></td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Enums/Flags (declared as int for compatibility with old C++, to allow using as flags and to not pollute the top of this file)</span></td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Tip: Use your programming IDE navigation facilities on the names in the _central column_ below to find the actual flags/enum lists!</span></td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   In Visual Studio IDE: CTRL+comma (&quot;Edit.NavigateTo&quot;) can follow symbols in comments, whereas CTRL+F12 (&quot;Edit.GoToImplementation&quot;) cannot.</span></td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   With Visual Assist installed: ALT+G (&quot;VAssistX.GoToImplementation&quot;) can also follow symbols in comments.</span></td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiCol;               <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiCol_             // Enum: A color identifier for styling</span></td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiCond;              <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiCond_            // Enum: A condition for many Set*() functions</span></td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiDataType;          <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiDataType_        // Enum: A primary data type</span></td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiDir;               <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiDir_             // Enum: A cardinal direction</span></td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiKey;               <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiKey_             // Enum: A key identifier (ImGui-side enum)</span></td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiNavInput;          <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiNavInput_        // Enum: An input identifier for navigation</span></td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiMouseButton;       <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiMouseButton_     // Enum: A mouse button identifier (0=left, 1=right, 2=middle)</span></td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiMouseCursor;       <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiMouseCursor_     // Enum: A mouse cursor identifier</span></td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiStyleVar;          <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiStyleVar_        // Enum: A variable identifier for styling</span></td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImDrawCornerFlags;      <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImDrawCornerFlags_    // Flags: for ImDrawList::AddRect(), AddRectFilled() etc.</span></td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImDrawListFlags;        <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImDrawListFlags_      // Flags: for ImDrawList</span></td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImFontAtlasFlags;       <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImFontAtlasFlags_     // Flags: for ImFontAtlas build</span></td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiBackendFlags;      <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiBackendFlags_    // Flags: for io.BackendFlags</span></td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiButtonFlags;       <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiButtonFlags_     // Flags: for InvisibleButton()</span></td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiColorEditFlags;    <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiColorEditFlags_  // Flags: for ColorEdit4(), ColorPicker4() etc.</span></td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiConfigFlags;       <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiConfigFlags_     // Flags: for io.ConfigFlags</span></td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiComboFlags;        <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiComboFlags_      // Flags: for BeginCombo()</span></td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiDragDropFlags;     <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiDragDropFlags_   // Flags: for BeginDragDropSource(), AcceptDragDropPayload()</span></td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiFocusedFlags;      <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiFocusedFlags_    // Flags: for IsWindowFocused()</span></td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiHoveredFlags;      <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiHoveredFlags_    // Flags: for IsItemHovered(), IsWindowHovered() etc.</span></td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiInputTextFlags;    <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiInputTextFlags_  // Flags: for InputText(), InputTextMultiline()</span></td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiKeyModFlags;       <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiKeyModFlags_     // Flags: for io.KeyMods (Ctrl/Shift/Alt/Super)</span></td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiPopupFlags;        <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiPopupFlags_      // Flags: for OpenPopup*(), BeginPopupContext*(), IsPopupOpen()</span></td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiSelectableFlags;   <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiSelectableFlags_ // Flags: for Selectable()</span></td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiTabBarFlags;       <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiTabBarFlags_     // Flags: for BeginTabBar()</span></td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiTabItemFlags;      <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiTabItemFlags_    // Flags: for BeginTabItem()</span></td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiTreeNodeFlags;     <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiTreeNodeFlags_   // Flags: for TreeNode(), TreeNodeEx(), CollapsingHeader()</span></td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">int</span> ImGuiWindowFlags;       <span class="pl-c"><span class="pl-c">//</span> -&gt; enum ImGuiWindowFlags_     // Flags: for Begin(), BeginChild()</span></td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Other types</span></td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> ImTextureID                 <span class="pl-c"><span class="pl-c">//</span> ImTextureID [configurable type: override in imconfig.h with &#39;#define ImTextureID xxx&#39;]</span></td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">void</span>* ImTextureID;          <span class="pl-c"><span class="pl-c">//</span> User data for rendering back-end to identify a texture. This is whatever to you want it to be! read the FAQ about ImTextureID for details.</span></td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">unsigned</span> <span class="pl-k">int</span> ImGuiID;       <span class="pl-c"><span class="pl-c">//</span> A unique ID used by widgets, typically hashed from a stack of string.</span></td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-en">int</span> (*ImGuiInputTextCallback)(ImGuiInputTextCallbackData* data);</td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-en">void</span> (*ImGuiSizeCallback)(ImGuiSizeCallbackData* data);</td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Decoded character types</span></td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> (we generally use UTF-8 encoded string in the API. This is storage specifically for a decoded character used for keyboard input and display)</span></td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">unsigned</span> <span class="pl-k">short</span> ImWchar16;   <span class="pl-c"><span class="pl-c">//</span> A single decoded U16 character/code point. We encode them as multi bytes UTF-8 when used in strings.</span></td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">unsigned</span> <span class="pl-k">int</span> ImWchar32;     <span class="pl-c"><span class="pl-c">//</span> A single decoded U32 character/code point. We encode them as multi bytes UTF-8 when used in strings.</span></td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> IMGUI_USE_WCHAR32            <span class="pl-c"><span class="pl-c">//</span> ImWchar [configurable type: override in imconfig.h with &#39;#define IMGUI_USE_WCHAR32&#39; to support Unicode planes 1-16]</span></td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> ImWchar32 ImWchar;</td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> ImWchar16 ImWchar;</td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Basic scalar data types</span></td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">signed</span> <span class="pl-k">char</span>         ImS8;   <span class="pl-c"><span class="pl-c">//</span> 8-bit signed integer</span></td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">unsigned</span> <span class="pl-k">char</span>       ImU8;   <span class="pl-c"><span class="pl-c">//</span> 8-bit unsigned integer</span></td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">signed</span> <span class="pl-k">short</span>        ImS16;  <span class="pl-c"><span class="pl-c">//</span> 16-bit signed integer</span></td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">unsigned</span> <span class="pl-k">short</span>      ImU16;  <span class="pl-c"><span class="pl-c">//</span> 16-bit unsigned integer</span></td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">signed</span> <span class="pl-k">int</span>          ImS32;  <span class="pl-c"><span class="pl-c">//</span> 32-bit signed integer == int</span></td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">unsigned</span> <span class="pl-k">int</span>        ImU32;  <span class="pl-c"><span class="pl-c">//</span> 32-bit unsigned integer (often used to store packed colors)</span></td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> defined(_MSC_VER) &amp;&amp; !defined(__clang__)</td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">signed</span>   __int64    ImS64;  <span class="pl-c"><span class="pl-c">//</span> 64-bit signed integer (pre and post C++11 with Visual Studio)</span></td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">unsigned</span> __int64    ImU64;  <span class="pl-c"><span class="pl-c">//</span> 64-bit unsigned integer (pre and post C++11 with Visual Studio)</span></td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">elif</span> (defined(__clang__) || defined(__GNUC__)) &amp;&amp; (__cplusplus &lt; 201100)</td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>stdint.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-c1">int64_t</span>             ImS64;  <span class="pl-c"><span class="pl-c">//</span> 64-bit signed integer (pre C++11)</span></td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-c1">uint64_t</span>            ImU64;  <span class="pl-c"><span class="pl-c">//</span> 64-bit unsigned integer (pre C++11)</span></td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">signed</span>   <span class="pl-k">long</span> <span class="pl-k">long</span>  ImS64;  <span class="pl-c"><span class="pl-c">//</span> 64-bit signed integer (post C++11)</span></td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">unsigned</span> <span class="pl-k">long</span> <span class="pl-k">long</span>  ImU64;  <span class="pl-c"><span class="pl-c">//</span> 64-bit unsigned integer (post C++11)</span></td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> 2D vector (often used to store positions or sizes)</span></td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImVec2</span></td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>                                   x, y;</td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImVec2</span>()                                { x = y = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>; }</td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImVec2</span>(<span class="pl-k">float</span> _x, <span class="pl-k">float</span> _y)              { x = _x; y = _y; }</td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>  <span class="pl-k">operator</span>[] (<span class="pl-c1">size_t</span> idx) <span class="pl-k">const</span>    { <span class="pl-c1">IM_ASSERT</span>(idx &lt;= <span class="pl-c1">1</span>); <span class="pl-k">return</span> (&amp;x)[idx]; }    <span class="pl-c"><span class="pl-c">//</span> We very rarely use this [] operator, the assert overhead is fine.</span></td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>&amp; <span class="pl-k">operator</span>[] (<span class="pl-c1">size_t</span> idx)          { <span class="pl-c1">IM_ASSERT</span>(idx &lt;= <span class="pl-c1">1</span>); <span class="pl-k">return</span> (&amp;x)[idx]; }    <span class="pl-c"><span class="pl-c">//</span> We very rarely use this [] operator, the assert overhead is fine.</span></td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> IM_VEC2_CLASS_EXTRA</td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code blob-code-inner js-file-line">    IM_VEC2_CLASS_EXTRA     <span class="pl-c"><span class="pl-c">//</span> Define additional constructors and implicit cast operators in imconfig.h to convert back and forth between your math types and ImVec2.</span></td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> 4D vector (often used to store floating-point colors)</span></td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImVec4</span></td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>                                   x, y, z, w;</td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImVec4</span>()                                { x = y = z = w = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>; }</td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImVec4</span>(<span class="pl-k">float</span> _x, <span class="pl-k">float</span> _y, <span class="pl-k">float</span> _z, <span class="pl-k">float</span> _w)  { x = _x; y = _y; z = _z; w = _w; }</td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> IM_VEC4_CLASS_EXTRA</td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code blob-code-inner js-file-line">    IM_VEC4_CLASS_EXTRA     <span class="pl-c"><span class="pl-c">//</span> Define additional constructors and implicit cast operators in imconfig.h to convert back and forth between your math types and ImVec4.</span></td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> ImGui: Dear ImGui end-user API</span></td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> (This is a namespace. You can add extra ImGui:: functions in your own separate file. Please don&#39;t modify imgui source files!)</span></td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code blob-code-inner js-file-line"><span class="pl-k">namespace</span> <span class="pl-en">ImGui</span></td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Context creation and access</span></td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Each context create its own ImFontAtlas by default. You may instance one yourself and pass it to CreateContext() to share a font atlas between imgui contexts.</span></td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> None of those functions is reliant on the current context.</span></td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImGuiContext* <span class="pl-en">CreateContext</span>(ImFontAtlas* shared_font_atlas = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">DestroyContext</span>(ImGuiContext* ctx = <span class="pl-c1">NULL</span>);   <span class="pl-c"><span class="pl-c">//</span> NULL = destroy current context</span></td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImGuiContext* <span class="pl-en">GetCurrentContext</span>();</td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetCurrentContext</span>(ImGuiContext* ctx);</td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Main</span></td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImGuiIO&amp;      <span class="pl-en">GetIO</span>();                                    <span class="pl-c"><span class="pl-c">//</span> access the IO structure (mouse/keyboard/gamepad inputs, time, various configuration options/flags)</span></td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImGuiStyle&amp;   <span class="pl-en">GetStyle</span>();                                 <span class="pl-c"><span class="pl-c">//</span> access the Style structure (colors, sizes). Always use PushStyleCol(), PushStyleVar() to modify style mid-frame!</span></td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">NewFrame</span>();                                 <span class="pl-c"><span class="pl-c">//</span> start a new Dear ImGui frame, you can submit any command from this point until Render()/EndFrame().</span></td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndFrame</span>();                                 <span class="pl-c"><span class="pl-c">//</span> ends the Dear ImGui frame. automatically called by Render(). If you don&#39;t need to render data (skipping rendering) you may call EndFrame() without Render()... but you&#39;ll have wasted CPU already! If you don&#39;t need to render, better to not create any windows and not call NewFrame() at all!</span></td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Render</span>();                                   <span class="pl-c"><span class="pl-c">//</span> ends the Dear ImGui frame, finalize the draw data. You can get call GetDrawData() to obtain it and run your rendering function (up to v1.60, this used to call io.RenderDrawListsFn(). Nowadays, we allow and prefer calling your render function yourself.)</span></td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImDrawData*   <span class="pl-en">GetDrawData</span>();                              <span class="pl-c"><span class="pl-c">//</span> valid after Render() and until the next call to NewFrame(). this is what you have to render.</span></td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Demo, Debug, Information</span></td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ShowDemoWindow</span>(<span class="pl-k">bool</span>* p_open = <span class="pl-c1">NULL</span>);        <span class="pl-c"><span class="pl-c">//</span> create Demo window (previously called ShowTestWindow). demonstrate most ImGui features. call this to learn about the library! try to make it always available in your application!</span></td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ShowAboutWindow</span>(<span class="pl-k">bool</span>* p_open = <span class="pl-c1">NULL</span>);       <span class="pl-c"><span class="pl-c">//</span> create About window. display Dear ImGui version, credits and build/system information.</span></td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ShowMetricsWindow</span>(<span class="pl-k">bool</span>* p_open = <span class="pl-c1">NULL</span>);     <span class="pl-c"><span class="pl-c">//</span> create Debug/Metrics window. display Dear ImGui internals: draw commands (with individual draw calls and vertices), window list, basic internal state, etc.</span></td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ShowStyleEditor</span>(ImGuiStyle* ref = <span class="pl-c1">NULL</span>);    <span class="pl-c"><span class="pl-c">//</span> add style editor block (not a window). you can pass in a reference ImGuiStyle structure to compare to, revert to and save to (else it uses the default style)</span></td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ShowStyleSelector</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label);       <span class="pl-c"><span class="pl-c">//</span> add style selector block (not a window), essentially a combo listing the default styles.</span></td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ShowFontSelector</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label);        <span class="pl-c"><span class="pl-c">//</span> add font selector block (not a window), essentially a combo listing the loaded fonts.</span></td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ShowUserGuide</span>();                            <span class="pl-c"><span class="pl-c">//</span> add basic help/info block (not a window): how to manipulate ImGui as a end-user (mouse/keyboard controls).</span></td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> <span class="pl-k">char</span>*   <span class="pl-en">GetVersion</span>();                               <span class="pl-c"><span class="pl-c">//</span> get the compiled version string e.g. &quot;1.23&quot; (essentially the compiled value for IMGUI_VERSION)</span></td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Styles</span></td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">StyleColorsDark</span>(ImGuiStyle* dst = <span class="pl-c1">NULL</span>);    <span class="pl-c"><span class="pl-c">//</span> new, recommended style (default)</span></td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">StyleColorsClassic</span>(ImGuiStyle* dst = <span class="pl-c1">NULL</span>); <span class="pl-c"><span class="pl-c">//</span> classic imgui style</span></td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">StyleColorsLight</span>(ImGuiStyle* dst = <span class="pl-c1">NULL</span>);   <span class="pl-c"><span class="pl-c">//</span> best used with borders and a custom, thicker font</span></td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Windows</span></td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Begin() = push window to the stack and start appending to it. End() = pop window from the stack.</span></td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Passing &#39;bool* p_open != NULL&#39; shows a window-closing widget in the upper-right corner of the window,</span></td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   which clicking will set the boolean to false when clicked.</span></td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - You may append multiple times to the same window during the same frame by calling Begin()/End() pairs multiple times.</span></td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   Some information such as &#39;flags&#39; or &#39;p_open&#39; will only be considered by the first call to Begin().</span></td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Begin() return false to indicate the window is collapsed or fully clipped, so you may early out and omit submitting</span></td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   anything to the window. Always call a matching End() for each Begin() call, regardless of its return value!</span></td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   [Important: due to legacy reason, this is inconsistent with most other functions such as BeginMenu/EndMenu,</span></td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    BeginPopup/EndPopup, etc. where the EndXXX call should only be called if the corresponding BeginXXX function</span></td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    returned true. Begin and BeginChild are the only odd ones out. Will be fixed in a future update.]</span></td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Note that the bottom of window stack always contains a window called &quot;Debug&quot;.</span></td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">Begin</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* name, <span class="pl-k">bool</span>* p_open = <span class="pl-c1">NULL</span>, ImGuiWindowFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">End</span>();</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Child Windows</span></td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Use child windows to begin into a self-contained independent scrolling/clipping regions within a host window. Child windows can embed their own child.</span></td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - For each independent axis of &#39;size&#39;: ==0.0f: use remaining host window size / &gt;0.0f: fixed size / &lt;0.0f: use remaining window size minus abs(size) / Each axis can use a different mode, e.g. ImVec2(0,400).</span></td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - BeginChild() returns false to indicate the window is collapsed or fully clipped, so you may early out and omit submitting anything to the window.</span></td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   Always call a matching EndChild() for each BeginChild() call, regardless of its return value [as with Begin: this is due to legacy reason and inconsistent with most BeginXXX functions apart from the regular Begin() which behaves like BeginChild().]</span></td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginChild</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, <span class="pl-k">const</span> ImVec2&amp; size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>), bool border = false, ImGuiWindowFlags flags = 0);</td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginChild</span>(ImGuiID id, <span class="pl-k">const</span> ImVec2&amp; size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>), bool border = false, ImGuiWindowFlags flags = 0);</td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndChild</span>();</td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Windows Utilities</span></td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - &#39;current window&#39; = the window we are appending into while inside a Begin()/End() block. &#39;next window&#39; = next window we will Begin() into.</span></td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsWindowAppearing</span>();</td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsWindowCollapsed</span>();</td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsWindowFocused</span>(ImGuiFocusedFlags flags=<span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> is current window focused? or its root/child, depending on flags. see flags for options.</span></td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsWindowHovered</span>(ImGuiHoveredFlags flags=<span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> is current window hovered (and typically: not blocked by a popup/modal)? see flags for options. NB: If you are trying to check whether your mouse should be dispatched to imgui or to your app, you should use the &#39;io.WantCaptureMouse&#39; boolean for that! Please read the FAQ!</span></td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImDrawList*   <span class="pl-en">GetWindowDrawList</span>();                        <span class="pl-c"><span class="pl-c">//</span> get draw list associated to the current window, to append your own drawing primitives</span></td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetWindowPos</span>();                             <span class="pl-c"><span class="pl-c">//</span> get current window position in screen space (useful if you want to do your own drawing via the DrawList API)</span></td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetWindowSize</span>();                            <span class="pl-c"><span class="pl-c">//</span> get current window size</span></td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetWindowWidth</span>();                           <span class="pl-c"><span class="pl-c">//</span> get current window width (shortcut for GetWindowSize().x)</span></td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetWindowHeight</span>();                          <span class="pl-c"><span class="pl-c">//</span> get current window height (shortcut for GetWindowSize().y)</span></td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Prefer using SetNextXXX functions (before Begin) rather that SetXXX functions (after Begin).</span></td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetNextWindowPos</span>(<span class="pl-k">const</span> ImVec2&amp; pos, ImGuiCond cond = <span class="pl-c1">0</span>, <span class="pl-k">const</span> ImVec2&amp; pivot = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>)); <span class="pl-c"><span class="pl-c">//</span> set next window position. call before Begin(). use pivot=(0.5f,0.5f) to center on given point, etc.</span></td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetNextWindowSize</span>(<span class="pl-k">const</span> ImVec2&amp; size, ImGuiCond cond = <span class="pl-c1">0</span>);                  <span class="pl-c"><span class="pl-c">//</span> set next window size. set axis to 0.0f to force an auto-fit on this axis. call before Begin()</span></td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetNextWindowSizeConstraints</span>(<span class="pl-k">const</span> ImVec2&amp; size_min, <span class="pl-k">const</span> ImVec2&amp; size_max, ImGuiSizeCallback custom_callback = <span class="pl-c1">NULL</span>, <span class="pl-k">void</span>* custom_callback_data = <span class="pl-c1">NULL</span>); <span class="pl-c"><span class="pl-c">//</span> set next window size limits. use -1,-1 on either X/Y axis to preserve the current size. Sizes will be rounded down. Use callback to apply non-trivial programmatic constraints.</span></td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetNextWindowContentSize</span>(<span class="pl-k">const</span> ImVec2&amp; size);                               <span class="pl-c"><span class="pl-c">//</span> set next window content size (~ scrollable client area, which enforce the range of scrollbars). Not including window decorations (title bar, menu bar, etc.) nor WindowPadding. set an axis to 0.0f to leave it automatic. call before Begin()</span></td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetNextWindowCollapsed</span>(<span class="pl-k">bool</span> collapsed, ImGuiCond cond = <span class="pl-c1">0</span>);                 <span class="pl-c"><span class="pl-c">//</span> set next window collapsed state. call before Begin()</span></td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetNextWindowFocus</span>();                                                       <span class="pl-c"><span class="pl-c">//</span> set next window to be focused / top-most. call before Begin()</span></td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetNextWindowBgAlpha</span>(<span class="pl-k">float</span> alpha);                                          <span class="pl-c"><span class="pl-c">//</span> set next window background color alpha. helper to easily override the Alpha component of ImGuiCol_WindowBg/ChildBg/PopupBg. you may also use ImGuiWindowFlags_NoBackground.</span></td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetWindowPos</span>(<span class="pl-k">const</span> ImVec2&amp; pos, ImGuiCond cond = <span class="pl-c1">0</span>);                        <span class="pl-c"><span class="pl-c">//</span> (not recommended) set current window position - call within Begin()/End(). prefer using SetNextWindowPos(), as this may incur tearing and side-effects.</span></td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetWindowSize</span>(<span class="pl-k">const</span> ImVec2&amp; size, ImGuiCond cond = <span class="pl-c1">0</span>);                      <span class="pl-c"><span class="pl-c">//</span> (not recommended) set current window size - call within Begin()/End(). set to ImVec2(0, 0) to force an auto-fit. prefer using SetNextWindowSize(), as this may incur tearing and minor side-effects.</span></td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetWindowCollapsed</span>(<span class="pl-k">bool</span> collapsed, ImGuiCond cond = <span class="pl-c1">0</span>);                     <span class="pl-c"><span class="pl-c">//</span> (not recommended) set current window collapsed state. prefer using SetNextWindowCollapsed().</span></td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetWindowFocus</span>();                                                           <span class="pl-c"><span class="pl-c">//</span> (not recommended) set current window to be focused / top-most. prefer using SetNextWindowFocus().</span></td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetWindowFontScale</span>(<span class="pl-k">float</span> scale);                                            <span class="pl-c"><span class="pl-c">//</span> set font scale. Adjust IO.FontGlobalScale if you want to scale all windows. This is an old API! For correct scaling, prefer to reload font + rebuild ImFontAtlas + call style.ScaleAllSizes().</span></td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetWindowPos</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* name, <span class="pl-k">const</span> ImVec2&amp; pos, ImGuiCond cond = <span class="pl-c1">0</span>);      <span class="pl-c"><span class="pl-c">//</span> set named window position.</span></td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetWindowSize</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* name, <span class="pl-k">const</span> ImVec2&amp; size, ImGuiCond cond = <span class="pl-c1">0</span>);    <span class="pl-c"><span class="pl-c">//</span> set named window size. set axis to 0.0f to force an auto-fit on this axis.</span></td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetWindowCollapsed</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* name, <span class="pl-k">bool</span> collapsed, ImGuiCond cond = <span class="pl-c1">0</span>);   <span class="pl-c"><span class="pl-c">//</span> set named window collapsed state</span></td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetWindowFocus</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* name);                                           <span class="pl-c"><span class="pl-c">//</span> set named window to be focused / top-most. use NULL to remove focus.</span></td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Content region</span></td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Those functions are bound to be redesigned soon (they are confusing, incomplete and return values in local window coordinates which increases confusion)</span></td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetContentRegionMax</span>();                                          <span class="pl-c"><span class="pl-c">//</span> current content boundaries (typically window boundaries including scrolling, or current column boundaries), in windows coordinates</span></td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetContentRegionAvail</span>();                                        <span class="pl-c"><span class="pl-c">//</span> == GetContentRegionMax() - GetCursorPos()</span></td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetWindowContentRegionMin</span>();                                    <span class="pl-c"><span class="pl-c">//</span> content boundaries min (roughly (0,0)-Scroll), in window coordinates</span></td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetWindowContentRegionMax</span>();                                    <span class="pl-c"><span class="pl-c">//</span> content boundaries max (roughly (0,0)+Size-Scroll) where Size can be override with SetNextWindowContentSize(), in window coordinates</span></td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetWindowContentRegionWidth</span>();                                  <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Windows Scrolling</span></td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetScrollX</span>();                                                   <span class="pl-c"><span class="pl-c">//</span> get scrolling amount [0..GetScrollMaxX()]</span></td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetScrollY</span>();                                                   <span class="pl-c"><span class="pl-c">//</span> get scrolling amount [0..GetScrollMaxY()]</span></td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetScrollMaxX</span>();                                                <span class="pl-c"><span class="pl-c">//</span> get maximum scrolling amount ~~ ContentSize.x - WindowSize.x</span></td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetScrollMaxY</span>();                                                <span class="pl-c"><span class="pl-c">//</span> get maximum scrolling amount ~~ ContentSize.y - WindowSize.y</span></td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetScrollX</span>(<span class="pl-k">float</span> scroll_x);                                     <span class="pl-c"><span class="pl-c">//</span> set scrolling amount [0..GetScrollMaxX()]</span></td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetScrollY</span>(<span class="pl-k">float</span> scroll_y);                                     <span class="pl-c"><span class="pl-c">//</span> set scrolling amount [0..GetScrollMaxY()]</span></td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetScrollHereX</span>(<span class="pl-k">float</span> center_x_ratio = <span class="pl-c1">0</span>.<span class="pl-c1">5f</span>);                    <span class="pl-c"><span class="pl-c">//</span> adjust scrolling amount to make current cursor position visible. center_x_ratio=0.0: left, 0.5: center, 1.0: right. When using to make a &quot;default/current item&quot; visible, consider using SetItemDefaultFocus() instead.</span></td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetScrollHereY</span>(<span class="pl-k">float</span> center_y_ratio = <span class="pl-c1">0</span>.<span class="pl-c1">5f</span>);                    <span class="pl-c"><span class="pl-c">//</span> adjust scrolling amount to make current cursor position visible. center_y_ratio=0.0: top, 0.5: center, 1.0: bottom. When using to make a &quot;default/current item&quot; visible, consider using SetItemDefaultFocus() instead.</span></td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetScrollFromPosX</span>(<span class="pl-k">float</span> local_x, <span class="pl-k">float</span> center_x_ratio = <span class="pl-c1">0</span>.<span class="pl-c1">5f</span>);  <span class="pl-c"><span class="pl-c">//</span> adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.</span></td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetScrollFromPosY</span>(<span class="pl-k">float</span> local_y, <span class="pl-k">float</span> center_y_ratio = <span class="pl-c1">0</span>.<span class="pl-c1">5f</span>);  <span class="pl-c"><span class="pl-c">//</span> adjust scrolling amount to make given position visible. Generally GetCursorStartPos() + offset to compute a valid position.</span></td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Parameters stacks (shared)</span></td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushFont</span>(ImFont* font);                                         <span class="pl-c"><span class="pl-c">//</span> use NULL as a shortcut to push default font</span></td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PopFont</span>();</td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushStyleColor</span>(ImGuiCol idx, ImU32 col);</td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushStyleColor</span>(ImGuiCol idx, <span class="pl-k">const</span> ImVec4&amp; col);</td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PopStyleColor</span>(<span class="pl-k">int</span> count = <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushStyleVar</span>(ImGuiStyleVar idx, <span class="pl-k">float</span> val);</td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushStyleVar</span>(ImGuiStyleVar idx, <span class="pl-k">const</span> ImVec2&amp; val);</td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PopStyleVar</span>(<span class="pl-k">int</span> count = <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImVec4&amp; <span class="pl-en">GetStyleColorVec4</span>(ImGuiCol idx);                                <span class="pl-c"><span class="pl-c">//</span> retrieve style color as stored in ImGuiStyle structure. use to feed back into PushStyleColor(), otherwise use GetColorU32() to get style color with style alpha baked in.</span></td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImFont*       <span class="pl-en">GetFont</span>();                                                      <span class="pl-c"><span class="pl-c">//</span> get current font</span></td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetFontSize</span>();                                                  <span class="pl-c"><span class="pl-c">//</span> get current font size (= height in pixels) of current font with current scale applied</span></td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetFontTexUvWhitePixel</span>();                                       <span class="pl-c"><span class="pl-c">//</span> get UV coordinate for a while pixel, useful to draw custom shapes via the ImDrawList API</span></td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImU32         <span class="pl-en">GetColorU32</span>(ImGuiCol idx, <span class="pl-k">float</span> alpha_mul = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);              <span class="pl-c"><span class="pl-c">//</span> retrieve given style color with style alpha applied and optional extra alpha multiplier</span></td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImU32         <span class="pl-en">GetColorU32</span>(<span class="pl-k">const</span> ImVec4&amp; col);                                 <span class="pl-c"><span class="pl-c">//</span> retrieve given color with style alpha applied</span></td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImU32         <span class="pl-en">GetColorU32</span>(ImU32 col);                                         <span class="pl-c"><span class="pl-c">//</span> retrieve given color with style alpha applied</span></td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Parameters stacks (current window)</span></td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushItemWidth</span>(<span class="pl-k">float</span> item_width);                                <span class="pl-c"><span class="pl-c">//</span> push width of items for common large &quot;item+label&quot; widgets. &gt;0.0f: width in pixels, &lt;0.0f align xx pixels to the right of window (so -1.0f always align width to the right side). 0.0f = default to ~2/3 of windows width,</span></td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PopItemWidth</span>();</td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetNextItemWidth</span>(<span class="pl-k">float</span> item_width);                             <span class="pl-c"><span class="pl-c">//</span> set width of the _next_ common large &quot;item+label&quot; widget. &gt;0.0f: width in pixels, &lt;0.0f align xx pixels to the right of window (so -1.0f always align width to the right side)</span></td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">CalcItemWidth</span>();                                                <span class="pl-c"><span class="pl-c">//</span> width of item given pushed settings and current cursor position. NOT necessarily the width of last item unlike most &#39;Item&#39; functions.</span></td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushTextWrapPos</span>(<span class="pl-k">float</span> wrap_local_pos_x = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>);                 <span class="pl-c"><span class="pl-c">//</span> push word-wrapping position for Text*() commands. &lt; 0.0f: no wrapping; 0.0f: wrap to end of window (or column); &gt; 0.0f: wrap at &#39;wrap_pos_x&#39; position in window local space</span></td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PopTextWrapPos</span>();</td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushAllowKeyboardFocus</span>(<span class="pl-k">bool</span> allow_keyboard_focus);              <span class="pl-c"><span class="pl-c">//</span> allow focusing using TAB/Shift-TAB, enabled by default but you can disable it for certain widgets</span></td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PopAllowKeyboardFocus</span>();</td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushButtonRepeat</span>(<span class="pl-k">bool</span> repeat);                                  <span class="pl-c"><span class="pl-c">//</span> in &#39;repeat&#39; mode, Button*() functions return repeated true in a typematic manner (using io.KeyRepeatDelay/io.KeyRepeatRate setting). Note that you can call IsItemActive() after any Button() to tell if the button is held in the current frame.</span></td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PopButtonRepeat</span>();</td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Cursor / Layout</span></td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - By &quot;cursor&quot; we mean the current output position.</span></td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - The typical widget behavior is to output themselves at the current cursor position, then move the cursor one line down.</span></td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - You can call SameLine() between widgets to undo the last carriage return and output at the right of the preceding widget.</span></td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Attention! We currently have inconsistencies between window-local and absolute positions we will aim to fix with future API:</span></td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    Window-local coordinates:   SameLine(), GetCursorPos(), SetCursorPos(), GetCursorStartPos(), GetContentRegionMax(), GetWindowContentRegion*(), PushTextWrapPos()</span></td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    Absolute coordinate:        GetCursorScreenPos(), SetCursorScreenPos(), all ImDrawList:: functions.</span></td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Separator</span>();                                                    <span class="pl-c"><span class="pl-c">//</span> separator, generally horizontal. inside a menu bar or in horizontal layout mode, this becomes a vertical separator.</span></td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SameLine</span>(<span class="pl-k">float</span> offset_from_start_x=<span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> spacing=-<span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);  <span class="pl-c"><span class="pl-c">//</span> call between widgets or groups to layout them horizontally. X position given in window coordinates.</span></td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">NewLine</span>();                                                      <span class="pl-c"><span class="pl-c">//</span> undo a SameLine() or force a new line when in an horizontal-layout context.</span></td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Spacing</span>();                                                      <span class="pl-c"><span class="pl-c">//</span> add vertical spacing.</span></td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Dummy</span>(<span class="pl-k">const</span> ImVec2&amp; size);                                      <span class="pl-c"><span class="pl-c">//</span> add a dummy item of given size. unlike InvisibleButton(), Dummy() won&#39;t take the mouse click or be navigable into.</span></td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Indent</span>(<span class="pl-k">float</span> indent_w = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>);                                  <span class="pl-c"><span class="pl-c">//</span> move content position toward the right, by style.IndentSpacing or indent_w if != 0</span></td>
      </tr>
      <tr>
        <td id="L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="LC387" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Unindent</span>(<span class="pl-k">float</span> indent_w = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>);                                <span class="pl-c"><span class="pl-c">//</span> move content position back to the left, by style.IndentSpacing or indent_w if != 0</span></td>
      </tr>
      <tr>
        <td id="L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="LC388" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">BeginGroup</span>();                                                   <span class="pl-c"><span class="pl-c">//</span> lock horizontal starting position</span></td>
      </tr>
      <tr>
        <td id="L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="LC389" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndGroup</span>();                                                     <span class="pl-c"><span class="pl-c">//</span> unlock horizontal starting position + capture the whole group bounding box into one &quot;item&quot; (so you can use IsItemHovered() or layout primitives such as SameLine() on whole group, etc.)</span></td>
      </tr>
      <tr>
        <td id="L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="LC390" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetCursorPos</span>();                                                 <span class="pl-c"><span class="pl-c">//</span> cursor position in window coordinates (relative to window position)</span></td>
      </tr>
      <tr>
        <td id="L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="LC391" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetCursorPosX</span>();                                                <span class="pl-c"><span class="pl-c">//</span>   (some functions are using window-relative coordinates, such as: GetCursorPos, GetCursorStartPos, GetContentRegionMax, GetWindowContentRegion* etc.</span></td>
      </tr>
      <tr>
        <td id="L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="LC392" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetCursorPosY</span>();                                                <span class="pl-c"><span class="pl-c">//</span>    other functions such as GetCursorScreenPos or everything in ImDrawList::</span></td>
      </tr>
      <tr>
        <td id="L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="LC393" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetCursorPos</span>(<span class="pl-k">const</span> ImVec2&amp; local_pos);                          <span class="pl-c"><span class="pl-c">//</span>    are using the main, absolute coordinate system.</span></td>
      </tr>
      <tr>
        <td id="L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="LC394" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetCursorPosX</span>(<span class="pl-k">float</span> local_x);                                   <span class="pl-c"><span class="pl-c">//</span>    GetWindowPos() + GetCursorPos() == GetCursorScreenPos() etc.)</span></td>
      </tr>
      <tr>
        <td id="L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="LC395" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetCursorPosY</span>(<span class="pl-k">float</span> local_y);                                   <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="LC396" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetCursorStartPos</span>();                                            <span class="pl-c"><span class="pl-c">//</span> initial cursor position in window coordinates</span></td>
      </tr>
      <tr>
        <td id="L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="LC397" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetCursorScreenPos</span>();                                           <span class="pl-c"><span class="pl-c">//</span> cursor position in absolute screen coordinates [0..io.DisplaySize] (useful to work with ImDrawList API)</span></td>
      </tr>
      <tr>
        <td id="L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="LC398" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetCursorScreenPos</span>(<span class="pl-k">const</span> ImVec2&amp; pos);                          <span class="pl-c"><span class="pl-c">//</span> cursor position in absolute screen coordinates [0..io.DisplaySize]</span></td>
      </tr>
      <tr>
        <td id="L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="LC399" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">AlignTextToFramePadding</span>();                                      <span class="pl-c"><span class="pl-c">//</span> vertically align upcoming text baseline to FramePadding.y so that it will align properly to regularly framed items (call if you have text on a line before a framed item)</span></td>
      </tr>
      <tr>
        <td id="L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="LC400" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetTextLineHeight</span>();                                            <span class="pl-c"><span class="pl-c">//</span> ~ FontSize</span></td>
      </tr>
      <tr>
        <td id="L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="LC401" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetTextLineHeightWithSpacing</span>();                                 <span class="pl-c"><span class="pl-c">//</span> ~ FontSize + style.ItemSpacing.y (distance in pixels between 2 consecutive lines of text)</span></td>
      </tr>
      <tr>
        <td id="L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="LC402" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetFrameHeight</span>();                                               <span class="pl-c"><span class="pl-c">//</span> ~ FontSize + style.FramePadding.y * 2</span></td>
      </tr>
      <tr>
        <td id="L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="LC403" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetFrameHeightWithSpacing</span>();                                    <span class="pl-c"><span class="pl-c">//</span> ~ FontSize + style.FramePadding.y * 2 + style.ItemSpacing.y (distance in pixels between 2 consecutive lines of framed widgets)</span></td>
      </tr>
      <tr>
        <td id="L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="LC404" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="LC405" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> ID stack/scopes</span></td>
      </tr>
      <tr>
        <td id="L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="LC406" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Read the FAQ for more details about how ID are handled in dear imgui. If you are creating widgets in a loop you most</span></td>
      </tr>
      <tr>
        <td id="L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="LC407" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   likely want to push a unique identifier (e.g. object pointer, loop index) to uniquely differentiate them.</span></td>
      </tr>
      <tr>
        <td id="L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="LC408" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - The resulting ID are hashes of the entire stack.</span></td>
      </tr>
      <tr>
        <td id="L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="LC409" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - You can also use the &quot;Label##foobar&quot; syntax within widget label to distinguish them from each others.</span></td>
      </tr>
      <tr>
        <td id="L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="LC410" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - In this header file we use the &quot;label&quot;/&quot;name&quot; terminology to denote a string that will be displayed and used as an ID,</span></td>
      </tr>
      <tr>
        <td id="L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="LC411" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   whereas &quot;str_id&quot; denote a string that is only used as an ID and not normally displayed.</span></td>
      </tr>
      <tr>
        <td id="L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="LC412" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushID</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id);                                     <span class="pl-c"><span class="pl-c">//</span> push string into the ID stack (will hash string).</span></td>
      </tr>
      <tr>
        <td id="L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="LC413" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushID</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id_begin, <span class="pl-k">const</span> <span class="pl-k">char</span>* str_id_end);       <span class="pl-c"><span class="pl-c">//</span> push string into the ID stack (will hash string).</span></td>
      </tr>
      <tr>
        <td id="L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="LC414" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushID</span>(<span class="pl-k">const</span> <span class="pl-k">void</span>* ptr_id);                                     <span class="pl-c"><span class="pl-c">//</span> push pointer into the ID stack (will hash pointer).</span></td>
      </tr>
      <tr>
        <td id="L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="LC415" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushID</span>(<span class="pl-k">int</span> int_id);                                             <span class="pl-c"><span class="pl-c">//</span> push integer into the ID stack (will hash integer).</span></td>
      </tr>
      <tr>
        <td id="L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="LC416" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PopID</span>();                                                        <span class="pl-c"><span class="pl-c">//</span> pop from the ID stack.</span></td>
      </tr>
      <tr>
        <td id="L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="LC417" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImGuiID       <span class="pl-en">GetID</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id);                                      <span class="pl-c"><span class="pl-c">//</span> calculate unique ID (hash of whole ID stack + given parameter). e.g. if you want to query into ImGuiStorage yourself</span></td>
      </tr>
      <tr>
        <td id="L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="LC418" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImGuiID       <span class="pl-en">GetID</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id_begin, <span class="pl-k">const</span> <span class="pl-k">char</span>* str_id_end);</td>
      </tr>
      <tr>
        <td id="L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="LC419" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImGuiID       <span class="pl-en">GetID</span>(<span class="pl-k">const</span> <span class="pl-k">void</span>* ptr_id);</td>
      </tr>
      <tr>
        <td id="L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="LC420" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="LC421" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Text</span></td>
      </tr>
      <tr>
        <td id="L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="LC422" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TextUnformatted</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* text, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_end = <span class="pl-c1">NULL</span>); <span class="pl-c"><span class="pl-c">//</span> raw text without formatting. Roughly equivalent to Text(&quot;%s&quot;, text) but: A) doesn&#39;t require null terminated string if &#39;text_end&#39; is specified, B) it&#39;s faster, no memory copy is done, no buffer size limits, recommended for long chunks of text.</span></td>
      </tr>
      <tr>
        <td id="L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="LC423" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Text</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...)                                      IM_FMTARGS(<span class="pl-c1">1</span>); <span class="pl-c"><span class="pl-c">//</span> formatted text</span></td>
      </tr>
      <tr>
        <td id="L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="LC424" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TextV</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args)                            IM_FMTLIST(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="LC425" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TextColored</span>(<span class="pl-k">const</span> ImVec4&amp; col, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...)            IM_FMTARGS(<span class="pl-c1">2</span>); <span class="pl-c"><span class="pl-c">//</span> shortcut for PushStyleColor(ImGuiCol_Text, col); Text(fmt, ...); PopStyleColor();</span></td>
      </tr>
      <tr>
        <td id="L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="LC426" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TextColoredV</span>(<span class="pl-k">const</span> ImVec4&amp; col, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args)  IM_FMTLIST(<span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="LC427" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TextDisabled</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...)                              IM_FMTARGS(<span class="pl-c1">1</span>); <span class="pl-c"><span class="pl-c">//</span> shortcut for PushStyleColor(ImGuiCol_Text, style.Colors[ImGuiCol_TextDisabled]); Text(fmt, ...); PopStyleColor();</span></td>
      </tr>
      <tr>
        <td id="L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="LC428" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TextDisabledV</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args)                    IM_FMTLIST(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="LC429" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TextWrapped</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...)                               IM_FMTARGS(<span class="pl-c1">1</span>); <span class="pl-c"><span class="pl-c">//</span> shortcut for PushTextWrapPos(0.0f); Text(fmt, ...); PopTextWrapPos();. Note that this won&#39;t work on an auto-resizing window if there&#39;s no other widgets to extend the window width, yoy may need to set a size using SetNextWindowSize().</span></td>
      </tr>
      <tr>
        <td id="L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="LC430" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TextWrappedV</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args)                     IM_FMTLIST(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="LC431" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">LabelText</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...)              IM_FMTARGS(<span class="pl-c1">2</span>); <span class="pl-c"><span class="pl-c">//</span> display text+label aligned the same way as value+label widgets</span></td>
      </tr>
      <tr>
        <td id="L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="LC432" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">LabelTextV</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args)    IM_FMTLIST(<span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="LC433" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">BulletText</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...)                                IM_FMTARGS(<span class="pl-c1">1</span>); <span class="pl-c"><span class="pl-c">//</span> shortcut for Bullet()+Text()</span></td>
      </tr>
      <tr>
        <td id="L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="LC434" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">BulletTextV</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args)                      IM_FMTLIST(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="LC435" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="LC436" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Main</span></td>
      </tr>
      <tr>
        <td id="L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="LC437" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Most widgets return true when the value has been changed or when pressed/selected</span></td>
      </tr>
      <tr>
        <td id="L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="LC438" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - You may also use one of the many IsItemXXX functions (e.g. IsItemActive, IsItemHovered, etc.) to query widget state.</span></td>
      </tr>
      <tr>
        <td id="L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="LC439" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">Button</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> ImVec2&amp; size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>));   <span class="pl-c"><span class="pl-c">//</span> button</span></td>
      </tr>
      <tr>
        <td id="L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="LC440" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SmallButton</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label);                                 <span class="pl-c"><span class="pl-c">//</span> button with FramePadding=(0,0) to easily embed within text</span></td>
      </tr>
      <tr>
        <td id="L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="LC441" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InvisibleButton</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, <span class="pl-k">const</span> ImVec2&amp; size, ImGuiButtonFlags flags = <span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> flexible button behavior without the visuals, frequently useful to build custom behaviors using the public api (along with IsItemActive, IsItemHovered, etc.)</span></td>
      </tr>
      <tr>
        <td id="L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="LC442" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ArrowButton</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, ImGuiDir dir);                  <span class="pl-c"><span class="pl-c">//</span> square button with an arrow shape</span></td>
      </tr>
      <tr>
        <td id="L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="LC443" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Image</span>(ImTextureID user_texture_id, <span class="pl-k">const</span> ImVec2&amp; size, <span class="pl-k">const</span> ImVec2&amp; uv0 = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>), <span class="pl-k">const</span> ImVec2&amp; uv1 = ImVec2(<span class="pl-c1">1</span>,<span class="pl-c1">1</span>), <span class="pl-k">const</span> ImVec4&amp; tint_col = ImVec4(<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,<span class="pl-c1">1</span>), <span class="pl-k">const</span> ImVec4&amp; border_col = ImVec4(<span class="pl-c1">0</span>,<span class="pl-c1">0</span>,<span class="pl-c1">0</span>,<span class="pl-c1">0</span>));</td>
      </tr>
      <tr>
        <td id="L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="LC444" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ImageButton</span>(ImTextureID user_texture_id, <span class="pl-k">const</span> ImVec2&amp; size, <span class="pl-k">const</span> ImVec2&amp; uv0 = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>),  <span class="pl-k">const</span> ImVec2&amp; uv1 = ImVec2(<span class="pl-c1">1</span>,<span class="pl-c1">1</span>), int frame_padding = -1, <span class="pl-k">const</span> ImVec4&amp; bg_col = ImVec4(<span class="pl-c1">0</span>,<span class="pl-c1">0</span>,<span class="pl-c1">0</span>,<span class="pl-c1">0</span>), <span class="pl-k">const</span> ImVec4&amp; tint_col = ImVec4(<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,<span class="pl-c1">1</span>,<span class="pl-c1">1</span>));    <span class="pl-c"><span class="pl-c">//</span> &lt;0 frame_padding uses default frame padding settings. 0 for no padding</span></td>
      </tr>
      <tr>
        <td id="L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="LC445" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">Checkbox</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">bool</span>* v);</td>
      </tr>
      <tr>
        <td id="L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="LC446" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">CheckboxFlags</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">unsigned</span> <span class="pl-k">int</span>* flags, <span class="pl-k">unsigned</span> <span class="pl-k">int</span> flags_value);</td>
      </tr>
      <tr>
        <td id="L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="LC447" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">RadioButton</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">bool</span> active);                    <span class="pl-c"><span class="pl-c">//</span> use with e.g. if (RadioButton(&quot;one&quot;, my_value==1)) { my_value = 1; }</span></td>
      </tr>
      <tr>
        <td id="L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="LC448" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">RadioButton</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span>* v, <span class="pl-k">int</span> v_button);           <span class="pl-c"><span class="pl-c">//</span> shortcut to handle the above pattern when value is an integer</span></td>
      </tr>
      <tr>
        <td id="L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="LC449" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ProgressBar</span>(<span class="pl-k">float</span> fraction, <span class="pl-k">const</span> ImVec2&amp; size_arg = ImVec2(-<span class="pl-c1">1</span>, <span class="pl-c1">0</span>), <span class="pl-k">const</span> char* overlay = NULL);</td>
      </tr>
      <tr>
        <td id="L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="LC450" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Bullet</span>();                                                       <span class="pl-c"><span class="pl-c">//</span> draw a small circle + keep the cursor on the same line. advance cursor x position by GetTreeNodeToLabelSpacing(), same distance that TreeNode() uses</span></td>
      </tr>
      <tr>
        <td id="L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="LC451" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="LC452" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Combo Box</span></td>
      </tr>
      <tr>
        <td id="L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="LC453" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - The BeginCombo()/EndCombo() api allows you to manage your contents and selection state however you want it, by creating e.g. Selectable() items.</span></td>
      </tr>
      <tr>
        <td id="L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="LC454" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - The old Combo() api are helpers over BeginCombo()/EndCombo() which are kept available for convenience purpose.</span></td>
      </tr>
      <tr>
        <td id="L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="LC455" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginCombo</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> <span class="pl-k">char</span>* preview_value, ImGuiComboFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="LC456" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndCombo</span>(); <span class="pl-c"><span class="pl-c">//</span> only call EndCombo() if BeginCombo() returns true!</span></td>
      </tr>
      <tr>
        <td id="L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="LC457" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">Combo</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span>* current_item, <span class="pl-k">const</span> <span class="pl-k">char</span>* <span class="pl-k">const</span> items[], <span class="pl-k">int</span> items_count, <span class="pl-k">int</span> popup_max_height_in_items = -<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="LC458" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">Combo</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span>* current_item, <span class="pl-k">const</span> <span class="pl-k">char</span>* items_separated_by_zeros, <span class="pl-k">int</span> popup_max_height_in_items = -<span class="pl-c1">1</span>);      <span class="pl-c"><span class="pl-c">//</span> Separate items with \0 within a string, end item-list with \0\0. e.g. &quot;One\0Two\0Three\0&quot;</span></td>
      </tr>
      <tr>
        <td id="L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="LC459" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">Combo</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span>* current_item, <span class="pl-k">bool</span>(*items_getter)(<span class="pl-k">void</span>* data, <span class="pl-k">int</span> idx, <span class="pl-k">const</span> <span class="pl-k">char</span>** out_text), void* data, int items_count, int popup_max_height_in_items = -1);</td>
      </tr>
      <tr>
        <td id="L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="LC460" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L461" class="blob-num js-line-number" data-line-number="461"></td>
        <td id="LC461" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Drags</span></td>
      </tr>
      <tr>
        <td id="L462" class="blob-num js-line-number" data-line-number="462"></td>
        <td id="LC462" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - CTRL+Click on any drag box to turn them into an input box. Manually input values aren&#39;t clamped and can go off-bounds.</span></td>
      </tr>
      <tr>
        <td id="L463" class="blob-num js-line-number" data-line-number="463"></td>
        <td id="LC463" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - For all the Float2/Float3/Float4/Int2/Int3/Int4 versions of every functions, note that a &#39;float v[X]&#39; function argument is the same as &#39;float* v&#39;, the array syntax is just a way to document the number of elements that are expected to be accessible. You can pass address of your first element out of a contiguous set, e.g. &amp;myvector.x</span></td>
      </tr>
      <tr>
        <td id="L464" class="blob-num js-line-number" data-line-number="464"></td>
        <td id="LC464" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Adjust format string to decorate the value with a prefix, a suffix, or adapt the editing and display precision e.g. &quot;%.3f&quot; -&gt; 1.234; &quot;%5.2f secs&quot; -&gt; 01.23 secs; &quot;Biscuit: %.0f&quot; -&gt; Biscuit: 1; etc.</span></td>
      </tr>
      <tr>
        <td id="L465" class="blob-num js-line-number" data-line-number="465"></td>
        <td id="LC465" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Speed are per-pixel of mouse movement (v_speed=0.2f: mouse needs to move by 5 pixels to increase value by 1). For gamepad/keyboard navigation, minimum speed is Max(v_speed, minimum_step_at_given_precision).</span></td>
      </tr>
      <tr>
        <td id="L466" class="blob-num js-line-number" data-line-number="466"></td>
        <td id="LC466" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Use v_min &lt; v_max to clamp edits to given limits. Note that CTRL+Click manual input can override those limits.</span></td>
      </tr>
      <tr>
        <td id="L467" class="blob-num js-line-number" data-line-number="467"></td>
        <td id="LC467" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Use v_max = FLT_MAX / INT_MAX etc to avoid clamping to a maximum, same with v_min = -FLT_MAX / INT_MIN to avoid clamping to a minimum.</span></td>
      </tr>
      <tr>
        <td id="L468" class="blob-num js-line-number" data-line-number="468"></td>
        <td id="LC468" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragFloat</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span>* v, <span class="pl-k">float</span> v_speed = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_min = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_max = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);     <span class="pl-c"><span class="pl-c">//</span> If v_min &gt;= v_max we have no bound</span></td>
      </tr>
      <tr>
        <td id="L469" class="blob-num js-line-number" data-line-number="469"></td>
        <td id="LC469" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragFloat2</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">2</span>], <span class="pl-k">float</span> v_speed = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_min = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_max = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L470" class="blob-num js-line-number" data-line-number="470"></td>
        <td id="LC470" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragFloat3</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">3</span>], <span class="pl-k">float</span> v_speed = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_min = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_max = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L471" class="blob-num js-line-number" data-line-number="471"></td>
        <td id="LC471" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragFloat4</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">4</span>], <span class="pl-k">float</span> v_speed = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_min = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_max = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L472" class="blob-num js-line-number" data-line-number="472"></td>
        <td id="LC472" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragFloatRange2</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span>* v_current_min, <span class="pl-k">float</span>* v_current_max, <span class="pl-k">float</span> v_speed = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_min = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_max = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format_max = <span class="pl-c1">NULL</span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L473" class="blob-num js-line-number" data-line-number="473"></td>
        <td id="LC473" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragInt</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span>* v, <span class="pl-k">float</span> v_speed = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>, <span class="pl-k">int</span> v_min = <span class="pl-c1">0</span>, <span class="pl-k">int</span> v_max = <span class="pl-c1">0</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%d<span class="pl-pds">&quot;</span></span>);                                       <span class="pl-c"><span class="pl-c">//</span> If v_min &gt;= v_max we have no bound</span></td>
      </tr>
      <tr>
        <td id="L474" class="blob-num js-line-number" data-line-number="474"></td>
        <td id="LC474" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragInt2</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span> v[<span class="pl-c1">2</span>], <span class="pl-k">float</span> v_speed = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>, <span class="pl-k">int</span> v_min = <span class="pl-c1">0</span>, <span class="pl-k">int</span> v_max = <span class="pl-c1">0</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%d<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L475" class="blob-num js-line-number" data-line-number="475"></td>
        <td id="LC475" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragInt3</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span> v[<span class="pl-c1">3</span>], <span class="pl-k">float</span> v_speed = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>, <span class="pl-k">int</span> v_min = <span class="pl-c1">0</span>, <span class="pl-k">int</span> v_max = <span class="pl-c1">0</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%d<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L476" class="blob-num js-line-number" data-line-number="476"></td>
        <td id="LC476" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragInt4</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span> v[<span class="pl-c1">4</span>], <span class="pl-k">float</span> v_speed = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>, <span class="pl-k">int</span> v_min = <span class="pl-c1">0</span>, <span class="pl-k">int</span> v_max = <span class="pl-c1">0</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%d<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L477" class="blob-num js-line-number" data-line-number="477"></td>
        <td id="LC477" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragIntRange2</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span>* v_current_min, <span class="pl-k">int</span>* v_current_max, <span class="pl-k">float</span> v_speed = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>, <span class="pl-k">int</span> v_min = <span class="pl-c1">0</span>, <span class="pl-k">int</span> v_max = <span class="pl-c1">0</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%d<span class="pl-pds">&quot;</span></span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format_max = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L478" class="blob-num js-line-number" data-line-number="478"></td>
        <td id="LC478" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragScalar</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, ImGuiDataType data_type, <span class="pl-k">void</span>* p_data, <span class="pl-k">float</span> v_speed, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_min = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_max = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-c1">NULL</span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L479" class="blob-num js-line-number" data-line-number="479"></td>
        <td id="LC479" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DragScalarN</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, ImGuiDataType data_type, <span class="pl-k">void</span>* p_data, <span class="pl-k">int</span> components, <span class="pl-k">float</span> v_speed, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_min = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_max = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-c1">NULL</span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L480" class="blob-num js-line-number" data-line-number="480"></td>
        <td id="LC480" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L481" class="blob-num js-line-number" data-line-number="481"></td>
        <td id="LC481" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Sliders</span></td>
      </tr>
      <tr>
        <td id="L482" class="blob-num js-line-number" data-line-number="482"></td>
        <td id="LC482" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - CTRL+Click on any slider to turn them into an input box. Manually input values aren&#39;t clamped and can go off-bounds.</span></td>
      </tr>
      <tr>
        <td id="L483" class="blob-num js-line-number" data-line-number="483"></td>
        <td id="LC483" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Adjust format string to decorate the value with a prefix, a suffix, or adapt the editing and display precision e.g. &quot;%.3f&quot; -&gt; 1.234; &quot;%5.2f secs&quot; -&gt; 01.23 secs; &quot;Biscuit: %.0f&quot; -&gt; Biscuit: 1; etc.</span></td>
      </tr>
      <tr>
        <td id="L484" class="blob-num js-line-number" data-line-number="484"></td>
        <td id="LC484" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderFloat</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span>* v, <span class="pl-k">float</span> v_min, <span class="pl-k">float</span> v_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);     <span class="pl-c"><span class="pl-c">//</span> adjust format to decorate the value with a prefix or a suffix for in-slider labels or unit display. Use power!=1.0 for power curve sliders</span></td>
      </tr>
      <tr>
        <td id="L485" class="blob-num js-line-number" data-line-number="485"></td>
        <td id="LC485" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderFloat2</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">2</span>], <span class="pl-k">float</span> v_min, <span class="pl-k">float</span> v_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L486" class="blob-num js-line-number" data-line-number="486"></td>
        <td id="LC486" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderFloat3</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">3</span>], <span class="pl-k">float</span> v_min, <span class="pl-k">float</span> v_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L487" class="blob-num js-line-number" data-line-number="487"></td>
        <td id="LC487" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderFloat4</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">4</span>], <span class="pl-k">float</span> v_min, <span class="pl-k">float</span> v_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L488" class="blob-num js-line-number" data-line-number="488"></td>
        <td id="LC488" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderAngle</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span>* v_rad, <span class="pl-k">float</span> v_degrees_min = -<span class="pl-c1">360</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> v_degrees_max = +<span class="pl-c1">360</span>.<span class="pl-c1">0f</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.0f deg<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L489" class="blob-num js-line-number" data-line-number="489"></td>
        <td id="LC489" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderInt</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span>* v, <span class="pl-k">int</span> v_min, <span class="pl-k">int</span> v_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%d<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L490" class="blob-num js-line-number" data-line-number="490"></td>
        <td id="LC490" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderInt2</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span> v[<span class="pl-c1">2</span>], <span class="pl-k">int</span> v_min, <span class="pl-k">int</span> v_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%d<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L491" class="blob-num js-line-number" data-line-number="491"></td>
        <td id="LC491" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderInt3</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span> v[<span class="pl-c1">3</span>], <span class="pl-k">int</span> v_min, <span class="pl-k">int</span> v_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%d<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L492" class="blob-num js-line-number" data-line-number="492"></td>
        <td id="LC492" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderInt4</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span> v[<span class="pl-c1">4</span>], <span class="pl-k">int</span> v_min, <span class="pl-k">int</span> v_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%d<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L493" class="blob-num js-line-number" data-line-number="493"></td>
        <td id="LC493" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderScalar</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, ImGuiDataType data_type, <span class="pl-k">void</span>* p_data, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_min, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-c1">NULL</span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L494" class="blob-num js-line-number" data-line-number="494"></td>
        <td id="LC494" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SliderScalarN</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, ImGuiDataType data_type, <span class="pl-k">void</span>* p_data, <span class="pl-k">int</span> components, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_min, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-c1">NULL</span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L495" class="blob-num js-line-number" data-line-number="495"></td>
        <td id="LC495" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">VSliderFloat</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> ImVec2&amp; size, <span class="pl-k">float</span>* v, <span class="pl-k">float</span> v_min, <span class="pl-k">float</span> v_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L496" class="blob-num js-line-number" data-line-number="496"></td>
        <td id="LC496" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">VSliderInt</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> ImVec2&amp; size, <span class="pl-k">int</span>* v, <span class="pl-k">int</span> v_min, <span class="pl-k">int</span> v_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%d<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L497" class="blob-num js-line-number" data-line-number="497"></td>
        <td id="LC497" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">VSliderScalar</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> ImVec2&amp; size, ImGuiDataType data_type, <span class="pl-k">void</span>* p_data, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_min, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_max, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-c1">NULL</span>, <span class="pl-k">float</span> power = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L498" class="blob-num js-line-number" data-line-number="498"></td>
        <td id="LC498" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L499" class="blob-num js-line-number" data-line-number="499"></td>
        <td id="LC499" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Input with Keyboard</span></td>
      </tr>
      <tr>
        <td id="L500" class="blob-num js-line-number" data-line-number="500"></td>
        <td id="LC500" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - If you want to use InputText() with std::string or any custom dynamic string type, see misc/cpp/imgui_stdlib.h and comments in imgui_demo.cpp.</span></td>
      </tr>
      <tr>
        <td id="L501" class="blob-num js-line-number" data-line-number="501"></td>
        <td id="LC501" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Most of the ImGuiInputTextFlags flags are only useful for InputText() and not for InputFloatX, InputIntX, InputDouble etc.</span></td>
      </tr>
      <tr>
        <td id="L502" class="blob-num js-line-number" data-line-number="502"></td>
        <td id="LC502" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputText</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">char</span>* buf, <span class="pl-c1">size_t</span> buf_size, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>, ImGuiInputTextCallback callback = <span class="pl-c1">NULL</span>, <span class="pl-k">void</span>* user_data = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L503" class="blob-num js-line-number" data-line-number="503"></td>
        <td id="LC503" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputTextMultiline</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">char</span>* buf, <span class="pl-c1">size_t</span> buf_size, <span class="pl-k">const</span> ImVec2&amp; size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>), ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = NULL, void* user_data = NULL);</td>
      </tr>
      <tr>
        <td id="L504" class="blob-num js-line-number" data-line-number="504"></td>
        <td id="LC504" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputTextWithHint</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> <span class="pl-k">char</span>* hint, <span class="pl-k">char</span>* buf, <span class="pl-c1">size_t</span> buf_size, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>, ImGuiInputTextCallback callback = <span class="pl-c1">NULL</span>, <span class="pl-k">void</span>* user_data = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L505" class="blob-num js-line-number" data-line-number="505"></td>
        <td id="LC505" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputFloat</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span>* v, <span class="pl-k">float</span> step = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">float</span> step_fast = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L506" class="blob-num js-line-number" data-line-number="506"></td>
        <td id="LC506" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputFloat2</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">2</span>], <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L507" class="blob-num js-line-number" data-line-number="507"></td>
        <td id="LC507" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputFloat3</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">3</span>], <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L508" class="blob-num js-line-number" data-line-number="508"></td>
        <td id="LC508" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputFloat4</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">4</span>], <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.3f<span class="pl-pds">&quot;</span></span>, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L509" class="blob-num js-line-number" data-line-number="509"></td>
        <td id="LC509" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputInt</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span>* v, <span class="pl-k">int</span> step = <span class="pl-c1">1</span>, <span class="pl-k">int</span> step_fast = <span class="pl-c1">100</span>, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L510" class="blob-num js-line-number" data-line-number="510"></td>
        <td id="LC510" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputInt2</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span> v[<span class="pl-c1">2</span>], ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L511" class="blob-num js-line-number" data-line-number="511"></td>
        <td id="LC511" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputInt3</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span> v[<span class="pl-c1">3</span>], ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L512" class="blob-num js-line-number" data-line-number="512"></td>
        <td id="LC512" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputInt4</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span> v[<span class="pl-c1">4</span>], ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L513" class="blob-num js-line-number" data-line-number="513"></td>
        <td id="LC513" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputDouble</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">double</span>* v, <span class="pl-k">double</span> step = <span class="pl-c1">0.0</span>, <span class="pl-k">double</span> step_fast = <span class="pl-c1">0.0</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-s"><span class="pl-pds">&quot;</span>%.6f<span class="pl-pds">&quot;</span></span>, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L514" class="blob-num js-line-number" data-line-number="514"></td>
        <td id="LC514" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputScalar</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, ImGuiDataType data_type, <span class="pl-k">void</span>* p_data, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_step = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_step_fast = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-c1">NULL</span>, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L515" class="blob-num js-line-number" data-line-number="515"></td>
        <td id="LC515" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">InputScalarN</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, ImGuiDataType data_type, <span class="pl-k">void</span>* p_data, <span class="pl-k">int</span> components, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_step = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> <span class="pl-k">void</span>* p_step_fast = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* format = <span class="pl-c1">NULL</span>, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L516" class="blob-num js-line-number" data-line-number="516"></td>
        <td id="LC516" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L517" class="blob-num js-line-number" data-line-number="517"></td>
        <td id="LC517" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Color Editor/Picker (tip: the ColorEdit* functions have a little colored preview square that can be left-clicked to open a picker, and right-clicked to open an option menu.)</span></td>
      </tr>
      <tr>
        <td id="L518" class="blob-num js-line-number" data-line-number="518"></td>
        <td id="LC518" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Note that in C++ a &#39;float v[X]&#39; function argument is the _same_ as &#39;float* v&#39;, the array syntax is just a way to document the number of elements that are expected to be accessible.</span></td>
      </tr>
      <tr>
        <td id="L519" class="blob-num js-line-number" data-line-number="519"></td>
        <td id="LC519" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - You can pass the address of a first float element out of a contiguous structure, e.g. &amp;myvector.x</span></td>
      </tr>
      <tr>
        <td id="L520" class="blob-num js-line-number" data-line-number="520"></td>
        <td id="LC520" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ColorEdit3</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> col[<span class="pl-c1">3</span>], ImGuiColorEditFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L521" class="blob-num js-line-number" data-line-number="521"></td>
        <td id="LC521" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ColorEdit4</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> col[<span class="pl-c1">4</span>], ImGuiColorEditFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L522" class="blob-num js-line-number" data-line-number="522"></td>
        <td id="LC522" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ColorPicker3</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> col[<span class="pl-c1">3</span>], ImGuiColorEditFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L523" class="blob-num js-line-number" data-line-number="523"></td>
        <td id="LC523" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ColorPicker4</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> col[<span class="pl-c1">4</span>], ImGuiColorEditFlags flags = <span class="pl-c1">0</span>, <span class="pl-k">const</span> <span class="pl-k">float</span>* ref_col = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L524" class="blob-num js-line-number" data-line-number="524"></td>
        <td id="LC524" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ColorButton</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* desc_id, <span class="pl-k">const</span> ImVec4&amp; col, ImGuiColorEditFlags flags = <span class="pl-c1">0</span>, ImVec2 size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>)); <span class="pl-c"><span class="pl-c">//</span> display a colored square/button, hover for details, return true when pressed.</span></td>
      </tr>
      <tr>
        <td id="L525" class="blob-num js-line-number" data-line-number="525"></td>
        <td id="LC525" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetColorEditOptions</span>(ImGuiColorEditFlags flags);                     <span class="pl-c"><span class="pl-c">//</span> initialize current options (generally on application startup) if you want to select a default format, picker type, etc. User will be able to change many settings, unless you pass the _NoOptions flag to your calls.</span></td>
      </tr>
      <tr>
        <td id="L526" class="blob-num js-line-number" data-line-number="526"></td>
        <td id="LC526" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L527" class="blob-num js-line-number" data-line-number="527"></td>
        <td id="LC527" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Trees</span></td>
      </tr>
      <tr>
        <td id="L528" class="blob-num js-line-number" data-line-number="528"></td>
        <td id="LC528" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - TreeNode functions return true when the node is open, in which case you need to also call TreePop() when you are finished displaying the tree node contents.</span></td>
      </tr>
      <tr>
        <td id="L529" class="blob-num js-line-number" data-line-number="529"></td>
        <td id="LC529" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">TreeNode</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label);</td>
      </tr>
      <tr>
        <td id="L530" class="blob-num js-line-number" data-line-number="530"></td>
        <td id="LC530" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">TreeNode</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...) IM_FMTARGS(<span class="pl-c1">2</span>);   <span class="pl-c"><span class="pl-c">//</span> helper variation to easily decorelate the id from the displayed string. Read the FAQ about why and how to use ID. to align arbitrary text at the same level as a TreeNode() you can use Bullet().</span></td>
      </tr>
      <tr>
        <td id="L531" class="blob-num js-line-number" data-line-number="531"></td>
        <td id="LC531" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">TreeNode</span>(<span class="pl-k">const</span> <span class="pl-k">void</span>* ptr_id, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...) IM_FMTARGS(<span class="pl-c1">2</span>);   <span class="pl-c"><span class="pl-c">//</span> &quot;</span></td>
      </tr>
      <tr>
        <td id="L532" class="blob-num js-line-number" data-line-number="532"></td>
        <td id="LC532" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">TreeNodeV</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args) IM_FMTLIST(<span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L533" class="blob-num js-line-number" data-line-number="533"></td>
        <td id="LC533" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">TreeNodeV</span>(<span class="pl-k">const</span> <span class="pl-k">void</span>* ptr_id, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args) IM_FMTLIST(<span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L534" class="blob-num js-line-number" data-line-number="534"></td>
        <td id="LC534" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">TreeNodeEx</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, ImGuiTreeNodeFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L535" class="blob-num js-line-number" data-line-number="535"></td>
        <td id="LC535" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">TreeNodeEx</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, ImGuiTreeNodeFlags flags, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...) IM_FMTARGS(<span class="pl-c1">3</span>);</td>
      </tr>
      <tr>
        <td id="L536" class="blob-num js-line-number" data-line-number="536"></td>
        <td id="LC536" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">TreeNodeEx</span>(<span class="pl-k">const</span> <span class="pl-k">void</span>* ptr_id, ImGuiTreeNodeFlags flags, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...) IM_FMTARGS(<span class="pl-c1">3</span>);</td>
      </tr>
      <tr>
        <td id="L537" class="blob-num js-line-number" data-line-number="537"></td>
        <td id="LC537" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">TreeNodeExV</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, ImGuiTreeNodeFlags flags, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args) IM_FMTLIST(<span class="pl-c1">3</span>);</td>
      </tr>
      <tr>
        <td id="L538" class="blob-num js-line-number" data-line-number="538"></td>
        <td id="LC538" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">TreeNodeExV</span>(<span class="pl-k">const</span> <span class="pl-k">void</span>* ptr_id, ImGuiTreeNodeFlags flags, <span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args) IM_FMTLIST(<span class="pl-c1">3</span>);</td>
      </tr>
      <tr>
        <td id="L539" class="blob-num js-line-number" data-line-number="539"></td>
        <td id="LC539" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TreePush</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id);                                       <span class="pl-c"><span class="pl-c">//</span> ~ Indent()+PushId(). Already called by TreeNode() when returning true, but you can call TreePush/TreePop yourself if desired.</span></td>
      </tr>
      <tr>
        <td id="L540" class="blob-num js-line-number" data-line-number="540"></td>
        <td id="LC540" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TreePush</span>(<span class="pl-k">const</span> <span class="pl-k">void</span>* ptr_id = <span class="pl-c1">NULL</span>);                                <span class="pl-c"><span class="pl-c">//</span> &quot;</span></td>
      </tr>
      <tr>
        <td id="L541" class="blob-num js-line-number" data-line-number="541"></td>
        <td id="LC541" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">TreePop</span>();                                                          <span class="pl-c"><span class="pl-c">//</span> ~ Unindent()+PopId()</span></td>
      </tr>
      <tr>
        <td id="L542" class="blob-num js-line-number" data-line-number="542"></td>
        <td id="LC542" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetTreeNodeToLabelSpacing</span>();                                        <span class="pl-c"><span class="pl-c">//</span> horizontal distance preceding label when using TreeNode*() or Bullet() == (g.FontSize + style.FramePadding.x*2) for a regular unframed TreeNode</span></td>
      </tr>
      <tr>
        <td id="L543" class="blob-num js-line-number" data-line-number="543"></td>
        <td id="LC543" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">CollapsingHeader</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, ImGuiTreeNodeFlags flags = <span class="pl-c1">0</span>);  <span class="pl-c"><span class="pl-c">//</span> if returning &#39;true&#39; the header is open. doesn&#39;t indent nor push on ID stack. user doesn&#39;t have to call TreePop().</span></td>
      </tr>
      <tr>
        <td id="L544" class="blob-num js-line-number" data-line-number="544"></td>
        <td id="LC544" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">CollapsingHeader</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">bool</span>* p_open, ImGuiTreeNodeFlags flags = <span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> when &#39;p_open&#39; isn&#39;t NULL, display an additional small close button on upper right of the header</span></td>
      </tr>
      <tr>
        <td id="L545" class="blob-num js-line-number" data-line-number="545"></td>
        <td id="LC545" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetNextItemOpen</span>(<span class="pl-k">bool</span> is_open, ImGuiCond cond = <span class="pl-c1">0</span>);                  <span class="pl-c"><span class="pl-c">//</span> set next TreeNode/CollapsingHeader open state.</span></td>
      </tr>
      <tr>
        <td id="L546" class="blob-num js-line-number" data-line-number="546"></td>
        <td id="LC546" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L547" class="blob-num js-line-number" data-line-number="547"></td>
        <td id="LC547" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Selectables</span></td>
      </tr>
      <tr>
        <td id="L548" class="blob-num js-line-number" data-line-number="548"></td>
        <td id="LC548" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - A selectable highlights when hovered, and can display another color when selected.</span></td>
      </tr>
      <tr>
        <td id="L549" class="blob-num js-line-number" data-line-number="549"></td>
        <td id="LC549" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Neighbors selectable extend their highlight bounds in order to leave no gap between them. This is so a series of selected Selectable appear contiguous.</span></td>
      </tr>
      <tr>
        <td id="L550" class="blob-num js-line-number" data-line-number="550"></td>
        <td id="LC550" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">Selectable</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">bool</span> selected = <span class="pl-c1">false</span>, ImGuiSelectableFlags flags = <span class="pl-c1">0</span>, <span class="pl-k">const</span> ImVec2&amp; size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>)); <span class="pl-c"><span class="pl-c">//</span> &quot;bool selected&quot; carry the selection state (read-only). Selectable() is clicked is returns true so you can modify your selection state. size.x==0.0: use remaining width, size.x&gt;0.0: specify width. size.y==0.0: use label height, size.y&gt;0.0: specify height</span></td>
      </tr>
      <tr>
        <td id="L551" class="blob-num js-line-number" data-line-number="551"></td>
        <td id="LC551" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">Selectable</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">bool</span>* p_selected, ImGuiSelectableFlags flags = <span class="pl-c1">0</span>, <span class="pl-k">const</span> ImVec2&amp; size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>));      <span class="pl-c"><span class="pl-c">//</span> &quot;bool* p_selected&quot; point to the selection state (read-write), as a convenient helper.</span></td>
      </tr>
      <tr>
        <td id="L552" class="blob-num js-line-number" data-line-number="552"></td>
        <td id="LC552" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L553" class="blob-num js-line-number" data-line-number="553"></td>
        <td id="LC553" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: List Boxes</span></td>
      </tr>
      <tr>
        <td id="L554" class="blob-num js-line-number" data-line-number="554"></td>
        <td id="LC554" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - FIXME: To be consistent with all the newer API, ListBoxHeader/ListBoxFooter should in reality be called BeginListBox/EndListBox. Will rename them.</span></td>
      </tr>
      <tr>
        <td id="L555" class="blob-num js-line-number" data-line-number="555"></td>
        <td id="LC555" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ListBox</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span>* current_item, <span class="pl-k">const</span> <span class="pl-k">char</span>* <span class="pl-k">const</span> items[], <span class="pl-k">int</span> items_count, <span class="pl-k">int</span> height_in_items = -<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L556" class="blob-num js-line-number" data-line-number="556"></td>
        <td id="LC556" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ListBox</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span>* current_item, <span class="pl-k">bool</span> (*items_getter)(<span class="pl-k">void</span>* data, <span class="pl-k">int</span> idx, <span class="pl-k">const</span> <span class="pl-k">char</span>** out_text), void* data, int items_count, int height_in_items = -1);</td>
      </tr>
      <tr>
        <td id="L557" class="blob-num js-line-number" data-line-number="557"></td>
        <td id="LC557" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ListBoxHeader</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> ImVec2&amp; size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>)); <span class="pl-c"><span class="pl-c">//</span> use if you want to reimplement ListBox() will custom data or interactions. if the function return true, you can output elements then call ListBoxFooter() afterwards.</span></td>
      </tr>
      <tr>
        <td id="L558" class="blob-num js-line-number" data-line-number="558"></td>
        <td id="LC558" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">ListBoxHeader</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">int</span> items_count, <span class="pl-k">int</span> height_in_items = -<span class="pl-c1">1</span>); <span class="pl-c"><span class="pl-c">//</span> &quot;</span></td>
      </tr>
      <tr>
        <td id="L559" class="blob-num js-line-number" data-line-number="559"></td>
        <td id="LC559" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ListBoxFooter</span>();                                                    <span class="pl-c"><span class="pl-c">//</span> terminate the scrolling region. only call ListBoxFooter() if ListBoxHeader() returned true!</span></td>
      </tr>
      <tr>
        <td id="L560" class="blob-num js-line-number" data-line-number="560"></td>
        <td id="LC560" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L561" class="blob-num js-line-number" data-line-number="561"></td>
        <td id="LC561" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Data Plotting</span></td>
      </tr>
      <tr>
        <td id="L562" class="blob-num js-line-number" data-line-number="562"></td>
        <td id="LC562" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PlotLines</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> <span class="pl-k">float</span>* values, <span class="pl-k">int</span> values_count, <span class="pl-k">int</span> values_offset = <span class="pl-c1">0</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* overlay_text = <span class="pl-c1">NULL</span>, <span class="pl-k">float</span> scale_min = FLT_MAX, <span class="pl-k">float</span> scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>), int stride = sizeof(<span class="pl-k">float</span>));</td>
      </tr>
      <tr>
        <td id="L563" class="blob-num js-line-number" data-line-number="563"></td>
        <td id="LC563" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PlotLines</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span>(*values_getter)(<span class="pl-k">void</span>* data, <span class="pl-k">int</span> idx), void* data, int values_count, int values_offset = 0, <span class="pl-k">const</span> char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>));</td>
      </tr>
      <tr>
        <td id="L564" class="blob-num js-line-number" data-line-number="564"></td>
        <td id="LC564" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PlotHistogram</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> <span class="pl-k">float</span>* values, <span class="pl-k">int</span> values_count, <span class="pl-k">int</span> values_offset = <span class="pl-c1">0</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* overlay_text = <span class="pl-c1">NULL</span>, <span class="pl-k">float</span> scale_min = FLT_MAX, <span class="pl-k">float</span> scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>), int stride = sizeof(<span class="pl-k">float</span>));</td>
      </tr>
      <tr>
        <td id="L565" class="blob-num js-line-number" data-line-number="565"></td>
        <td id="LC565" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PlotHistogram</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span>(*values_getter)(<span class="pl-k">void</span>* data, <span class="pl-k">int</span> idx), void* data, int values_count, int values_offset = 0, <span class="pl-k">const</span> char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>));</td>
      </tr>
      <tr>
        <td id="L566" class="blob-num js-line-number" data-line-number="566"></td>
        <td id="LC566" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L567" class="blob-num js-line-number" data-line-number="567"></td>
        <td id="LC567" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Value() Helpers.</span></td>
      </tr>
      <tr>
        <td id="L568" class="blob-num js-line-number" data-line-number="568"></td>
        <td id="LC568" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Those are merely shortcut to calling Text() with a format string. Output single value in &quot;name: value&quot; format (tip: freely declare more in your code to handle your types. you can add functions to the ImGui namespace)</span></td>
      </tr>
      <tr>
        <td id="L569" class="blob-num js-line-number" data-line-number="569"></td>
        <td id="LC569" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Value</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* prefix, <span class="pl-k">bool</span> b);</td>
      </tr>
      <tr>
        <td id="L570" class="blob-num js-line-number" data-line-number="570"></td>
        <td id="LC570" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Value</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* prefix, <span class="pl-k">int</span> v);</td>
      </tr>
      <tr>
        <td id="L571" class="blob-num js-line-number" data-line-number="571"></td>
        <td id="LC571" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Value</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* prefix, <span class="pl-k">unsigned</span> <span class="pl-k">int</span> v);</td>
      </tr>
      <tr>
        <td id="L572" class="blob-num js-line-number" data-line-number="572"></td>
        <td id="LC572" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Value</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* prefix, <span class="pl-k">float</span> v, <span class="pl-k">const</span> <span class="pl-k">char</span>* float_format = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L573" class="blob-num js-line-number" data-line-number="573"></td>
        <td id="LC573" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L574" class="blob-num js-line-number" data-line-number="574"></td>
        <td id="LC574" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Widgets: Menus</span></td>
      </tr>
      <tr>
        <td id="L575" class="blob-num js-line-number" data-line-number="575"></td>
        <td id="LC575" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Use BeginMenuBar() on a window ImGuiWindowFlags_MenuBar to append to its menu bar.</span></td>
      </tr>
      <tr>
        <td id="L576" class="blob-num js-line-number" data-line-number="576"></td>
        <td id="LC576" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Use BeginMainMenuBar() to create a menu bar at the top of the screen and append to it.</span></td>
      </tr>
      <tr>
        <td id="L577" class="blob-num js-line-number" data-line-number="577"></td>
        <td id="LC577" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Use BeginMenu() to create a menu. You can call BeginMenu() multiple time with the same identifier to append more items to it.</span></td>
      </tr>
      <tr>
        <td id="L578" class="blob-num js-line-number" data-line-number="578"></td>
        <td id="LC578" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginMenuBar</span>();                                                     <span class="pl-c"><span class="pl-c">//</span> append to menu-bar of current window (requires ImGuiWindowFlags_MenuBar flag set on parent window).</span></td>
      </tr>
      <tr>
        <td id="L579" class="blob-num js-line-number" data-line-number="579"></td>
        <td id="LC579" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndMenuBar</span>();                                                       <span class="pl-c"><span class="pl-c">//</span> only call EndMenuBar() if BeginMenuBar() returns true!</span></td>
      </tr>
      <tr>
        <td id="L580" class="blob-num js-line-number" data-line-number="580"></td>
        <td id="LC580" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginMainMenuBar</span>();                                                 <span class="pl-c"><span class="pl-c">//</span> create and append to a full screen menu-bar.</span></td>
      </tr>
      <tr>
        <td id="L581" class="blob-num js-line-number" data-line-number="581"></td>
        <td id="LC581" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndMainMenuBar</span>();                                                   <span class="pl-c"><span class="pl-c">//</span> only call EndMainMenuBar() if BeginMainMenuBar() returns true!</span></td>
      </tr>
      <tr>
        <td id="L582" class="blob-num js-line-number" data-line-number="582"></td>
        <td id="LC582" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginMenu</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">bool</span> enabled = <span class="pl-c1">true</span>);                  <span class="pl-c"><span class="pl-c">//</span> create a sub-menu entry. only call EndMenu() if this returns true!</span></td>
      </tr>
      <tr>
        <td id="L583" class="blob-num js-line-number" data-line-number="583"></td>
        <td id="LC583" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndMenu</span>();                                                          <span class="pl-c"><span class="pl-c">//</span> only call EndMenu() if BeginMenu() returns true!</span></td>
      </tr>
      <tr>
        <td id="L584" class="blob-num js-line-number" data-line-number="584"></td>
        <td id="LC584" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">MenuItem</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> <span class="pl-k">char</span>* shortcut = <span class="pl-c1">NULL</span>, <span class="pl-k">bool</span> selected = <span class="pl-c1">false</span>, <span class="pl-k">bool</span> enabled = <span class="pl-c1">true</span>);  <span class="pl-c"><span class="pl-c">//</span> return true when activated. shortcuts are displayed for convenience but not processed by ImGui at the moment</span></td>
      </tr>
      <tr>
        <td id="L585" class="blob-num js-line-number" data-line-number="585"></td>
        <td id="LC585" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">MenuItem</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">const</span> <span class="pl-k">char</span>* shortcut, <span class="pl-k">bool</span>* p_selected, <span class="pl-k">bool</span> enabled = <span class="pl-c1">true</span>);              <span class="pl-c"><span class="pl-c">//</span> return true when activated + toggle (*p_selected) if p_selected != NULL</span></td>
      </tr>
      <tr>
        <td id="L586" class="blob-num js-line-number" data-line-number="586"></td>
        <td id="LC586" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L587" class="blob-num js-line-number" data-line-number="587"></td>
        <td id="LC587" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Tooltips</span></td>
      </tr>
      <tr>
        <td id="L588" class="blob-num js-line-number" data-line-number="588"></td>
        <td id="LC588" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Tooltip are windows following the mouse which do not take focus away.</span></td>
      </tr>
      <tr>
        <td id="L589" class="blob-num js-line-number" data-line-number="589"></td>
        <td id="LC589" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">BeginTooltip</span>();                                                     <span class="pl-c"><span class="pl-c">//</span> begin/append a tooltip window. to create full-featured tooltip (with any kind of items).</span></td>
      </tr>
      <tr>
        <td id="L590" class="blob-num js-line-number" data-line-number="590"></td>
        <td id="LC590" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndTooltip</span>();</td>
      </tr>
      <tr>
        <td id="L591" class="blob-num js-line-number" data-line-number="591"></td>
        <td id="LC591" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetTooltip</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...) IM_FMTARGS(<span class="pl-c1">1</span>);                     <span class="pl-c"><span class="pl-c">//</span> set a text-only tooltip, typically use with ImGui::IsItemHovered(). override any previous call to SetTooltip().</span></td>
      </tr>
      <tr>
        <td id="L592" class="blob-num js-line-number" data-line-number="592"></td>
        <td id="LC592" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetTooltipV</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args) IM_FMTLIST(<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L593" class="blob-num js-line-number" data-line-number="593"></td>
        <td id="LC593" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L594" class="blob-num js-line-number" data-line-number="594"></td>
        <td id="LC594" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Popups, Modals</span></td>
      </tr>
      <tr>
        <td id="L595" class="blob-num js-line-number" data-line-number="595"></td>
        <td id="LC595" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - They block normal mouse hovering detection (and therefore most mouse interactions) behind them.</span></td>
      </tr>
      <tr>
        <td id="L596" class="blob-num js-line-number" data-line-number="596"></td>
        <td id="LC596" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - If not modal: they can be closed by clicking anywhere outside them, or by pressing ESCAPE.</span></td>
      </tr>
      <tr>
        <td id="L597" class="blob-num js-line-number" data-line-number="597"></td>
        <td id="LC597" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - Their visibility state (~bool) is held internally instead of being held by the programmer as we are used to with regular Begin*() calls.</span></td>
      </tr>
      <tr>
        <td id="L598" class="blob-num js-line-number" data-line-number="598"></td>
        <td id="LC598" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - The 3 properties above are related: we need to retain popup visibility state in the library because popups may be closed as any time.</span></td>
      </tr>
      <tr>
        <td id="L599" class="blob-num js-line-number" data-line-number="599"></td>
        <td id="LC599" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - You can bypass the hovering restriction by using ImGuiHoveredFlags_AllowWhenBlockedByPopup when calling IsItemHovered() or IsWindowHovered().</span></td>
      </tr>
      <tr>
        <td id="L600" class="blob-num js-line-number" data-line-number="600"></td>
        <td id="LC600" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - IMPORTANT: Popup identifiers are relative to the current ID stack, so OpenPopup and BeginPopup generally needs to be at the same level of the stack.</span></td>
      </tr>
      <tr>
        <td id="L601" class="blob-num js-line-number" data-line-number="601"></td>
        <td id="LC601" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>    This is sometimes leading to confusing mistakes. May rework this in the future.</span></td>
      </tr>
      <tr>
        <td id="L602" class="blob-num js-line-number" data-line-number="602"></td>
        <td id="LC602" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Popups: begin/end functions</span></td>
      </tr>
      <tr>
        <td id="L603" class="blob-num js-line-number" data-line-number="603"></td>
        <td id="LC603" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - BeginPopup(): query popup state, if open start appending into the window. Call EndPopup() afterwards. ImGuiWindowFlags are forwarded to the window.</span></td>
      </tr>
      <tr>
        <td id="L604" class="blob-num js-line-number" data-line-number="604"></td>
        <td id="LC604" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - BeginPopupModal(): block every interactions behind the window, cannot be closed by user, add a dimming background, has a title bar.</span></td>
      </tr>
      <tr>
        <td id="L605" class="blob-num js-line-number" data-line-number="605"></td>
        <td id="LC605" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginPopup</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, ImGuiWindowFlags flags = <span class="pl-c1">0</span>);                         <span class="pl-c"><span class="pl-c">//</span> return true if the popup is open, and you can start outputting to it.</span></td>
      </tr>
      <tr>
        <td id="L606" class="blob-num js-line-number" data-line-number="606"></td>
        <td id="LC606" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginPopupModal</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* name, <span class="pl-k">bool</span>* p_open = <span class="pl-c1">NULL</span>, ImGuiWindowFlags flags = <span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> return true if the modal is open, and you can start outputting to it.</span></td>
      </tr>
      <tr>
        <td id="L607" class="blob-num js-line-number" data-line-number="607"></td>
        <td id="LC607" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndPopup</span>();                                                                         <span class="pl-c"><span class="pl-c">//</span> only call EndPopup() if BeginPopupXXX() returns true!</span></td>
      </tr>
      <tr>
        <td id="L608" class="blob-num js-line-number" data-line-number="608"></td>
        <td id="LC608" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Popups: open/close functions</span></td>
      </tr>
      <tr>
        <td id="L609" class="blob-num js-line-number" data-line-number="609"></td>
        <td id="LC609" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - OpenPopup(): set popup state to open. ImGuiPopupFlags are available for opening options.</span></td>
      </tr>
      <tr>
        <td id="L610" class="blob-num js-line-number" data-line-number="610"></td>
        <td id="LC610" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - If not modal: they can be closed by clicking anywhere outside them, or by pressing ESCAPE.</span></td>
      </tr>
      <tr>
        <td id="L611" class="blob-num js-line-number" data-line-number="611"></td>
        <td id="LC611" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - CloseCurrentPopup(): use inside the BeginPopup()/EndPopup() scope to close manually.</span></td>
      </tr>
      <tr>
        <td id="L612" class="blob-num js-line-number" data-line-number="612"></td>
        <td id="LC612" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - CloseCurrentPopup() is called by default by Selectable()/MenuItem() when activated (FIXME: need some options).</span></td>
      </tr>
      <tr>
        <td id="L613" class="blob-num js-line-number" data-line-number="613"></td>
        <td id="LC613" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - Use ImGuiPopupFlags_NoOpenOverExistingPopup to avoid opening a popup if there&#39;s already one at the same level. This is equivalent to e.g. testing for !IsAnyPopupOpen() prior to OpenPopup().</span></td>
      </tr>
      <tr>
        <td id="L614" class="blob-num js-line-number" data-line-number="614"></td>
        <td id="LC614" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">OpenPopup</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, ImGuiPopupFlags popup_flags = <span class="pl-c1">0</span>);                     <span class="pl-c"><span class="pl-c">//</span> call to mark popup as open (don&#39;t call every frame!).</span></td>
      </tr>
      <tr>
        <td id="L615" class="blob-num js-line-number" data-line-number="615"></td>
        <td id="LC615" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">OpenPopupContextItem</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id = <span class="pl-c1">NULL</span>, ImGuiPopupFlags popup_flags = <span class="pl-c1">1</span>);   <span class="pl-c"><span class="pl-c">//</span> helper to open popup when clicked on last item. return true when just opened. (note: actually triggers on the mouse _released_ event to be consistent with popup behaviors)</span></td>
      </tr>
      <tr>
        <td id="L616" class="blob-num js-line-number" data-line-number="616"></td>
        <td id="LC616" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">CloseCurrentPopup</span>();                                                                <span class="pl-c"><span class="pl-c">//</span> manually close the popup we have begin-ed into.</span></td>
      </tr>
      <tr>
        <td id="L617" class="blob-num js-line-number" data-line-number="617"></td>
        <td id="LC617" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Popups: open+begin combined functions helpers</span></td>
      </tr>
      <tr>
        <td id="L618" class="blob-num js-line-number" data-line-number="618"></td>
        <td id="LC618" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - Helpers to do OpenPopup+BeginPopup where the Open action is triggered by e.g. hovering an item and right-clicking.</span></td>
      </tr>
      <tr>
        <td id="L619" class="blob-num js-line-number" data-line-number="619"></td>
        <td id="LC619" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - They are convenient to easily create context menus, hence the name.</span></td>
      </tr>
      <tr>
        <td id="L620" class="blob-num js-line-number" data-line-number="620"></td>
        <td id="LC620" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - IMPORTANT: Notice that BeginPopupContextXXX takes ImGuiPopupFlags just like OpenPopup() and unlike BeginPopup(). For full consistency, we may add ImGuiWindowFlags to the BeginPopupContextXXX functions in the future.</span></td>
      </tr>
      <tr>
        <td id="L621" class="blob-num js-line-number" data-line-number="621"></td>
        <td id="LC621" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - We exceptionally default their flags to 1 (== ImGuiPopupFlags_MouseButtonRight) for backward compatibility with older API taking &#39;int mouse_button = 1&#39; parameter. Passing a mouse button to ImGuiPopupFlags is guaranteed to be legal.</span></td>
      </tr>
      <tr>
        <td id="L622" class="blob-num js-line-number" data-line-number="622"></td>
        <td id="LC622" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginPopupContextItem</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id = <span class="pl-c1">NULL</span>, ImGuiPopupFlags popup_flags = <span class="pl-c1">1</span>);  <span class="pl-c"><span class="pl-c">//</span> open+begin popup when clicked on last item. if you can pass a NULL str_id only if the previous item had an id. If you want to use that on a non-interactive item such as Text() you need to pass in an explicit ID here. read comments in .cpp!</span></td>
      </tr>
      <tr>
        <td id="L623" class="blob-num js-line-number" data-line-number="623"></td>
        <td id="LC623" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginPopupContextWindow</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id = <span class="pl-c1">NULL</span>, ImGuiPopupFlags popup_flags = <span class="pl-c1">1</span>);<span class="pl-c"><span class="pl-c">//</span> open+begin popup when clicked on current window.</span></td>
      </tr>
      <tr>
        <td id="L624" class="blob-num js-line-number" data-line-number="624"></td>
        <td id="LC624" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginPopupContextVoid</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id = <span class="pl-c1">NULL</span>, ImGuiPopupFlags popup_flags = <span class="pl-c1">1</span>);  <span class="pl-c"><span class="pl-c">//</span> open+begin popup when clicked in void (where there are no windows).</span></td>
      </tr>
      <tr>
        <td id="L625" class="blob-num js-line-number" data-line-number="625"></td>
        <td id="LC625" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Popups: test function</span></td>
      </tr>
      <tr>
        <td id="L626" class="blob-num js-line-number" data-line-number="626"></td>
        <td id="LC626" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - IsPopupOpen(): return true if the popup is open at the current BeginPopup() level of the popup stack.</span></td>
      </tr>
      <tr>
        <td id="L627" class="blob-num js-line-number" data-line-number="627"></td>
        <td id="LC627" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - IsPopupOpen() with ImGuiPopupFlags_AnyPopupId: return true if any popup is open at the current BeginPopup() level of the popup stack.</span></td>
      </tr>
      <tr>
        <td id="L628" class="blob-num js-line-number" data-line-number="628"></td>
        <td id="LC628" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  - IsPopupOpen() with ImGuiPopupFlags_AnyPopupId + ImGuiPopupFlags_AnyPopupLevel: return true if any popup is open.</span></td>
      </tr>
      <tr>
        <td id="L629" class="blob-num js-line-number" data-line-number="629"></td>
        <td id="LC629" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsPopupOpen</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, ImGuiPopupFlags flags = <span class="pl-c1">0</span>);                         <span class="pl-c"><span class="pl-c">//</span> return true if the popup is open.</span></td>
      </tr>
      <tr>
        <td id="L630" class="blob-num js-line-number" data-line-number="630"></td>
        <td id="LC630" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L631" class="blob-num js-line-number" data-line-number="631"></td>
        <td id="LC631" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Columns</span></td>
      </tr>
      <tr>
        <td id="L632" class="blob-num js-line-number" data-line-number="632"></td>
        <td id="LC632" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - You can also use SameLine(pos_x) to mimic simplified columns.</span></td>
      </tr>
      <tr>
        <td id="L633" class="blob-num js-line-number" data-line-number="633"></td>
        <td id="LC633" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - The columns API is work-in-progress and rather lacking (columns are arguably the worst part of dear imgui at the moment!)</span></td>
      </tr>
      <tr>
        <td id="L634" class="blob-num js-line-number" data-line-number="634"></td>
        <td id="LC634" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - There is a maximum of 64 columns.</span></td>
      </tr>
      <tr>
        <td id="L635" class="blob-num js-line-number" data-line-number="635"></td>
        <td id="LC635" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Currently working on new &#39;Tables&#39; api which will replace columns around Q2 2020 (see GitHub #2957).</span></td>
      </tr>
      <tr>
        <td id="L636" class="blob-num js-line-number" data-line-number="636"></td>
        <td id="LC636" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">Columns</span>(<span class="pl-k">int</span> count = <span class="pl-c1">1</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* id = <span class="pl-c1">NULL</span>, <span class="pl-k">bool</span> border = <span class="pl-c1">true</span>);</td>
      </tr>
      <tr>
        <td id="L637" class="blob-num js-line-number" data-line-number="637"></td>
        <td id="LC637" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">NextColumn</span>();                                                       <span class="pl-c"><span class="pl-c">//</span> next column, defaults to current row or next row if the current row is finished</span></td>
      </tr>
      <tr>
        <td id="L638" class="blob-num js-line-number" data-line-number="638"></td>
        <td id="LC638" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">int</span>           <span class="pl-en">GetColumnIndex</span>();                                                   <span class="pl-c"><span class="pl-c">//</span> get current column index</span></td>
      </tr>
      <tr>
        <td id="L639" class="blob-num js-line-number" data-line-number="639"></td>
        <td id="LC639" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetColumnWidth</span>(<span class="pl-k">int</span> column_index = -<span class="pl-c1">1</span>);                              <span class="pl-c"><span class="pl-c">//</span> get column width (in pixels). pass -1 to use current column</span></td>
      </tr>
      <tr>
        <td id="L640" class="blob-num js-line-number" data-line-number="640"></td>
        <td id="LC640" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetColumnWidth</span>(<span class="pl-k">int</span> column_index, <span class="pl-k">float</span> width);                      <span class="pl-c"><span class="pl-c">//</span> set column width (in pixels). pass -1 to use current column</span></td>
      </tr>
      <tr>
        <td id="L641" class="blob-num js-line-number" data-line-number="641"></td>
        <td id="LC641" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>         <span class="pl-en">GetColumnOffset</span>(<span class="pl-k">int</span> column_index = -<span class="pl-c1">1</span>);                             <span class="pl-c"><span class="pl-c">//</span> get position of column line (in pixels, from the left side of the contents region). pass -1 to use current column, otherwise 0..GetColumnsCount() inclusive. column 0 is typically 0.0f</span></td>
      </tr>
      <tr>
        <td id="L642" class="blob-num js-line-number" data-line-number="642"></td>
        <td id="LC642" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetColumnOffset</span>(<span class="pl-k">int</span> column_index, <span class="pl-k">float</span> offset_x);                  <span class="pl-c"><span class="pl-c">//</span> set position of column line (in pixels, from the left side of the contents region). pass -1 to use current column</span></td>
      </tr>
      <tr>
        <td id="L643" class="blob-num js-line-number" data-line-number="643"></td>
        <td id="LC643" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">int</span>           <span class="pl-en">GetColumnsCount</span>();</td>
      </tr>
      <tr>
        <td id="L644" class="blob-num js-line-number" data-line-number="644"></td>
        <td id="LC644" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L645" class="blob-num js-line-number" data-line-number="645"></td>
        <td id="LC645" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Tab Bars, Tabs</span></td>
      </tr>
      <tr>
        <td id="L646" class="blob-num js-line-number" data-line-number="646"></td>
        <td id="LC646" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginTabBar</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, ImGuiTabBarFlags flags = <span class="pl-c1">0</span>);        <span class="pl-c"><span class="pl-c">//</span> create and append into a TabBar</span></td>
      </tr>
      <tr>
        <td id="L647" class="blob-num js-line-number" data-line-number="647"></td>
        <td id="LC647" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndTabBar</span>();                                                        <span class="pl-c"><span class="pl-c">//</span> only call EndTabBar() if BeginTabBar() returns true!</span></td>
      </tr>
      <tr>
        <td id="L648" class="blob-num js-line-number" data-line-number="648"></td>
        <td id="LC648" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginTabItem</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">bool</span>* p_open = <span class="pl-c1">NULL</span>, ImGuiTabItemFlags flags = <span class="pl-c1">0</span>);<span class="pl-c"><span class="pl-c">//</span> create a Tab. Returns true if the Tab is selected.</span></td>
      </tr>
      <tr>
        <td id="L649" class="blob-num js-line-number" data-line-number="649"></td>
        <td id="LC649" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndTabItem</span>();                                                       <span class="pl-c"><span class="pl-c">//</span> only call EndTabItem() if BeginTabItem() returns true!</span></td>
      </tr>
      <tr>
        <td id="L650" class="blob-num js-line-number" data-line-number="650"></td>
        <td id="LC650" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetTabItemClosed</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* tab_or_docked_window_label);           <span class="pl-c"><span class="pl-c">//</span> notify TabBar or Docking system of a closed tab/window ahead (useful to reduce visual flicker on reorderable tab bars). For tab-bar: call after BeginTabBar() and before Tab submissions. Otherwise call with a window name.</span></td>
      </tr>
      <tr>
        <td id="L651" class="blob-num js-line-number" data-line-number="651"></td>
        <td id="LC651" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L652" class="blob-num js-line-number" data-line-number="652"></td>
        <td id="LC652" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Logging/Capture</span></td>
      </tr>
      <tr>
        <td id="L653" class="blob-num js-line-number" data-line-number="653"></td>
        <td id="LC653" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - All text output from the interface can be captured into tty/file/clipboard. By default, tree nodes are automatically opened during logging.</span></td>
      </tr>
      <tr>
        <td id="L654" class="blob-num js-line-number" data-line-number="654"></td>
        <td id="LC654" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">LogToTTY</span>(<span class="pl-k">int</span> auto_open_depth = -<span class="pl-c1">1</span>);                                 <span class="pl-c"><span class="pl-c">//</span> start logging to tty (stdout)</span></td>
      </tr>
      <tr>
        <td id="L655" class="blob-num js-line-number" data-line-number="655"></td>
        <td id="LC655" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">LogToFile</span>(<span class="pl-k">int</span> auto_open_depth = -<span class="pl-c1">1</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>* filename = <span class="pl-c1">NULL</span>);   <span class="pl-c"><span class="pl-c">//</span> start logging to file</span></td>
      </tr>
      <tr>
        <td id="L656" class="blob-num js-line-number" data-line-number="656"></td>
        <td id="LC656" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">LogToClipboard</span>(<span class="pl-k">int</span> auto_open_depth = -<span class="pl-c1">1</span>);                           <span class="pl-c"><span class="pl-c">//</span> start logging to OS clipboard</span></td>
      </tr>
      <tr>
        <td id="L657" class="blob-num js-line-number" data-line-number="657"></td>
        <td id="LC657" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">LogFinish</span>();                                                        <span class="pl-c"><span class="pl-c">//</span> stop logging (close file, etc.)</span></td>
      </tr>
      <tr>
        <td id="L658" class="blob-num js-line-number" data-line-number="658"></td>
        <td id="LC658" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">LogButtons</span>();                                                       <span class="pl-c"><span class="pl-c">//</span> helper to display buttons for logging to tty/file/clipboard</span></td>
      </tr>
      <tr>
        <td id="L659" class="blob-num js-line-number" data-line-number="659"></td>
        <td id="LC659" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">LogText</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...) IM_FMTARGS(<span class="pl-c1">1</span>);                        <span class="pl-c"><span class="pl-c">//</span> pass text data straight to log (without being displayed)</span></td>
      </tr>
      <tr>
        <td id="L660" class="blob-num js-line-number" data-line-number="660"></td>
        <td id="LC660" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L661" class="blob-num js-line-number" data-line-number="661"></td>
        <td id="LC661" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Drag and Drop</span></td>
      </tr>
      <tr>
        <td id="L662" class="blob-num js-line-number" data-line-number="662"></td>
        <td id="LC662" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - [BETA API] API may evolve!</span></td>
      </tr>
      <tr>
        <td id="L663" class="blob-num js-line-number" data-line-number="663"></td>
        <td id="LC663" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - If you stop calling BeginDragDropSource() the payload is preserved however it won&#39;t have a preview tooltip (we currently display a fallback &quot;...&quot; tooltip as replacement)</span></td>
      </tr>
      <tr>
        <td id="L664" class="blob-num js-line-number" data-line-number="664"></td>
        <td id="LC664" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginDragDropSource</span>(ImGuiDragDropFlags flags = <span class="pl-c1">0</span>);                                      <span class="pl-c"><span class="pl-c">//</span> call when the current item is active. If this return true, you can call SetDragDropPayload() + EndDragDropSource()</span></td>
      </tr>
      <tr>
        <td id="L665" class="blob-num js-line-number" data-line-number="665"></td>
        <td id="LC665" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">SetDragDropPayload</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* type, <span class="pl-k">const</span> <span class="pl-k">void</span>* data, <span class="pl-c1">size_t</span> sz, ImGuiCond cond = <span class="pl-c1">0</span>);  <span class="pl-c"><span class="pl-c">//</span> type is a user defined string of maximum 32 characters. Strings starting with &#39;_&#39; are reserved for dear imgui internal types. Data is copied and held by imgui.</span></td>
      </tr>
      <tr>
        <td id="L666" class="blob-num js-line-number" data-line-number="666"></td>
        <td id="LC666" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndDragDropSource</span>();                                                                    <span class="pl-c"><span class="pl-c">//</span> only call EndDragDropSource() if BeginDragDropSource() returns true!</span></td>
      </tr>
      <tr>
        <td id="L667" class="blob-num js-line-number" data-line-number="667"></td>
        <td id="LC667" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>                  <span class="pl-en">BeginDragDropTarget</span>();                                                          <span class="pl-c"><span class="pl-c">//</span> call after submitting an item that may receive a payload. If this returns true, you can call AcceptDragDropPayload() + EndDragDropTarget()</span></td>
      </tr>
      <tr>
        <td id="L668" class="blob-num js-line-number" data-line-number="668"></td>
        <td id="LC668" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImGuiPayload*   <span class="pl-en">AcceptDragDropPayload</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* type, ImGuiDragDropFlags flags = <span class="pl-c1">0</span>);          <span class="pl-c"><span class="pl-c">//</span> accept contents of a given type. If ImGuiDragDropFlags_AcceptBeforeDelivery is set you can peek into the payload before the mouse button is released.</span></td>
      </tr>
      <tr>
        <td id="L669" class="blob-num js-line-number" data-line-number="669"></td>
        <td id="LC669" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>                  <span class="pl-en">EndDragDropTarget</span>();                                                            <span class="pl-c"><span class="pl-c">//</span> only call EndDragDropTarget() if BeginDragDropTarget() returns true!</span></td>
      </tr>
      <tr>
        <td id="L670" class="blob-num js-line-number" data-line-number="670"></td>
        <td id="LC670" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImGuiPayload*   <span class="pl-en">GetDragDropPayload</span>();                                                           <span class="pl-c"><span class="pl-c">//</span> peek directly into the current payload from anywhere. may return NULL. use ImGuiPayload::IsDataType() to test for the payload type.</span></td>
      </tr>
      <tr>
        <td id="L671" class="blob-num js-line-number" data-line-number="671"></td>
        <td id="LC671" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L672" class="blob-num js-line-number" data-line-number="672"></td>
        <td id="LC672" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Clipping</span></td>
      </tr>
      <tr>
        <td id="L673" class="blob-num js-line-number" data-line-number="673"></td>
        <td id="LC673" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PushClipRect</span>(<span class="pl-k">const</span> ImVec2&amp; clip_rect_min, <span class="pl-k">const</span> ImVec2&amp; clip_rect_max, <span class="pl-k">bool</span> intersect_with_current_clip_rect);</td>
      </tr>
      <tr>
        <td id="L674" class="blob-num js-line-number" data-line-number="674"></td>
        <td id="LC674" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">PopClipRect</span>();</td>
      </tr>
      <tr>
        <td id="L675" class="blob-num js-line-number" data-line-number="675"></td>
        <td id="LC675" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L676" class="blob-num js-line-number" data-line-number="676"></td>
        <td id="LC676" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Focus, Activation</span></td>
      </tr>
      <tr>
        <td id="L677" class="blob-num js-line-number" data-line-number="677"></td>
        <td id="LC677" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Prefer using &quot;SetItemDefaultFocus()&quot; over &quot;if (IsWindowAppearing()) SetScrollHereY()&quot; when applicable to signify &quot;this is the default item&quot;</span></td>
      </tr>
      <tr>
        <td id="L678" class="blob-num js-line-number" data-line-number="678"></td>
        <td id="LC678" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetItemDefaultFocus</span>();                                              <span class="pl-c"><span class="pl-c">//</span> make last item the default focused item of a window.</span></td>
      </tr>
      <tr>
        <td id="L679" class="blob-num js-line-number" data-line-number="679"></td>
        <td id="LC679" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetKeyboardFocusHere</span>(<span class="pl-k">int</span> offset = <span class="pl-c1">0</span>);                               <span class="pl-c"><span class="pl-c">//</span> focus keyboard on the next widget. Use positive &#39;offset&#39; to access sub components of a multiple component widget. Use -1 to access previous widget.</span></td>
      </tr>
      <tr>
        <td id="L680" class="blob-num js-line-number" data-line-number="680"></td>
        <td id="LC680" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L681" class="blob-num js-line-number" data-line-number="681"></td>
        <td id="LC681" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Item/Widgets Utilities</span></td>
      </tr>
      <tr>
        <td id="L682" class="blob-num js-line-number" data-line-number="682"></td>
        <td id="LC682" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Most of the functions are referring to the last/previous item we submitted.</span></td>
      </tr>
      <tr>
        <td id="L683" class="blob-num js-line-number" data-line-number="683"></td>
        <td id="LC683" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - See Demo Window under &quot;Widgets-&gt;Querying Status&quot; for an interactive visualization of most of those functions.</span></td>
      </tr>
      <tr>
        <td id="L684" class="blob-num js-line-number" data-line-number="684"></td>
        <td id="LC684" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsItemHovered</span>(ImGuiHoveredFlags flags = <span class="pl-c1">0</span>);                         <span class="pl-c"><span class="pl-c">//</span> is the last item hovered? (and usable, aka not blocked by a popup, etc.). See ImGuiHoveredFlags for more options.</span></td>
      </tr>
      <tr>
        <td id="L685" class="blob-num js-line-number" data-line-number="685"></td>
        <td id="LC685" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsItemActive</span>();                                                     <span class="pl-c"><span class="pl-c">//</span> is the last item active? (e.g. button being held, text field being edited. This will continuously return true while holding mouse button on an item. Items that don&#39;t interact will always return false)</span></td>
      </tr>
      <tr>
        <td id="L686" class="blob-num js-line-number" data-line-number="686"></td>
        <td id="LC686" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsItemFocused</span>();                                                    <span class="pl-c"><span class="pl-c">//</span> is the last item focused for keyboard/gamepad navigation?</span></td>
      </tr>
      <tr>
        <td id="L687" class="blob-num js-line-number" data-line-number="687"></td>
        <td id="LC687" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsItemClicked</span>(ImGuiMouseButton mouse_button = <span class="pl-c1">0</span>);                   <span class="pl-c"><span class="pl-c">//</span> is the last item clicked? (e.g. button/node just clicked on) == IsMouseClicked(mouse_button) &amp;&amp; IsItemHovered()</span></td>
      </tr>
      <tr>
        <td id="L688" class="blob-num js-line-number" data-line-number="688"></td>
        <td id="LC688" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsItemVisible</span>();                                                    <span class="pl-c"><span class="pl-c">//</span> is the last item visible? (items may be out of sight because of clipping/scrolling)</span></td>
      </tr>
      <tr>
        <td id="L689" class="blob-num js-line-number" data-line-number="689"></td>
        <td id="LC689" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsItemEdited</span>();                                                     <span class="pl-c"><span class="pl-c">//</span> did the last item modify its underlying value this frame? or was pressed? This is generally the same as the &quot;bool&quot; return value of many widgets.</span></td>
      </tr>
      <tr>
        <td id="L690" class="blob-num js-line-number" data-line-number="690"></td>
        <td id="LC690" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsItemActivated</span>();                                                  <span class="pl-c"><span class="pl-c">//</span> was the last item just made active (item was previously inactive).</span></td>
      </tr>
      <tr>
        <td id="L691" class="blob-num js-line-number" data-line-number="691"></td>
        <td id="LC691" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsItemDeactivated</span>();                                                <span class="pl-c"><span class="pl-c">//</span> was the last item just made inactive (item was previously active). Useful for Undo/Redo patterns with widgets that requires continuous editing.</span></td>
      </tr>
      <tr>
        <td id="L692" class="blob-num js-line-number" data-line-number="692"></td>
        <td id="LC692" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsItemDeactivatedAfterEdit</span>();                                       <span class="pl-c"><span class="pl-c">//</span> was the last item just made inactive and made a value change when it was active? (e.g. Slider/Drag moved). Useful for Undo/Redo patterns with widgets that requires continuous editing. Note that you may get false positives (some widgets such as Combo()/ListBox()/Selectable() will return true even when clicking an already selected item).</span></td>
      </tr>
      <tr>
        <td id="L693" class="blob-num js-line-number" data-line-number="693"></td>
        <td id="LC693" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsItemToggledOpen</span>();                                                <span class="pl-c"><span class="pl-c">//</span> was the last item open state toggled? set by TreeNode().</span></td>
      </tr>
      <tr>
        <td id="L694" class="blob-num js-line-number" data-line-number="694"></td>
        <td id="LC694" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsAnyItemHovered</span>();                                                 <span class="pl-c"><span class="pl-c">//</span> is any item hovered?</span></td>
      </tr>
      <tr>
        <td id="L695" class="blob-num js-line-number" data-line-number="695"></td>
        <td id="LC695" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsAnyItemActive</span>();                                                  <span class="pl-c"><span class="pl-c">//</span> is any item active?</span></td>
      </tr>
      <tr>
        <td id="L696" class="blob-num js-line-number" data-line-number="696"></td>
        <td id="LC696" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsAnyItemFocused</span>();                                                 <span class="pl-c"><span class="pl-c">//</span> is any item focused?</span></td>
      </tr>
      <tr>
        <td id="L697" class="blob-num js-line-number" data-line-number="697"></td>
        <td id="LC697" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetItemRectMin</span>();                                                   <span class="pl-c"><span class="pl-c">//</span> get upper-left bounding rectangle of the last item (screen space)</span></td>
      </tr>
      <tr>
        <td id="L698" class="blob-num js-line-number" data-line-number="698"></td>
        <td id="LC698" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetItemRectMax</span>();                                                   <span class="pl-c"><span class="pl-c">//</span> get lower-right bounding rectangle of the last item (screen space)</span></td>
      </tr>
      <tr>
        <td id="L699" class="blob-num js-line-number" data-line-number="699"></td>
        <td id="LC699" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetItemRectSize</span>();                                                  <span class="pl-c"><span class="pl-c">//</span> get size of last item</span></td>
      </tr>
      <tr>
        <td id="L700" class="blob-num js-line-number" data-line-number="700"></td>
        <td id="LC700" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetItemAllowOverlap</span>();                                              <span class="pl-c"><span class="pl-c">//</span> allow last item to be overlapped by a subsequent item. sometimes useful with invisible buttons, selectables, etc. to catch unused area.</span></td>
      </tr>
      <tr>
        <td id="L701" class="blob-num js-line-number" data-line-number="701"></td>
        <td id="LC701" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L702" class="blob-num js-line-number" data-line-number="702"></td>
        <td id="LC702" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Miscellaneous Utilities</span></td>
      </tr>
      <tr>
        <td id="L703" class="blob-num js-line-number" data-line-number="703"></td>
        <td id="LC703" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsRectVisible</span>(<span class="pl-k">const</span> ImVec2&amp; size);                                  <span class="pl-c"><span class="pl-c">//</span> test if rectangle (of given size, starting from cursor position) is visible / not clipped.</span></td>
      </tr>
      <tr>
        <td id="L704" class="blob-num js-line-number" data-line-number="704"></td>
        <td id="LC704" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsRectVisible</span>(<span class="pl-k">const</span> ImVec2&amp; rect_min, <span class="pl-k">const</span> ImVec2&amp; rect_max);      <span class="pl-c"><span class="pl-c">//</span> test if rectangle (in screen space) is visible / not clipped. to perform coarse clipping on user&#39;s side.</span></td>
      </tr>
      <tr>
        <td id="L705" class="blob-num js-line-number" data-line-number="705"></td>
        <td id="LC705" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">double</span>        <span class="pl-en">GetTime</span>();                                                          <span class="pl-c"><span class="pl-c">//</span> get global imgui time. incremented by io.DeltaTime every frame.</span></td>
      </tr>
      <tr>
        <td id="L706" class="blob-num js-line-number" data-line-number="706"></td>
        <td id="LC706" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">int</span>           <span class="pl-en">GetFrameCount</span>();                                                    <span class="pl-c"><span class="pl-c">//</span> get global imgui frame count. incremented by 1 every frame.</span></td>
      </tr>
      <tr>
        <td id="L707" class="blob-num js-line-number" data-line-number="707"></td>
        <td id="LC707" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImDrawList*   <span class="pl-en">GetBackgroundDrawList</span>();                                            <span class="pl-c"><span class="pl-c">//</span> this draw list will be the first rendering one. Useful to quickly draw shapes/text behind dear imgui contents.</span></td>
      </tr>
      <tr>
        <td id="L708" class="blob-num js-line-number" data-line-number="708"></td>
        <td id="LC708" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImDrawList*   <span class="pl-en">GetForegroundDrawList</span>();                                            <span class="pl-c"><span class="pl-c">//</span> this draw list will be the last rendered one. Useful to quickly draw shapes/text over dear imgui contents.</span></td>
      </tr>
      <tr>
        <td id="L709" class="blob-num js-line-number" data-line-number="709"></td>
        <td id="LC709" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImDrawListSharedData* <span class="pl-en">GetDrawListSharedData</span>();                                    <span class="pl-c"><span class="pl-c">//</span> you may use this when creating your own ImDrawList instances.</span></td>
      </tr>
      <tr>
        <td id="L710" class="blob-num js-line-number" data-line-number="710"></td>
        <td id="LC710" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> <span class="pl-k">char</span>*   <span class="pl-en">GetStyleColorName</span>(ImGuiCol idx);                                    <span class="pl-c"><span class="pl-c">//</span> get a string corresponding to the enum value (for display, saving, etc.).</span></td>
      </tr>
      <tr>
        <td id="L711" class="blob-num js-line-number" data-line-number="711"></td>
        <td id="LC711" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetStateStorage</span>(ImGuiStorage* storage);                             <span class="pl-c"><span class="pl-c">//</span> replace current window storage with our own (if you want to manipulate it yourself, typically clear subsection of it)</span></td>
      </tr>
      <tr>
        <td id="L712" class="blob-num js-line-number" data-line-number="712"></td>
        <td id="LC712" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImGuiStorage* <span class="pl-en">GetStateStorage</span>();</td>
      </tr>
      <tr>
        <td id="L713" class="blob-num js-line-number" data-line-number="713"></td>
        <td id="LC713" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">CalcListClipping</span>(<span class="pl-k">int</span> items_count, <span class="pl-k">float</span> items_height, <span class="pl-k">int</span>* out_items_display_start, <span class="pl-k">int</span>* out_items_display_end);    <span class="pl-c"><span class="pl-c">//</span> calculate coarse clipping for large list of evenly sized items. Prefer using the ImGuiListClipper higher-level helper if you can.</span></td>
      </tr>
      <tr>
        <td id="L714" class="blob-num js-line-number" data-line-number="714"></td>
        <td id="LC714" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">BeginChildFrame</span>(ImGuiID id, <span class="pl-k">const</span> ImVec2&amp; size, ImGuiWindowFlags flags = <span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> helper to create a child window / scrolling region that looks like a normal widget frame</span></td>
      </tr>
      <tr>
        <td id="L715" class="blob-num js-line-number" data-line-number="715"></td>
        <td id="LC715" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">EndChildFrame</span>();                                                    <span class="pl-c"><span class="pl-c">//</span> always call EndChildFrame() regardless of BeginChildFrame() return values (which indicates a collapsed/clipped window)</span></td>
      </tr>
      <tr>
        <td id="L716" class="blob-num js-line-number" data-line-number="716"></td>
        <td id="LC716" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L717" class="blob-num js-line-number" data-line-number="717"></td>
        <td id="LC717" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Text Utilities</span></td>
      </tr>
      <tr>
        <td id="L718" class="blob-num js-line-number" data-line-number="718"></td>
        <td id="LC718" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">CalcTextSize</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* text, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_end = <span class="pl-c1">NULL</span>, <span class="pl-k">bool</span> hide_text_after_double_hash = <span class="pl-c1">false</span>, <span class="pl-k">float</span> wrap_width = -<span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L719" class="blob-num js-line-number" data-line-number="719"></td>
        <td id="LC719" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L720" class="blob-num js-line-number" data-line-number="720"></td>
        <td id="LC720" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Color Utilities</span></td>
      </tr>
      <tr>
        <td id="L721" class="blob-num js-line-number" data-line-number="721"></td>
        <td id="LC721" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec4        <span class="pl-en">ColorConvertU32ToFloat4</span>(ImU32 in);</td>
      </tr>
      <tr>
        <td id="L722" class="blob-num js-line-number" data-line-number="722"></td>
        <td id="LC722" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImU32         <span class="pl-en">ColorConvertFloat4ToU32</span>(<span class="pl-k">const</span> ImVec4&amp; in);</td>
      </tr>
      <tr>
        <td id="L723" class="blob-num js-line-number" data-line-number="723"></td>
        <td id="LC723" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ColorConvertRGBtoHSV</span>(<span class="pl-k">float</span> r, <span class="pl-k">float</span> g, <span class="pl-k">float</span> b, <span class="pl-k">float</span>&amp; out_h, <span class="pl-k">float</span>&amp; out_s, <span class="pl-k">float</span>&amp; out_v);</td>
      </tr>
      <tr>
        <td id="L724" class="blob-num js-line-number" data-line-number="724"></td>
        <td id="LC724" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ColorConvertHSVtoRGB</span>(<span class="pl-k">float</span> h, <span class="pl-k">float</span> s, <span class="pl-k">float</span> v, <span class="pl-k">float</span>&amp; out_r, <span class="pl-k">float</span>&amp; out_g, <span class="pl-k">float</span>&amp; out_b);</td>
      </tr>
      <tr>
        <td id="L725" class="blob-num js-line-number" data-line-number="725"></td>
        <td id="LC725" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L726" class="blob-num js-line-number" data-line-number="726"></td>
        <td id="LC726" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Inputs Utilities: Keyboard</span></td>
      </tr>
      <tr>
        <td id="L727" class="blob-num js-line-number" data-line-number="727"></td>
        <td id="LC727" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - For &#39;int user_key_index&#39; you can use your own indices/enums according to how your back-end/engine stored them in io.KeysDown[].</span></td>
      </tr>
      <tr>
        <td id="L728" class="blob-num js-line-number" data-line-number="728"></td>
        <td id="LC728" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - We don&#39;t know the meaning of those value. You can use GetKeyIndex() to map a ImGuiKey_ value into the user index.</span></td>
      </tr>
      <tr>
        <td id="L729" class="blob-num js-line-number" data-line-number="729"></td>
        <td id="LC729" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">int</span>           <span class="pl-en">GetKeyIndex</span>(ImGuiKey imgui_key);                                    <span class="pl-c"><span class="pl-c">//</span> map ImGuiKey_* values into user&#39;s key index. == io.KeyMap[key]</span></td>
      </tr>
      <tr>
        <td id="L730" class="blob-num js-line-number" data-line-number="730"></td>
        <td id="LC730" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsKeyDown</span>(<span class="pl-k">int</span> user_key_index);                                      <span class="pl-c"><span class="pl-c">//</span> is key being held. == io.KeysDown[user_key_index].</span></td>
      </tr>
      <tr>
        <td id="L731" class="blob-num js-line-number" data-line-number="731"></td>
        <td id="LC731" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsKeyPressed</span>(<span class="pl-k">int</span> user_key_index, <span class="pl-k">bool</span> repeat = <span class="pl-c1">true</span>);               <span class="pl-c"><span class="pl-c">//</span> was key pressed (went from !Down to Down)? if repeat=true, uses io.KeyRepeatDelay / KeyRepeatRate</span></td>
      </tr>
      <tr>
        <td id="L732" class="blob-num js-line-number" data-line-number="732"></td>
        <td id="LC732" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsKeyReleased</span>(<span class="pl-k">int</span> user_key_index);                                  <span class="pl-c"><span class="pl-c">//</span> was key released (went from Down to !Down)?</span></td>
      </tr>
      <tr>
        <td id="L733" class="blob-num js-line-number" data-line-number="733"></td>
        <td id="LC733" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">int</span>           <span class="pl-en">GetKeyPressedAmount</span>(<span class="pl-k">int</span> key_index, <span class="pl-k">float</span> repeat_delay, <span class="pl-k">float</span> rate); <span class="pl-c"><span class="pl-c">//</span> uses provided repeat rate/delay. return a count, most often 0 or 1 but might be &gt;1 if RepeatRate is small enough that DeltaTime &gt; RepeatRate</span></td>
      </tr>
      <tr>
        <td id="L734" class="blob-num js-line-number" data-line-number="734"></td>
        <td id="LC734" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">CaptureKeyboardFromApp</span>(<span class="pl-k">bool</span> want_capture_keyboard_value = <span class="pl-c1">true</span>);    <span class="pl-c"><span class="pl-c">//</span> attention: misleading name! manually override io.WantCaptureKeyboard flag next frame (said flag is entirely left for your application to handle). e.g. force capture keyboard when your widget is being hovered. This is equivalent to setting &quot;io.WantCaptureKeyboard = want_capture_keyboard_value&quot;; after the next NewFrame() call.</span></td>
      </tr>
      <tr>
        <td id="L735" class="blob-num js-line-number" data-line-number="735"></td>
        <td id="LC735" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L736" class="blob-num js-line-number" data-line-number="736"></td>
        <td id="LC736" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Inputs Utilities: Mouse</span></td>
      </tr>
      <tr>
        <td id="L737" class="blob-num js-line-number" data-line-number="737"></td>
        <td id="LC737" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - To refer to a mouse button, you may use named enums in your code e.g. ImGuiMouseButton_Left, ImGuiMouseButton_Right.</span></td>
      </tr>
      <tr>
        <td id="L738" class="blob-num js-line-number" data-line-number="738"></td>
        <td id="LC738" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - You can also use regular integer: it is forever guaranteed that 0=Left, 1=Right, 2=Middle.</span></td>
      </tr>
      <tr>
        <td id="L739" class="blob-num js-line-number" data-line-number="739"></td>
        <td id="LC739" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Dragging operations are only reported after mouse has moved a certain distance away from the initial clicking position (see &#39;lock_threshold&#39; and &#39;io.MouseDraggingThreshold&#39;)</span></td>
      </tr>
      <tr>
        <td id="L740" class="blob-num js-line-number" data-line-number="740"></td>
        <td id="LC740" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsMouseDown</span>(ImGuiMouseButton button);                               <span class="pl-c"><span class="pl-c">//</span> is mouse button held?</span></td>
      </tr>
      <tr>
        <td id="L741" class="blob-num js-line-number" data-line-number="741"></td>
        <td id="LC741" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsMouseClicked</span>(ImGuiMouseButton button, <span class="pl-k">bool</span> repeat = <span class="pl-c1">false</span>);       <span class="pl-c"><span class="pl-c">//</span> did mouse button clicked? (went from !Down to Down)</span></td>
      </tr>
      <tr>
        <td id="L742" class="blob-num js-line-number" data-line-number="742"></td>
        <td id="LC742" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsMouseReleased</span>(ImGuiMouseButton button);                           <span class="pl-c"><span class="pl-c">//</span> did mouse button released? (went from Down to !Down)</span></td>
      </tr>
      <tr>
        <td id="L743" class="blob-num js-line-number" data-line-number="743"></td>
        <td id="LC743" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsMouseDoubleClicked</span>(ImGuiMouseButton button);                      <span class="pl-c"><span class="pl-c">//</span> did mouse button double-clicked? (note that a double-click will also report IsMouseClicked() == true)</span></td>
      </tr>
      <tr>
        <td id="L744" class="blob-num js-line-number" data-line-number="744"></td>
        <td id="LC744" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsMouseHoveringRect</span>(<span class="pl-k">const</span> ImVec2&amp; r_min, <span class="pl-k">const</span> ImVec2&amp; r_max, <span class="pl-k">bool</span> clip = <span class="pl-c1">true</span>);<span class="pl-c"><span class="pl-c">//</span> is mouse hovering given bounding rect (in screen space). clipped by current clipping settings, but disregarding of other consideration of focus/window ordering/popup-block.</span></td>
      </tr>
      <tr>
        <td id="L745" class="blob-num js-line-number" data-line-number="745"></td>
        <td id="LC745" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsMousePosValid</span>(<span class="pl-k">const</span> ImVec2* mouse_pos = <span class="pl-c1">NULL</span>);                    <span class="pl-c"><span class="pl-c">//</span> by convention we use (-FLT_MAX,-FLT_MAX) to denote that there is no mouse available</span></td>
      </tr>
      <tr>
        <td id="L746" class="blob-num js-line-number" data-line-number="746"></td>
        <td id="LC746" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsAnyMouseDown</span>();                                                   <span class="pl-c"><span class="pl-c">//</span> is any mouse button held?</span></td>
      </tr>
      <tr>
        <td id="L747" class="blob-num js-line-number" data-line-number="747"></td>
        <td id="LC747" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetMousePos</span>();                                                      <span class="pl-c"><span class="pl-c">//</span> shortcut to ImGui::GetIO().MousePos provided by user, to be consistent with other calls</span></td>
      </tr>
      <tr>
        <td id="L748" class="blob-num js-line-number" data-line-number="748"></td>
        <td id="LC748" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetMousePosOnOpeningCurrentPopup</span>();                                 <span class="pl-c"><span class="pl-c">//</span> retrieve mouse position at the time of opening popup we have BeginPopup() into (helper to avoid user backing that value themselves)</span></td>
      </tr>
      <tr>
        <td id="L749" class="blob-num js-line-number" data-line-number="749"></td>
        <td id="LC749" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">IsMouseDragging</span>(ImGuiMouseButton button, <span class="pl-k">float</span> lock_threshold = -<span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);         <span class="pl-c"><span class="pl-c">//</span> is mouse dragging? (if lock_threshold &lt; -1.0f, uses io.MouseDraggingThreshold)</span></td>
      </tr>
      <tr>
        <td id="L750" class="blob-num js-line-number" data-line-number="750"></td>
        <td id="LC750" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2        <span class="pl-en">GetMouseDragDelta</span>(ImGuiMouseButton button = <span class="pl-c1">0</span>, <span class="pl-k">float</span> lock_threshold = -<span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);   <span class="pl-c"><span class="pl-c">//</span> return the delta from the initial clicking position while the mouse button is pressed or was just released. This is locked and return 0.0f until the mouse moves past a distance threshold at least once (if lock_threshold &lt; -1.0f, uses io.MouseDraggingThreshold)</span></td>
      </tr>
      <tr>
        <td id="L751" class="blob-num js-line-number" data-line-number="751"></td>
        <td id="LC751" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">ResetMouseDragDelta</span>(ImGuiMouseButton button = <span class="pl-c1">0</span>);                   <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L752" class="blob-num js-line-number" data-line-number="752"></td>
        <td id="LC752" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImGuiMouseCursor <span class="pl-en">GetMouseCursor</span>();                                                <span class="pl-c"><span class="pl-c">//</span> get desired cursor type, reset in ImGui::NewFrame(), this is updated during the frame. valid before Render(). If you use software rendering by setting io.MouseDrawCursor ImGui will render those for you</span></td>
      </tr>
      <tr>
        <td id="L753" class="blob-num js-line-number" data-line-number="753"></td>
        <td id="LC753" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetMouseCursor</span>(ImGuiMouseCursor cursor_type);                       <span class="pl-c"><span class="pl-c">//</span> set desired cursor type</span></td>
      </tr>
      <tr>
        <td id="L754" class="blob-num js-line-number" data-line-number="754"></td>
        <td id="LC754" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">CaptureMouseFromApp</span>(<span class="pl-k">bool</span> want_capture_mouse_value = <span class="pl-c1">true</span>);          <span class="pl-c"><span class="pl-c">//</span> attention: misleading name! manually override io.WantCaptureMouse flag next frame (said flag is entirely left for your application to handle). This is equivalent to setting &quot;io.WantCaptureMouse = want_capture_mouse_value;&quot; after the next NewFrame() call.</span></td>
      </tr>
      <tr>
        <td id="L755" class="blob-num js-line-number" data-line-number="755"></td>
        <td id="LC755" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L756" class="blob-num js-line-number" data-line-number="756"></td>
        <td id="LC756" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Clipboard Utilities</span></td>
      </tr>
      <tr>
        <td id="L757" class="blob-num js-line-number" data-line-number="757"></td>
        <td id="LC757" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Also see the LogToClipboard() function to capture GUI into clipboard, or easily output text data to the clipboard.</span></td>
      </tr>
      <tr>
        <td id="L758" class="blob-num js-line-number" data-line-number="758"></td>
        <td id="LC758" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> <span class="pl-k">char</span>*   <span class="pl-en">GetClipboardText</span>();</td>
      </tr>
      <tr>
        <td id="L759" class="blob-num js-line-number" data-line-number="759"></td>
        <td id="LC759" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetClipboardText</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* text);</td>
      </tr>
      <tr>
        <td id="L760" class="blob-num js-line-number" data-line-number="760"></td>
        <td id="LC760" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L761" class="blob-num js-line-number" data-line-number="761"></td>
        <td id="LC761" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Settings/.Ini Utilities</span></td>
      </tr>
      <tr>
        <td id="L762" class="blob-num js-line-number" data-line-number="762"></td>
        <td id="LC762" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - The disk functions are automatically called if io.IniFilename != NULL (default is &quot;imgui.ini&quot;).</span></td>
      </tr>
      <tr>
        <td id="L763" class="blob-num js-line-number" data-line-number="763"></td>
        <td id="LC763" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Set io.IniFilename to NULL to load/save manually. Read io.WantSaveIniSettings description about handling .ini saving manually.</span></td>
      </tr>
      <tr>
        <td id="L764" class="blob-num js-line-number" data-line-number="764"></td>
        <td id="LC764" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">LoadIniSettingsFromDisk</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* ini_filename);                  <span class="pl-c"><span class="pl-c">//</span> call after CreateContext() and before the first call to NewFrame(). NewFrame() automatically calls LoadIniSettingsFromDisk(io.IniFilename).</span></td>
      </tr>
      <tr>
        <td id="L765" class="blob-num js-line-number" data-line-number="765"></td>
        <td id="LC765" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">LoadIniSettingsFromMemory</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* ini_data, <span class="pl-c1">size_t</span> ini_size=<span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> call after CreateContext() and before the first call to NewFrame() to provide .ini data from your own data source.</span></td>
      </tr>
      <tr>
        <td id="L766" class="blob-num js-line-number" data-line-number="766"></td>
        <td id="LC766" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SaveIniSettingsToDisk</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* ini_filename);                    <span class="pl-c"><span class="pl-c">//</span> this is automatically called (if io.IniFilename is not empty) a few seconds after any modification that should be reflected in the .ini file (and also by DestroyContext).</span></td>
      </tr>
      <tr>
        <td id="L767" class="blob-num js-line-number" data-line-number="767"></td>
        <td id="LC767" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> <span class="pl-k">char</span>*   <span class="pl-en">SaveIniSettingsToMemory</span>(<span class="pl-c1">size_t</span>* out_ini_size = <span class="pl-c1">NULL</span>);               <span class="pl-c"><span class="pl-c">//</span> return a zero-terminated string with the .ini data which you can save by your own mean. call when io.WantSaveIniSettings is set, then save data by your own mean and clear io.WantSaveIniSettings.</span></td>
      </tr>
      <tr>
        <td id="L768" class="blob-num js-line-number" data-line-number="768"></td>
        <td id="LC768" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L769" class="blob-num js-line-number" data-line-number="769"></td>
        <td id="LC769" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Debug Utilities</span></td>
      </tr>
      <tr>
        <td id="L770" class="blob-num js-line-number" data-line-number="770"></td>
        <td id="LC770" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>          <span class="pl-en">DebugCheckVersionAndDataLayout</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* version_str, <span class="pl-c1">size_t</span> sz_io, <span class="pl-c1">size_t</span> sz_style, <span class="pl-c1">size_t</span> sz_vec2, <span class="pl-c1">size_t</span> sz_vec4, <span class="pl-c1">size_t</span> sz_drawvert, <span class="pl-c1">size_t</span> sz_drawidx); <span class="pl-c"><span class="pl-c">//</span> This is called by IMGUI_CHECKVERSION() macro.</span></td>
      </tr>
      <tr>
        <td id="L771" class="blob-num js-line-number" data-line-number="771"></td>
        <td id="LC771" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L772" class="blob-num js-line-number" data-line-number="772"></td>
        <td id="LC772" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Memory Allocators</span></td>
      </tr>
      <tr>
        <td id="L773" class="blob-num js-line-number" data-line-number="773"></td>
        <td id="LC773" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - All those functions are not reliant on the current context.</span></td>
      </tr>
      <tr>
        <td id="L774" class="blob-num js-line-number" data-line-number="774"></td>
        <td id="LC774" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - If you reload the contents of imgui.cpp at runtime, you may need to call SetCurrentContext() + SetAllocatorFunctions() again because we use global storage for those.</span></td>
      </tr>
      <tr>
        <td id="L775" class="blob-num js-line-number" data-line-number="775"></td>
        <td id="LC775" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">SetAllocatorFunctions</span>(<span class="pl-k">void</span>* (*alloc_func)(<span class="pl-c1">size_t</span> sz, <span class="pl-k">void</span>* user_data), void (*free_func)(<span class="pl-k">void</span>* ptr, <span class="pl-k">void</span>* user_data), void* user_data = NULL);</td>
      </tr>
      <tr>
        <td id="L776" class="blob-num js-line-number" data-line-number="776"></td>
        <td id="LC776" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>*         <span class="pl-en">MemAlloc</span>(<span class="pl-c1">size_t</span> size);</td>
      </tr>
      <tr>
        <td id="L777" class="blob-num js-line-number" data-line-number="777"></td>
        <td id="LC777" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>          <span class="pl-en">MemFree</span>(<span class="pl-k">void</span>* ptr);</td>
      </tr>
      <tr>
        <td id="L778" class="blob-num js-line-number" data-line-number="778"></td>
        <td id="LC778" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L779" class="blob-num js-line-number" data-line-number="779"></td>
        <td id="LC779" class="blob-code blob-code-inner js-file-line">} <span class="pl-c"><span class="pl-c">//</span> namespace ImGui</span></td>
      </tr>
      <tr>
        <td id="L780" class="blob-num js-line-number" data-line-number="780"></td>
        <td id="LC780" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L781" class="blob-num js-line-number" data-line-number="781"></td>
        <td id="LC781" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L782" class="blob-num js-line-number" data-line-number="782"></td>
        <td id="LC782" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags &amp; Enumerations</span></td>
      </tr>
      <tr>
        <td id="L783" class="blob-num js-line-number" data-line-number="783"></td>
        <td id="LC783" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L784" class="blob-num js-line-number" data-line-number="784"></td>
        <td id="LC784" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L785" class="blob-num js-line-number" data-line-number="785"></td>
        <td id="LC785" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImGui::Begin()</span></td>
      </tr>
      <tr>
        <td id="L786" class="blob-num js-line-number" data-line-number="786"></td>
        <td id="LC786" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiWindowFlags_</td>
      </tr>
      <tr>
        <td id="L787" class="blob-num js-line-number" data-line-number="787"></td>
        <td id="LC787" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L788" class="blob-num js-line-number" data-line-number="788"></td>
        <td id="LC788" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_None                   = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L789" class="blob-num js-line-number" data-line-number="789"></td>
        <td id="LC789" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoTitleBar             = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable title-bar</span></td>
      </tr>
      <tr>
        <td id="L790" class="blob-num js-line-number" data-line-number="790"></td>
        <td id="LC790" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoResize               = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable user resizing with the lower-right grip</span></td>
      </tr>
      <tr>
        <td id="L791" class="blob-num js-line-number" data-line-number="791"></td>
        <td id="LC791" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoMove                 = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable user moving the window</span></td>
      </tr>
      <tr>
        <td id="L792" class="blob-num js-line-number" data-line-number="792"></td>
        <td id="LC792" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoScrollbar            = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable scrollbars (window can still scroll with mouse or programmatically)</span></td>
      </tr>
      <tr>
        <td id="L793" class="blob-num js-line-number" data-line-number="793"></td>
        <td id="LC793" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoScrollWithMouse      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable user vertically scrolling with mouse wheel. On child window, mouse wheel will be forwarded to the parent unless NoScrollbar is also set.</span></td>
      </tr>
      <tr>
        <td id="L794" class="blob-num js-line-number" data-line-number="794"></td>
        <td id="LC794" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoCollapse             = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">5</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable user collapsing window by double-clicking on it</span></td>
      </tr>
      <tr>
        <td id="L795" class="blob-num js-line-number" data-line-number="795"></td>
        <td id="LC795" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_AlwaysAutoResize       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">6</span>,   <span class="pl-c"><span class="pl-c">//</span> Resize every window to its content every frame</span></td>
      </tr>
      <tr>
        <td id="L796" class="blob-num js-line-number" data-line-number="796"></td>
        <td id="LC796" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoBackground           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">7</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable drawing background color (WindowBg, etc.) and outside border. Similar as using SetNextWindowBgAlpha(0.0f).</span></td>
      </tr>
      <tr>
        <td id="L797" class="blob-num js-line-number" data-line-number="797"></td>
        <td id="LC797" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoSavedSettings        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">8</span>,   <span class="pl-c"><span class="pl-c">//</span> Never load/save settings in .ini file</span></td>
      </tr>
      <tr>
        <td id="L798" class="blob-num js-line-number" data-line-number="798"></td>
        <td id="LC798" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoMouseInputs          = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">9</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable catching mouse, hovering test with pass through.</span></td>
      </tr>
      <tr>
        <td id="L799" class="blob-num js-line-number" data-line-number="799"></td>
        <td id="LC799" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_MenuBar                = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">10</span>,  <span class="pl-c"><span class="pl-c">//</span> Has a menu-bar</span></td>
      </tr>
      <tr>
        <td id="L800" class="blob-num js-line-number" data-line-number="800"></td>
        <td id="LC800" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_HorizontalScrollbar    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">11</span>,  <span class="pl-c"><span class="pl-c">//</span> Allow horizontal scrollbar to appear (off by default). You may use SetNextWindowContentSize(ImVec2(width,0.0f)); prior to calling Begin() to specify width. Read code in imgui_demo in the &quot;Horizontal Scrolling&quot; section.</span></td>
      </tr>
      <tr>
        <td id="L801" class="blob-num js-line-number" data-line-number="801"></td>
        <td id="LC801" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoFocusOnAppearing     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">12</span>,  <span class="pl-c"><span class="pl-c">//</span> Disable taking focus when transitioning from hidden to visible state</span></td>
      </tr>
      <tr>
        <td id="L802" class="blob-num js-line-number" data-line-number="802"></td>
        <td id="LC802" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoBringToFrontOnFocus  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">13</span>,  <span class="pl-c"><span class="pl-c">//</span> Disable bringing window to front when taking focus (e.g. clicking on it or programmatically giving it focus)</span></td>
      </tr>
      <tr>
        <td id="L803" class="blob-num js-line-number" data-line-number="803"></td>
        <td id="LC803" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_AlwaysVerticalScrollbar= <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">14</span>,  <span class="pl-c"><span class="pl-c">//</span> Always show vertical scrollbar (even if ContentSize.y &lt; Size.y)</span></td>
      </tr>
      <tr>
        <td id="L804" class="blob-num js-line-number" data-line-number="804"></td>
        <td id="LC804" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_AlwaysHorizontalScrollbar=<span class="pl-c1">1</span>&lt;&lt; <span class="pl-c1">15</span>,  <span class="pl-c"><span class="pl-c">//</span> Always show horizontal scrollbar (even if ContentSize.x &lt; Size.x)</span></td>
      </tr>
      <tr>
        <td id="L805" class="blob-num js-line-number" data-line-number="805"></td>
        <td id="LC805" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_AlwaysUseWindowPadding = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">16</span>,  <span class="pl-c"><span class="pl-c">//</span> Ensure child windows without border uses style.WindowPadding (ignored by default for non-bordered child windows, because more convenient)</span></td>
      </tr>
      <tr>
        <td id="L806" class="blob-num js-line-number" data-line-number="806"></td>
        <td id="LC806" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoNavInputs            = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">18</span>,  <span class="pl-c"><span class="pl-c">//</span> No gamepad/keyboard navigation within the window</span></td>
      </tr>
      <tr>
        <td id="L807" class="blob-num js-line-number" data-line-number="807"></td>
        <td id="LC807" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoNavFocus             = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">19</span>,  <span class="pl-c"><span class="pl-c">//</span> No focusing toward this window with gamepad/keyboard navigation (e.g. skipped by CTRL+TAB)</span></td>
      </tr>
      <tr>
        <td id="L808" class="blob-num js-line-number" data-line-number="808"></td>
        <td id="LC808" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_UnsavedDocument        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">20</span>,  <span class="pl-c"><span class="pl-c">//</span> Append &#39;*&#39; to title without affecting the ID, as a convenience to avoid using the ### operator. When used in a tab/docking context, tab is selected on closure and closure is deferred by one frame to allow code to cancel the closure (with a confirmation popup, etc.) without flicker.</span></td>
      </tr>
      <tr>
        <td id="L809" class="blob-num js-line-number" data-line-number="809"></td>
        <td id="LC809" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoNav                  = ImGuiWindowFlags_NoNavInputs | ImGuiWindowFlags_NoNavFocus,</td>
      </tr>
      <tr>
        <td id="L810" class="blob-num js-line-number" data-line-number="810"></td>
        <td id="LC810" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoDecoration           = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoCollapse,</td>
      </tr>
      <tr>
        <td id="L811" class="blob-num js-line-number" data-line-number="811"></td>
        <td id="LC811" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NoInputs               = ImGuiWindowFlags_NoMouseInputs | ImGuiWindowFlags_NoNavInputs | ImGuiWindowFlags_NoNavFocus,</td>
      </tr>
      <tr>
        <td id="L812" class="blob-num js-line-number" data-line-number="812"></td>
        <td id="LC812" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L813" class="blob-num js-line-number" data-line-number="813"></td>
        <td id="LC813" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L814" class="blob-num js-line-number" data-line-number="814"></td>
        <td id="LC814" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_NavFlattened           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">23</span>,  <span class="pl-c"><span class="pl-c">//</span> [BETA] Allow gamepad/keyboard navigation to cross over parent border to this child (only use on child that have no scrolling!)</span></td>
      </tr>
      <tr>
        <td id="L815" class="blob-num js-line-number" data-line-number="815"></td>
        <td id="LC815" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_ChildWindow            = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">24</span>,  <span class="pl-c"><span class="pl-c">//</span> Don&#39;t use! For internal use by BeginChild()</span></td>
      </tr>
      <tr>
        <td id="L816" class="blob-num js-line-number" data-line-number="816"></td>
        <td id="LC816" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_Tooltip                = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">25</span>,  <span class="pl-c"><span class="pl-c">//</span> Don&#39;t use! For internal use by BeginTooltip()</span></td>
      </tr>
      <tr>
        <td id="L817" class="blob-num js-line-number" data-line-number="817"></td>
        <td id="LC817" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_Popup                  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">26</span>,  <span class="pl-c"><span class="pl-c">//</span> Don&#39;t use! For internal use by BeginPopup()</span></td>
      </tr>
      <tr>
        <td id="L818" class="blob-num js-line-number" data-line-number="818"></td>
        <td id="LC818" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_Modal                  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">27</span>,  <span class="pl-c"><span class="pl-c">//</span> Don&#39;t use! For internal use by BeginPopupModal()</span></td>
      </tr>
      <tr>
        <td id="L819" class="blob-num js-line-number" data-line-number="819"></td>
        <td id="LC819" class="blob-code blob-code-inner js-file-line">    ImGuiWindowFlags_ChildMenu              = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">28</span>   <span class="pl-c"><span class="pl-c">//</span> Don&#39;t use! For internal use by BeginMenu()</span></td>
      </tr>
      <tr>
        <td id="L820" class="blob-num js-line-number" data-line-number="820"></td>
        <td id="LC820" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L821" class="blob-num js-line-number" data-line-number="821"></td>
        <td id="LC821" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Obsolete]</span></td>
      </tr>
      <tr>
        <td id="L822" class="blob-num js-line-number" data-line-number="822"></td>
        <td id="LC822" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>ImGuiWindowFlags_ShowBorders          = 1 &lt;&lt; 7,   // --&gt; Set style.FrameBorderSize=1.0f or style.WindowBorderSize=1.0f to enable borders around items or windows.</span></td>
      </tr>
      <tr>
        <td id="L823" class="blob-num js-line-number" data-line-number="823"></td>
        <td id="LC823" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>ImGuiWindowFlags_ResizeFromAnySide    = 1 &lt;&lt; 17,  // --&gt; Set io.ConfigWindowsResizeFromEdges=true and make sure mouse cursors are supported by back-end (io.BackendFlags &amp; ImGuiBackendFlags_HasMouseCursors)</span></td>
      </tr>
      <tr>
        <td id="L824" class="blob-num js-line-number" data-line-number="824"></td>
        <td id="LC824" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L825" class="blob-num js-line-number" data-line-number="825"></td>
        <td id="LC825" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L826" class="blob-num js-line-number" data-line-number="826"></td>
        <td id="LC826" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImGui::InputText()</span></td>
      </tr>
      <tr>
        <td id="L827" class="blob-num js-line-number" data-line-number="827"></td>
        <td id="LC827" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiInputTextFlags_</td>
      </tr>
      <tr>
        <td id="L828" class="blob-num js-line-number" data-line-number="828"></td>
        <td id="LC828" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L829" class="blob-num js-line-number" data-line-number="829"></td>
        <td id="LC829" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_None                = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L830" class="blob-num js-line-number" data-line-number="830"></td>
        <td id="LC830" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CharsDecimal        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> Allow 0123456789.+-*/</span></td>
      </tr>
      <tr>
        <td id="L831" class="blob-num js-line-number" data-line-number="831"></td>
        <td id="LC831" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CharsHexadecimal    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Allow 0123456789ABCDEFabcdef</span></td>
      </tr>
      <tr>
        <td id="L832" class="blob-num js-line-number" data-line-number="832"></td>
        <td id="LC832" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CharsUppercase      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Turn a..z into A..Z</span></td>
      </tr>
      <tr>
        <td id="L833" class="blob-num js-line-number" data-line-number="833"></td>
        <td id="LC833" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CharsNoBlank        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span> Filter out spaces, tabs</span></td>
      </tr>
      <tr>
        <td id="L834" class="blob-num js-line-number" data-line-number="834"></td>
        <td id="LC834" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_AutoSelectAll       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>,   <span class="pl-c"><span class="pl-c">//</span> Select entire text when first taking mouse focus</span></td>
      </tr>
      <tr>
        <td id="L835" class="blob-num js-line-number" data-line-number="835"></td>
        <td id="LC835" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_EnterReturnsTrue    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">5</span>,   <span class="pl-c"><span class="pl-c">//</span> Return &#39;true&#39; when Enter is pressed (as opposed to every time the value was modified). Consider looking at the IsItemDeactivatedAfterEdit() function.</span></td>
      </tr>
      <tr>
        <td id="L836" class="blob-num js-line-number" data-line-number="836"></td>
        <td id="LC836" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CallbackCompletion  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">6</span>,   <span class="pl-c"><span class="pl-c">//</span> Callback on pressing TAB (for completion handling)</span></td>
      </tr>
      <tr>
        <td id="L837" class="blob-num js-line-number" data-line-number="837"></td>
        <td id="LC837" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CallbackHistory     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">7</span>,   <span class="pl-c"><span class="pl-c">//</span> Callback on pressing Up/Down arrows (for history handling)</span></td>
      </tr>
      <tr>
        <td id="L838" class="blob-num js-line-number" data-line-number="838"></td>
        <td id="LC838" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CallbackAlways      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">8</span>,   <span class="pl-c"><span class="pl-c">//</span> Callback on each iteration. User code may query cursor position, modify text buffer.</span></td>
      </tr>
      <tr>
        <td id="L839" class="blob-num js-line-number" data-line-number="839"></td>
        <td id="LC839" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CallbackCharFilter  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">9</span>,   <span class="pl-c"><span class="pl-c">//</span> Callback on character inputs to replace or discard them. Modify &#39;EventChar&#39; to replace or discard, or return 1 in callback to discard.</span></td>
      </tr>
      <tr>
        <td id="L840" class="blob-num js-line-number" data-line-number="840"></td>
        <td id="LC840" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_AllowTabInput       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">10</span>,  <span class="pl-c"><span class="pl-c">//</span> Pressing TAB input a &#39;\t&#39; character into the text field</span></td>
      </tr>
      <tr>
        <td id="L841" class="blob-num js-line-number" data-line-number="841"></td>
        <td id="LC841" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CtrlEnterForNewLine = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">11</span>,  <span class="pl-c"><span class="pl-c">//</span> In multi-line mode, unfocus with Enter, add new line with Ctrl+Enter (default is opposite: unfocus with Ctrl+Enter, add line with Enter).</span></td>
      </tr>
      <tr>
        <td id="L842" class="blob-num js-line-number" data-line-number="842"></td>
        <td id="LC842" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_NoHorizontalScroll  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">12</span>,  <span class="pl-c"><span class="pl-c">//</span> Disable following the cursor horizontally</span></td>
      </tr>
      <tr>
        <td id="L843" class="blob-num js-line-number" data-line-number="843"></td>
        <td id="LC843" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_AlwaysInsertMode    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">13</span>,  <span class="pl-c"><span class="pl-c">//</span> Insert mode</span></td>
      </tr>
      <tr>
        <td id="L844" class="blob-num js-line-number" data-line-number="844"></td>
        <td id="LC844" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_ReadOnly            = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">14</span>,  <span class="pl-c"><span class="pl-c">//</span> Read-only mode</span></td>
      </tr>
      <tr>
        <td id="L845" class="blob-num js-line-number" data-line-number="845"></td>
        <td id="LC845" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_Password            = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">15</span>,  <span class="pl-c"><span class="pl-c">//</span> Password mode, display all characters as &#39;*&#39;</span></td>
      </tr>
      <tr>
        <td id="L846" class="blob-num js-line-number" data-line-number="846"></td>
        <td id="LC846" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_NoUndoRedo          = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">16</span>,  <span class="pl-c"><span class="pl-c">//</span> Disable undo/redo. Note that input text owns the text data while active, if you want to provide your own undo/redo stack you need e.g. to call ClearActiveID().</span></td>
      </tr>
      <tr>
        <td id="L847" class="blob-num js-line-number" data-line-number="847"></td>
        <td id="LC847" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CharsScientific     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">17</span>,  <span class="pl-c"><span class="pl-c">//</span> Allow 0123456789.+-*/eE (Scientific notation input)</span></td>
      </tr>
      <tr>
        <td id="L848" class="blob-num js-line-number" data-line-number="848"></td>
        <td id="LC848" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_CallbackResize      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">18</span>,  <span class="pl-c"><span class="pl-c">//</span> Callback on buffer capacity changes request (beyond &#39;buf_size&#39; parameter value), allowing the string to grow. Notify when the string wants to be resized (for string types which hold a cache of their Size). You will be provided a new BufSize in the callback and NEED to honor it. (see misc/cpp/imgui_stdlib.h for an example of using this)</span></td>
      </tr>
      <tr>
        <td id="L849" class="blob-num js-line-number" data-line-number="849"></td>
        <td id="LC849" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L850" class="blob-num js-line-number" data-line-number="850"></td>
        <td id="LC850" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_Multiline           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">20</span>,  <span class="pl-c"><span class="pl-c">//</span> For internal use by InputTextMultiline()</span></td>
      </tr>
      <tr>
        <td id="L851" class="blob-num js-line-number" data-line-number="851"></td>
        <td id="LC851" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags_NoMarkEdited        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">21</span>   <span class="pl-c"><span class="pl-c">//</span> For internal use by functions using InputText() before reformatting data</span></td>
      </tr>
      <tr>
        <td id="L852" class="blob-num js-line-number" data-line-number="852"></td>
        <td id="LC852" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L853" class="blob-num js-line-number" data-line-number="853"></td>
        <td id="LC853" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L854" class="blob-num js-line-number" data-line-number="854"></td>
        <td id="LC854" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImGui::TreeNodeEx(), ImGui::CollapsingHeader*()</span></td>
      </tr>
      <tr>
        <td id="L855" class="blob-num js-line-number" data-line-number="855"></td>
        <td id="LC855" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiTreeNodeFlags_</td>
      </tr>
      <tr>
        <td id="L856" class="blob-num js-line-number" data-line-number="856"></td>
        <td id="LC856" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L857" class="blob-num js-line-number" data-line-number="857"></td>
        <td id="LC857" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_None                 = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L858" class="blob-num js-line-number" data-line-number="858"></td>
        <td id="LC858" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_Selected             = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> Draw as selected</span></td>
      </tr>
      <tr>
        <td id="L859" class="blob-num js-line-number" data-line-number="859"></td>
        <td id="LC859" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_Framed               = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Full colored frame (e.g. for CollapsingHeader)</span></td>
      </tr>
      <tr>
        <td id="L860" class="blob-num js-line-number" data-line-number="860"></td>
        <td id="LC860" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_AllowItemOverlap     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Hit testing to allow subsequent widgets to overlap this one</span></td>
      </tr>
      <tr>
        <td id="L861" class="blob-num js-line-number" data-line-number="861"></td>
        <td id="LC861" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_NoTreePushOnOpen     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span> Don&#39;t do a TreePush() when open (e.g. for CollapsingHeader) = no extra indent nor pushing on ID stack</span></td>
      </tr>
      <tr>
        <td id="L862" class="blob-num js-line-number" data-line-number="862"></td>
        <td id="LC862" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_NoAutoOpenOnLog      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>,   <span class="pl-c"><span class="pl-c">//</span> Don&#39;t automatically and temporarily open node when Logging is active (by default logging will automatically open tree nodes)</span></td>
      </tr>
      <tr>
        <td id="L863" class="blob-num js-line-number" data-line-number="863"></td>
        <td id="LC863" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_DefaultOpen          = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">5</span>,   <span class="pl-c"><span class="pl-c">//</span> Default node to be open</span></td>
      </tr>
      <tr>
        <td id="L864" class="blob-num js-line-number" data-line-number="864"></td>
        <td id="LC864" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_OpenOnDoubleClick    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">6</span>,   <span class="pl-c"><span class="pl-c">//</span> Need double-click to open node</span></td>
      </tr>
      <tr>
        <td id="L865" class="blob-num js-line-number" data-line-number="865"></td>
        <td id="LC865" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_OpenOnArrow          = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">7</span>,   <span class="pl-c"><span class="pl-c">//</span> Only open when clicking on the arrow part. If ImGuiTreeNodeFlags_OpenOnDoubleClick is also set, single-click arrow or double-click all box to open.</span></td>
      </tr>
      <tr>
        <td id="L866" class="blob-num js-line-number" data-line-number="866"></td>
        <td id="LC866" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_Leaf                 = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">8</span>,   <span class="pl-c"><span class="pl-c">//</span> No collapsing, no arrow (use as a convenience for leaf nodes).</span></td>
      </tr>
      <tr>
        <td id="L867" class="blob-num js-line-number" data-line-number="867"></td>
        <td id="LC867" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_Bullet               = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">9</span>,   <span class="pl-c"><span class="pl-c">//</span> Display a bullet instead of arrow</span></td>
      </tr>
      <tr>
        <td id="L868" class="blob-num js-line-number" data-line-number="868"></td>
        <td id="LC868" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_FramePadding         = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">10</span>,  <span class="pl-c"><span class="pl-c">//</span> Use FramePadding (even for an unframed text node) to vertically align text baseline to regular widget height. Equivalent to calling AlignTextToFramePadding().</span></td>
      </tr>
      <tr>
        <td id="L869" class="blob-num js-line-number" data-line-number="869"></td>
        <td id="LC869" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_SpanAvailWidth       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">11</span>,  <span class="pl-c"><span class="pl-c">//</span> Extend hit box to the right-most edge, even if not framed. This is not the default in order to allow adding other items on the same line. In the future we may refactor the hit system to be front-to-back, allowing natural overlaps and then this can become the default.</span></td>
      </tr>
      <tr>
        <td id="L870" class="blob-num js-line-number" data-line-number="870"></td>
        <td id="LC870" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_SpanFullWidth        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">12</span>,  <span class="pl-c"><span class="pl-c">//</span> Extend hit box to the left-most and right-most edges (bypass the indented area).</span></td>
      </tr>
      <tr>
        <td id="L871" class="blob-num js-line-number" data-line-number="871"></td>
        <td id="LC871" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_NavLeftJumpsBackHere = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">13</span>,  <span class="pl-c"><span class="pl-c">//</span> (WIP) Nav: left direction may move to this TreeNode() from any of its child (items submitted between TreeNode and TreePop)</span></td>
      </tr>
      <tr>
        <td id="L872" class="blob-num js-line-number" data-line-number="872"></td>
        <td id="LC872" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>ImGuiTreeNodeFlags_NoScrollOnOpen     = 1 &lt;&lt; 14,  // FIXME: TODO: Disable automatic scroll on TreePop() if node got just open and contents is not visible</span></td>
      </tr>
      <tr>
        <td id="L873" class="blob-num js-line-number" data-line-number="873"></td>
        <td id="LC873" class="blob-code blob-code-inner js-file-line">    ImGuiTreeNodeFlags_CollapsingHeader     = ImGuiTreeNodeFlags_Framed | ImGuiTreeNodeFlags_NoTreePushOnOpen | ImGuiTreeNodeFlags_NoAutoOpenOnLog</td>
      </tr>
      <tr>
        <td id="L874" class="blob-num js-line-number" data-line-number="874"></td>
        <td id="LC874" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L875" class="blob-num js-line-number" data-line-number="875"></td>
        <td id="LC875" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L876" class="blob-num js-line-number" data-line-number="876"></td>
        <td id="LC876" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for OpenPopup*(), BeginPopupContext*(), IsPopupOpen() functions.</span></td>
      </tr>
      <tr>
        <td id="L877" class="blob-num js-line-number" data-line-number="877"></td>
        <td id="LC877" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - To be backward compatible with older API which took an &#39;int mouse_button = 1&#39; argument, we need to treat</span></td>
      </tr>
      <tr>
        <td id="L878" class="blob-num js-line-number" data-line-number="878"></td>
        <td id="LC878" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   small flags values as a mouse button index, so we encode the mouse button in the first few bits of the flags.</span></td>
      </tr>
      <tr>
        <td id="L879" class="blob-num js-line-number" data-line-number="879"></td>
        <td id="LC879" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   It is therefore guaranteed to be legal to pass a mouse button index in ImGuiPopupFlags.</span></td>
      </tr>
      <tr>
        <td id="L880" class="blob-num js-line-number" data-line-number="880"></td>
        <td id="LC880" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - For the same reason, we exceptionally default the ImGuiPopupFlags argument of BeginPopupContextXXX functions to 1 instead of 0.</span></td>
      </tr>
      <tr>
        <td id="L881" class="blob-num js-line-number" data-line-number="881"></td>
        <td id="LC881" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Multiple buttons currently cannot be combined/or-ed in those functions (we could allow it later).</span></td>
      </tr>
      <tr>
        <td id="L882" class="blob-num js-line-number" data-line-number="882"></td>
        <td id="LC882" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiPopupFlags_</td>
      </tr>
      <tr>
        <td id="L883" class="blob-num js-line-number" data-line-number="883"></td>
        <td id="LC883" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L884" class="blob-num js-line-number" data-line-number="884"></td>
        <td id="LC884" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_None                    = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L885" class="blob-num js-line-number" data-line-number="885"></td>
        <td id="LC885" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_MouseButtonLeft         = <span class="pl-c1">0</span>,        <span class="pl-c"><span class="pl-c">//</span> For BeginPopupContext*(): open on Left Mouse release. Guaranted to always be == 0 (same as ImGuiMouseButton_Left)</span></td>
      </tr>
      <tr>
        <td id="L886" class="blob-num js-line-number" data-line-number="886"></td>
        <td id="LC886" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_MouseButtonRight        = <span class="pl-c1">1</span>,        <span class="pl-c"><span class="pl-c">//</span> For BeginPopupContext*(): open on Right Mouse release. Guaranted to always be == 1 (same as ImGuiMouseButton_Right)</span></td>
      </tr>
      <tr>
        <td id="L887" class="blob-num js-line-number" data-line-number="887"></td>
        <td id="LC887" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_MouseButtonMiddle       = <span class="pl-c1">2</span>,        <span class="pl-c"><span class="pl-c">//</span> For BeginPopupContext*(): open on Middle Mouse release. Guaranted to always be == 2 (same as ImGuiMouseButton_Middle)</span></td>
      </tr>
      <tr>
        <td id="L888" class="blob-num js-line-number" data-line-number="888"></td>
        <td id="LC888" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_MouseButtonMask_        = <span class="pl-c1">0x1F</span>,</td>
      </tr>
      <tr>
        <td id="L889" class="blob-num js-line-number" data-line-number="889"></td>
        <td id="LC889" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_MouseButtonDefault_     = <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L890" class="blob-num js-line-number" data-line-number="890"></td>
        <td id="LC890" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_NoOpenOverExistingPopup = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">5</span>,   <span class="pl-c"><span class="pl-c">//</span> For OpenPopup*(), BeginPopupContext*(): don&#39;t open if there&#39;s already a popup at the same level of the popup stack</span></td>
      </tr>
      <tr>
        <td id="L891" class="blob-num js-line-number" data-line-number="891"></td>
        <td id="LC891" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_NoOpenOverItems         = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">6</span>,   <span class="pl-c"><span class="pl-c">//</span> For BeginPopupContextWindow(): don&#39;t return true when hovering items, only when hovering empty space</span></td>
      </tr>
      <tr>
        <td id="L892" class="blob-num js-line-number" data-line-number="892"></td>
        <td id="LC892" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_AnyPopupId              = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">7</span>,   <span class="pl-c"><span class="pl-c">//</span> For IsPopupOpen(): ignore the ImGuiID parameter and test for any popup.</span></td>
      </tr>
      <tr>
        <td id="L893" class="blob-num js-line-number" data-line-number="893"></td>
        <td id="LC893" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_AnyPopupLevel           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">8</span>,   <span class="pl-c"><span class="pl-c">//</span> For IsPopupOpen(): search/test at any level of the popup stack (default test in the current level)</span></td>
      </tr>
      <tr>
        <td id="L894" class="blob-num js-line-number" data-line-number="894"></td>
        <td id="LC894" class="blob-code blob-code-inner js-file-line">    ImGuiPopupFlags_AnyPopup                = ImGuiPopupFlags_AnyPopupId | ImGuiPopupFlags_AnyPopupLevel</td>
      </tr>
      <tr>
        <td id="L895" class="blob-num js-line-number" data-line-number="895"></td>
        <td id="LC895" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L896" class="blob-num js-line-number" data-line-number="896"></td>
        <td id="LC896" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L897" class="blob-num js-line-number" data-line-number="897"></td>
        <td id="LC897" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImGui::Selectable()</span></td>
      </tr>
      <tr>
        <td id="L898" class="blob-num js-line-number" data-line-number="898"></td>
        <td id="LC898" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiSelectableFlags_</td>
      </tr>
      <tr>
        <td id="L899" class="blob-num js-line-number" data-line-number="899"></td>
        <td id="LC899" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L900" class="blob-num js-line-number" data-line-number="900"></td>
        <td id="LC900" class="blob-code blob-code-inner js-file-line">    ImGuiSelectableFlags_None               = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L901" class="blob-num js-line-number" data-line-number="901"></td>
        <td id="LC901" class="blob-code blob-code-inner js-file-line">    ImGuiSelectableFlags_DontClosePopups    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> Clicking this don&#39;t close parent popup window</span></td>
      </tr>
      <tr>
        <td id="L902" class="blob-num js-line-number" data-line-number="902"></td>
        <td id="LC902" class="blob-code blob-code-inner js-file-line">    ImGuiSelectableFlags_SpanAllColumns     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Selectable frame can span all columns (text will still fit in current column)</span></td>
      </tr>
      <tr>
        <td id="L903" class="blob-num js-line-number" data-line-number="903"></td>
        <td id="LC903" class="blob-code blob-code-inner js-file-line">    ImGuiSelectableFlags_AllowDoubleClick   = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Generate press events on double clicks too</span></td>
      </tr>
      <tr>
        <td id="L904" class="blob-num js-line-number" data-line-number="904"></td>
        <td id="LC904" class="blob-code blob-code-inner js-file-line">    ImGuiSelectableFlags_Disabled           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span> Cannot be selected, display grayed out text</span></td>
      </tr>
      <tr>
        <td id="L905" class="blob-num js-line-number" data-line-number="905"></td>
        <td id="LC905" class="blob-code blob-code-inner js-file-line">    ImGuiSelectableFlags_AllowItemOverlap   = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>    <span class="pl-c"><span class="pl-c">//</span> (WIP) Hit testing to allow subsequent widgets to overlap this one</span></td>
      </tr>
      <tr>
        <td id="L906" class="blob-num js-line-number" data-line-number="906"></td>
        <td id="LC906" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L907" class="blob-num js-line-number" data-line-number="907"></td>
        <td id="LC907" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L908" class="blob-num js-line-number" data-line-number="908"></td>
        <td id="LC908" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImGui::BeginCombo()</span></td>
      </tr>
      <tr>
        <td id="L909" class="blob-num js-line-number" data-line-number="909"></td>
        <td id="LC909" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiComboFlags_</td>
      </tr>
      <tr>
        <td id="L910" class="blob-num js-line-number" data-line-number="910"></td>
        <td id="LC910" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L911" class="blob-num js-line-number" data-line-number="911"></td>
        <td id="LC911" class="blob-code blob-code-inner js-file-line">    ImGuiComboFlags_None                    = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L912" class="blob-num js-line-number" data-line-number="912"></td>
        <td id="LC912" class="blob-code blob-code-inner js-file-line">    ImGuiComboFlags_PopupAlignLeft          = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> Align the popup toward the left by default</span></td>
      </tr>
      <tr>
        <td id="L913" class="blob-num js-line-number" data-line-number="913"></td>
        <td id="LC913" class="blob-code blob-code-inner js-file-line">    ImGuiComboFlags_HeightSmall             = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Max ~4 items visible. Tip: If you want your combo popup to be a specific size you can use SetNextWindowSizeConstraints() prior to calling BeginCombo()</span></td>
      </tr>
      <tr>
        <td id="L914" class="blob-num js-line-number" data-line-number="914"></td>
        <td id="LC914" class="blob-code blob-code-inner js-file-line">    ImGuiComboFlags_HeightRegular           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Max ~8 items visible (default)</span></td>
      </tr>
      <tr>
        <td id="L915" class="blob-num js-line-number" data-line-number="915"></td>
        <td id="LC915" class="blob-code blob-code-inner js-file-line">    ImGuiComboFlags_HeightLarge             = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span> Max ~20 items visible</span></td>
      </tr>
      <tr>
        <td id="L916" class="blob-num js-line-number" data-line-number="916"></td>
        <td id="LC916" class="blob-code blob-code-inner js-file-line">    ImGuiComboFlags_HeightLargest           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>,   <span class="pl-c"><span class="pl-c">//</span> As many fitting items as possible</span></td>
      </tr>
      <tr>
        <td id="L917" class="blob-num js-line-number" data-line-number="917"></td>
        <td id="LC917" class="blob-code blob-code-inner js-file-line">    ImGuiComboFlags_NoArrowButton           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">5</span>,   <span class="pl-c"><span class="pl-c">//</span> Display on the preview box without the square arrow button</span></td>
      </tr>
      <tr>
        <td id="L918" class="blob-num js-line-number" data-line-number="918"></td>
        <td id="LC918" class="blob-code blob-code-inner js-file-line">    ImGuiComboFlags_NoPreview               = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">6</span>,   <span class="pl-c"><span class="pl-c">//</span> Display only a square arrow button</span></td>
      </tr>
      <tr>
        <td id="L919" class="blob-num js-line-number" data-line-number="919"></td>
        <td id="LC919" class="blob-code blob-code-inner js-file-line">    ImGuiComboFlags_HeightMask_             = ImGuiComboFlags_HeightSmall | ImGuiComboFlags_HeightRegular | ImGuiComboFlags_HeightLarge | ImGuiComboFlags_HeightLargest</td>
      </tr>
      <tr>
        <td id="L920" class="blob-num js-line-number" data-line-number="920"></td>
        <td id="LC920" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L921" class="blob-num js-line-number" data-line-number="921"></td>
        <td id="LC921" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L922" class="blob-num js-line-number" data-line-number="922"></td>
        <td id="LC922" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImGui::BeginTabBar()</span></td>
      </tr>
      <tr>
        <td id="L923" class="blob-num js-line-number" data-line-number="923"></td>
        <td id="LC923" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiTabBarFlags_</td>
      </tr>
      <tr>
        <td id="L924" class="blob-num js-line-number" data-line-number="924"></td>
        <td id="LC924" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L925" class="blob-num js-line-number" data-line-number="925"></td>
        <td id="LC925" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_None                           = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L926" class="blob-num js-line-number" data-line-number="926"></td>
        <td id="LC926" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_Reorderable                    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> Allow manually dragging tabs to re-order them + New tabs are appended at the end of list</span></td>
      </tr>
      <tr>
        <td id="L927" class="blob-num js-line-number" data-line-number="927"></td>
        <td id="LC927" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_AutoSelectNewTabs              = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Automatically select new tabs when they appear</span></td>
      </tr>
      <tr>
        <td id="L928" class="blob-num js-line-number" data-line-number="928"></td>
        <td id="LC928" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_TabListPopupButton             = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable buttons to open the tab list popup</span></td>
      </tr>
      <tr>
        <td id="L929" class="blob-num js-line-number" data-line-number="929"></td>
        <td id="LC929" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_NoCloseWithMiddleMouseButton   = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable behavior of closing tabs (that are submitted with p_open != NULL) with middle mouse button. You can still repro this behavior on user&#39;s side with if (IsItemHovered() &amp;&amp; IsMouseClicked(2)) *p_open = false.</span></td>
      </tr>
      <tr>
        <td id="L930" class="blob-num js-line-number" data-line-number="930"></td>
        <td id="LC930" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_NoTabListScrollingButtons      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable scrolling buttons (apply when fitting policy is ImGuiTabBarFlags_FittingPolicyScroll)</span></td>
      </tr>
      <tr>
        <td id="L931" class="blob-num js-line-number" data-line-number="931"></td>
        <td id="LC931" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_NoTooltip                      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">5</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable tooltips when hovering a tab</span></td>
      </tr>
      <tr>
        <td id="L932" class="blob-num js-line-number" data-line-number="932"></td>
        <td id="LC932" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_FittingPolicyResizeDown        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">6</span>,   <span class="pl-c"><span class="pl-c">//</span> Resize tabs when they don&#39;t fit</span></td>
      </tr>
      <tr>
        <td id="L933" class="blob-num js-line-number" data-line-number="933"></td>
        <td id="LC933" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_FittingPolicyScroll            = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">7</span>,   <span class="pl-c"><span class="pl-c">//</span> Add scroll buttons when tabs don&#39;t fit</span></td>
      </tr>
      <tr>
        <td id="L934" class="blob-num js-line-number" data-line-number="934"></td>
        <td id="LC934" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_FittingPolicyMask_             = ImGuiTabBarFlags_FittingPolicyResizeDown | ImGuiTabBarFlags_FittingPolicyScroll,</td>
      </tr>
      <tr>
        <td id="L935" class="blob-num js-line-number" data-line-number="935"></td>
        <td id="LC935" class="blob-code blob-code-inner js-file-line">    ImGuiTabBarFlags_FittingPolicyDefault_          = ImGuiTabBarFlags_FittingPolicyResizeDown</td>
      </tr>
      <tr>
        <td id="L936" class="blob-num js-line-number" data-line-number="936"></td>
        <td id="LC936" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L937" class="blob-num js-line-number" data-line-number="937"></td>
        <td id="LC937" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L938" class="blob-num js-line-number" data-line-number="938"></td>
        <td id="LC938" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImGui::BeginTabItem()</span></td>
      </tr>
      <tr>
        <td id="L939" class="blob-num js-line-number" data-line-number="939"></td>
        <td id="LC939" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiTabItemFlags_</td>
      </tr>
      <tr>
        <td id="L940" class="blob-num js-line-number" data-line-number="940"></td>
        <td id="LC940" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L941" class="blob-num js-line-number" data-line-number="941"></td>
        <td id="LC941" class="blob-code blob-code-inner js-file-line">    ImGuiTabItemFlags_None                          = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L942" class="blob-num js-line-number" data-line-number="942"></td>
        <td id="LC942" class="blob-code blob-code-inner js-file-line">    ImGuiTabItemFlags_UnsavedDocument               = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> Append &#39;*&#39; to title without affecting the ID, as a convenience to avoid using the ### operator. Also: tab is selected on closure and closure is deferred by one frame to allow code to undo it without flicker.</span></td>
      </tr>
      <tr>
        <td id="L943" class="blob-num js-line-number" data-line-number="943"></td>
        <td id="LC943" class="blob-code blob-code-inner js-file-line">    ImGuiTabItemFlags_SetSelected                   = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Trigger flag to programmatically make the tab selected when calling BeginTabItem()</span></td>
      </tr>
      <tr>
        <td id="L944" class="blob-num js-line-number" data-line-number="944"></td>
        <td id="LC944" class="blob-code blob-code-inner js-file-line">    ImGuiTabItemFlags_NoCloseWithMiddleMouseButton  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable behavior of closing tabs (that are submitted with p_open != NULL) with middle mouse button. You can still repro this behavior on user&#39;s side with if (IsItemHovered() &amp;&amp; IsMouseClicked(2)) *p_open = false.</span></td>
      </tr>
      <tr>
        <td id="L945" class="blob-num js-line-number" data-line-number="945"></td>
        <td id="LC945" class="blob-code blob-code-inner js-file-line">    ImGuiTabItemFlags_NoPushId                      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span> Don&#39;t call PushID(tab-&gt;ID)/PopID() on BeginTabItem()/EndTabItem()</span></td>
      </tr>
      <tr>
        <td id="L946" class="blob-num js-line-number" data-line-number="946"></td>
        <td id="LC946" class="blob-code blob-code-inner js-file-line">    ImGuiTabItemFlags_NoTooltip                     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>    <span class="pl-c"><span class="pl-c">//</span> Disable tooltip for the given tab</span></td>
      </tr>
      <tr>
        <td id="L947" class="blob-num js-line-number" data-line-number="947"></td>
        <td id="LC947" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L948" class="blob-num js-line-number" data-line-number="948"></td>
        <td id="LC948" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L949" class="blob-num js-line-number" data-line-number="949"></td>
        <td id="LC949" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImGui::IsWindowFocused()</span></td>
      </tr>
      <tr>
        <td id="L950" class="blob-num js-line-number" data-line-number="950"></td>
        <td id="LC950" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiFocusedFlags_</td>
      </tr>
      <tr>
        <td id="L951" class="blob-num js-line-number" data-line-number="951"></td>
        <td id="LC951" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L952" class="blob-num js-line-number" data-line-number="952"></td>
        <td id="LC952" class="blob-code blob-code-inner js-file-line">    ImGuiFocusedFlags_None                          = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L953" class="blob-num js-line-number" data-line-number="953"></td>
        <td id="LC953" class="blob-code blob-code-inner js-file-line">    ImGuiFocusedFlags_ChildWindows                  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> IsWindowFocused(): Return true if any children of the window is focused</span></td>
      </tr>
      <tr>
        <td id="L954" class="blob-num js-line-number" data-line-number="954"></td>
        <td id="LC954" class="blob-code blob-code-inner js-file-line">    ImGuiFocusedFlags_RootWindow                    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> IsWindowFocused(): Test from root window (top most parent of the current hierarchy)</span></td>
      </tr>
      <tr>
        <td id="L955" class="blob-num js-line-number" data-line-number="955"></td>
        <td id="LC955" class="blob-code blob-code-inner js-file-line">    ImGuiFocusedFlags_AnyWindow                     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> IsWindowFocused(): Return true if any window is focused. Important: If you are trying to tell how to dispatch your low-level inputs, do NOT use this. Use &#39;io.WantCaptureMouse&#39; instead! Please read the FAQ!</span></td>
      </tr>
      <tr>
        <td id="L956" class="blob-num js-line-number" data-line-number="956"></td>
        <td id="LC956" class="blob-code blob-code-inner js-file-line">    ImGuiFocusedFlags_RootAndChildWindows           = ImGuiFocusedFlags_RootWindow | ImGuiFocusedFlags_ChildWindows</td>
      </tr>
      <tr>
        <td id="L957" class="blob-num js-line-number" data-line-number="957"></td>
        <td id="LC957" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L958" class="blob-num js-line-number" data-line-number="958"></td>
        <td id="LC958" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L959" class="blob-num js-line-number" data-line-number="959"></td>
        <td id="LC959" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImGui::IsItemHovered(), ImGui::IsWindowHovered()</span></td>
      </tr>
      <tr>
        <td id="L960" class="blob-num js-line-number" data-line-number="960"></td>
        <td id="LC960" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Note: if you are trying to check whether your mouse should be dispatched to Dear ImGui or to your app, you should use &#39;io.WantCaptureMouse&#39; instead! Please read the FAQ!</span></td>
      </tr>
      <tr>
        <td id="L961" class="blob-num js-line-number" data-line-number="961"></td>
        <td id="LC961" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Note: windows with the ImGuiWindowFlags_NoInputs flag are ignored by IsWindowHovered() calls.</span></td>
      </tr>
      <tr>
        <td id="L962" class="blob-num js-line-number" data-line-number="962"></td>
        <td id="LC962" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiHoveredFlags_</td>
      </tr>
      <tr>
        <td id="L963" class="blob-num js-line-number" data-line-number="963"></td>
        <td id="LC963" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L964" class="blob-num js-line-number" data-line-number="964"></td>
        <td id="LC964" class="blob-code blob-code-inner js-file-line">    ImGuiHoveredFlags_None                          = <span class="pl-c1">0</span>,        <span class="pl-c"><span class="pl-c">//</span> Return true if directly over the item/window, not obstructed by another window, not obstructed by an active popup or modal blocking inputs under them.</span></td>
      </tr>
      <tr>
        <td id="L965" class="blob-num js-line-number" data-line-number="965"></td>
        <td id="LC965" class="blob-code blob-code-inner js-file-line">    ImGuiHoveredFlags_ChildWindows                  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> IsWindowHovered() only: Return true if any children of the window is hovered</span></td>
      </tr>
      <tr>
        <td id="L966" class="blob-num js-line-number" data-line-number="966"></td>
        <td id="LC966" class="blob-code blob-code-inner js-file-line">    ImGuiHoveredFlags_RootWindow                    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> IsWindowHovered() only: Test from root window (top most parent of the current hierarchy)</span></td>
      </tr>
      <tr>
        <td id="L967" class="blob-num js-line-number" data-line-number="967"></td>
        <td id="LC967" class="blob-code blob-code-inner js-file-line">    ImGuiHoveredFlags_AnyWindow                     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> IsWindowHovered() only: Return true if any window is hovered</span></td>
      </tr>
      <tr>
        <td id="L968" class="blob-num js-line-number" data-line-number="968"></td>
        <td id="LC968" class="blob-code blob-code-inner js-file-line">    ImGuiHoveredFlags_AllowWhenBlockedByPopup       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span> Return true even if a popup window is normally blocking access to this item/window</span></td>
      </tr>
      <tr>
        <td id="L969" class="blob-num js-line-number" data-line-number="969"></td>
        <td id="LC969" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>ImGuiHoveredFlags_AllowWhenBlockedByModal     = 1 &lt;&lt; 4,   // Return true even if a modal popup window is normally blocking access to this item/window. FIXME-TODO: Unavailable yet.</span></td>
      </tr>
      <tr>
        <td id="L970" class="blob-num js-line-number" data-line-number="970"></td>
        <td id="LC970" class="blob-code blob-code-inner js-file-line">    ImGuiHoveredFlags_AllowWhenBlockedByActiveItem  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">5</span>,   <span class="pl-c"><span class="pl-c">//</span> Return true even if an active item is blocking access to this item/window. Useful for Drag and Drop patterns.</span></td>
      </tr>
      <tr>
        <td id="L971" class="blob-num js-line-number" data-line-number="971"></td>
        <td id="LC971" class="blob-code blob-code-inner js-file-line">    ImGuiHoveredFlags_AllowWhenOverlapped           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">6</span>,   <span class="pl-c"><span class="pl-c">//</span> Return true even if the position is obstructed or overlapped by another window</span></td>
      </tr>
      <tr>
        <td id="L972" class="blob-num js-line-number" data-line-number="972"></td>
        <td id="LC972" class="blob-code blob-code-inner js-file-line">    ImGuiHoveredFlags_AllowWhenDisabled             = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">7</span>,   <span class="pl-c"><span class="pl-c">//</span> Return true even if the item is disabled</span></td>
      </tr>
      <tr>
        <td id="L973" class="blob-num js-line-number" data-line-number="973"></td>
        <td id="LC973" class="blob-code blob-code-inner js-file-line">    ImGuiHoveredFlags_RectOnly                      = ImGuiHoveredFlags_AllowWhenBlockedByPopup | ImGuiHoveredFlags_AllowWhenBlockedByActiveItem | ImGuiHoveredFlags_AllowWhenOverlapped,</td>
      </tr>
      <tr>
        <td id="L974" class="blob-num js-line-number" data-line-number="974"></td>
        <td id="LC974" class="blob-code blob-code-inner js-file-line">    ImGuiHoveredFlags_RootAndChildWindows           = ImGuiHoveredFlags_RootWindow | ImGuiHoveredFlags_ChildWindows</td>
      </tr>
      <tr>
        <td id="L975" class="blob-num js-line-number" data-line-number="975"></td>
        <td id="LC975" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L976" class="blob-num js-line-number" data-line-number="976"></td>
        <td id="LC976" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L977" class="blob-num js-line-number" data-line-number="977"></td>
        <td id="LC977" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImGui::BeginDragDropSource(), ImGui::AcceptDragDropPayload()</span></td>
      </tr>
      <tr>
        <td id="L978" class="blob-num js-line-number" data-line-number="978"></td>
        <td id="LC978" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiDragDropFlags_</td>
      </tr>
      <tr>
        <td id="L979" class="blob-num js-line-number" data-line-number="979"></td>
        <td id="LC979" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L980" class="blob-num js-line-number" data-line-number="980"></td>
        <td id="LC980" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_None                         = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L981" class="blob-num js-line-number" data-line-number="981"></td>
        <td id="LC981" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> BeginDragDropSource() flags</span></td>
      </tr>
      <tr>
        <td id="L982" class="blob-num js-line-number" data-line-number="982"></td>
        <td id="LC982" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_SourceNoPreviewTooltip       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> By default, a successful call to BeginDragDropSource opens a tooltip so you can display a preview or description of the source contents. This flag disable this behavior.</span></td>
      </tr>
      <tr>
        <td id="L983" class="blob-num js-line-number" data-line-number="983"></td>
        <td id="LC983" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_SourceNoDisableHover         = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> By default, when dragging we clear data so that IsItemHovered() will return false, to avoid subsequent user code submitting tooltips. This flag disable this behavior so you can still call IsItemHovered() on the source item.</span></td>
      </tr>
      <tr>
        <td id="L984" class="blob-num js-line-number" data-line-number="984"></td>
        <td id="LC984" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_SourceNoHoldToOpenOthers     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Disable the behavior that allows to open tree nodes and collapsing header by holding over them while dragging a source item.</span></td>
      </tr>
      <tr>
        <td id="L985" class="blob-num js-line-number" data-line-number="985"></td>
        <td id="LC985" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_SourceAllowNullID            = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span> Allow items such as Text(), Image() that have no unique identifier to be used as drag source, by manufacturing a temporary identifier based on their window-relative position. This is extremely unusual within the dear imgui ecosystem and so we made it explicit.</span></td>
      </tr>
      <tr>
        <td id="L986" class="blob-num js-line-number" data-line-number="986"></td>
        <td id="LC986" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_SourceExtern                 = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>,   <span class="pl-c"><span class="pl-c">//</span> External source (from outside of dear imgui), won&#39;t attempt to read current item/window info. Will always return true. Only one Extern source can be active simultaneously.</span></td>
      </tr>
      <tr>
        <td id="L987" class="blob-num js-line-number" data-line-number="987"></td>
        <td id="LC987" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_SourceAutoExpirePayload      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">5</span>,   <span class="pl-c"><span class="pl-c">//</span> Automatically expire the payload if the source cease to be submitted (otherwise payloads are persisting while being dragged)</span></td>
      </tr>
      <tr>
        <td id="L988" class="blob-num js-line-number" data-line-number="988"></td>
        <td id="LC988" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> AcceptDragDropPayload() flags</span></td>
      </tr>
      <tr>
        <td id="L989" class="blob-num js-line-number" data-line-number="989"></td>
        <td id="LC989" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_AcceptBeforeDelivery         = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">10</span>,  <span class="pl-c"><span class="pl-c">//</span> AcceptDragDropPayload() will returns true even before the mouse button is released. You can then call IsDelivery() to test if the payload needs to be delivered.</span></td>
      </tr>
      <tr>
        <td id="L990" class="blob-num js-line-number" data-line-number="990"></td>
        <td id="LC990" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_AcceptNoDrawDefaultRect      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">11</span>,  <span class="pl-c"><span class="pl-c">//</span> Do not draw the default highlight rectangle when hovering over target.</span></td>
      </tr>
      <tr>
        <td id="L991" class="blob-num js-line-number" data-line-number="991"></td>
        <td id="LC991" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_AcceptNoPreviewTooltip       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">12</span>,  <span class="pl-c"><span class="pl-c">//</span> Request hiding the BeginDragDropSource tooltip from the BeginDragDropTarget site.</span></td>
      </tr>
      <tr>
        <td id="L992" class="blob-num js-line-number" data-line-number="992"></td>
        <td id="LC992" class="blob-code blob-code-inner js-file-line">    ImGuiDragDropFlags_AcceptPeekOnly               = ImGuiDragDropFlags_AcceptBeforeDelivery | ImGuiDragDropFlags_AcceptNoDrawDefaultRect  <span class="pl-c"><span class="pl-c">//</span> For peeking ahead and inspecting the payload before delivery.</span></td>
      </tr>
      <tr>
        <td id="L993" class="blob-num js-line-number" data-line-number="993"></td>
        <td id="LC993" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L994" class="blob-num js-line-number" data-line-number="994"></td>
        <td id="LC994" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L995" class="blob-num js-line-number" data-line-number="995"></td>
        <td id="LC995" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Standard Drag and Drop payload types. You can define you own payload types using short strings. Types starting with &#39;_&#39; are defined by Dear ImGui.</span></td>
      </tr>
      <tr>
        <td id="L996" class="blob-num js-line-number" data-line-number="996"></td>
        <td id="LC996" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IMGUI_PAYLOAD_TYPE_COLOR_3F</span>     <span class="pl-s"><span class="pl-pds">&quot;</span>_COL3F<span class="pl-pds">&quot;</span></span>    <span class="pl-c"><span class="pl-c">//</span> float[3]: Standard type for colors, without alpha. User code may use this type.</span></td>
      </tr>
      <tr>
        <td id="L997" class="blob-num js-line-number" data-line-number="997"></td>
        <td id="LC997" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IMGUI_PAYLOAD_TYPE_COLOR_4F</span>     <span class="pl-s"><span class="pl-pds">&quot;</span>_COL4F<span class="pl-pds">&quot;</span></span>    <span class="pl-c"><span class="pl-c">//</span> float[4]: Standard type for colors. User code may use this type.</span></td>
      </tr>
      <tr>
        <td id="L998" class="blob-num js-line-number" data-line-number="998"></td>
        <td id="LC998" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L999" class="blob-num js-line-number" data-line-number="999"></td>
        <td id="LC999" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> A primary data type</span></td>
      </tr>
      <tr>
        <td id="L1000" class="blob-num js-line-number" data-line-number="1000"></td>
        <td id="LC1000" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiDataType_</td>
      </tr>
      <tr>
        <td id="L1001" class="blob-num js-line-number" data-line-number="1001"></td>
        <td id="LC1001" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1002" class="blob-num js-line-number" data-line-number="1002"></td>
        <td id="LC1002" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_S8,       <span class="pl-c"><span class="pl-c">//</span> signed char / char (with sensible compilers)</span></td>
      </tr>
      <tr>
        <td id="L1003" class="blob-num js-line-number" data-line-number="1003"></td>
        <td id="LC1003" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_U8,       <span class="pl-c"><span class="pl-c">//</span> unsigned char</span></td>
      </tr>
      <tr>
        <td id="L1004" class="blob-num js-line-number" data-line-number="1004"></td>
        <td id="LC1004" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_S16,      <span class="pl-c"><span class="pl-c">//</span> short</span></td>
      </tr>
      <tr>
        <td id="L1005" class="blob-num js-line-number" data-line-number="1005"></td>
        <td id="LC1005" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_U16,      <span class="pl-c"><span class="pl-c">//</span> unsigned short</span></td>
      </tr>
      <tr>
        <td id="L1006" class="blob-num js-line-number" data-line-number="1006"></td>
        <td id="LC1006" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_S32,      <span class="pl-c"><span class="pl-c">//</span> int</span></td>
      </tr>
      <tr>
        <td id="L1007" class="blob-num js-line-number" data-line-number="1007"></td>
        <td id="LC1007" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_U32,      <span class="pl-c"><span class="pl-c">//</span> unsigned int</span></td>
      </tr>
      <tr>
        <td id="L1008" class="blob-num js-line-number" data-line-number="1008"></td>
        <td id="LC1008" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_S64,      <span class="pl-c"><span class="pl-c">//</span> long long / __int64</span></td>
      </tr>
      <tr>
        <td id="L1009" class="blob-num js-line-number" data-line-number="1009"></td>
        <td id="LC1009" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_U64,      <span class="pl-c"><span class="pl-c">//</span> unsigned long long / unsigned __int64</span></td>
      </tr>
      <tr>
        <td id="L1010" class="blob-num js-line-number" data-line-number="1010"></td>
        <td id="LC1010" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_Float,    <span class="pl-c"><span class="pl-c">//</span> float</span></td>
      </tr>
      <tr>
        <td id="L1011" class="blob-num js-line-number" data-line-number="1011"></td>
        <td id="LC1011" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_Double,   <span class="pl-c"><span class="pl-c">//</span> double</span></td>
      </tr>
      <tr>
        <td id="L1012" class="blob-num js-line-number" data-line-number="1012"></td>
        <td id="LC1012" class="blob-code blob-code-inner js-file-line">    ImGuiDataType_COUNT</td>
      </tr>
      <tr>
        <td id="L1013" class="blob-num js-line-number" data-line-number="1013"></td>
        <td id="LC1013" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1014" class="blob-num js-line-number" data-line-number="1014"></td>
        <td id="LC1014" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1015" class="blob-num js-line-number" data-line-number="1015"></td>
        <td id="LC1015" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> A cardinal direction</span></td>
      </tr>
      <tr>
        <td id="L1016" class="blob-num js-line-number" data-line-number="1016"></td>
        <td id="LC1016" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiDir_</td>
      </tr>
      <tr>
        <td id="L1017" class="blob-num js-line-number" data-line-number="1017"></td>
        <td id="LC1017" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1018" class="blob-num js-line-number" data-line-number="1018"></td>
        <td id="LC1018" class="blob-code blob-code-inner js-file-line">    ImGuiDir_None    = -<span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L1019" class="blob-num js-line-number" data-line-number="1019"></td>
        <td id="LC1019" class="blob-code blob-code-inner js-file-line">    ImGuiDir_Left    = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1020" class="blob-num js-line-number" data-line-number="1020"></td>
        <td id="LC1020" class="blob-code blob-code-inner js-file-line">    ImGuiDir_Right   = <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L1021" class="blob-num js-line-number" data-line-number="1021"></td>
        <td id="LC1021" class="blob-code blob-code-inner js-file-line">    ImGuiDir_Up      = <span class="pl-c1">2</span>,</td>
      </tr>
      <tr>
        <td id="L1022" class="blob-num js-line-number" data-line-number="1022"></td>
        <td id="LC1022" class="blob-code blob-code-inner js-file-line">    ImGuiDir_Down    = <span class="pl-c1">3</span>,</td>
      </tr>
      <tr>
        <td id="L1023" class="blob-num js-line-number" data-line-number="1023"></td>
        <td id="LC1023" class="blob-code blob-code-inner js-file-line">    ImGuiDir_COUNT</td>
      </tr>
      <tr>
        <td id="L1024" class="blob-num js-line-number" data-line-number="1024"></td>
        <td id="LC1024" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1025" class="blob-num js-line-number" data-line-number="1025"></td>
        <td id="LC1025" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1026" class="blob-num js-line-number" data-line-number="1026"></td>
        <td id="LC1026" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> User fill ImGuiIO.KeyMap[] array with indices into the ImGuiIO.KeysDown[512] array</span></td>
      </tr>
      <tr>
        <td id="L1027" class="blob-num js-line-number" data-line-number="1027"></td>
        <td id="LC1027" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiKey_</td>
      </tr>
      <tr>
        <td id="L1028" class="blob-num js-line-number" data-line-number="1028"></td>
        <td id="LC1028" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1029" class="blob-num js-line-number" data-line-number="1029"></td>
        <td id="LC1029" class="blob-code blob-code-inner js-file-line">    ImGuiKey_Tab,</td>
      </tr>
      <tr>
        <td id="L1030" class="blob-num js-line-number" data-line-number="1030"></td>
        <td id="LC1030" class="blob-code blob-code-inner js-file-line">    ImGuiKey_LeftArrow,</td>
      </tr>
      <tr>
        <td id="L1031" class="blob-num js-line-number" data-line-number="1031"></td>
        <td id="LC1031" class="blob-code blob-code-inner js-file-line">    ImGuiKey_RightArrow,</td>
      </tr>
      <tr>
        <td id="L1032" class="blob-num js-line-number" data-line-number="1032"></td>
        <td id="LC1032" class="blob-code blob-code-inner js-file-line">    ImGuiKey_UpArrow,</td>
      </tr>
      <tr>
        <td id="L1033" class="blob-num js-line-number" data-line-number="1033"></td>
        <td id="LC1033" class="blob-code blob-code-inner js-file-line">    ImGuiKey_DownArrow,</td>
      </tr>
      <tr>
        <td id="L1034" class="blob-num js-line-number" data-line-number="1034"></td>
        <td id="LC1034" class="blob-code blob-code-inner js-file-line">    ImGuiKey_PageUp,</td>
      </tr>
      <tr>
        <td id="L1035" class="blob-num js-line-number" data-line-number="1035"></td>
        <td id="LC1035" class="blob-code blob-code-inner js-file-line">    ImGuiKey_PageDown,</td>
      </tr>
      <tr>
        <td id="L1036" class="blob-num js-line-number" data-line-number="1036"></td>
        <td id="LC1036" class="blob-code blob-code-inner js-file-line">    ImGuiKey_Home,</td>
      </tr>
      <tr>
        <td id="L1037" class="blob-num js-line-number" data-line-number="1037"></td>
        <td id="LC1037" class="blob-code blob-code-inner js-file-line">    ImGuiKey_End,</td>
      </tr>
      <tr>
        <td id="L1038" class="blob-num js-line-number" data-line-number="1038"></td>
        <td id="LC1038" class="blob-code blob-code-inner js-file-line">    ImGuiKey_Insert,</td>
      </tr>
      <tr>
        <td id="L1039" class="blob-num js-line-number" data-line-number="1039"></td>
        <td id="LC1039" class="blob-code blob-code-inner js-file-line">    ImGuiKey_Delete,</td>
      </tr>
      <tr>
        <td id="L1040" class="blob-num js-line-number" data-line-number="1040"></td>
        <td id="LC1040" class="blob-code blob-code-inner js-file-line">    ImGuiKey_Backspace,</td>
      </tr>
      <tr>
        <td id="L1041" class="blob-num js-line-number" data-line-number="1041"></td>
        <td id="LC1041" class="blob-code blob-code-inner js-file-line">    ImGuiKey_Space,</td>
      </tr>
      <tr>
        <td id="L1042" class="blob-num js-line-number" data-line-number="1042"></td>
        <td id="LC1042" class="blob-code blob-code-inner js-file-line">    ImGuiKey_Enter,</td>
      </tr>
      <tr>
        <td id="L1043" class="blob-num js-line-number" data-line-number="1043"></td>
        <td id="LC1043" class="blob-code blob-code-inner js-file-line">    ImGuiKey_Escape,</td>
      </tr>
      <tr>
        <td id="L1044" class="blob-num js-line-number" data-line-number="1044"></td>
        <td id="LC1044" class="blob-code blob-code-inner js-file-line">    ImGuiKey_KeyPadEnter,</td>
      </tr>
      <tr>
        <td id="L1045" class="blob-num js-line-number" data-line-number="1045"></td>
        <td id="LC1045" class="blob-code blob-code-inner js-file-line">    ImGuiKey_A,                 <span class="pl-c"><span class="pl-c">//</span> for text edit CTRL+A: select all</span></td>
      </tr>
      <tr>
        <td id="L1046" class="blob-num js-line-number" data-line-number="1046"></td>
        <td id="LC1046" class="blob-code blob-code-inner js-file-line">    ImGuiKey_C,                 <span class="pl-c"><span class="pl-c">//</span> for text edit CTRL+C: copy</span></td>
      </tr>
      <tr>
        <td id="L1047" class="blob-num js-line-number" data-line-number="1047"></td>
        <td id="LC1047" class="blob-code blob-code-inner js-file-line">    ImGuiKey_V,                 <span class="pl-c"><span class="pl-c">//</span> for text edit CTRL+V: paste</span></td>
      </tr>
      <tr>
        <td id="L1048" class="blob-num js-line-number" data-line-number="1048"></td>
        <td id="LC1048" class="blob-code blob-code-inner js-file-line">    ImGuiKey_X,                 <span class="pl-c"><span class="pl-c">//</span> for text edit CTRL+X: cut</span></td>
      </tr>
      <tr>
        <td id="L1049" class="blob-num js-line-number" data-line-number="1049"></td>
        <td id="LC1049" class="blob-code blob-code-inner js-file-line">    ImGuiKey_Y,                 <span class="pl-c"><span class="pl-c">//</span> for text edit CTRL+Y: redo</span></td>
      </tr>
      <tr>
        <td id="L1050" class="blob-num js-line-number" data-line-number="1050"></td>
        <td id="LC1050" class="blob-code blob-code-inner js-file-line">    ImGuiKey_Z,                 <span class="pl-c"><span class="pl-c">//</span> for text edit CTRL+Z: undo</span></td>
      </tr>
      <tr>
        <td id="L1051" class="blob-num js-line-number" data-line-number="1051"></td>
        <td id="LC1051" class="blob-code blob-code-inner js-file-line">    ImGuiKey_COUNT</td>
      </tr>
      <tr>
        <td id="L1052" class="blob-num js-line-number" data-line-number="1052"></td>
        <td id="LC1052" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1053" class="blob-num js-line-number" data-line-number="1053"></td>
        <td id="LC1053" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1054" class="blob-num js-line-number" data-line-number="1054"></td>
        <td id="LC1054" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> To test io.KeyMods (which is a combination of individual fields io.KeyCtrl, io.KeyShift, io.KeyAlt set by user/back-end)</span></td>
      </tr>
      <tr>
        <td id="L1055" class="blob-num js-line-number" data-line-number="1055"></td>
        <td id="LC1055" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiKeyModFlags_</td>
      </tr>
      <tr>
        <td id="L1056" class="blob-num js-line-number" data-line-number="1056"></td>
        <td id="LC1056" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1057" class="blob-num js-line-number" data-line-number="1057"></td>
        <td id="LC1057" class="blob-code blob-code-inner js-file-line">    ImGuiKeyModFlags_None       = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1058" class="blob-num js-line-number" data-line-number="1058"></td>
        <td id="LC1058" class="blob-code blob-code-inner js-file-line">    ImGuiKeyModFlags_Ctrl       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1059" class="blob-num js-line-number" data-line-number="1059"></td>
        <td id="LC1059" class="blob-code blob-code-inner js-file-line">    ImGuiKeyModFlags_Shift      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L1060" class="blob-num js-line-number" data-line-number="1060"></td>
        <td id="LC1060" class="blob-code blob-code-inner js-file-line">    ImGuiKeyModFlags_Alt        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,</td>
      </tr>
      <tr>
        <td id="L1061" class="blob-num js-line-number" data-line-number="1061"></td>
        <td id="LC1061" class="blob-code blob-code-inner js-file-line">    ImGuiKeyModFlags_Super      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span></td>
      </tr>
      <tr>
        <td id="L1062" class="blob-num js-line-number" data-line-number="1062"></td>
        <td id="LC1062" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1063" class="blob-num js-line-number" data-line-number="1063"></td>
        <td id="LC1063" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1064" class="blob-num js-line-number" data-line-number="1064"></td>
        <td id="LC1064" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Gamepad/Keyboard navigation</span></td>
      </tr>
      <tr>
        <td id="L1065" class="blob-num js-line-number" data-line-number="1065"></td>
        <td id="LC1065" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Keyboard: Set io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard to enable. NewFrame() will automatically fill io.NavInputs[] based on your io.KeysDown[] + io.KeyMap[] arrays.</span></td>
      </tr>
      <tr>
        <td id="L1066" class="blob-num js-line-number" data-line-number="1066"></td>
        <td id="LC1066" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Gamepad:  Set io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad to enable. Back-end: set ImGuiBackendFlags_HasGamepad and fill the io.NavInputs[] fields before calling NewFrame(). Note that io.NavInputs[] is cleared by EndFrame().</span></td>
      </tr>
      <tr>
        <td id="L1067" class="blob-num js-line-number" data-line-number="1067"></td>
        <td id="LC1067" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Read instructions in imgui.cpp for more details. Download PNG/PSD at http://goo.gl/9LgVZW.</span></td>
      </tr>
      <tr>
        <td id="L1068" class="blob-num js-line-number" data-line-number="1068"></td>
        <td id="LC1068" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiNavInput_</td>
      </tr>
      <tr>
        <td id="L1069" class="blob-num js-line-number" data-line-number="1069"></td>
        <td id="LC1069" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1070" class="blob-num js-line-number" data-line-number="1070"></td>
        <td id="LC1070" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Gamepad Mapping</span></td>
      </tr>
      <tr>
        <td id="L1071" class="blob-num js-line-number" data-line-number="1071"></td>
        <td id="LC1071" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_Activate,      <span class="pl-c"><span class="pl-c">//</span> activate / open / toggle / tweak value       // e.g. Cross  (PS4), A (Xbox), A (Switch), Space (Keyboard)</span></td>
      </tr>
      <tr>
        <td id="L1072" class="blob-num js-line-number" data-line-number="1072"></td>
        <td id="LC1072" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_Cancel,        <span class="pl-c"><span class="pl-c">//</span> cancel / close / exit                        // e.g. Circle (PS4), B (Xbox), B (Switch), Escape (Keyboard)</span></td>
      </tr>
      <tr>
        <td id="L1073" class="blob-num js-line-number" data-line-number="1073"></td>
        <td id="LC1073" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_Input,         <span class="pl-c"><span class="pl-c">//</span> text input / on-screen keyboard              // e.g. Triang.(PS4), Y (Xbox), X (Switch), Return (Keyboard)</span></td>
      </tr>
      <tr>
        <td id="L1074" class="blob-num js-line-number" data-line-number="1074"></td>
        <td id="LC1074" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_Menu,          <span class="pl-c"><span class="pl-c">//</span> tap: toggle menu / hold: focus, move, resize // e.g. Square (PS4), X (Xbox), Y (Switch), Alt (Keyboard)</span></td>
      </tr>
      <tr>
        <td id="L1075" class="blob-num js-line-number" data-line-number="1075"></td>
        <td id="LC1075" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_DpadLeft,      <span class="pl-c"><span class="pl-c">//</span> move / tweak / resize window (w/ PadMenu)    // e.g. D-pad Left/Right/Up/Down (Gamepads), Arrow keys (Keyboard)</span></td>
      </tr>
      <tr>
        <td id="L1076" class="blob-num js-line-number" data-line-number="1076"></td>
        <td id="LC1076" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_DpadRight,     <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L1077" class="blob-num js-line-number" data-line-number="1077"></td>
        <td id="LC1077" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_DpadUp,        <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L1078" class="blob-num js-line-number" data-line-number="1078"></td>
        <td id="LC1078" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_DpadDown,      <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L1079" class="blob-num js-line-number" data-line-number="1079"></td>
        <td id="LC1079" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_LStickLeft,    <span class="pl-c"><span class="pl-c">//</span> scroll / move window (w/ PadMenu)            // e.g. Left Analog Stick Left/Right/Up/Down</span></td>
      </tr>
      <tr>
        <td id="L1080" class="blob-num js-line-number" data-line-number="1080"></td>
        <td id="LC1080" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_LStickRight,   <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L1081" class="blob-num js-line-number" data-line-number="1081"></td>
        <td id="LC1081" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_LStickUp,      <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L1082" class="blob-num js-line-number" data-line-number="1082"></td>
        <td id="LC1082" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_LStickDown,    <span class="pl-c"><span class="pl-c">//</span></span></td>
      </tr>
      <tr>
        <td id="L1083" class="blob-num js-line-number" data-line-number="1083"></td>
        <td id="LC1083" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_FocusPrev,     <span class="pl-c"><span class="pl-c">//</span> next window (w/ PadMenu)                     // e.g. L1 or L2 (PS4), LB or LT (Xbox), L or ZL (Switch)</span></td>
      </tr>
      <tr>
        <td id="L1084" class="blob-num js-line-number" data-line-number="1084"></td>
        <td id="LC1084" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_FocusNext,     <span class="pl-c"><span class="pl-c">//</span> prev window (w/ PadMenu)                     // e.g. R1 or R2 (PS4), RB or RT (Xbox), R or ZL (Switch)</span></td>
      </tr>
      <tr>
        <td id="L1085" class="blob-num js-line-number" data-line-number="1085"></td>
        <td id="LC1085" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_TweakSlow,     <span class="pl-c"><span class="pl-c">//</span> slower tweaks                                // e.g. L1 or L2 (PS4), LB or LT (Xbox), L or ZL (Switch)</span></td>
      </tr>
      <tr>
        <td id="L1086" class="blob-num js-line-number" data-line-number="1086"></td>
        <td id="LC1086" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_TweakFast,     <span class="pl-c"><span class="pl-c">//</span> faster tweaks                                // e.g. R1 or R2 (PS4), RB or RT (Xbox), R or ZL (Switch)</span></td>
      </tr>
      <tr>
        <td id="L1087" class="blob-num js-line-number" data-line-number="1087"></td>
        <td id="LC1087" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1088" class="blob-num js-line-number" data-line-number="1088"></td>
        <td id="LC1088" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal] Don&#39;t use directly! This is used internally to differentiate keyboard from gamepad inputs for behaviors that require to differentiate them.</span></td>
      </tr>
      <tr>
        <td id="L1089" class="blob-num js-line-number" data-line-number="1089"></td>
        <td id="LC1089" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Keyboard behavior that have no corresponding gamepad mapping (e.g. CTRL+TAB) will be directly reading from io.KeysDown[] instead of io.NavInputs[].</span></td>
      </tr>
      <tr>
        <td id="L1090" class="blob-num js-line-number" data-line-number="1090"></td>
        <td id="LC1090" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_KeyMenu_,      <span class="pl-c"><span class="pl-c">//</span> toggle menu                                  // = io.KeyAlt</span></td>
      </tr>
      <tr>
        <td id="L1091" class="blob-num js-line-number" data-line-number="1091"></td>
        <td id="LC1091" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_KeyLeft_,      <span class="pl-c"><span class="pl-c">//</span> move left                                    // = Arrow keys</span></td>
      </tr>
      <tr>
        <td id="L1092" class="blob-num js-line-number" data-line-number="1092"></td>
        <td id="LC1092" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_KeyRight_,     <span class="pl-c"><span class="pl-c">//</span> move right</span></td>
      </tr>
      <tr>
        <td id="L1093" class="blob-num js-line-number" data-line-number="1093"></td>
        <td id="LC1093" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_KeyUp_,        <span class="pl-c"><span class="pl-c">//</span> move up</span></td>
      </tr>
      <tr>
        <td id="L1094" class="blob-num js-line-number" data-line-number="1094"></td>
        <td id="LC1094" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_KeyDown_,      <span class="pl-c"><span class="pl-c">//</span> move down</span></td>
      </tr>
      <tr>
        <td id="L1095" class="blob-num js-line-number" data-line-number="1095"></td>
        <td id="LC1095" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_COUNT,</td>
      </tr>
      <tr>
        <td id="L1096" class="blob-num js-line-number" data-line-number="1096"></td>
        <td id="LC1096" class="blob-code blob-code-inner js-file-line">    ImGuiNavInput_InternalStart_ = ImGuiNavInput_KeyMenu_</td>
      </tr>
      <tr>
        <td id="L1097" class="blob-num js-line-number" data-line-number="1097"></td>
        <td id="LC1097" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1098" class="blob-num js-line-number" data-line-number="1098"></td>
        <td id="LC1098" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1099" class="blob-num js-line-number" data-line-number="1099"></td>
        <td id="LC1099" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Configuration flags stored in io.ConfigFlags. Set by user/application.</span></td>
      </tr>
      <tr>
        <td id="L1100" class="blob-num js-line-number" data-line-number="1100"></td>
        <td id="LC1100" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiConfigFlags_</td>
      </tr>
      <tr>
        <td id="L1101" class="blob-num js-line-number" data-line-number="1101"></td>
        <td id="LC1101" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1102" class="blob-num js-line-number" data-line-number="1102"></td>
        <td id="LC1102" class="blob-code blob-code-inner js-file-line">    ImGuiConfigFlags_None                   = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1103" class="blob-num js-line-number" data-line-number="1103"></td>
        <td id="LC1103" class="blob-code blob-code-inner js-file-line">    ImGuiConfigFlags_NavEnableKeyboard      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> Master keyboard navigation enable flag. NewFrame() will automatically fill io.NavInputs[] based on io.KeysDown[].</span></td>
      </tr>
      <tr>
        <td id="L1104" class="blob-num js-line-number" data-line-number="1104"></td>
        <td id="LC1104" class="blob-code blob-code-inner js-file-line">    ImGuiConfigFlags_NavEnableGamepad       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Master gamepad navigation enable flag. This is mostly to instruct your imgui back-end to fill io.NavInputs[]. Back-end also needs to set ImGuiBackendFlags_HasGamepad.</span></td>
      </tr>
      <tr>
        <td id="L1105" class="blob-num js-line-number" data-line-number="1105"></td>
        <td id="LC1105" class="blob-code blob-code-inner js-file-line">    ImGuiConfigFlags_NavEnableSetMousePos   = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Instruct navigation to move the mouse cursor. May be useful on TV/console systems where moving a virtual mouse is awkward. Will update io.MousePos and set io.WantSetMousePos=true. If enabled you MUST honor io.WantSetMousePos requests in your binding, otherwise ImGui will react as if the mouse is jumping around back and forth.</span></td>
      </tr>
      <tr>
        <td id="L1106" class="blob-num js-line-number" data-line-number="1106"></td>
        <td id="LC1106" class="blob-code blob-code-inner js-file-line">    ImGuiConfigFlags_NavNoCaptureKeyboard   = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span> Instruct navigation to not set the io.WantCaptureKeyboard flag when io.NavActive is set.</span></td>
      </tr>
      <tr>
        <td id="L1107" class="blob-num js-line-number" data-line-number="1107"></td>
        <td id="LC1107" class="blob-code blob-code-inner js-file-line">    ImGuiConfigFlags_NoMouse                = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>,   <span class="pl-c"><span class="pl-c">//</span> Instruct imgui to clear mouse position/buttons in NewFrame(). This allows ignoring the mouse information set by the back-end.</span></td>
      </tr>
      <tr>
        <td id="L1108" class="blob-num js-line-number" data-line-number="1108"></td>
        <td id="LC1108" class="blob-code blob-code-inner js-file-line">    ImGuiConfigFlags_NoMouseCursorChange    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">5</span>,   <span class="pl-c"><span class="pl-c">//</span> Instruct back-end to not alter mouse cursor shape and visibility. Use if the back-end cursor changes are interfering with yours and you don&#39;t want to use SetMouseCursor() to change mouse cursor. You may want to honor requests from imgui by reading GetMouseCursor() yourself instead.</span></td>
      </tr>
      <tr>
        <td id="L1109" class="blob-num js-line-number" data-line-number="1109"></td>
        <td id="LC1109" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1110" class="blob-num js-line-number" data-line-number="1110"></td>
        <td id="LC1110" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> User storage (to allow your back-end/engine to communicate to code that may be shared between multiple projects. Those flags are not used by core Dear ImGui)</span></td>
      </tr>
      <tr>
        <td id="L1111" class="blob-num js-line-number" data-line-number="1111"></td>
        <td id="LC1111" class="blob-code blob-code-inner js-file-line">    ImGuiConfigFlags_IsSRGB                 = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">20</span>,  <span class="pl-c"><span class="pl-c">//</span> Application is SRGB-aware.</span></td>
      </tr>
      <tr>
        <td id="L1112" class="blob-num js-line-number" data-line-number="1112"></td>
        <td id="LC1112" class="blob-code blob-code-inner js-file-line">    ImGuiConfigFlags_IsTouchScreen          = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">21</span>   <span class="pl-c"><span class="pl-c">//</span> Application is using a touch screen instead of a mouse.</span></td>
      </tr>
      <tr>
        <td id="L1113" class="blob-num js-line-number" data-line-number="1113"></td>
        <td id="LC1113" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1114" class="blob-num js-line-number" data-line-number="1114"></td>
        <td id="LC1114" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1115" class="blob-num js-line-number" data-line-number="1115"></td>
        <td id="LC1115" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Back-end capabilities flags stored in io.BackendFlags. Set by imgui_impl_xxx or custom back-end.</span></td>
      </tr>
      <tr>
        <td id="L1116" class="blob-num js-line-number" data-line-number="1116"></td>
        <td id="LC1116" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiBackendFlags_</td>
      </tr>
      <tr>
        <td id="L1117" class="blob-num js-line-number" data-line-number="1117"></td>
        <td id="LC1117" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1118" class="blob-num js-line-number" data-line-number="1118"></td>
        <td id="LC1118" class="blob-code blob-code-inner js-file-line">    ImGuiBackendFlags_None                  = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1119" class="blob-num js-line-number" data-line-number="1119"></td>
        <td id="LC1119" class="blob-code blob-code-inner js-file-line">    ImGuiBackendFlags_HasGamepad            = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> Back-end Platform supports gamepad and currently has one connected.</span></td>
      </tr>
      <tr>
        <td id="L1120" class="blob-num js-line-number" data-line-number="1120"></td>
        <td id="LC1120" class="blob-code blob-code-inner js-file-line">    ImGuiBackendFlags_HasMouseCursors       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Back-end Platform supports honoring GetMouseCursor() value to change the OS cursor shape.</span></td>
      </tr>
      <tr>
        <td id="L1121" class="blob-num js-line-number" data-line-number="1121"></td>
        <td id="LC1121" class="blob-code blob-code-inner js-file-line">    ImGuiBackendFlags_HasSetMousePos        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Back-end Platform supports io.WantSetMousePos requests to reposition the OS mouse position (only used if ImGuiConfigFlags_NavEnableSetMousePos is set).</span></td>
      </tr>
      <tr>
        <td id="L1122" class="blob-num js-line-number" data-line-number="1122"></td>
        <td id="LC1122" class="blob-code blob-code-inner js-file-line">    ImGuiBackendFlags_RendererHasVtxOffset  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>    <span class="pl-c"><span class="pl-c">//</span> Back-end Renderer supports ImDrawCmd::VtxOffset. This enables output of large meshes (64K+ vertices) while still using 16-bit indices.</span></td>
      </tr>
      <tr>
        <td id="L1123" class="blob-num js-line-number" data-line-number="1123"></td>
        <td id="LC1123" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1124" class="blob-num js-line-number" data-line-number="1124"></td>
        <td id="LC1124" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1125" class="blob-num js-line-number" data-line-number="1125"></td>
        <td id="LC1125" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Enumeration for PushStyleColor() / PopStyleColor()</span></td>
      </tr>
      <tr>
        <td id="L1126" class="blob-num js-line-number" data-line-number="1126"></td>
        <td id="LC1126" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiCol_</td>
      </tr>
      <tr>
        <td id="L1127" class="blob-num js-line-number" data-line-number="1127"></td>
        <td id="LC1127" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1128" class="blob-num js-line-number" data-line-number="1128"></td>
        <td id="LC1128" class="blob-code blob-code-inner js-file-line">    ImGuiCol_Text,</td>
      </tr>
      <tr>
        <td id="L1129" class="blob-num js-line-number" data-line-number="1129"></td>
        <td id="LC1129" class="blob-code blob-code-inner js-file-line">    ImGuiCol_TextDisabled,</td>
      </tr>
      <tr>
        <td id="L1130" class="blob-num js-line-number" data-line-number="1130"></td>
        <td id="LC1130" class="blob-code blob-code-inner js-file-line">    ImGuiCol_WindowBg,              <span class="pl-c"><span class="pl-c">//</span> Background of normal windows</span></td>
      </tr>
      <tr>
        <td id="L1131" class="blob-num js-line-number" data-line-number="1131"></td>
        <td id="LC1131" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ChildBg,               <span class="pl-c"><span class="pl-c">//</span> Background of child windows</span></td>
      </tr>
      <tr>
        <td id="L1132" class="blob-num js-line-number" data-line-number="1132"></td>
        <td id="LC1132" class="blob-code blob-code-inner js-file-line">    ImGuiCol_PopupBg,               <span class="pl-c"><span class="pl-c">//</span> Background of popups, menus, tooltips windows</span></td>
      </tr>
      <tr>
        <td id="L1133" class="blob-num js-line-number" data-line-number="1133"></td>
        <td id="LC1133" class="blob-code blob-code-inner js-file-line">    ImGuiCol_Border,</td>
      </tr>
      <tr>
        <td id="L1134" class="blob-num js-line-number" data-line-number="1134"></td>
        <td id="LC1134" class="blob-code blob-code-inner js-file-line">    ImGuiCol_BorderShadow,</td>
      </tr>
      <tr>
        <td id="L1135" class="blob-num js-line-number" data-line-number="1135"></td>
        <td id="LC1135" class="blob-code blob-code-inner js-file-line">    ImGuiCol_FrameBg,               <span class="pl-c"><span class="pl-c">//</span> Background of checkbox, radio button, plot, slider, text input</span></td>
      </tr>
      <tr>
        <td id="L1136" class="blob-num js-line-number" data-line-number="1136"></td>
        <td id="LC1136" class="blob-code blob-code-inner js-file-line">    ImGuiCol_FrameBgHovered,</td>
      </tr>
      <tr>
        <td id="L1137" class="blob-num js-line-number" data-line-number="1137"></td>
        <td id="LC1137" class="blob-code blob-code-inner js-file-line">    ImGuiCol_FrameBgActive,</td>
      </tr>
      <tr>
        <td id="L1138" class="blob-num js-line-number" data-line-number="1138"></td>
        <td id="LC1138" class="blob-code blob-code-inner js-file-line">    ImGuiCol_TitleBg,</td>
      </tr>
      <tr>
        <td id="L1139" class="blob-num js-line-number" data-line-number="1139"></td>
        <td id="LC1139" class="blob-code blob-code-inner js-file-line">    ImGuiCol_TitleBgActive,</td>
      </tr>
      <tr>
        <td id="L1140" class="blob-num js-line-number" data-line-number="1140"></td>
        <td id="LC1140" class="blob-code blob-code-inner js-file-line">    ImGuiCol_TitleBgCollapsed,</td>
      </tr>
      <tr>
        <td id="L1141" class="blob-num js-line-number" data-line-number="1141"></td>
        <td id="LC1141" class="blob-code blob-code-inner js-file-line">    ImGuiCol_MenuBarBg,</td>
      </tr>
      <tr>
        <td id="L1142" class="blob-num js-line-number" data-line-number="1142"></td>
        <td id="LC1142" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ScrollbarBg,</td>
      </tr>
      <tr>
        <td id="L1143" class="blob-num js-line-number" data-line-number="1143"></td>
        <td id="LC1143" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ScrollbarGrab,</td>
      </tr>
      <tr>
        <td id="L1144" class="blob-num js-line-number" data-line-number="1144"></td>
        <td id="LC1144" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ScrollbarGrabHovered,</td>
      </tr>
      <tr>
        <td id="L1145" class="blob-num js-line-number" data-line-number="1145"></td>
        <td id="LC1145" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ScrollbarGrabActive,</td>
      </tr>
      <tr>
        <td id="L1146" class="blob-num js-line-number" data-line-number="1146"></td>
        <td id="LC1146" class="blob-code blob-code-inner js-file-line">    ImGuiCol_CheckMark,</td>
      </tr>
      <tr>
        <td id="L1147" class="blob-num js-line-number" data-line-number="1147"></td>
        <td id="LC1147" class="blob-code blob-code-inner js-file-line">    ImGuiCol_SliderGrab,</td>
      </tr>
      <tr>
        <td id="L1148" class="blob-num js-line-number" data-line-number="1148"></td>
        <td id="LC1148" class="blob-code blob-code-inner js-file-line">    ImGuiCol_SliderGrabActive,</td>
      </tr>
      <tr>
        <td id="L1149" class="blob-num js-line-number" data-line-number="1149"></td>
        <td id="LC1149" class="blob-code blob-code-inner js-file-line">    ImGuiCol_Button,</td>
      </tr>
      <tr>
        <td id="L1150" class="blob-num js-line-number" data-line-number="1150"></td>
        <td id="LC1150" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ButtonHovered,</td>
      </tr>
      <tr>
        <td id="L1151" class="blob-num js-line-number" data-line-number="1151"></td>
        <td id="LC1151" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ButtonActive,</td>
      </tr>
      <tr>
        <td id="L1152" class="blob-num js-line-number" data-line-number="1152"></td>
        <td id="LC1152" class="blob-code blob-code-inner js-file-line">    ImGuiCol_Header,                <span class="pl-c"><span class="pl-c">//</span> Header* colors are used for CollapsingHeader, TreeNode, Selectable, MenuItem</span></td>
      </tr>
      <tr>
        <td id="L1153" class="blob-num js-line-number" data-line-number="1153"></td>
        <td id="LC1153" class="blob-code blob-code-inner js-file-line">    ImGuiCol_HeaderHovered,</td>
      </tr>
      <tr>
        <td id="L1154" class="blob-num js-line-number" data-line-number="1154"></td>
        <td id="LC1154" class="blob-code blob-code-inner js-file-line">    ImGuiCol_HeaderActive,</td>
      </tr>
      <tr>
        <td id="L1155" class="blob-num js-line-number" data-line-number="1155"></td>
        <td id="LC1155" class="blob-code blob-code-inner js-file-line">    ImGuiCol_Separator,</td>
      </tr>
      <tr>
        <td id="L1156" class="blob-num js-line-number" data-line-number="1156"></td>
        <td id="LC1156" class="blob-code blob-code-inner js-file-line">    ImGuiCol_SeparatorHovered,</td>
      </tr>
      <tr>
        <td id="L1157" class="blob-num js-line-number" data-line-number="1157"></td>
        <td id="LC1157" class="blob-code blob-code-inner js-file-line">    ImGuiCol_SeparatorActive,</td>
      </tr>
      <tr>
        <td id="L1158" class="blob-num js-line-number" data-line-number="1158"></td>
        <td id="LC1158" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ResizeGrip,</td>
      </tr>
      <tr>
        <td id="L1159" class="blob-num js-line-number" data-line-number="1159"></td>
        <td id="LC1159" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ResizeGripHovered,</td>
      </tr>
      <tr>
        <td id="L1160" class="blob-num js-line-number" data-line-number="1160"></td>
        <td id="LC1160" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ResizeGripActive,</td>
      </tr>
      <tr>
        <td id="L1161" class="blob-num js-line-number" data-line-number="1161"></td>
        <td id="LC1161" class="blob-code blob-code-inner js-file-line">    ImGuiCol_Tab,</td>
      </tr>
      <tr>
        <td id="L1162" class="blob-num js-line-number" data-line-number="1162"></td>
        <td id="LC1162" class="blob-code blob-code-inner js-file-line">    ImGuiCol_TabHovered,</td>
      </tr>
      <tr>
        <td id="L1163" class="blob-num js-line-number" data-line-number="1163"></td>
        <td id="LC1163" class="blob-code blob-code-inner js-file-line">    ImGuiCol_TabActive,</td>
      </tr>
      <tr>
        <td id="L1164" class="blob-num js-line-number" data-line-number="1164"></td>
        <td id="LC1164" class="blob-code blob-code-inner js-file-line">    ImGuiCol_TabUnfocused,</td>
      </tr>
      <tr>
        <td id="L1165" class="blob-num js-line-number" data-line-number="1165"></td>
        <td id="LC1165" class="blob-code blob-code-inner js-file-line">    ImGuiCol_TabUnfocusedActive,</td>
      </tr>
      <tr>
        <td id="L1166" class="blob-num js-line-number" data-line-number="1166"></td>
        <td id="LC1166" class="blob-code blob-code-inner js-file-line">    ImGuiCol_PlotLines,</td>
      </tr>
      <tr>
        <td id="L1167" class="blob-num js-line-number" data-line-number="1167"></td>
        <td id="LC1167" class="blob-code blob-code-inner js-file-line">    ImGuiCol_PlotLinesHovered,</td>
      </tr>
      <tr>
        <td id="L1168" class="blob-num js-line-number" data-line-number="1168"></td>
        <td id="LC1168" class="blob-code blob-code-inner js-file-line">    ImGuiCol_PlotHistogram,</td>
      </tr>
      <tr>
        <td id="L1169" class="blob-num js-line-number" data-line-number="1169"></td>
        <td id="LC1169" class="blob-code blob-code-inner js-file-line">    ImGuiCol_PlotHistogramHovered,</td>
      </tr>
      <tr>
        <td id="L1170" class="blob-num js-line-number" data-line-number="1170"></td>
        <td id="LC1170" class="blob-code blob-code-inner js-file-line">    ImGuiCol_TextSelectedBg,</td>
      </tr>
      <tr>
        <td id="L1171" class="blob-num js-line-number" data-line-number="1171"></td>
        <td id="LC1171" class="blob-code blob-code-inner js-file-line">    ImGuiCol_DragDropTarget,</td>
      </tr>
      <tr>
        <td id="L1172" class="blob-num js-line-number" data-line-number="1172"></td>
        <td id="LC1172" class="blob-code blob-code-inner js-file-line">    ImGuiCol_NavHighlight,          <span class="pl-c"><span class="pl-c">//</span> Gamepad/keyboard: current highlighted item</span></td>
      </tr>
      <tr>
        <td id="L1173" class="blob-num js-line-number" data-line-number="1173"></td>
        <td id="LC1173" class="blob-code blob-code-inner js-file-line">    ImGuiCol_NavWindowingHighlight, <span class="pl-c"><span class="pl-c">//</span> Highlight window when using CTRL+TAB</span></td>
      </tr>
      <tr>
        <td id="L1174" class="blob-num js-line-number" data-line-number="1174"></td>
        <td id="LC1174" class="blob-code blob-code-inner js-file-line">    ImGuiCol_NavWindowingDimBg,     <span class="pl-c"><span class="pl-c">//</span> Darken/colorize entire screen behind the CTRL+TAB window list, when active</span></td>
      </tr>
      <tr>
        <td id="L1175" class="blob-num js-line-number" data-line-number="1175"></td>
        <td id="LC1175" class="blob-code blob-code-inner js-file-line">    ImGuiCol_ModalWindowDimBg,      <span class="pl-c"><span class="pl-c">//</span> Darken/colorize entire screen behind a modal window, when one is active</span></td>
      </tr>
      <tr>
        <td id="L1176" class="blob-num js-line-number" data-line-number="1176"></td>
        <td id="LC1176" class="blob-code blob-code-inner js-file-line">    ImGuiCol_COUNT</td>
      </tr>
      <tr>
        <td id="L1177" class="blob-num js-line-number" data-line-number="1177"></td>
        <td id="LC1177" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1178" class="blob-num js-line-number" data-line-number="1178"></td>
        <td id="LC1178" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Obsolete names (will be removed)</span></td>
      </tr>
      <tr>
        <td id="L1179" class="blob-num js-line-number" data-line-number="1179"></td>
        <td id="LC1179" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_DISABLE_OBSOLETE_FUNCTIONS</td>
      </tr>
      <tr>
        <td id="L1180" class="blob-num js-line-number" data-line-number="1180"></td>
        <td id="LC1180" class="blob-code blob-code-inner js-file-line">    , ImGuiCol_ModalWindowDarkening = ImGuiCol_ModalWindowDimBg                      <span class="pl-c"><span class="pl-c">//</span> [renamed in 1.63]</span></td>
      </tr>
      <tr>
        <td id="L1181" class="blob-num js-line-number" data-line-number="1181"></td>
        <td id="LC1181" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>, ImGuiCol_CloseButton, ImGuiCol_CloseButtonActive, ImGuiCol_CloseButtonHovered// [unused since 1.60+] the close button now uses regular button colors.</span></td>
      </tr>
      <tr>
        <td id="L1182" class="blob-num js-line-number" data-line-number="1182"></td>
        <td id="LC1182" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1183" class="blob-num js-line-number" data-line-number="1183"></td>
        <td id="LC1183" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1184" class="blob-num js-line-number" data-line-number="1184"></td>
        <td id="LC1184" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1185" class="blob-num js-line-number" data-line-number="1185"></td>
        <td id="LC1185" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Enumeration for PushStyleVar() / PopStyleVar() to temporarily modify the ImGuiStyle structure.</span></td>
      </tr>
      <tr>
        <td id="L1186" class="blob-num js-line-number" data-line-number="1186"></td>
        <td id="LC1186" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - The enum only refers to fields of ImGuiStyle which makes sense to be pushed/popped inside UI code.</span></td>
      </tr>
      <tr>
        <td id="L1187" class="blob-num js-line-number" data-line-number="1187"></td>
        <td id="LC1187" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   During initialization or between frames, feel free to just poke into ImGuiStyle directly.</span></td>
      </tr>
      <tr>
        <td id="L1188" class="blob-num js-line-number" data-line-number="1188"></td>
        <td id="LC1188" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Tip: Use your programming IDE navigation facilities on the names in the _second column_ below to find the actual members and their description.</span></td>
      </tr>
      <tr>
        <td id="L1189" class="blob-num js-line-number" data-line-number="1189"></td>
        <td id="LC1189" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   In Visual Studio IDE: CTRL+comma (&quot;Edit.NavigateTo&quot;) can follow symbols in comments, whereas CTRL+F12 (&quot;Edit.GoToImplementation&quot;) cannot.</span></td>
      </tr>
      <tr>
        <td id="L1190" class="blob-num js-line-number" data-line-number="1190"></td>
        <td id="LC1190" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   With Visual Assist installed: ALT+G (&quot;VAssistX.GoToImplementation&quot;) can also follow symbols in comments.</span></td>
      </tr>
      <tr>
        <td id="L1191" class="blob-num js-line-number" data-line-number="1191"></td>
        <td id="LC1191" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - When changing this enum, you need to update the associated internal table GStyleVarInfo[] accordingly. This is where we link enum values to members offset/type.</span></td>
      </tr>
      <tr>
        <td id="L1192" class="blob-num js-line-number" data-line-number="1192"></td>
        <td id="LC1192" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiStyleVar_</td>
      </tr>
      <tr>
        <td id="L1193" class="blob-num js-line-number" data-line-number="1193"></td>
        <td id="LC1193" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1194" class="blob-num js-line-number" data-line-number="1194"></td>
        <td id="LC1194" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Enum name --------------------- // Member in ImGuiStyle structure (see ImGuiStyle for descriptions)</span></td>
      </tr>
      <tr>
        <td id="L1195" class="blob-num js-line-number" data-line-number="1195"></td>
        <td id="LC1195" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_Alpha,               <span class="pl-c"><span class="pl-c">//</span> float     Alpha</span></td>
      </tr>
      <tr>
        <td id="L1196" class="blob-num js-line-number" data-line-number="1196"></td>
        <td id="LC1196" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_WindowPadding,       <span class="pl-c"><span class="pl-c">//</span> ImVec2    WindowPadding</span></td>
      </tr>
      <tr>
        <td id="L1197" class="blob-num js-line-number" data-line-number="1197"></td>
        <td id="LC1197" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_WindowRounding,      <span class="pl-c"><span class="pl-c">//</span> float     WindowRounding</span></td>
      </tr>
      <tr>
        <td id="L1198" class="blob-num js-line-number" data-line-number="1198"></td>
        <td id="LC1198" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_WindowBorderSize,    <span class="pl-c"><span class="pl-c">//</span> float     WindowBorderSize</span></td>
      </tr>
      <tr>
        <td id="L1199" class="blob-num js-line-number" data-line-number="1199"></td>
        <td id="LC1199" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_WindowMinSize,       <span class="pl-c"><span class="pl-c">//</span> ImVec2    WindowMinSize</span></td>
      </tr>
      <tr>
        <td id="L1200" class="blob-num js-line-number" data-line-number="1200"></td>
        <td id="LC1200" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_WindowTitleAlign,    <span class="pl-c"><span class="pl-c">//</span> ImVec2    WindowTitleAlign</span></td>
      </tr>
      <tr>
        <td id="L1201" class="blob-num js-line-number" data-line-number="1201"></td>
        <td id="LC1201" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_ChildRounding,       <span class="pl-c"><span class="pl-c">//</span> float     ChildRounding</span></td>
      </tr>
      <tr>
        <td id="L1202" class="blob-num js-line-number" data-line-number="1202"></td>
        <td id="LC1202" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_ChildBorderSize,     <span class="pl-c"><span class="pl-c">//</span> float     ChildBorderSize</span></td>
      </tr>
      <tr>
        <td id="L1203" class="blob-num js-line-number" data-line-number="1203"></td>
        <td id="LC1203" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_PopupRounding,       <span class="pl-c"><span class="pl-c">//</span> float     PopupRounding</span></td>
      </tr>
      <tr>
        <td id="L1204" class="blob-num js-line-number" data-line-number="1204"></td>
        <td id="LC1204" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_PopupBorderSize,     <span class="pl-c"><span class="pl-c">//</span> float     PopupBorderSize</span></td>
      </tr>
      <tr>
        <td id="L1205" class="blob-num js-line-number" data-line-number="1205"></td>
        <td id="LC1205" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_FramePadding,        <span class="pl-c"><span class="pl-c">//</span> ImVec2    FramePadding</span></td>
      </tr>
      <tr>
        <td id="L1206" class="blob-num js-line-number" data-line-number="1206"></td>
        <td id="LC1206" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_FrameRounding,       <span class="pl-c"><span class="pl-c">//</span> float     FrameRounding</span></td>
      </tr>
      <tr>
        <td id="L1207" class="blob-num js-line-number" data-line-number="1207"></td>
        <td id="LC1207" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_FrameBorderSize,     <span class="pl-c"><span class="pl-c">//</span> float     FrameBorderSize</span></td>
      </tr>
      <tr>
        <td id="L1208" class="blob-num js-line-number" data-line-number="1208"></td>
        <td id="LC1208" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_ItemSpacing,         <span class="pl-c"><span class="pl-c">//</span> ImVec2    ItemSpacing</span></td>
      </tr>
      <tr>
        <td id="L1209" class="blob-num js-line-number" data-line-number="1209"></td>
        <td id="LC1209" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_ItemInnerSpacing,    <span class="pl-c"><span class="pl-c">//</span> ImVec2    ItemInnerSpacing</span></td>
      </tr>
      <tr>
        <td id="L1210" class="blob-num js-line-number" data-line-number="1210"></td>
        <td id="LC1210" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_IndentSpacing,       <span class="pl-c"><span class="pl-c">//</span> float     IndentSpacing</span></td>
      </tr>
      <tr>
        <td id="L1211" class="blob-num js-line-number" data-line-number="1211"></td>
        <td id="LC1211" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_ScrollbarSize,       <span class="pl-c"><span class="pl-c">//</span> float     ScrollbarSize</span></td>
      </tr>
      <tr>
        <td id="L1212" class="blob-num js-line-number" data-line-number="1212"></td>
        <td id="LC1212" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_ScrollbarRounding,   <span class="pl-c"><span class="pl-c">//</span> float     ScrollbarRounding</span></td>
      </tr>
      <tr>
        <td id="L1213" class="blob-num js-line-number" data-line-number="1213"></td>
        <td id="LC1213" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_GrabMinSize,         <span class="pl-c"><span class="pl-c">//</span> float     GrabMinSize</span></td>
      </tr>
      <tr>
        <td id="L1214" class="blob-num js-line-number" data-line-number="1214"></td>
        <td id="LC1214" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_GrabRounding,        <span class="pl-c"><span class="pl-c">//</span> float     GrabRounding</span></td>
      </tr>
      <tr>
        <td id="L1215" class="blob-num js-line-number" data-line-number="1215"></td>
        <td id="LC1215" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_TabRounding,         <span class="pl-c"><span class="pl-c">//</span> float     TabRounding</span></td>
      </tr>
      <tr>
        <td id="L1216" class="blob-num js-line-number" data-line-number="1216"></td>
        <td id="LC1216" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_ButtonTextAlign,     <span class="pl-c"><span class="pl-c">//</span> ImVec2    ButtonTextAlign</span></td>
      </tr>
      <tr>
        <td id="L1217" class="blob-num js-line-number" data-line-number="1217"></td>
        <td id="LC1217" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_SelectableTextAlign, <span class="pl-c"><span class="pl-c">//</span> ImVec2    SelectableTextAlign</span></td>
      </tr>
      <tr>
        <td id="L1218" class="blob-num js-line-number" data-line-number="1218"></td>
        <td id="LC1218" class="blob-code blob-code-inner js-file-line">    ImGuiStyleVar_COUNT</td>
      </tr>
      <tr>
        <td id="L1219" class="blob-num js-line-number" data-line-number="1219"></td>
        <td id="LC1219" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1220" class="blob-num js-line-number" data-line-number="1220"></td>
        <td id="LC1220" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Obsolete names (will be removed)</span></td>
      </tr>
      <tr>
        <td id="L1221" class="blob-num js-line-number" data-line-number="1221"></td>
        <td id="LC1221" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_DISABLE_OBSOLETE_FUNCTIONS</td>
      </tr>
      <tr>
        <td id="L1222" class="blob-num js-line-number" data-line-number="1222"></td>
        <td id="LC1222" class="blob-code blob-code-inner js-file-line">    , ImGuiStyleVar_Count_ = ImGuiStyleVar_COUNT                    <span class="pl-c"><span class="pl-c">//</span> [renamed in 1.60]</span></td>
      </tr>
      <tr>
        <td id="L1223" class="blob-num js-line-number" data-line-number="1223"></td>
        <td id="LC1223" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1224" class="blob-num js-line-number" data-line-number="1224"></td>
        <td id="LC1224" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1225" class="blob-num js-line-number" data-line-number="1225"></td>
        <td id="LC1225" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1226" class="blob-num js-line-number" data-line-number="1226"></td>
        <td id="LC1226" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for InvisibleButton() [extended in imgui_internal.h]</span></td>
      </tr>
      <tr>
        <td id="L1227" class="blob-num js-line-number" data-line-number="1227"></td>
        <td id="LC1227" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiButtonFlags_</td>
      </tr>
      <tr>
        <td id="L1228" class="blob-num js-line-number" data-line-number="1228"></td>
        <td id="LC1228" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1229" class="blob-num js-line-number" data-line-number="1229"></td>
        <td id="LC1229" class="blob-code blob-code-inner js-file-line">    ImGuiButtonFlags_None                   = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1230" class="blob-num js-line-number" data-line-number="1230"></td>
        <td id="LC1230" class="blob-code blob-code-inner js-file-line">    ImGuiButtonFlags_MouseButtonLeft        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> React on left mouse button (default)</span></td>
      </tr>
      <tr>
        <td id="L1231" class="blob-num js-line-number" data-line-number="1231"></td>
        <td id="LC1231" class="blob-code blob-code-inner js-file-line">    ImGuiButtonFlags_MouseButtonRight       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> React on right mouse button</span></td>
      </tr>
      <tr>
        <td id="L1232" class="blob-num js-line-number" data-line-number="1232"></td>
        <td id="LC1232" class="blob-code blob-code-inner js-file-line">    ImGuiButtonFlags_MouseButtonMiddle      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> React on center mouse button</span></td>
      </tr>
      <tr>
        <td id="L1233" class="blob-num js-line-number" data-line-number="1233"></td>
        <td id="LC1233" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1234" class="blob-num js-line-number" data-line-number="1234"></td>
        <td id="LC1234" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L1235" class="blob-num js-line-number" data-line-number="1235"></td>
        <td id="LC1235" class="blob-code blob-code-inner js-file-line">    ImGuiButtonFlags_MouseButtonMask_       = ImGuiButtonFlags_MouseButtonLeft | ImGuiButtonFlags_MouseButtonRight | ImGuiButtonFlags_MouseButtonMiddle,</td>
      </tr>
      <tr>
        <td id="L1236" class="blob-num js-line-number" data-line-number="1236"></td>
        <td id="LC1236" class="blob-code blob-code-inner js-file-line">    ImGuiButtonFlags_MouseButtonDefault_    = ImGuiButtonFlags_MouseButtonLeft</td>
      </tr>
      <tr>
        <td id="L1237" class="blob-num js-line-number" data-line-number="1237"></td>
        <td id="LC1237" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1238" class="blob-num js-line-number" data-line-number="1238"></td>
        <td id="LC1238" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1239" class="blob-num js-line-number" data-line-number="1239"></td>
        <td id="LC1239" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ColorEdit3() / ColorEdit4() / ColorPicker3() / ColorPicker4() / ColorButton()</span></td>
      </tr>
      <tr>
        <td id="L1240" class="blob-num js-line-number" data-line-number="1240"></td>
        <td id="LC1240" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiColorEditFlags_</td>
      </tr>
      <tr>
        <td id="L1241" class="blob-num js-line-number" data-line-number="1241"></td>
        <td id="LC1241" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1242" class="blob-num js-line-number" data-line-number="1242"></td>
        <td id="LC1242" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_None            = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1243" class="blob-num js-line-number" data-line-number="1243"></td>
        <td id="LC1243" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_NoAlpha         = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit, ColorPicker, ColorButton: ignore Alpha component (will only read 3 components from the input pointer).</span></td>
      </tr>
      <tr>
        <td id="L1244" class="blob-num js-line-number" data-line-number="1244"></td>
        <td id="LC1244" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_NoPicker        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit: disable picker when clicking on colored square.</span></td>
      </tr>
      <tr>
        <td id="L1245" class="blob-num js-line-number" data-line-number="1245"></td>
        <td id="LC1245" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_NoOptions       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>,   <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit: disable toggling options menu when right-clicking on inputs/small preview.</span></td>
      </tr>
      <tr>
        <td id="L1246" class="blob-num js-line-number" data-line-number="1246"></td>
        <td id="LC1246" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_NoSmallPreview  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">4</span>,   <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit, ColorPicker: disable colored square preview next to the inputs. (e.g. to show only the inputs)</span></td>
      </tr>
      <tr>
        <td id="L1247" class="blob-num js-line-number" data-line-number="1247"></td>
        <td id="LC1247" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_NoInputs        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">5</span>,   <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit, ColorPicker: disable inputs sliders/text widgets (e.g. to show only the small preview colored square).</span></td>
      </tr>
      <tr>
        <td id="L1248" class="blob-num js-line-number" data-line-number="1248"></td>
        <td id="LC1248" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_NoTooltip       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">6</span>,   <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit, ColorPicker, ColorButton: disable tooltip when hovering the preview.</span></td>
      </tr>
      <tr>
        <td id="L1249" class="blob-num js-line-number" data-line-number="1249"></td>
        <td id="LC1249" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_NoLabel         = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">7</span>,   <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit, ColorPicker: disable display of inline text label (the label is still forwarded to the tooltip and picker).</span></td>
      </tr>
      <tr>
        <td id="L1250" class="blob-num js-line-number" data-line-number="1250"></td>
        <td id="LC1250" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_NoSidePreview   = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">8</span>,   <span class="pl-c"><span class="pl-c">//</span>              // ColorPicker: disable bigger color preview on right side of the picker, use small colored square preview instead.</span></td>
      </tr>
      <tr>
        <td id="L1251" class="blob-num js-line-number" data-line-number="1251"></td>
        <td id="LC1251" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_NoDragDrop      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">9</span>,   <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit: disable drag and drop target. ColorButton: disable drag and drop source.</span></td>
      </tr>
      <tr>
        <td id="L1252" class="blob-num js-line-number" data-line-number="1252"></td>
        <td id="LC1252" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_NoBorder        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">10</span>,  <span class="pl-c"><span class="pl-c">//</span>              // ColorButton: disable border (which is enforced by default)</span></td>
      </tr>
      <tr>
        <td id="L1253" class="blob-num js-line-number" data-line-number="1253"></td>
        <td id="LC1253" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1254" class="blob-num js-line-number" data-line-number="1254"></td>
        <td id="LC1254" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> User Options (right-click on widget to change some of them).</span></td>
      </tr>
      <tr>
        <td id="L1255" class="blob-num js-line-number" data-line-number="1255"></td>
        <td id="LC1255" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_AlphaBar        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">16</span>,  <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit, ColorPicker: show vertical alpha bar/gradient in picker.</span></td>
      </tr>
      <tr>
        <td id="L1256" class="blob-num js-line-number" data-line-number="1256"></td>
        <td id="LC1256" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_AlphaPreview    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">17</span>,  <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit, ColorPicker, ColorButton: display preview as a transparent color over a checkerboard, instead of opaque.</span></td>
      </tr>
      <tr>
        <td id="L1257" class="blob-num js-line-number" data-line-number="1257"></td>
        <td id="LC1257" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_AlphaPreviewHalf= <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">18</span>,  <span class="pl-c"><span class="pl-c">//</span>              // ColorEdit, ColorPicker, ColorButton: display half opaque / half checkerboard, instead of opaque.</span></td>
      </tr>
      <tr>
        <td id="L1258" class="blob-num js-line-number" data-line-number="1258"></td>
        <td id="LC1258" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_HDR             = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">19</span>,  <span class="pl-c"><span class="pl-c">//</span>              // (WIP) ColorEdit: Currently only disable 0.0f..1.0f limits in RGBA edition (note: you probably want to use ImGuiColorEditFlags_Float flag as well).</span></td>
      </tr>
      <tr>
        <td id="L1259" class="blob-num js-line-number" data-line-number="1259"></td>
        <td id="LC1259" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_DisplayRGB      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">20</span>,  <span class="pl-c"><span class="pl-c">//</span> [Display]    // ColorEdit: override _display_ type among RGB/HSV/Hex. ColorPicker: select any combination using one or more of RGB/HSV/Hex.</span></td>
      </tr>
      <tr>
        <td id="L1260" class="blob-num js-line-number" data-line-number="1260"></td>
        <td id="LC1260" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_DisplayHSV      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">21</span>,  <span class="pl-c"><span class="pl-c">//</span> [Display]    // &quot;</span></td>
      </tr>
      <tr>
        <td id="L1261" class="blob-num js-line-number" data-line-number="1261"></td>
        <td id="LC1261" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_DisplayHex      = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">22</span>,  <span class="pl-c"><span class="pl-c">//</span> [Display]    // &quot;</span></td>
      </tr>
      <tr>
        <td id="L1262" class="blob-num js-line-number" data-line-number="1262"></td>
        <td id="LC1262" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_Uint8           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">23</span>,  <span class="pl-c"><span class="pl-c">//</span> [DataType]   // ColorEdit, ColorPicker, ColorButton: _display_ values formatted as 0..255.</span></td>
      </tr>
      <tr>
        <td id="L1263" class="blob-num js-line-number" data-line-number="1263"></td>
        <td id="LC1263" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_Float           = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">24</span>,  <span class="pl-c"><span class="pl-c">//</span> [DataType]   // ColorEdit, ColorPicker, ColorButton: _display_ values formatted as 0.0f..1.0f floats instead of 0..255 integers. No round-trip of value via integers.</span></td>
      </tr>
      <tr>
        <td id="L1264" class="blob-num js-line-number" data-line-number="1264"></td>
        <td id="LC1264" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_PickerHueBar    = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">25</span>,  <span class="pl-c"><span class="pl-c">//</span> [Picker]     // ColorPicker: bar for Hue, rectangle for Sat/Value.</span></td>
      </tr>
      <tr>
        <td id="L1265" class="blob-num js-line-number" data-line-number="1265"></td>
        <td id="LC1265" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_PickerHueWheel  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">26</span>,  <span class="pl-c"><span class="pl-c">//</span> [Picker]     // ColorPicker: wheel for Hue, triangle for Sat/Value.</span></td>
      </tr>
      <tr>
        <td id="L1266" class="blob-num js-line-number" data-line-number="1266"></td>
        <td id="LC1266" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_InputRGB        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">27</span>,  <span class="pl-c"><span class="pl-c">//</span> [Input]      // ColorEdit, ColorPicker: input and output data in RGB format.</span></td>
      </tr>
      <tr>
        <td id="L1267" class="blob-num js-line-number" data-line-number="1267"></td>
        <td id="LC1267" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags_InputHSV        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">28</span>,  <span class="pl-c"><span class="pl-c">//</span> [Input]      // ColorEdit, ColorPicker: input and output data in HSV format.</span></td>
      </tr>
      <tr>
        <td id="L1268" class="blob-num js-line-number" data-line-number="1268"></td>
        <td id="LC1268" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1269" class="blob-num js-line-number" data-line-number="1269"></td>
        <td id="LC1269" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Defaults Options. You can set application defaults using SetColorEditOptions(). The intent is that you probably don&#39;t want to</span></td>
      </tr>
      <tr>
        <td id="L1270" class="blob-num js-line-number" data-line-number="1270"></td>
        <td id="LC1270" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> override them in most of your calls. Let the user choose via the option menu and/or call SetColorEditOptions() once during startup.</span></td>
      </tr>
      <tr>
        <td id="L1271" class="blob-num js-line-number" data-line-number="1271"></td>
        <td id="LC1271" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags__OptionsDefault = ImGuiColorEditFlags_Uint8 | ImGuiColorEditFlags_DisplayRGB | ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_PickerHueBar,</td>
      </tr>
      <tr>
        <td id="L1272" class="blob-num js-line-number" data-line-number="1272"></td>
        <td id="LC1272" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1273" class="blob-num js-line-number" data-line-number="1273"></td>
        <td id="LC1273" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal] Masks</span></td>
      </tr>
      <tr>
        <td id="L1274" class="blob-num js-line-number" data-line-number="1274"></td>
        <td id="LC1274" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags__DisplayMask    = ImGuiColorEditFlags_DisplayRGB | ImGuiColorEditFlags_DisplayHSV | ImGuiColorEditFlags_DisplayHex,</td>
      </tr>
      <tr>
        <td id="L1275" class="blob-num js-line-number" data-line-number="1275"></td>
        <td id="LC1275" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags__DataTypeMask   = ImGuiColorEditFlags_Uint8 | ImGuiColorEditFlags_Float,</td>
      </tr>
      <tr>
        <td id="L1276" class="blob-num js-line-number" data-line-number="1276"></td>
        <td id="LC1276" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags__PickerMask     = ImGuiColorEditFlags_PickerHueWheel | ImGuiColorEditFlags_PickerHueBar,</td>
      </tr>
      <tr>
        <td id="L1277" class="blob-num js-line-number" data-line-number="1277"></td>
        <td id="LC1277" class="blob-code blob-code-inner js-file-line">    ImGuiColorEditFlags__InputMask      = ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_InputHSV</td>
      </tr>
      <tr>
        <td id="L1278" class="blob-num js-line-number" data-line-number="1278"></td>
        <td id="LC1278" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1279" class="blob-num js-line-number" data-line-number="1279"></td>
        <td id="LC1279" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Obsolete names (will be removed)</span></td>
      </tr>
      <tr>
        <td id="L1280" class="blob-num js-line-number" data-line-number="1280"></td>
        <td id="LC1280" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_DISABLE_OBSOLETE_FUNCTIONS</td>
      </tr>
      <tr>
        <td id="L1281" class="blob-num js-line-number" data-line-number="1281"></td>
        <td id="LC1281" class="blob-code blob-code-inner js-file-line">    , ImGuiColorEditFlags_RGB = ImGuiColorEditFlags_DisplayRGB, ImGuiColorEditFlags_HSV = ImGuiColorEditFlags_DisplayHSV, ImGuiColorEditFlags_HEX = ImGuiColorEditFlags_DisplayHex  <span class="pl-c"><span class="pl-c">//</span> [renamed in 1.69]</span></td>
      </tr>
      <tr>
        <td id="L1282" class="blob-num js-line-number" data-line-number="1282"></td>
        <td id="LC1282" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1283" class="blob-num js-line-number" data-line-number="1283"></td>
        <td id="LC1283" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1284" class="blob-num js-line-number" data-line-number="1284"></td>
        <td id="LC1284" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1285" class="blob-num js-line-number" data-line-number="1285"></td>
        <td id="LC1285" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Identify a mouse button.</span></td>
      </tr>
      <tr>
        <td id="L1286" class="blob-num js-line-number" data-line-number="1286"></td>
        <td id="LC1286" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Those values are guaranteed to be stable and we frequently use 0/1 directly. Named enums provided for convenience.</span></td>
      </tr>
      <tr>
        <td id="L1287" class="blob-num js-line-number" data-line-number="1287"></td>
        <td id="LC1287" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiMouseButton_</td>
      </tr>
      <tr>
        <td id="L1288" class="blob-num js-line-number" data-line-number="1288"></td>
        <td id="LC1288" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1289" class="blob-num js-line-number" data-line-number="1289"></td>
        <td id="LC1289" class="blob-code blob-code-inner js-file-line">    ImGuiMouseButton_Left = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1290" class="blob-num js-line-number" data-line-number="1290"></td>
        <td id="LC1290" class="blob-code blob-code-inner js-file-line">    ImGuiMouseButton_Right = <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L1291" class="blob-num js-line-number" data-line-number="1291"></td>
        <td id="LC1291" class="blob-code blob-code-inner js-file-line">    ImGuiMouseButton_Middle = <span class="pl-c1">2</span>,</td>
      </tr>
      <tr>
        <td id="L1292" class="blob-num js-line-number" data-line-number="1292"></td>
        <td id="LC1292" class="blob-code blob-code-inner js-file-line">    ImGuiMouseButton_COUNT = <span class="pl-c1">5</span></td>
      </tr>
      <tr>
        <td id="L1293" class="blob-num js-line-number" data-line-number="1293"></td>
        <td id="LC1293" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1294" class="blob-num js-line-number" data-line-number="1294"></td>
        <td id="LC1294" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1295" class="blob-num js-line-number" data-line-number="1295"></td>
        <td id="LC1295" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Enumeration for GetMouseCursor()</span></td>
      </tr>
      <tr>
        <td id="L1296" class="blob-num js-line-number" data-line-number="1296"></td>
        <td id="LC1296" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> User code may request binding to display given cursor by calling SetMouseCursor(), which is why we have some cursors that are marked unused here</span></td>
      </tr>
      <tr>
        <td id="L1297" class="blob-num js-line-number" data-line-number="1297"></td>
        <td id="LC1297" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiMouseCursor_</td>
      </tr>
      <tr>
        <td id="L1298" class="blob-num js-line-number" data-line-number="1298"></td>
        <td id="LC1298" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1299" class="blob-num js-line-number" data-line-number="1299"></td>
        <td id="LC1299" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_None = -<span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L1300" class="blob-num js-line-number" data-line-number="1300"></td>
        <td id="LC1300" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_Arrow = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L1301" class="blob-num js-line-number" data-line-number="1301"></td>
        <td id="LC1301" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_TextInput,         <span class="pl-c"><span class="pl-c">//</span> When hovering over InputText, etc.</span></td>
      </tr>
      <tr>
        <td id="L1302" class="blob-num js-line-number" data-line-number="1302"></td>
        <td id="LC1302" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_ResizeAll,         <span class="pl-c"><span class="pl-c">//</span> (Unused by Dear ImGui functions)</span></td>
      </tr>
      <tr>
        <td id="L1303" class="blob-num js-line-number" data-line-number="1303"></td>
        <td id="LC1303" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_ResizeNS,          <span class="pl-c"><span class="pl-c">//</span> When hovering over an horizontal border</span></td>
      </tr>
      <tr>
        <td id="L1304" class="blob-num js-line-number" data-line-number="1304"></td>
        <td id="LC1304" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_ResizeEW,          <span class="pl-c"><span class="pl-c">//</span> When hovering over a vertical border or a column</span></td>
      </tr>
      <tr>
        <td id="L1305" class="blob-num js-line-number" data-line-number="1305"></td>
        <td id="LC1305" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_ResizeNESW,        <span class="pl-c"><span class="pl-c">//</span> When hovering over the bottom-left corner of a window</span></td>
      </tr>
      <tr>
        <td id="L1306" class="blob-num js-line-number" data-line-number="1306"></td>
        <td id="LC1306" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_ResizeNWSE,        <span class="pl-c"><span class="pl-c">//</span> When hovering over the bottom-right corner of a window</span></td>
      </tr>
      <tr>
        <td id="L1307" class="blob-num js-line-number" data-line-number="1307"></td>
        <td id="LC1307" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_Hand,              <span class="pl-c"><span class="pl-c">//</span> (Unused by Dear ImGui functions. Use for e.g. hyperlinks)</span></td>
      </tr>
      <tr>
        <td id="L1308" class="blob-num js-line-number" data-line-number="1308"></td>
        <td id="LC1308" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_NotAllowed,        <span class="pl-c"><span class="pl-c">//</span> When hovering something with disallowed interaction. Usually a crossed circle.</span></td>
      </tr>
      <tr>
        <td id="L1309" class="blob-num js-line-number" data-line-number="1309"></td>
        <td id="LC1309" class="blob-code blob-code-inner js-file-line">    ImGuiMouseCursor_COUNT</td>
      </tr>
      <tr>
        <td id="L1310" class="blob-num js-line-number" data-line-number="1310"></td>
        <td id="LC1310" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1311" class="blob-num js-line-number" data-line-number="1311"></td>
        <td id="LC1311" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Obsolete names (will be removed)</span></td>
      </tr>
      <tr>
        <td id="L1312" class="blob-num js-line-number" data-line-number="1312"></td>
        <td id="LC1312" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_DISABLE_OBSOLETE_FUNCTIONS</td>
      </tr>
      <tr>
        <td id="L1313" class="blob-num js-line-number" data-line-number="1313"></td>
        <td id="LC1313" class="blob-code blob-code-inner js-file-line">    , ImGuiMouseCursor_Count_ = ImGuiMouseCursor_COUNT      <span class="pl-c"><span class="pl-c">//</span> [renamed in 1.60]</span></td>
      </tr>
      <tr>
        <td id="L1314" class="blob-num js-line-number" data-line-number="1314"></td>
        <td id="LC1314" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1315" class="blob-num js-line-number" data-line-number="1315"></td>
        <td id="LC1315" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1316" class="blob-num js-line-number" data-line-number="1316"></td>
        <td id="LC1316" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1317" class="blob-num js-line-number" data-line-number="1317"></td>
        <td id="LC1317" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Enumeration for ImGui::SetWindow***(), SetNextWindow***(), SetNextItem***() functions</span></td>
      </tr>
      <tr>
        <td id="L1318" class="blob-num js-line-number" data-line-number="1318"></td>
        <td id="LC1318" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Represent a condition.</span></td>
      </tr>
      <tr>
        <td id="L1319" class="blob-num js-line-number" data-line-number="1319"></td>
        <td id="LC1319" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Important: Treat as a regular enum! Do NOT combine multiple values using binary operators! All the functions above treat 0 as a shortcut to ImGuiCond_Always.</span></td>
      </tr>
      <tr>
        <td id="L1320" class="blob-num js-line-number" data-line-number="1320"></td>
        <td id="LC1320" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImGuiCond_</td>
      </tr>
      <tr>
        <td id="L1321" class="blob-num js-line-number" data-line-number="1321"></td>
        <td id="LC1321" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1322" class="blob-num js-line-number" data-line-number="1322"></td>
        <td id="LC1322" class="blob-code blob-code-inner js-file-line">    ImGuiCond_None          = <span class="pl-c1">0</span>,        <span class="pl-c"><span class="pl-c">//</span> No condition (always set the variable), same as _Always</span></td>
      </tr>
      <tr>
        <td id="L1323" class="blob-num js-line-number" data-line-number="1323"></td>
        <td id="LC1323" class="blob-code blob-code-inner js-file-line">    ImGuiCond_Always        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> No condition (always set the variable)</span></td>
      </tr>
      <tr>
        <td id="L1324" class="blob-num js-line-number" data-line-number="1324"></td>
        <td id="LC1324" class="blob-code blob-code-inner js-file-line">    ImGuiCond_Once          = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Set the variable once per runtime session (only the first call will succeed)</span></td>
      </tr>
      <tr>
        <td id="L1325" class="blob-num js-line-number" data-line-number="1325"></td>
        <td id="LC1325" class="blob-code blob-code-inner js-file-line">    ImGuiCond_FirstUseEver  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,   <span class="pl-c"><span class="pl-c">//</span> Set the variable if the object/window has no persistently saved data (no entry in .ini file)</span></td>
      </tr>
      <tr>
        <td id="L1326" class="blob-num js-line-number" data-line-number="1326"></td>
        <td id="LC1326" class="blob-code blob-code-inner js-file-line">    ImGuiCond_Appearing     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>    <span class="pl-c"><span class="pl-c">//</span> Set the variable if the object/window is appearing after being hidden/inactive (or the first time)</span></td>
      </tr>
      <tr>
        <td id="L1327" class="blob-num js-line-number" data-line-number="1327"></td>
        <td id="LC1327" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1328" class="blob-num js-line-number" data-line-number="1328"></td>
        <td id="LC1328" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1329" class="blob-num js-line-number" data-line-number="1329"></td>
        <td id="LC1329" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1330" class="blob-num js-line-number" data-line-number="1330"></td>
        <td id="LC1330" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helpers: Memory allocations macros</span></td>
      </tr>
      <tr>
        <td id="L1331" class="blob-num js-line-number" data-line-number="1331"></td>
        <td id="LC1331" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> IM_MALLOC(), IM_FREE(), IM_NEW(), IM_PLACEMENT_NEW(), IM_DELETE()</span></td>
      </tr>
      <tr>
        <td id="L1332" class="blob-num js-line-number" data-line-number="1332"></td>
        <td id="LC1332" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> We call C++ constructor on own allocated memory via the placement &quot;new(ptr) Type()&quot; syntax.</span></td>
      </tr>
      <tr>
        <td id="L1333" class="blob-num js-line-number" data-line-number="1333"></td>
        <td id="LC1333" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Defining a custom placement new() with a custom parameter allows us to bypass including &lt;new&gt; which on some platforms complains when user has disabled exceptions.</span></td>
      </tr>
      <tr>
        <td id="L1334" class="blob-num js-line-number" data-line-number="1334"></td>
        <td id="LC1334" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1335" class="blob-num js-line-number" data-line-number="1335"></td>
        <td id="LC1335" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1336" class="blob-num js-line-number" data-line-number="1336"></td>
        <td id="LC1336" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImNewWrapper</span> {};</td>
      </tr>
      <tr>
        <td id="L1337" class="blob-num js-line-number" data-line-number="1337"></td>
        <td id="LC1337" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">void</span>* <span class="pl-k">operator</span> <span class="pl-k">new</span>(<span class="pl-c1">size_t</span>, ImNewWrapper, <span class="pl-k">void</span>* ptr) { <span class="pl-k">return</span> ptr; }</td>
      </tr>
      <tr>
        <td id="L1338" class="blob-num js-line-number" data-line-number="1338"></td>
        <td id="LC1338" class="blob-code blob-code-inner js-file-line"><span class="pl-k">inline</span> <span class="pl-k">void</span>  <span class="pl-k">operator</span> <span class="pl-k">delete</span>(<span class="pl-k">void</span>*, ImNewWrapper, <span class="pl-k">void</span>*)   {} <span class="pl-c"><span class="pl-c">//</span> This is only required so we can use the symmetrical new()</span></td>
      </tr>
      <tr>
        <td id="L1339" class="blob-num js-line-number" data-line-number="1339"></td>
        <td id="LC1339" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_ALLOC</span>(<span class="pl-v">_SIZE</span>)                     ImGui::MemAlloc(_SIZE)</td>
      </tr>
      <tr>
        <td id="L1340" class="blob-num js-line-number" data-line-number="1340"></td>
        <td id="LC1340" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_FREE</span>(<span class="pl-v">_PTR</span>)                       ImGui::MemFree(_PTR)</td>
      </tr>
      <tr>
        <td id="L1341" class="blob-num js-line-number" data-line-number="1341"></td>
        <td id="LC1341" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_PLACEMENT_NEW</span>(<span class="pl-v">_PTR</span>)              <span class="pl-k">new</span>(ImNewWrapper(), _PTR)</td>
      </tr>
      <tr>
        <td id="L1342" class="blob-num js-line-number" data-line-number="1342"></td>
        <td id="LC1342" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_NEW</span>(<span class="pl-v">_TYPE</span>)                       <span class="pl-k">new</span>(ImNewWrapper(), ImGui::MemAlloc(<span class="pl-k">sizeof</span>(_TYPE))) _TYPE</td>
      </tr>
      <tr>
        <td id="L1343" class="blob-num js-line-number" data-line-number="1343"></td>
        <td id="LC1343" class="blob-code blob-code-inner js-file-line"><span class="pl-k">template</span>&lt;<span class="pl-k">typename</span> T&gt; <span class="pl-k">void</span> <span class="pl-en">IM_DELETE</span>(T* p)   { <span class="pl-k">if</span> (p) { p-&gt;<span class="pl-en">~T</span>(); <span class="pl-c1">ImGui::MemFree</span>(p); } }</td>
      </tr>
      <tr>
        <td id="L1344" class="blob-num js-line-number" data-line-number="1344"></td>
        <td id="LC1344" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1345" class="blob-num js-line-number" data-line-number="1345"></td>
        <td id="LC1345" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1346" class="blob-num js-line-number" data-line-number="1346"></td>
        <td id="LC1346" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper: ImVector&lt;&gt;</span></td>
      </tr>
      <tr>
        <td id="L1347" class="blob-num js-line-number" data-line-number="1347"></td>
        <td id="LC1347" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Lightweight std::vector&lt;&gt;-like class to avoid dragging dependencies (also, some implementations of STL with debug enabled are absurdly slow, we bypass it so our code runs fast in debug).</span></td>
      </tr>
      <tr>
        <td id="L1348" class="blob-num js-line-number" data-line-number="1348"></td>
        <td id="LC1348" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1349" class="blob-num js-line-number" data-line-number="1349"></td>
        <td id="LC1349" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - You generally do NOT need to care or use this ever. But we need to make it available in imgui.h because some of our public structures are relying on it.</span></td>
      </tr>
      <tr>
        <td id="L1350" class="blob-num js-line-number" data-line-number="1350"></td>
        <td id="LC1350" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - We use std-like naming convention here, which is a little unusual for this codebase.</span></td>
      </tr>
      <tr>
        <td id="L1351" class="blob-num js-line-number" data-line-number="1351"></td>
        <td id="LC1351" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Important: clear() frees memory, resize(0) keep the allocated buffer. We use resize(0) a lot to intentionally recycle allocated buffers across frames and amortize our costs.</span></td>
      </tr>
      <tr>
        <td id="L1352" class="blob-num js-line-number" data-line-number="1352"></td>
        <td id="LC1352" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Important: our implementation does NOT call C++ constructors/destructors, we treat everything as raw data! This is intentional but be extra mindful of that,</span></td>
      </tr>
      <tr>
        <td id="L1353" class="blob-num js-line-number" data-line-number="1353"></td>
        <td id="LC1353" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   Do NOT use this class as a std::vector replacement in your own code! Many of the structures used by dear imgui can be safely initialized by a zero-memset.</span></td>
      </tr>
      <tr>
        <td id="L1354" class="blob-num js-line-number" data-line-number="1354"></td>
        <td id="LC1354" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1355" class="blob-num js-line-number" data-line-number="1355"></td>
        <td id="LC1355" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1356" class="blob-num js-line-number" data-line-number="1356"></td>
        <td id="LC1356" class="blob-code blob-code-inner js-file-line"><span class="pl-k">template</span>&lt;<span class="pl-k">typename</span> T&gt;</td>
      </tr>
      <tr>
        <td id="L1357" class="blob-num js-line-number" data-line-number="1357"></td>
        <td id="LC1357" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImVector</span></td>
      </tr>
      <tr>
        <td id="L1358" class="blob-num js-line-number" data-line-number="1358"></td>
        <td id="LC1358" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1359" class="blob-num js-line-number" data-line-number="1359"></td>
        <td id="LC1359" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                 <span class="pl-c1">Size</span>;</td>
      </tr>
      <tr>
        <td id="L1360" class="blob-num js-line-number" data-line-number="1360"></td>
        <td id="LC1360" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                 Capacity;</td>
      </tr>
      <tr>
        <td id="L1361" class="blob-num js-line-number" data-line-number="1361"></td>
        <td id="LC1361" class="blob-code blob-code-inner js-file-line">    T*                  Data;</td>
      </tr>
      <tr>
        <td id="L1362" class="blob-num js-line-number" data-line-number="1362"></td>
        <td id="LC1362" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1363" class="blob-num js-line-number" data-line-number="1363"></td>
        <td id="LC1363" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Provide standard typedefs but we don&#39;t use them ourselves.</span></td>
      </tr>
      <tr>
        <td id="L1364" class="blob-num js-line-number" data-line-number="1364"></td>
        <td id="LC1364" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">typedef</span> T                   value_type;</td>
      </tr>
      <tr>
        <td id="L1365" class="blob-num js-line-number" data-line-number="1365"></td>
        <td id="LC1365" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">typedef</span> value_type*         iterator;</td>
      </tr>
      <tr>
        <td id="L1366" class="blob-num js-line-number" data-line-number="1366"></td>
        <td id="LC1366" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">typedef</span> <span class="pl-k">const</span> value_type*   const_iterator;</td>
      </tr>
      <tr>
        <td id="L1367" class="blob-num js-line-number" data-line-number="1367"></td>
        <td id="LC1367" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1368" class="blob-num js-line-number" data-line-number="1368"></td>
        <td id="LC1368" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Constructors, destructor</span></td>
      </tr>
      <tr>
        <td id="L1369" class="blob-num js-line-number" data-line-number="1369"></td>
        <td id="LC1369" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-en">ImVector</span>()                                       { <span class="pl-c1">Size</span> = Capacity = <span class="pl-c1">0</span>; Data = <span class="pl-c1">NULL</span>; }</td>
      </tr>
      <tr>
        <td id="L1370" class="blob-num js-line-number" data-line-number="1370"></td>
        <td id="LC1370" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-en">ImVector</span>(<span class="pl-k">const</span> ImVector&lt;T&gt;&amp; src)                 { <span class="pl-c1">Size</span> = Capacity = <span class="pl-c1">0</span>; Data = <span class="pl-c1">NULL</span>; <span class="pl-k">operator</span>=(src); }</td>
      </tr>
      <tr>
        <td id="L1371" class="blob-num js-line-number" data-line-number="1371"></td>
        <td id="LC1371" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> ImVector&lt;T&gt;&amp; <span class="pl-k">operator</span>=(<span class="pl-k">const</span> ImVector&lt;T&gt;&amp; src)   { <span class="pl-c1">clear</span>(); <span class="pl-c1">resize</span>(src.<span class="pl-smi">Size</span>); <span class="pl-c1">memcpy</span>(Data, src.<span class="pl-smi">Data</span>, (<span class="pl-c1">size_t</span>)<span class="pl-c1">Size</span> * <span class="pl-k">sizeof</span>(T)); <span class="pl-k">return</span> *<span class="pl-c1">this</span>; }</td>
      </tr>
      <tr>
        <td id="L1372" class="blob-num js-line-number" data-line-number="1372"></td>
        <td id="LC1372" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-en">~ImVector</span>()                                      { <span class="pl-k">if</span> (Data) <span class="pl-c1">IM_FREE</span>(Data); }</td>
      </tr>
      <tr>
        <td id="L1373" class="blob-num js-line-number" data-line-number="1373"></td>
        <td id="LC1373" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1374" class="blob-num js-line-number" data-line-number="1374"></td>
        <td id="LC1374" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">bool</span>         <span class="pl-en">empty</span>() <span class="pl-k">const</span>                       { <span class="pl-k">return</span> <span class="pl-c1">Size</span> == <span class="pl-c1">0</span>; }</td>
      </tr>
      <tr>
        <td id="L1375" class="blob-num js-line-number" data-line-number="1375"></td>
        <td id="LC1375" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">int</span>          <span class="pl-en">size</span>() <span class="pl-k">const</span>                        { <span class="pl-k">return</span> <span class="pl-c1">Size</span>; }</td>
      </tr>
      <tr>
        <td id="L1376" class="blob-num js-line-number" data-line-number="1376"></td>
        <td id="LC1376" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">int</span>          <span class="pl-en">size_in_bytes</span>() <span class="pl-k">const</span>               { <span class="pl-k">return</span> <span class="pl-c1">Size</span> * (<span class="pl-k">int</span>)<span class="pl-k">sizeof</span>(T); }</td>
      </tr>
      <tr>
        <td id="L1377" class="blob-num js-line-number" data-line-number="1377"></td>
        <td id="LC1377" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">int</span>          <span class="pl-en">capacity</span>() <span class="pl-k">const</span>                    { <span class="pl-k">return</span> Capacity; }</td>
      </tr>
      <tr>
        <td id="L1378" class="blob-num js-line-number" data-line-number="1378"></td>
        <td id="LC1378" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> T&amp;           <span class="pl-k">operator</span>[](<span class="pl-k">int</span> i)                   { <span class="pl-c1">IM_ASSERT</span>(i &lt; <span class="pl-c1">Size</span>); <span class="pl-k">return</span> Data[i]; }</td>
      </tr>
      <tr>
        <td id="L1379" class="blob-num js-line-number" data-line-number="1379"></td>
        <td id="LC1379" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">const</span> T&amp;     <span class="pl-k">operator</span>[](<span class="pl-k">int</span> i) <span class="pl-k">const</span>             { <span class="pl-c1">IM_ASSERT</span>(i &lt; <span class="pl-c1">Size</span>); <span class="pl-k">return</span> Data[i]; }</td>
      </tr>
      <tr>
        <td id="L1380" class="blob-num js-line-number" data-line-number="1380"></td>
        <td id="LC1380" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1381" class="blob-num js-line-number" data-line-number="1381"></td>
        <td id="LC1381" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>         <span class="pl-en">clear</span>()                             { <span class="pl-k">if</span> (Data) { <span class="pl-c1">Size</span> = Capacity = <span class="pl-c1">0</span>; <span class="pl-c1">IM_FREE</span>(Data); Data = <span class="pl-c1">NULL</span>; } }</td>
      </tr>
      <tr>
        <td id="L1382" class="blob-num js-line-number" data-line-number="1382"></td>
        <td id="LC1382" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> T*           <span class="pl-en">begin</span>()                             { <span class="pl-k">return</span> Data; }</td>
      </tr>
      <tr>
        <td id="L1383" class="blob-num js-line-number" data-line-number="1383"></td>
        <td id="LC1383" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">const</span> T*     <span class="pl-en">begin</span>() <span class="pl-k">const</span>                       { <span class="pl-k">return</span> Data; }</td>
      </tr>
      <tr>
        <td id="L1384" class="blob-num js-line-number" data-line-number="1384"></td>
        <td id="LC1384" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> T*           <span class="pl-en">end</span>()                               { <span class="pl-k">return</span> Data + <span class="pl-c1">Size</span>; }</td>
      </tr>
      <tr>
        <td id="L1385" class="blob-num js-line-number" data-line-number="1385"></td>
        <td id="LC1385" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">const</span> T*     <span class="pl-en">end</span>() <span class="pl-k">const</span>                         { <span class="pl-k">return</span> Data + <span class="pl-c1">Size</span>; }</td>
      </tr>
      <tr>
        <td id="L1386" class="blob-num js-line-number" data-line-number="1386"></td>
        <td id="LC1386" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> T&amp;           <span class="pl-en">front</span>()                             { <span class="pl-c1">IM_ASSERT</span>(<span class="pl-c1">Size</span> &gt; <span class="pl-c1">0</span>); <span class="pl-k">return</span> Data[<span class="pl-c1">0</span>]; }</td>
      </tr>
      <tr>
        <td id="L1387" class="blob-num js-line-number" data-line-number="1387"></td>
        <td id="LC1387" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">const</span> T&amp;     <span class="pl-en">front</span>() <span class="pl-k">const</span>                       { <span class="pl-c1">IM_ASSERT</span>(<span class="pl-c1">Size</span> &gt; <span class="pl-c1">0</span>); <span class="pl-k">return</span> Data[<span class="pl-c1">0</span>]; }</td>
      </tr>
      <tr>
        <td id="L1388" class="blob-num js-line-number" data-line-number="1388"></td>
        <td id="LC1388" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> T&amp;           <span class="pl-en">back</span>()                              { <span class="pl-c1">IM_ASSERT</span>(<span class="pl-c1">Size</span> &gt; <span class="pl-c1">0</span>); <span class="pl-k">return</span> Data[<span class="pl-c1">Size</span> - <span class="pl-c1">1</span>]; }</td>
      </tr>
      <tr>
        <td id="L1389" class="blob-num js-line-number" data-line-number="1389"></td>
        <td id="LC1389" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">const</span> T&amp;     <span class="pl-en">back</span>() <span class="pl-k">const</span>                        { <span class="pl-c1">IM_ASSERT</span>(<span class="pl-c1">Size</span> &gt; <span class="pl-c1">0</span>); <span class="pl-k">return</span> Data[<span class="pl-c1">Size</span> - <span class="pl-c1">1</span>]; }</td>
      </tr>
      <tr>
        <td id="L1390" class="blob-num js-line-number" data-line-number="1390"></td>
        <td id="LC1390" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>         <span class="pl-en">swap</span>(ImVector&lt;T&gt;&amp; rhs)              { <span class="pl-k">int</span> rhs_size = rhs.<span class="pl-smi">Size</span>; rhs.<span class="pl-smi">Size</span> = <span class="pl-c1">Size</span>; <span class="pl-c1">Size</span> = rhs_size; <span class="pl-k">int</span> rhs_cap = rhs.<span class="pl-smi">Capacity</span>; rhs.<span class="pl-smi">Capacity</span> = Capacity; Capacity = rhs_cap; T* rhs_data = rhs.<span class="pl-smi">Data</span>; rhs.<span class="pl-smi">Data</span> = Data; Data = rhs_data; }</td>
      </tr>
      <tr>
        <td id="L1391" class="blob-num js-line-number" data-line-number="1391"></td>
        <td id="LC1391" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1392" class="blob-num js-line-number" data-line-number="1392"></td>
        <td id="LC1392" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">int</span>          <span class="pl-en">_grow_capacity</span>(<span class="pl-k">int</span> sz) <span class="pl-k">const</span>        { <span class="pl-k">int</span> new_capacity = Capacity ? (Capacity + Capacity / <span class="pl-c1">2</span>) : <span class="pl-c1">8</span>; <span class="pl-k">return</span> new_capacity &gt; sz ? new_capacity : sz; }</td>
      </tr>
      <tr>
        <td id="L1393" class="blob-num js-line-number" data-line-number="1393"></td>
        <td id="LC1393" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>         <span class="pl-en">resize</span>(<span class="pl-k">int</span> new_size)                { <span class="pl-k">if</span> (new_size &gt; Capacity) <span class="pl-c1">reserve</span>(<span class="pl-c1">_grow_capacity</span>(new_size)); <span class="pl-c1">Size</span> = new_size; }</td>
      </tr>
      <tr>
        <td id="L1394" class="blob-num js-line-number" data-line-number="1394"></td>
        <td id="LC1394" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>         <span class="pl-en">resize</span>(<span class="pl-k">int</span> new_size, <span class="pl-k">const</span> T&amp; v)    { <span class="pl-k">if</span> (new_size &gt; Capacity) <span class="pl-c1">reserve</span>(<span class="pl-c1">_grow_capacity</span>(new_size)); <span class="pl-k">if</span> (new_size &gt; <span class="pl-c1">Size</span>) <span class="pl-k">for</span> (<span class="pl-k">int</span> n = <span class="pl-c1">Size</span>; n &lt; new_size; n++) <span class="pl-c1">memcpy</span>(&amp;Data[n], &amp;v, <span class="pl-k">sizeof</span>(v)); <span class="pl-c1">Size</span> = new_size; }</td>
      </tr>
      <tr>
        <td id="L1395" class="blob-num js-line-number" data-line-number="1395"></td>
        <td id="LC1395" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>         <span class="pl-en">shrink</span>(<span class="pl-k">int</span> new_size)                { <span class="pl-c1">IM_ASSERT</span>(new_size &lt;= <span class="pl-c1">Size</span>); <span class="pl-c1">Size</span> = new_size; } <span class="pl-c"><span class="pl-c">//</span> Resize a vector to a smaller size, guaranteed not to cause a reallocation</span></td>
      </tr>
      <tr>
        <td id="L1396" class="blob-num js-line-number" data-line-number="1396"></td>
        <td id="LC1396" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>         <span class="pl-en">reserve</span>(<span class="pl-k">int</span> new_capacity)           { <span class="pl-k">if</span> (new_capacity &lt;= Capacity) <span class="pl-k">return</span>; T* new_data = (T*)<span class="pl-c1">IM_ALLOC</span>((<span class="pl-c1">size_t</span>)new_capacity * <span class="pl-k">sizeof</span>(T)); <span class="pl-k">if</span> (Data) { <span class="pl-c1">memcpy</span>(new_data, Data, (<span class="pl-c1">size_t</span>)<span class="pl-c1">Size</span> * <span class="pl-k">sizeof</span>(T)); <span class="pl-c1">IM_FREE</span>(Data); } Data = new_data; Capacity = new_capacity; }</td>
      </tr>
      <tr>
        <td id="L1397" class="blob-num js-line-number" data-line-number="1397"></td>
        <td id="LC1397" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1398" class="blob-num js-line-number" data-line-number="1398"></td>
        <td id="LC1398" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> NB: It is illegal to call push_back/push_front/insert with a reference pointing inside the ImVector data itself! e.g. v.push_back(v[10]) is forbidden.</span></td>
      </tr>
      <tr>
        <td id="L1399" class="blob-num js-line-number" data-line-number="1399"></td>
        <td id="LC1399" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>         <span class="pl-en">push_back</span>(<span class="pl-k">const</span> T&amp; v)               { <span class="pl-k">if</span> (<span class="pl-c1">Size</span> == Capacity) <span class="pl-c1">reserve</span>(<span class="pl-c1">_grow_capacity</span>(<span class="pl-c1">Size</span> + <span class="pl-c1">1</span>)); <span class="pl-c1">memcpy</span>(&amp;Data[<span class="pl-c1">Size</span>], &amp;v, <span class="pl-k">sizeof</span>(v)); <span class="pl-c1">Size</span>++; }</td>
      </tr>
      <tr>
        <td id="L1400" class="blob-num js-line-number" data-line-number="1400"></td>
        <td id="LC1400" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>         <span class="pl-en">pop_back</span>()                          { <span class="pl-c1">IM_ASSERT</span>(<span class="pl-c1">Size</span> &gt; <span class="pl-c1">0</span>); <span class="pl-c1">Size</span>--; }</td>
      </tr>
      <tr>
        <td id="L1401" class="blob-num js-line-number" data-line-number="1401"></td>
        <td id="LC1401" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>         <span class="pl-en">push_front</span>(<span class="pl-k">const</span> T&amp; v)              { <span class="pl-k">if</span> (<span class="pl-c1">Size</span> == <span class="pl-c1">0</span>) <span class="pl-c1">push_back</span>(v); <span class="pl-k">else</span> <span class="pl-c1">insert</span>(Data, v); }</td>
      </tr>
      <tr>
        <td id="L1402" class="blob-num js-line-number" data-line-number="1402"></td>
        <td id="LC1402" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> T*           <span class="pl-en">erase</span>(<span class="pl-k">const</span> T* it)                  { <span class="pl-c1">IM_ASSERT</span>(it &gt;= Data &amp;&amp; it &lt; Data + <span class="pl-c1">Size</span>); <span class="pl-k">const</span> <span class="pl-c1">ptrdiff_t</span> off = it - Data; <span class="pl-c1">memmove</span>(Data + off, Data + off + <span class="pl-c1">1</span>, ((<span class="pl-c1">size_t</span>)<span class="pl-c1">Size</span> - (<span class="pl-c1">size_t</span>)off - <span class="pl-c1">1</span>) * <span class="pl-k">sizeof</span>(T)); <span class="pl-c1">Size</span>--; <span class="pl-k">return</span> Data + off; }</td>
      </tr>
      <tr>
        <td id="L1403" class="blob-num js-line-number" data-line-number="1403"></td>
        <td id="LC1403" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> T*           <span class="pl-en">erase</span>(<span class="pl-k">const</span> T* it, <span class="pl-k">const</span> T* it_last){ <span class="pl-c1">IM_ASSERT</span>(it &gt;= Data &amp;&amp; it &lt; Data + <span class="pl-c1">Size</span> &amp;&amp; it_last &gt; it &amp;&amp; it_last &lt;= Data + <span class="pl-c1">Size</span>); <span class="pl-k">const</span> <span class="pl-c1">ptrdiff_t</span> count = it_last - it; <span class="pl-k">const</span> <span class="pl-c1">ptrdiff_t</span> off = it - Data; <span class="pl-c1">memmove</span>(Data + off, Data + off + count, ((<span class="pl-c1">size_t</span>)<span class="pl-c1">Size</span> - (<span class="pl-c1">size_t</span>)off - count) * <span class="pl-k">sizeof</span>(T)); <span class="pl-c1">Size</span> -= (<span class="pl-k">int</span>)count; <span class="pl-k">return</span> Data + off; }</td>
      </tr>
      <tr>
        <td id="L1404" class="blob-num js-line-number" data-line-number="1404"></td>
        <td id="LC1404" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> T*           <span class="pl-en">erase_unsorted</span>(<span class="pl-k">const</span> T* it)         { <span class="pl-c1">IM_ASSERT</span>(it &gt;= Data &amp;&amp; it &lt; Data + <span class="pl-c1">Size</span>);  <span class="pl-k">const</span> <span class="pl-c1">ptrdiff_t</span> off = it - Data; <span class="pl-k">if</span> (it &lt; Data + <span class="pl-c1">Size</span> - <span class="pl-c1">1</span>) <span class="pl-c1">memcpy</span>(Data + off, Data + <span class="pl-c1">Size</span> - <span class="pl-c1">1</span>, <span class="pl-k">sizeof</span>(T)); <span class="pl-c1">Size</span>--; <span class="pl-k">return</span> Data + off; }</td>
      </tr>
      <tr>
        <td id="L1405" class="blob-num js-line-number" data-line-number="1405"></td>
        <td id="LC1405" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> T*           <span class="pl-en">insert</span>(<span class="pl-k">const</span> T* it, <span class="pl-k">const</span> T&amp; v)     { <span class="pl-c1">IM_ASSERT</span>(it &gt;= Data &amp;&amp; it &lt;= Data + <span class="pl-c1">Size</span>); <span class="pl-k">const</span> <span class="pl-c1">ptrdiff_t</span> off = it - Data; <span class="pl-k">if</span> (<span class="pl-c1">Size</span> == Capacity) <span class="pl-c1">reserve</span>(<span class="pl-c1">_grow_capacity</span>(<span class="pl-c1">Size</span> + <span class="pl-c1">1</span>)); <span class="pl-k">if</span> (off &lt; (<span class="pl-k">int</span>)<span class="pl-c1">Size</span>) <span class="pl-c1">memmove</span>(Data + off + <span class="pl-c1">1</span>, Data + off, ((<span class="pl-c1">size_t</span>)<span class="pl-c1">Size</span> - (<span class="pl-c1">size_t</span>)off) * <span class="pl-k">sizeof</span>(T)); <span class="pl-c1">memcpy</span>(&amp;Data[off], &amp;v, <span class="pl-k">sizeof</span>(v)); <span class="pl-c1">Size</span>++; <span class="pl-k">return</span> Data + off; }</td>
      </tr>
      <tr>
        <td id="L1406" class="blob-num js-line-number" data-line-number="1406"></td>
        <td id="LC1406" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">bool</span>         <span class="pl-en">contains</span>(<span class="pl-k">const</span> T&amp; v) <span class="pl-k">const</span>          { <span class="pl-k">const</span> T* data = Data;  <span class="pl-k">const</span> T* data_end = Data + <span class="pl-c1">Size</span>; <span class="pl-k">while</span> (data &lt; data_end) <span class="pl-k">if</span> (*data++ == v) <span class="pl-k">return</span> <span class="pl-c1">true</span>; <span class="pl-k">return</span> <span class="pl-c1">false</span>; }</td>
      </tr>
      <tr>
        <td id="L1407" class="blob-num js-line-number" data-line-number="1407"></td>
        <td id="LC1407" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> T*           <span class="pl-en">find</span>(<span class="pl-k">const</span> T&amp; v)                    { T* data = Data;  <span class="pl-k">const</span> T* data_end = Data + <span class="pl-c1">Size</span>; <span class="pl-k">while</span> (data &lt; data_end) <span class="pl-k">if</span> (*data == v) <span class="pl-k">break</span>; <span class="pl-k">else</span> ++data; <span class="pl-k">return</span> data; }</td>
      </tr>
      <tr>
        <td id="L1408" class="blob-num js-line-number" data-line-number="1408"></td>
        <td id="LC1408" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">const</span> T*     <span class="pl-en">find</span>(<span class="pl-k">const</span> T&amp; v) <span class="pl-k">const</span>              { <span class="pl-k">const</span> T* data = Data;  <span class="pl-k">const</span> T* data_end = Data + <span class="pl-c1">Size</span>; <span class="pl-k">while</span> (data &lt; data_end) <span class="pl-k">if</span> (*data == v) <span class="pl-k">break</span>; <span class="pl-k">else</span> ++data; <span class="pl-k">return</span> data; }</td>
      </tr>
      <tr>
        <td id="L1409" class="blob-num js-line-number" data-line-number="1409"></td>
        <td id="LC1409" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">bool</span>         <span class="pl-en">find_erase</span>(<span class="pl-k">const</span> T&amp; v)              { <span class="pl-k">const</span> T* it = <span class="pl-c1">find</span>(v); <span class="pl-k">if</span> (it &lt; Data + <span class="pl-c1">Size</span>) { <span class="pl-c1">erase</span>(it); <span class="pl-k">return</span> <span class="pl-c1">true</span>; } <span class="pl-k">return</span> <span class="pl-c1">false</span>; }</td>
      </tr>
      <tr>
        <td id="L1410" class="blob-num js-line-number" data-line-number="1410"></td>
        <td id="LC1410" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">bool</span>         <span class="pl-en">find_erase_unsorted</span>(<span class="pl-k">const</span> T&amp; v)     { <span class="pl-k">const</span> T* it = <span class="pl-c1">find</span>(v); <span class="pl-k">if</span> (it &lt; Data + <span class="pl-c1">Size</span>) { <span class="pl-c1">erase_unsorted</span>(it); <span class="pl-k">return</span> <span class="pl-c1">true</span>; } <span class="pl-k">return</span> <span class="pl-c1">false</span>; }</td>
      </tr>
      <tr>
        <td id="L1411" class="blob-num js-line-number" data-line-number="1411"></td>
        <td id="LC1411" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">int</span>          <span class="pl-en">index_from_ptr</span>(<span class="pl-k">const</span> T* it) <span class="pl-k">const</span>   { <span class="pl-c1">IM_ASSERT</span>(it &gt;= Data &amp;&amp; it &lt; Data + <span class="pl-c1">Size</span>); <span class="pl-k">const</span> <span class="pl-c1">ptrdiff_t</span> off = it - Data; <span class="pl-k">return</span> (<span class="pl-k">int</span>)off; }</td>
      </tr>
      <tr>
        <td id="L1412" class="blob-num js-line-number" data-line-number="1412"></td>
        <td id="LC1412" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1413" class="blob-num js-line-number" data-line-number="1413"></td>
        <td id="LC1413" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1414" class="blob-num js-line-number" data-line-number="1414"></td>
        <td id="LC1414" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1415" class="blob-num js-line-number" data-line-number="1415"></td>
        <td id="LC1415" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> ImGuiStyle</span></td>
      </tr>
      <tr>
        <td id="L1416" class="blob-num js-line-number" data-line-number="1416"></td>
        <td id="LC1416" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> You may modify the ImGui::GetStyle() main instance during initialization and before NewFrame().</span></td>
      </tr>
      <tr>
        <td id="L1417" class="blob-num js-line-number" data-line-number="1417"></td>
        <td id="LC1417" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> During the frame, use ImGui::PushStyleVar(ImGuiStyleVar_XXXX)/PopStyleVar() to alter the main style values,</span></td>
      </tr>
      <tr>
        <td id="L1418" class="blob-num js-line-number" data-line-number="1418"></td>
        <td id="LC1418" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> and ImGui::PushStyleColor(ImGuiCol_XXX)/PopStyleColor() for colors.</span></td>
      </tr>
      <tr>
        <td id="L1419" class="blob-num js-line-number" data-line-number="1419"></td>
        <td id="LC1419" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1420" class="blob-num js-line-number" data-line-number="1420"></td>
        <td id="LC1420" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1421" class="blob-num js-line-number" data-line-number="1421"></td>
        <td id="LC1421" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiStyle</span></td>
      </tr>
      <tr>
        <td id="L1422" class="blob-num js-line-number" data-line-number="1422"></td>
        <td id="LC1422" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1423" class="blob-num js-line-number" data-line-number="1423"></td>
        <td id="LC1423" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       Alpha;                      <span class="pl-c"><span class="pl-c">//</span> Global alpha applies to everything in Dear ImGui.</span></td>
      </tr>
      <tr>
        <td id="L1424" class="blob-num js-line-number" data-line-number="1424"></td>
        <td id="LC1424" class="blob-code blob-code-inner js-file-line">    ImVec2      WindowPadding;              <span class="pl-c"><span class="pl-c">//</span> Padding within a window.</span></td>
      </tr>
      <tr>
        <td id="L1425" class="blob-num js-line-number" data-line-number="1425"></td>
        <td id="LC1425" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       WindowRounding;             <span class="pl-c"><span class="pl-c">//</span> Radius of window corners rounding. Set to 0.0f to have rectangular windows. Large values tend to lead to variety of artifacts and are not recommended.</span></td>
      </tr>
      <tr>
        <td id="L1426" class="blob-num js-line-number" data-line-number="1426"></td>
        <td id="LC1426" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       WindowBorderSize;           <span class="pl-c"><span class="pl-c">//</span> Thickness of border around windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly).</span></td>
      </tr>
      <tr>
        <td id="L1427" class="blob-num js-line-number" data-line-number="1427"></td>
        <td id="LC1427" class="blob-code blob-code-inner js-file-line">    ImVec2      WindowMinSize;              <span class="pl-c"><span class="pl-c">//</span> Minimum window size. This is a global setting. If you want to constraint individual windows, use SetNextWindowSizeConstraints().</span></td>
      </tr>
      <tr>
        <td id="L1428" class="blob-num js-line-number" data-line-number="1428"></td>
        <td id="LC1428" class="blob-code blob-code-inner js-file-line">    ImVec2      WindowTitleAlign;           <span class="pl-c"><span class="pl-c">//</span> Alignment for title bar text. Defaults to (0.0f,0.5f) for left-aligned,vertically centered.</span></td>
      </tr>
      <tr>
        <td id="L1429" class="blob-num js-line-number" data-line-number="1429"></td>
        <td id="LC1429" class="blob-code blob-code-inner js-file-line">    ImGuiDir    WindowMenuButtonPosition;   <span class="pl-c"><span class="pl-c">//</span> Side of the collapsing/docking button in the title bar (None/Left/Right). Defaults to ImGuiDir_Left.</span></td>
      </tr>
      <tr>
        <td id="L1430" class="blob-num js-line-number" data-line-number="1430"></td>
        <td id="LC1430" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       ChildRounding;              <span class="pl-c"><span class="pl-c">//</span> Radius of child window corners rounding. Set to 0.0f to have rectangular windows.</span></td>
      </tr>
      <tr>
        <td id="L1431" class="blob-num js-line-number" data-line-number="1431"></td>
        <td id="LC1431" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       ChildBorderSize;            <span class="pl-c"><span class="pl-c">//</span> Thickness of border around child windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly).</span></td>
      </tr>
      <tr>
        <td id="L1432" class="blob-num js-line-number" data-line-number="1432"></td>
        <td id="LC1432" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       PopupRounding;              <span class="pl-c"><span class="pl-c">//</span> Radius of popup window corners rounding. (Note that tooltip windows use WindowRounding)</span></td>
      </tr>
      <tr>
        <td id="L1433" class="blob-num js-line-number" data-line-number="1433"></td>
        <td id="LC1433" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       PopupBorderSize;            <span class="pl-c"><span class="pl-c">//</span> Thickness of border around popup/tooltip windows. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly).</span></td>
      </tr>
      <tr>
        <td id="L1434" class="blob-num js-line-number" data-line-number="1434"></td>
        <td id="LC1434" class="blob-code blob-code-inner js-file-line">    ImVec2      FramePadding;               <span class="pl-c"><span class="pl-c">//</span> Padding within a framed rectangle (used by most widgets).</span></td>
      </tr>
      <tr>
        <td id="L1435" class="blob-num js-line-number" data-line-number="1435"></td>
        <td id="LC1435" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       FrameRounding;              <span class="pl-c"><span class="pl-c">//</span> Radius of frame corners rounding. Set to 0.0f to have rectangular frame (used by most widgets).</span></td>
      </tr>
      <tr>
        <td id="L1436" class="blob-num js-line-number" data-line-number="1436"></td>
        <td id="LC1436" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       FrameBorderSize;            <span class="pl-c"><span class="pl-c">//</span> Thickness of border around frames. Generally set to 0.0f or 1.0f. (Other values are not well tested and more CPU/GPU costly).</span></td>
      </tr>
      <tr>
        <td id="L1437" class="blob-num js-line-number" data-line-number="1437"></td>
        <td id="LC1437" class="blob-code blob-code-inner js-file-line">    ImVec2      ItemSpacing;                <span class="pl-c"><span class="pl-c">//</span> Horizontal and vertical spacing between widgets/lines.</span></td>
      </tr>
      <tr>
        <td id="L1438" class="blob-num js-line-number" data-line-number="1438"></td>
        <td id="LC1438" class="blob-code blob-code-inner js-file-line">    ImVec2      ItemInnerSpacing;           <span class="pl-c"><span class="pl-c">//</span> Horizontal and vertical spacing between within elements of a composed widget (e.g. a slider and its label).</span></td>
      </tr>
      <tr>
        <td id="L1439" class="blob-num js-line-number" data-line-number="1439"></td>
        <td id="LC1439" class="blob-code blob-code-inner js-file-line">    ImVec2      TouchExtraPadding;          <span class="pl-c"><span class="pl-c">//</span> Expand reactive bounding box for touch-based system where touch position is not accurate enough. Unfortunately we don&#39;t sort widgets so priority on overlap will always be given to the first widget. So don&#39;t grow this too much!</span></td>
      </tr>
      <tr>
        <td id="L1440" class="blob-num js-line-number" data-line-number="1440"></td>
        <td id="LC1440" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       IndentSpacing;              <span class="pl-c"><span class="pl-c">//</span> Horizontal indentation when e.g. entering a tree node. Generally == (FontSize + FramePadding.x*2).</span></td>
      </tr>
      <tr>
        <td id="L1441" class="blob-num js-line-number" data-line-number="1441"></td>
        <td id="LC1441" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       ColumnsMinSpacing;          <span class="pl-c"><span class="pl-c">//</span> Minimum horizontal spacing between two columns. Preferably &gt; (FramePadding.x + 1).</span></td>
      </tr>
      <tr>
        <td id="L1442" class="blob-num js-line-number" data-line-number="1442"></td>
        <td id="LC1442" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       ScrollbarSize;              <span class="pl-c"><span class="pl-c">//</span> Width of the vertical scrollbar, Height of the horizontal scrollbar.</span></td>
      </tr>
      <tr>
        <td id="L1443" class="blob-num js-line-number" data-line-number="1443"></td>
        <td id="LC1443" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       ScrollbarRounding;          <span class="pl-c"><span class="pl-c">//</span> Radius of grab corners for scrollbar.</span></td>
      </tr>
      <tr>
        <td id="L1444" class="blob-num js-line-number" data-line-number="1444"></td>
        <td id="LC1444" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       GrabMinSize;                <span class="pl-c"><span class="pl-c">//</span> Minimum width/height of a grab box for slider/scrollbar.</span></td>
      </tr>
      <tr>
        <td id="L1445" class="blob-num js-line-number" data-line-number="1445"></td>
        <td id="LC1445" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       GrabRounding;               <span class="pl-c"><span class="pl-c">//</span> Radius of grabs corners rounding. Set to 0.0f to have rectangular slider grabs.</span></td>
      </tr>
      <tr>
        <td id="L1446" class="blob-num js-line-number" data-line-number="1446"></td>
        <td id="LC1446" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       TabRounding;                <span class="pl-c"><span class="pl-c">//</span> Radius of upper corners of a tab. Set to 0.0f to have rectangular tabs.</span></td>
      </tr>
      <tr>
        <td id="L1447" class="blob-num js-line-number" data-line-number="1447"></td>
        <td id="LC1447" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       TabBorderSize;              <span class="pl-c"><span class="pl-c">//</span> Thickness of border around tabs.</span></td>
      </tr>
      <tr>
        <td id="L1448" class="blob-num js-line-number" data-line-number="1448"></td>
        <td id="LC1448" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       TabMinWidthForUnselectedCloseButton; <span class="pl-c"><span class="pl-c">//</span> Minimum width for close button to appears on an unselected tab when hovered. Set to 0.0f to always show when hovering, set to FLT_MAX to never show close button unless selected.</span></td>
      </tr>
      <tr>
        <td id="L1449" class="blob-num js-line-number" data-line-number="1449"></td>
        <td id="LC1449" class="blob-code blob-code-inner js-file-line">    ImGuiDir    ColorButtonPosition;        <span class="pl-c"><span class="pl-c">//</span> Side of the color button in the ColorEdit4 widget (left/right). Defaults to ImGuiDir_Right.</span></td>
      </tr>
      <tr>
        <td id="L1450" class="blob-num js-line-number" data-line-number="1450"></td>
        <td id="LC1450" class="blob-code blob-code-inner js-file-line">    ImVec2      ButtonTextAlign;            <span class="pl-c"><span class="pl-c">//</span> Alignment of button text when button is larger than text. Defaults to (0.5f, 0.5f) (centered).</span></td>
      </tr>
      <tr>
        <td id="L1451" class="blob-num js-line-number" data-line-number="1451"></td>
        <td id="LC1451" class="blob-code blob-code-inner js-file-line">    ImVec2      SelectableTextAlign;        <span class="pl-c"><span class="pl-c">//</span> Alignment of selectable text. Defaults to (0.0f, 0.0f) (top-left aligned). It&#39;s generally important to keep this left-aligned if you want to lay multiple items on a same line.</span></td>
      </tr>
      <tr>
        <td id="L1452" class="blob-num js-line-number" data-line-number="1452"></td>
        <td id="LC1452" class="blob-code blob-code-inner js-file-line">    ImVec2      DisplayWindowPadding;       <span class="pl-c"><span class="pl-c">//</span> Window position are clamped to be visible within the display area or monitors by at least this amount. Only applies to regular windows.</span></td>
      </tr>
      <tr>
        <td id="L1453" class="blob-num js-line-number" data-line-number="1453"></td>
        <td id="LC1453" class="blob-code blob-code-inner js-file-line">    ImVec2      DisplaySafeAreaPadding;     <span class="pl-c"><span class="pl-c">//</span> If you cannot see the edges of your screen (e.g. on a TV) increase the safe area padding. Apply to popups/tooltips as well regular windows. NB: Prefer configuring your TV sets correctly!</span></td>
      </tr>
      <tr>
        <td id="L1454" class="blob-num js-line-number" data-line-number="1454"></td>
        <td id="LC1454" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       MouseCursorScale;           <span class="pl-c"><span class="pl-c">//</span> Scale software rendered mouse cursor (when io.MouseDrawCursor is enabled). May be removed later.</span></td>
      </tr>
      <tr>
        <td id="L1455" class="blob-num js-line-number" data-line-number="1455"></td>
        <td id="LC1455" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        AntiAliasedLines;           <span class="pl-c"><span class="pl-c">//</span> Enable anti-aliased lines/borders. Disable if you are really tight on CPU/GPU. Latched at the beginning of the frame (copied to ImDrawList).</span></td>
      </tr>
      <tr>
        <td id="L1456" class="blob-num js-line-number" data-line-number="1456"></td>
        <td id="LC1456" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        AntiAliasedLinesUseTex;     <span class="pl-c"><span class="pl-c">//</span> Enable anti-aliased lines/borders using textures where possible. Require back-end to render with bilinear filtering. Latched at the beginning of the frame (copied to ImDrawList).</span></td>
      </tr>
      <tr>
        <td id="L1457" class="blob-num js-line-number" data-line-number="1457"></td>
        <td id="LC1457" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        AntiAliasedFill;            <span class="pl-c"><span class="pl-c">//</span> Enable anti-aliased edges around filled shapes (rounded rectangles, circles, etc.). Disable if you are really tight on CPU/GPU. Latched at the beginning of the frame (copied to ImDrawList).</span></td>
      </tr>
      <tr>
        <td id="L1458" class="blob-num js-line-number" data-line-number="1458"></td>
        <td id="LC1458" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       CurveTessellationTol;       <span class="pl-c"><span class="pl-c">//</span> Tessellation tolerance when using PathBezierCurveTo() without a specific number of segments. Decrease for highly tessellated curves (higher quality, more polygons), increase to reduce quality.</span></td>
      </tr>
      <tr>
        <td id="L1459" class="blob-num js-line-number" data-line-number="1459"></td>
        <td id="LC1459" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       CircleSegmentMaxError;      <span class="pl-c"><span class="pl-c">//</span> Maximum error (in pixels) allowed when using AddCircle()/AddCircleFilled() or drawing rounded corner rectangles with no explicit segment count specified. Decrease for higher quality but more geometry.</span></td>
      </tr>
      <tr>
        <td id="L1460" class="blob-num js-line-number" data-line-number="1460"></td>
        <td id="LC1460" class="blob-code blob-code-inner js-file-line">    ImVec4      Colors[ImGuiCol_COUNT];</td>
      </tr>
      <tr>
        <td id="L1461" class="blob-num js-line-number" data-line-number="1461"></td>
        <td id="LC1461" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1462" class="blob-num js-line-number" data-line-number="1462"></td>
        <td id="LC1462" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-en">ImGuiStyle</span>();</td>
      </tr>
      <tr>
        <td id="L1463" class="blob-num js-line-number" data-line-number="1463"></td>
        <td id="LC1463" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span> <span class="pl-en">ScaleAllSizes</span>(<span class="pl-k">float</span> scale_factor);</td>
      </tr>
      <tr>
        <td id="L1464" class="blob-num js-line-number" data-line-number="1464"></td>
        <td id="LC1464" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1465" class="blob-num js-line-number" data-line-number="1465"></td>
        <td id="LC1465" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1466" class="blob-num js-line-number" data-line-number="1466"></td>
        <td id="LC1466" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1467" class="blob-num js-line-number" data-line-number="1467"></td>
        <td id="LC1467" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> ImGuiIO</span></td>
      </tr>
      <tr>
        <td id="L1468" class="blob-num js-line-number" data-line-number="1468"></td>
        <td id="LC1468" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Communicate most settings and inputs/outputs to Dear ImGui using this structure.</span></td>
      </tr>
      <tr>
        <td id="L1469" class="blob-num js-line-number" data-line-number="1469"></td>
        <td id="LC1469" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Access via ImGui::GetIO(). Read &#39;Programmer guide&#39; section in .cpp file for general usage.</span></td>
      </tr>
      <tr>
        <td id="L1470" class="blob-num js-line-number" data-line-number="1470"></td>
        <td id="LC1470" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1471" class="blob-num js-line-number" data-line-number="1471"></td>
        <td id="LC1471" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1472" class="blob-num js-line-number" data-line-number="1472"></td>
        <td id="LC1472" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiIO</span></td>
      </tr>
      <tr>
        <td id="L1473" class="blob-num js-line-number" data-line-number="1473"></td>
        <td id="LC1473" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1474" class="blob-num js-line-number" data-line-number="1474"></td>
        <td id="LC1474" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1475" class="blob-num js-line-number" data-line-number="1475"></td>
        <td id="LC1475" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Configuration (fill once)                // Default value</span></td>
      </tr>
      <tr>
        <td id="L1476" class="blob-num js-line-number" data-line-number="1476"></td>
        <td id="LC1476" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1477" class="blob-num js-line-number" data-line-number="1477"></td>
        <td id="LC1477" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1478" class="blob-num js-line-number" data-line-number="1478"></td>
        <td id="LC1478" class="blob-code blob-code-inner js-file-line">    ImGuiConfigFlags   ConfigFlags;             <span class="pl-c"><span class="pl-c">//</span> = 0              // See ImGuiConfigFlags_ enum. Set by user/application. Gamepad/keyboard navigation options, etc.</span></td>
      </tr>
      <tr>
        <td id="L1479" class="blob-num js-line-number" data-line-number="1479"></td>
        <td id="LC1479" class="blob-code blob-code-inner js-file-line">    ImGuiBackendFlags  BackendFlags;            <span class="pl-c"><span class="pl-c">//</span> = 0              // See ImGuiBackendFlags_ enum. Set by back-end (imgui_impl_xxx files or custom back-end) to communicate features supported by the back-end.</span></td>
      </tr>
      <tr>
        <td id="L1480" class="blob-num js-line-number" data-line-number="1480"></td>
        <td id="LC1480" class="blob-code blob-code-inner js-file-line">    ImVec2      DisplaySize;                    <span class="pl-c"><span class="pl-c">//</span> &lt;unset&gt;          // Main display size, in pixels.</span></td>
      </tr>
      <tr>
        <td id="L1481" class="blob-num js-line-number" data-line-number="1481"></td>
        <td id="LC1481" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       DeltaTime;                      <span class="pl-c"><span class="pl-c">//</span> = 1.0f/60.0f     // Time elapsed since last frame, in seconds.</span></td>
      </tr>
      <tr>
        <td id="L1482" class="blob-num js-line-number" data-line-number="1482"></td>
        <td id="LC1482" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       IniSavingRate;                  <span class="pl-c"><span class="pl-c">//</span> = 5.0f           // Minimum time between saving positions/sizes to .ini file, in seconds.</span></td>
      </tr>
      <tr>
        <td id="L1483" class="blob-num js-line-number" data-line-number="1483"></td>
        <td id="LC1483" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> <span class="pl-k">char</span>* IniFilename;                    <span class="pl-c"><span class="pl-c">//</span> = &quot;imgui.ini&quot;    // Path to .ini file. Set NULL to disable automatic .ini loading/saving, if e.g. you want to manually load/save from memory.</span></td>
      </tr>
      <tr>
        <td id="L1484" class="blob-num js-line-number" data-line-number="1484"></td>
        <td id="LC1484" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> <span class="pl-k">char</span>* LogFilename;                    <span class="pl-c"><span class="pl-c">//</span> = &quot;imgui_log.txt&quot;// Path to .log file (default parameter to ImGui::LogToFile when no file is specified).</span></td>
      </tr>
      <tr>
        <td id="L1485" class="blob-num js-line-number" data-line-number="1485"></td>
        <td id="LC1485" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       MouseDoubleClickTime;           <span class="pl-c"><span class="pl-c">//</span> = 0.30f          // Time for a double-click, in seconds.</span></td>
      </tr>
      <tr>
        <td id="L1486" class="blob-num js-line-number" data-line-number="1486"></td>
        <td id="LC1486" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       MouseDoubleClickMaxDist;        <span class="pl-c"><span class="pl-c">//</span> = 6.0f           // Distance threshold to stay in to validate a double-click, in pixels.</span></td>
      </tr>
      <tr>
        <td id="L1487" class="blob-num js-line-number" data-line-number="1487"></td>
        <td id="LC1487" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       MouseDragThreshold;             <span class="pl-c"><span class="pl-c">//</span> = 6.0f           // Distance threshold before considering we are dragging.</span></td>
      </tr>
      <tr>
        <td id="L1488" class="blob-num js-line-number" data-line-number="1488"></td>
        <td id="LC1488" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>         KeyMap[ImGuiKey_COUNT];         <span class="pl-c"><span class="pl-c">//</span> &lt;unset&gt;          // Map of indices into the KeysDown[512] entries array which represent your &quot;native&quot; keyboard state.</span></td>
      </tr>
      <tr>
        <td id="L1489" class="blob-num js-line-number" data-line-number="1489"></td>
        <td id="LC1489" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       KeyRepeatDelay;                 <span class="pl-c"><span class="pl-c">//</span> = 0.250f         // When holding a key/button, time before it starts repeating, in seconds (for buttons in Repeat mode, etc.).</span></td>
      </tr>
      <tr>
        <td id="L1490" class="blob-num js-line-number" data-line-number="1490"></td>
        <td id="LC1490" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       KeyRepeatRate;                  <span class="pl-c"><span class="pl-c">//</span> = 0.050f         // When holding a key/button, rate at which it repeats, in seconds.</span></td>
      </tr>
      <tr>
        <td id="L1491" class="blob-num js-line-number" data-line-number="1491"></td>
        <td id="LC1491" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*       UserData;                       <span class="pl-c"><span class="pl-c">//</span> = NULL           // Store your own data for retrieval by callbacks.</span></td>
      </tr>
      <tr>
        <td id="L1492" class="blob-num js-line-number" data-line-number="1492"></td>
        <td id="LC1492" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1493" class="blob-num js-line-number" data-line-number="1493"></td>
        <td id="LC1493" class="blob-code blob-code-inner js-file-line">    ImFontAtlas*Fonts;                          <span class="pl-c"><span class="pl-c">//</span> &lt;auto&gt;           // Font atlas: load, rasterize and pack one or more fonts into a single texture.</span></td>
      </tr>
      <tr>
        <td id="L1494" class="blob-num js-line-number" data-line-number="1494"></td>
        <td id="LC1494" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       FontGlobalScale;                <span class="pl-c"><span class="pl-c">//</span> = 1.0f           // Global scale all fonts</span></td>
      </tr>
      <tr>
        <td id="L1495" class="blob-num js-line-number" data-line-number="1495"></td>
        <td id="LC1495" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        FontAllowUserScaling;           <span class="pl-c"><span class="pl-c">//</span> = false          // Allow user scaling text of individual window with CTRL+Wheel.</span></td>
      </tr>
      <tr>
        <td id="L1496" class="blob-num js-line-number" data-line-number="1496"></td>
        <td id="LC1496" class="blob-code blob-code-inner js-file-line">    ImFont*     FontDefault;                    <span class="pl-c"><span class="pl-c">//</span> = NULL           // Font to use on NewFrame(). Use NULL to uses Fonts-&gt;Fonts[0].</span></td>
      </tr>
      <tr>
        <td id="L1497" class="blob-num js-line-number" data-line-number="1497"></td>
        <td id="LC1497" class="blob-code blob-code-inner js-file-line">    ImVec2      DisplayFramebufferScale;        <span class="pl-c"><span class="pl-c">//</span> = (1, 1)         // For retina display or other situations where window coordinates are different from framebuffer coordinates. This generally ends up in ImDrawData::FramebufferScale.</span></td>
      </tr>
      <tr>
        <td id="L1498" class="blob-num js-line-number" data-line-number="1498"></td>
        <td id="LC1498" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1499" class="blob-num js-line-number" data-line-number="1499"></td>
        <td id="LC1499" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Miscellaneous options</span></td>
      </tr>
      <tr>
        <td id="L1500" class="blob-num js-line-number" data-line-number="1500"></td>
        <td id="LC1500" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        MouseDrawCursor;                <span class="pl-c"><span class="pl-c">//</span> = false          // Request ImGui to draw a mouse cursor for you (if you are on a platform without a mouse cursor). Cannot be easily renamed to &#39;io.ConfigXXX&#39; because this is frequently used by back-end implementations.</span></td>
      </tr>
      <tr>
        <td id="L1501" class="blob-num js-line-number" data-line-number="1501"></td>
        <td id="LC1501" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        ConfigMacOSXBehaviors;          <span class="pl-c"><span class="pl-c">//</span> = defined(__APPLE__) // OS X style: Text editing cursor movement using Alt instead of Ctrl, Shortcuts using Cmd/Super instead of Ctrl, Line/Text Start and End using Cmd+Arrows instead of Home/End, Double click selects by word instead of selecting whole text, Multi-selection in lists uses Cmd/Super instead of Ctrl (was called io.OptMacOSXBehaviors prior to 1.63)</span></td>
      </tr>
      <tr>
        <td id="L1502" class="blob-num js-line-number" data-line-number="1502"></td>
        <td id="LC1502" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        ConfigInputTextCursorBlink;     <span class="pl-c"><span class="pl-c">//</span> = true           // Set to false to disable blinking cursor, for users who consider it distracting. (was called: io.OptCursorBlink prior to 1.63)</span></td>
      </tr>
      <tr>
        <td id="L1503" class="blob-num js-line-number" data-line-number="1503"></td>
        <td id="LC1503" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        ConfigWindowsResizeFromEdges;   <span class="pl-c"><span class="pl-c">//</span> = true           // Enable resizing of windows from their edges and from the lower-left corner. This requires (io.BackendFlags &amp; ImGuiBackendFlags_HasMouseCursors) because it needs mouse cursor feedback. (This used to be a per-window ImGuiWindowFlags_ResizeFromAnySide flag)</span></td>
      </tr>
      <tr>
        <td id="L1504" class="blob-num js-line-number" data-line-number="1504"></td>
        <td id="LC1504" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        ConfigWindowsMoveFromTitleBarOnly; <span class="pl-c"><span class="pl-c">//</span> = false       // [BETA] Set to true to only allow moving windows when clicked+dragged from the title bar. Windows without a title bar are not affected.</span></td>
      </tr>
      <tr>
        <td id="L1505" class="blob-num js-line-number" data-line-number="1505"></td>
        <td id="LC1505" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       ConfigWindowsMemoryCompactTimer;<span class="pl-c"><span class="pl-c">//</span> = 60.0f          // [BETA] Compact window memory usage when unused. Set to -1.0f to disable.</span></td>
      </tr>
      <tr>
        <td id="L1506" class="blob-num js-line-number" data-line-number="1506"></td>
        <td id="LC1506" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1507" class="blob-num js-line-number" data-line-number="1507"></td>
        <td id="LC1507" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1508" class="blob-num js-line-number" data-line-number="1508"></td>
        <td id="LC1508" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Platform Functions</span></td>
      </tr>
      <tr>
        <td id="L1509" class="blob-num js-line-number" data-line-number="1509"></td>
        <td id="LC1509" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> (the imgui_impl_xxxx back-end files are setting those up for you)</span></td>
      </tr>
      <tr>
        <td id="L1510" class="blob-num js-line-number" data-line-number="1510"></td>
        <td id="LC1510" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1511" class="blob-num js-line-number" data-line-number="1511"></td>
        <td id="LC1511" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1512" class="blob-num js-line-number" data-line-number="1512"></td>
        <td id="LC1512" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Optional: Platform/Renderer back-end name (informational only! will be displayed in About Window) + User data for back-end/wrappers to store their own stuff.</span></td>
      </tr>
      <tr>
        <td id="L1513" class="blob-num js-line-number" data-line-number="1513"></td>
        <td id="LC1513" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> <span class="pl-k">char</span>* BackendPlatformName;            <span class="pl-c"><span class="pl-c">//</span> = NULL</span></td>
      </tr>
      <tr>
        <td id="L1514" class="blob-num js-line-number" data-line-number="1514"></td>
        <td id="LC1514" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> <span class="pl-k">char</span>* BackendRendererName;            <span class="pl-c"><span class="pl-c">//</span> = NULL</span></td>
      </tr>
      <tr>
        <td id="L1515" class="blob-num js-line-number" data-line-number="1515"></td>
        <td id="LC1515" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*       BackendPlatformUserData;        <span class="pl-c"><span class="pl-c">//</span> = NULL           // User data for platform back-end</span></td>
      </tr>
      <tr>
        <td id="L1516" class="blob-num js-line-number" data-line-number="1516"></td>
        <td id="LC1516" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*       BackendRendererUserData;        <span class="pl-c"><span class="pl-c">//</span> = NULL           // User data for renderer back-end</span></td>
      </tr>
      <tr>
        <td id="L1517" class="blob-num js-line-number" data-line-number="1517"></td>
        <td id="LC1517" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*       BackendLanguageUserData;        <span class="pl-c"><span class="pl-c">//</span> = NULL           // User data for non C++ programming language back-end</span></td>
      </tr>
      <tr>
        <td id="L1518" class="blob-num js-line-number" data-line-number="1518"></td>
        <td id="LC1518" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1519" class="blob-num js-line-number" data-line-number="1519"></td>
        <td id="LC1519" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Optional: Access OS clipboard</span></td>
      </tr>
      <tr>
        <td id="L1520" class="blob-num js-line-number" data-line-number="1520"></td>
        <td id="LC1520" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> (default to use native Win32 clipboard on Windows, otherwise uses a private clipboard. Override to access OS clipboard on other architectures)</span></td>
      </tr>
      <tr>
        <td id="L1521" class="blob-num js-line-number" data-line-number="1521"></td>
        <td id="LC1521" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> <span class="pl-k">char</span>* (*GetClipboardTextFn)(<span class="pl-k">void</span>* user_data);</td>
      </tr>
      <tr>
        <td id="L1522" class="blob-num js-line-number" data-line-number="1522"></td>
        <td id="LC1522" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">void</span>        (*SetClipboardTextFn)(<span class="pl-k">void</span>* user_data, <span class="pl-k">const</span> <span class="pl-k">char</span>* text);</td>
      </tr>
      <tr>
        <td id="L1523" class="blob-num js-line-number" data-line-number="1523"></td>
        <td id="LC1523" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*       ClipboardUserData;</td>
      </tr>
      <tr>
        <td id="L1524" class="blob-num js-line-number" data-line-number="1524"></td>
        <td id="LC1524" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1525" class="blob-num js-line-number" data-line-number="1525"></td>
        <td id="LC1525" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Optional: Notify OS Input Method Editor of the screen position of your cursor for text input position (e.g. when using Japanese/Chinese IME on Windows)</span></td>
      </tr>
      <tr>
        <td id="L1526" class="blob-num js-line-number" data-line-number="1526"></td>
        <td id="LC1526" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> (default to use native imm32 api on Windows)</span></td>
      </tr>
      <tr>
        <td id="L1527" class="blob-num js-line-number" data-line-number="1527"></td>
        <td id="LC1527" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">void</span>        (*ImeSetInputScreenPosFn)(<span class="pl-k">int</span> x, <span class="pl-k">int</span> y);</td>
      </tr>
      <tr>
        <td id="L1528" class="blob-num js-line-number" data-line-number="1528"></td>
        <td id="LC1528" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*       ImeWindowHandle;                <span class="pl-c"><span class="pl-c">//</span> = NULL           // (Windows) Set this to your HWND to get automatic IME cursor positioning.</span></td>
      </tr>
      <tr>
        <td id="L1529" class="blob-num js-line-number" data-line-number="1529"></td>
        <td id="LC1529" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1530" class="blob-num js-line-number" data-line-number="1530"></td>
        <td id="LC1530" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_DISABLE_OBSOLETE_FUNCTIONS</td>
      </tr>
      <tr>
        <td id="L1531" class="blob-num js-line-number" data-line-number="1531"></td>
        <td id="LC1531" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [OBSOLETE since 1.60+] Rendering function, will be automatically called in Render(). Please call your rendering function yourself now!</span></td>
      </tr>
      <tr>
        <td id="L1532" class="blob-num js-line-number" data-line-number="1532"></td>
        <td id="LC1532" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> You can obtain the ImDrawData* by calling ImGui::GetDrawData() after Render(). See example applications if you are unsure of how to implement this.</span></td>
      </tr>
      <tr>
        <td id="L1533" class="blob-num js-line-number" data-line-number="1533"></td>
        <td id="LC1533" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">void</span>        (*RenderDrawListsFn)(ImDrawData* data);</td>
      </tr>
      <tr>
        <td id="L1534" class="blob-num js-line-number" data-line-number="1534"></td>
        <td id="LC1534" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1535" class="blob-num js-line-number" data-line-number="1535"></td>
        <td id="LC1535" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> This is only here to keep ImGuiIO the same size/layout, so that IMGUI_DISABLE_OBSOLETE_FUNCTIONS can exceptionally be used outside of imconfig.h.</span></td>
      </tr>
      <tr>
        <td id="L1536" class="blob-num js-line-number" data-line-number="1536"></td>
        <td id="LC1536" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*       RenderDrawListsFnUnused;</td>
      </tr>
      <tr>
        <td id="L1537" class="blob-num js-line-number" data-line-number="1537"></td>
        <td id="LC1537" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1538" class="blob-num js-line-number" data-line-number="1538"></td>
        <td id="LC1538" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1539" class="blob-num js-line-number" data-line-number="1539"></td>
        <td id="LC1539" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1540" class="blob-num js-line-number" data-line-number="1540"></td>
        <td id="LC1540" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Input - Fill before calling NewFrame()</span></td>
      </tr>
      <tr>
        <td id="L1541" class="blob-num js-line-number" data-line-number="1541"></td>
        <td id="LC1541" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1542" class="blob-num js-line-number" data-line-number="1542"></td>
        <td id="LC1542" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1543" class="blob-num js-line-number" data-line-number="1543"></td>
        <td id="LC1543" class="blob-code blob-code-inner js-file-line">    ImVec2      MousePos;                       <span class="pl-c"><span class="pl-c">//</span> Mouse position, in pixels. Set to ImVec2(-FLT_MAX, -FLT_MAX) if mouse is unavailable (on another screen, etc.)</span></td>
      </tr>
      <tr>
        <td id="L1544" class="blob-num js-line-number" data-line-number="1544"></td>
        <td id="LC1544" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        MouseDown[<span class="pl-c1">5</span>];                   <span class="pl-c"><span class="pl-c">//</span> Mouse buttons: 0=left, 1=right, 2=middle + extras (ImGuiMouseButton_COUNT == 5). Dear ImGui mostly uses left and right buttons. Others buttons allows us to track if the mouse is being used by your application + available to user as a convenience via IsMouse** API.</span></td>
      </tr>
      <tr>
        <td id="L1545" class="blob-num js-line-number" data-line-number="1545"></td>
        <td id="LC1545" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       MouseWheel;                     <span class="pl-c"><span class="pl-c">//</span> Mouse wheel Vertical: 1 unit scrolls about 5 lines text.</span></td>
      </tr>
      <tr>
        <td id="L1546" class="blob-num js-line-number" data-line-number="1546"></td>
        <td id="LC1546" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       MouseWheelH;                    <span class="pl-c"><span class="pl-c">//</span> Mouse wheel Horizontal. Most users don&#39;t have a mouse with an horizontal wheel, may not be filled by all back-ends.</span></td>
      </tr>
      <tr>
        <td id="L1547" class="blob-num js-line-number" data-line-number="1547"></td>
        <td id="LC1547" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        KeyCtrl;                        <span class="pl-c"><span class="pl-c">//</span> Keyboard modifier pressed: Control</span></td>
      </tr>
      <tr>
        <td id="L1548" class="blob-num js-line-number" data-line-number="1548"></td>
        <td id="LC1548" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        KeyShift;                       <span class="pl-c"><span class="pl-c">//</span> Keyboard modifier pressed: Shift</span></td>
      </tr>
      <tr>
        <td id="L1549" class="blob-num js-line-number" data-line-number="1549"></td>
        <td id="LC1549" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        KeyAlt;                         <span class="pl-c"><span class="pl-c">//</span> Keyboard modifier pressed: Alt</span></td>
      </tr>
      <tr>
        <td id="L1550" class="blob-num js-line-number" data-line-number="1550"></td>
        <td id="LC1550" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        KeySuper;                       <span class="pl-c"><span class="pl-c">//</span> Keyboard modifier pressed: Cmd/Super/Windows</span></td>
      </tr>
      <tr>
        <td id="L1551" class="blob-num js-line-number" data-line-number="1551"></td>
        <td id="LC1551" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        KeysDown[<span class="pl-c1">512</span>];                  <span class="pl-c"><span class="pl-c">//</span> Keyboard keys that are pressed (ideally left in the &quot;native&quot; order your engine has access to keyboard keys, so you can use your own defines/enums for keys).</span></td>
      </tr>
      <tr>
        <td id="L1552" class="blob-num js-line-number" data-line-number="1552"></td>
        <td id="LC1552" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       NavInputs[ImGuiNavInput_COUNT]; <span class="pl-c"><span class="pl-c">//</span> Gamepad inputs. Cleared back to zero by EndFrame(). Keyboard keys will be auto-mapped and be written here by NewFrame().</span></td>
      </tr>
      <tr>
        <td id="L1553" class="blob-num js-line-number" data-line-number="1553"></td>
        <td id="LC1553" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1554" class="blob-num js-line-number" data-line-number="1554"></td>
        <td id="LC1554" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Functions</span></td>
      </tr>
      <tr>
        <td id="L1555" class="blob-num js-line-number" data-line-number="1555"></td>
        <td id="LC1555" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddInputCharacter</span>(<span class="pl-k">unsigned</span> <span class="pl-k">int</span> c);          <span class="pl-c"><span class="pl-c">//</span> Queue new character input</span></td>
      </tr>
      <tr>
        <td id="L1556" class="blob-num js-line-number" data-line-number="1556"></td>
        <td id="LC1556" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddInputCharacterUTF16</span>(ImWchar16 c);        <span class="pl-c"><span class="pl-c">//</span> Queue new character input from an UTF-16 character, it can be a surrogate</span></td>
      </tr>
      <tr>
        <td id="L1557" class="blob-num js-line-number" data-line-number="1557"></td>
        <td id="LC1557" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddInputCharactersUTF8</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str);    <span class="pl-c"><span class="pl-c">//</span> Queue new characters input from an UTF-8 string</span></td>
      </tr>
      <tr>
        <td id="L1558" class="blob-num js-line-number" data-line-number="1558"></td>
        <td id="LC1558" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">ClearInputCharacters</span>();                     <span class="pl-c"><span class="pl-c">//</span> Clear the text input buffer manually</span></td>
      </tr>
      <tr>
        <td id="L1559" class="blob-num js-line-number" data-line-number="1559"></td>
        <td id="LC1559" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1560" class="blob-num js-line-number" data-line-number="1560"></td>
        <td id="LC1560" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1561" class="blob-num js-line-number" data-line-number="1561"></td>
        <td id="LC1561" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Output - Updated by NewFrame() or EndFrame()/Render()</span></td>
      </tr>
      <tr>
        <td id="L1562" class="blob-num js-line-number" data-line-number="1562"></td>
        <td id="LC1562" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> (when reading from the io.WantCaptureMouse, io.WantCaptureKeyboard flags to dispatch your inputs, it is</span></td>
      </tr>
      <tr>
        <td id="L1563" class="blob-num js-line-number" data-line-number="1563"></td>
        <td id="LC1563" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>  generally easier and more correct to use their state BEFORE calling NewFrame(). See FAQ for details!)</span></td>
      </tr>
      <tr>
        <td id="L1564" class="blob-num js-line-number" data-line-number="1564"></td>
        <td id="LC1564" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1565" class="blob-num js-line-number" data-line-number="1565"></td>
        <td id="LC1565" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1566" class="blob-num js-line-number" data-line-number="1566"></td>
        <td id="LC1566" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        WantCaptureMouse;               <span class="pl-c"><span class="pl-c">//</span> Set when Dear ImGui will use mouse inputs, in this case do not dispatch them to your main game/application (either way, always pass on mouse inputs to imgui). (e.g. unclicked mouse is hovering over an imgui window, widget is active, mouse was clicked over an imgui window, etc.).</span></td>
      </tr>
      <tr>
        <td id="L1567" class="blob-num js-line-number" data-line-number="1567"></td>
        <td id="LC1567" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        WantCaptureKeyboard;            <span class="pl-c"><span class="pl-c">//</span> Set when Dear ImGui will use keyboard inputs, in this case do not dispatch them to your main game/application (either way, always pass keyboard inputs to imgui). (e.g. InputText active, or an imgui window is focused and navigation is enabled, etc.).</span></td>
      </tr>
      <tr>
        <td id="L1568" class="blob-num js-line-number" data-line-number="1568"></td>
        <td id="LC1568" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        WantTextInput;                  <span class="pl-c"><span class="pl-c">//</span> Mobile/console: when set, you may display an on-screen keyboard. This is set by Dear ImGui when it wants textual keyboard input to happen (e.g. when a InputText widget is active).</span></td>
      </tr>
      <tr>
        <td id="L1569" class="blob-num js-line-number" data-line-number="1569"></td>
        <td id="LC1569" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        WantSetMousePos;                <span class="pl-c"><span class="pl-c">//</span> MousePos has been altered, back-end should reposition mouse on next frame. Rarely used! Set only when ImGuiConfigFlags_NavEnableSetMousePos flag is enabled.</span></td>
      </tr>
      <tr>
        <td id="L1570" class="blob-num js-line-number" data-line-number="1570"></td>
        <td id="LC1570" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        WantSaveIniSettings;            <span class="pl-c"><span class="pl-c">//</span> When manual .ini load/save is active (io.IniFilename == NULL), this will be set to notify your application that you can call SaveIniSettingsToMemory() and save yourself. Important: clear io.WantSaveIniSettings yourself after saving!</span></td>
      </tr>
      <tr>
        <td id="L1571" class="blob-num js-line-number" data-line-number="1571"></td>
        <td id="LC1571" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        NavActive;                      <span class="pl-c"><span class="pl-c">//</span> Keyboard/Gamepad navigation is currently allowed (will handle ImGuiKey_NavXXX events) = a window is focused and it doesn&#39;t use the ImGuiWindowFlags_NoNavInputs flag.</span></td>
      </tr>
      <tr>
        <td id="L1572" class="blob-num js-line-number" data-line-number="1572"></td>
        <td id="LC1572" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        NavVisible;                     <span class="pl-c"><span class="pl-c">//</span> Keyboard/Gamepad navigation is visible and allowed (will handle ImGuiKey_NavXXX events).</span></td>
      </tr>
      <tr>
        <td id="L1573" class="blob-num js-line-number" data-line-number="1573"></td>
        <td id="LC1573" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       Framerate;                      <span class="pl-c"><span class="pl-c">//</span> Application framerate estimate, in frame per second. Solely for convenience. Rolling average estimation based on io.DeltaTime over 120 frames.</span></td>
      </tr>
      <tr>
        <td id="L1574" class="blob-num js-line-number" data-line-number="1574"></td>
        <td id="LC1574" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>         MetricsRenderVertices;          <span class="pl-c"><span class="pl-c">//</span> Vertices output during last call to Render()</span></td>
      </tr>
      <tr>
        <td id="L1575" class="blob-num js-line-number" data-line-number="1575"></td>
        <td id="LC1575" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>         MetricsRenderIndices;           <span class="pl-c"><span class="pl-c">//</span> Indices output during last call to Render() = number of triangles * 3</span></td>
      </tr>
      <tr>
        <td id="L1576" class="blob-num js-line-number" data-line-number="1576"></td>
        <td id="LC1576" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>         MetricsRenderWindows;           <span class="pl-c"><span class="pl-c">//</span> Number of visible windows</span></td>
      </tr>
      <tr>
        <td id="L1577" class="blob-num js-line-number" data-line-number="1577"></td>
        <td id="LC1577" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>         MetricsActiveWindows;           <span class="pl-c"><span class="pl-c">//</span> Number of active windows</span></td>
      </tr>
      <tr>
        <td id="L1578" class="blob-num js-line-number" data-line-number="1578"></td>
        <td id="LC1578" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>         MetricsActiveAllocations;       <span class="pl-c"><span class="pl-c">//</span> Number of active allocations, updated by MemAlloc/MemFree based on current context. May be off if you have multiple imgui contexts.</span></td>
      </tr>
      <tr>
        <td id="L1579" class="blob-num js-line-number" data-line-number="1579"></td>
        <td id="LC1579" class="blob-code blob-code-inner js-file-line">    ImVec2      MouseDelta;                     <span class="pl-c"><span class="pl-c">//</span> Mouse delta. Note that this is zero if either current or previous position are invalid (-FLT_MAX,-FLT_MAX), so a disappearing/reappearing mouse won&#39;t have a huge delta.</span></td>
      </tr>
      <tr>
        <td id="L1580" class="blob-num js-line-number" data-line-number="1580"></td>
        <td id="LC1580" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1581" class="blob-num js-line-number" data-line-number="1581"></td>
        <td id="LC1581" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1582" class="blob-num js-line-number" data-line-number="1582"></td>
        <td id="LC1582" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal] Dear ImGui will maintain those fields. Forward compatibility not guaranteed!</span></td>
      </tr>
      <tr>
        <td id="L1583" class="blob-num js-line-number" data-line-number="1583"></td>
        <td id="LC1583" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1584" class="blob-num js-line-number" data-line-number="1584"></td>
        <td id="LC1584" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1585" class="blob-num js-line-number" data-line-number="1585"></td>
        <td id="LC1585" class="blob-code blob-code-inner js-file-line">    ImGuiKeyModFlags KeyMods;                   <span class="pl-c"><span class="pl-c">//</span> Key mods flags (same as io.KeyCtrl/KeyShift/KeyAlt/KeySuper but merged into flags), updated by NewFrame()</span></td>
      </tr>
      <tr>
        <td id="L1586" class="blob-num js-line-number" data-line-number="1586"></td>
        <td id="LC1586" class="blob-code blob-code-inner js-file-line">    ImVec2      MousePosPrev;                   <span class="pl-c"><span class="pl-c">//</span> Previous mouse position (note that MouseDelta is not necessary == MousePos-MousePosPrev, in case either position is invalid)</span></td>
      </tr>
      <tr>
        <td id="L1587" class="blob-num js-line-number" data-line-number="1587"></td>
        <td id="LC1587" class="blob-code blob-code-inner js-file-line">    ImVec2      MouseClickedPos[<span class="pl-c1">5</span>];             <span class="pl-c"><span class="pl-c">//</span> Position at time of clicking</span></td>
      </tr>
      <tr>
        <td id="L1588" class="blob-num js-line-number" data-line-number="1588"></td>
        <td id="LC1588" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">double</span>      MouseClickedTime[<span class="pl-c1">5</span>];            <span class="pl-c"><span class="pl-c">//</span> Time of last click (used to figure out double-click)</span></td>
      </tr>
      <tr>
        <td id="L1589" class="blob-num js-line-number" data-line-number="1589"></td>
        <td id="LC1589" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        MouseClicked[<span class="pl-c1">5</span>];                <span class="pl-c"><span class="pl-c">//</span> Mouse button went from !Down to Down</span></td>
      </tr>
      <tr>
        <td id="L1590" class="blob-num js-line-number" data-line-number="1590"></td>
        <td id="LC1590" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        MouseDoubleClicked[<span class="pl-c1">5</span>];          <span class="pl-c"><span class="pl-c">//</span> Has mouse button been double-clicked?</span></td>
      </tr>
      <tr>
        <td id="L1591" class="blob-num js-line-number" data-line-number="1591"></td>
        <td id="LC1591" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        MouseReleased[<span class="pl-c1">5</span>];               <span class="pl-c"><span class="pl-c">//</span> Mouse button went from Down to !Down</span></td>
      </tr>
      <tr>
        <td id="L1592" class="blob-num js-line-number" data-line-number="1592"></td>
        <td id="LC1592" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        MouseDownOwned[<span class="pl-c1">5</span>];              <span class="pl-c"><span class="pl-c">//</span> Track if button was clicked inside a dear imgui window. We don&#39;t request mouse capture from the application if click started outside ImGui bounds.</span></td>
      </tr>
      <tr>
        <td id="L1593" class="blob-num js-line-number" data-line-number="1593"></td>
        <td id="LC1593" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>        MouseDownWasDoubleClick[<span class="pl-c1">5</span>];     <span class="pl-c"><span class="pl-c">//</span> Track if button down was a double-click</span></td>
      </tr>
      <tr>
        <td id="L1594" class="blob-num js-line-number" data-line-number="1594"></td>
        <td id="LC1594" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       MouseDownDuration[<span class="pl-c1">5</span>];           <span class="pl-c"><span class="pl-c">//</span> Duration the mouse button has been down (0.0f == just clicked)</span></td>
      </tr>
      <tr>
        <td id="L1595" class="blob-num js-line-number" data-line-number="1595"></td>
        <td id="LC1595" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       MouseDownDurationPrev[<span class="pl-c1">5</span>];       <span class="pl-c"><span class="pl-c">//</span> Previous time the mouse button has been down</span></td>
      </tr>
      <tr>
        <td id="L1596" class="blob-num js-line-number" data-line-number="1596"></td>
        <td id="LC1596" class="blob-code blob-code-inner js-file-line">    ImVec2      MouseDragMaxDistanceAbs[<span class="pl-c1">5</span>];     <span class="pl-c"><span class="pl-c">//</span> Maximum distance, absolute, on each axis, of how much mouse has traveled from the clicking point</span></td>
      </tr>
      <tr>
        <td id="L1597" class="blob-num js-line-number" data-line-number="1597"></td>
        <td id="LC1597" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       MouseDragMaxDistanceSqr[<span class="pl-c1">5</span>];     <span class="pl-c"><span class="pl-c">//</span> Squared maximum distance of how much mouse has traveled from the clicking point</span></td>
      </tr>
      <tr>
        <td id="L1598" class="blob-num js-line-number" data-line-number="1598"></td>
        <td id="LC1598" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       KeysDownDuration[<span class="pl-c1">512</span>];          <span class="pl-c"><span class="pl-c">//</span> Duration the keyboard key has been down (0.0f == just pressed)</span></td>
      </tr>
      <tr>
        <td id="L1599" class="blob-num js-line-number" data-line-number="1599"></td>
        <td id="LC1599" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       KeysDownDurationPrev[<span class="pl-c1">512</span>];      <span class="pl-c"><span class="pl-c">//</span> Previous duration the key has been down</span></td>
      </tr>
      <tr>
        <td id="L1600" class="blob-num js-line-number" data-line-number="1600"></td>
        <td id="LC1600" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       NavInputsDownDuration[ImGuiNavInput_COUNT];</td>
      </tr>
      <tr>
        <td id="L1601" class="blob-num js-line-number" data-line-number="1601"></td>
        <td id="LC1601" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       NavInputsDownDurationPrev[ImGuiNavInput_COUNT];</td>
      </tr>
      <tr>
        <td id="L1602" class="blob-num js-line-number" data-line-number="1602"></td>
        <td id="LC1602" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>       PenPressure;                    <span class="pl-c"><span class="pl-c">//</span> Touch/Pen pressure (0.0f to 1.0f, should be &gt;0.0f only when MouseDown[0] == true). Helper storage currently unused by Dear ImGui.</span></td>
      </tr>
      <tr>
        <td id="L1603" class="blob-num js-line-number" data-line-number="1603"></td>
        <td id="LC1603" class="blob-code blob-code-inner js-file-line">    ImWchar16   InputQueueSurrogate;            <span class="pl-c"><span class="pl-c">//</span> For AddInputCharacterUTF16</span></td>
      </tr>
      <tr>
        <td id="L1604" class="blob-num js-line-number" data-line-number="1604"></td>
        <td id="LC1604" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImWchar&gt; InputQueueCharacters;     <span class="pl-c"><span class="pl-c">//</span> Queue of _characters_ input (obtained by platform back-end). Fill using AddInputCharacter() helper.</span></td>
      </tr>
      <tr>
        <td id="L1605" class="blob-num js-line-number" data-line-number="1605"></td>
        <td id="LC1605" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1606" class="blob-num js-line-number" data-line-number="1606"></td>
        <td id="LC1606" class="blob-code blob-code-inner js-file-line">    IMGUI_API   <span class="pl-en">ImGuiIO</span>();</td>
      </tr>
      <tr>
        <td id="L1607" class="blob-num js-line-number" data-line-number="1607"></td>
        <td id="LC1607" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1608" class="blob-num js-line-number" data-line-number="1608"></td>
        <td id="LC1608" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1609" class="blob-num js-line-number" data-line-number="1609"></td>
        <td id="LC1609" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1610" class="blob-num js-line-number" data-line-number="1610"></td>
        <td id="LC1610" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Misc data structures</span></td>
      </tr>
      <tr>
        <td id="L1611" class="blob-num js-line-number" data-line-number="1611"></td>
        <td id="LC1611" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1612" class="blob-num js-line-number" data-line-number="1612"></td>
        <td id="LC1612" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1613" class="blob-num js-line-number" data-line-number="1613"></td>
        <td id="LC1613" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Shared state of InputText(), passed as an argument to your callback when a ImGuiInputTextFlags_Callback* flag is used.</span></td>
      </tr>
      <tr>
        <td id="L1614" class="blob-num js-line-number" data-line-number="1614"></td>
        <td id="LC1614" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> The callback function should return 0 by default.</span></td>
      </tr>
      <tr>
        <td id="L1615" class="blob-num js-line-number" data-line-number="1615"></td>
        <td id="LC1615" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Callbacks (follow a flag name and see comments in ImGuiInputTextFlags_ declarations for more details)</span></td>
      </tr>
      <tr>
        <td id="L1616" class="blob-num js-line-number" data-line-number="1616"></td>
        <td id="LC1616" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - ImGuiInputTextFlags_CallbackCompletion:  Callback on pressing TAB</span></td>
      </tr>
      <tr>
        <td id="L1617" class="blob-num js-line-number" data-line-number="1617"></td>
        <td id="LC1617" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - ImGuiInputTextFlags_CallbackHistory:     Callback on pressing Up/Down arrows</span></td>
      </tr>
      <tr>
        <td id="L1618" class="blob-num js-line-number" data-line-number="1618"></td>
        <td id="LC1618" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - ImGuiInputTextFlags_CallbackAlways:      Callback on each iteration</span></td>
      </tr>
      <tr>
        <td id="L1619" class="blob-num js-line-number" data-line-number="1619"></td>
        <td id="LC1619" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - ImGuiInputTextFlags_CallbackCharFilter:  Callback on character inputs to replace or discard them. Modify &#39;EventChar&#39; to replace or discard, or return 1 in callback to discard.</span></td>
      </tr>
      <tr>
        <td id="L1620" class="blob-num js-line-number" data-line-number="1620"></td>
        <td id="LC1620" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - ImGuiInputTextFlags_CallbackResize:      Callback on buffer capacity changes request (beyond &#39;buf_size&#39; parameter value), allowing the string to grow.</span></td>
      </tr>
      <tr>
        <td id="L1621" class="blob-num js-line-number" data-line-number="1621"></td>
        <td id="LC1621" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiInputTextCallbackData</span></td>
      </tr>
      <tr>
        <td id="L1622" class="blob-num js-line-number" data-line-number="1622"></td>
        <td id="LC1622" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1623" class="blob-num js-line-number" data-line-number="1623"></td>
        <td id="LC1623" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags EventFlag;      <span class="pl-c"><span class="pl-c">//</span> One ImGuiInputTextFlags_Callback*    // Read-only</span></td>
      </tr>
      <tr>
        <td id="L1624" class="blob-num js-line-number" data-line-number="1624"></td>
        <td id="LC1624" class="blob-code blob-code-inner js-file-line">    ImGuiInputTextFlags Flags;          <span class="pl-c"><span class="pl-c">//</span> What user passed to InputText()      // Read-only</span></td>
      </tr>
      <tr>
        <td id="L1625" class="blob-num js-line-number" data-line-number="1625"></td>
        <td id="LC1625" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*               UserData;       <span class="pl-c"><span class="pl-c">//</span> What user passed to InputText()      // Read-only</span></td>
      </tr>
      <tr>
        <td id="L1626" class="blob-num js-line-number" data-line-number="1626"></td>
        <td id="LC1626" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1627" class="blob-num js-line-number" data-line-number="1627"></td>
        <td id="LC1627" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Arguments for the different callback events</span></td>
      </tr>
      <tr>
        <td id="L1628" class="blob-num js-line-number" data-line-number="1628"></td>
        <td id="LC1628" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - To modify the text buffer in a callback, prefer using the InsertChars() / DeleteChars() function. InsertChars() will take care of calling the resize callback if necessary.</span></td>
      </tr>
      <tr>
        <td id="L1629" class="blob-num js-line-number" data-line-number="1629"></td>
        <td id="LC1629" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - If you know your edits are not going to resize the underlying buffer allocation, you may modify the contents of &#39;Buf[]&#39; directly. You need to update &#39;BufTextLen&#39; accordingly (0 &lt;= BufTextLen &lt; BufSize) and set &#39;BufDirty&#39;&#39; to true so InputText can update its internal state.</span></td>
      </tr>
      <tr>
        <td id="L1630" class="blob-num js-line-number" data-line-number="1630"></td>
        <td id="LC1630" class="blob-code blob-code-inner js-file-line">    ImWchar             EventChar;      <span class="pl-c"><span class="pl-c">//</span> Character input                      // Read-write   // [CharFilter] Replace character with another one, or set to zero to drop. return 1 is equivalent to setting EventChar=0;</span></td>
      </tr>
      <tr>
        <td id="L1631" class="blob-num js-line-number" data-line-number="1631"></td>
        <td id="LC1631" class="blob-code blob-code-inner js-file-line">    ImGuiKey            EventKey;       <span class="pl-c"><span class="pl-c">//</span> Key pressed (Up/Down/TAB)            // Read-only    // [Completion,History]</span></td>
      </tr>
      <tr>
        <td id="L1632" class="blob-num js-line-number" data-line-number="1632"></td>
        <td id="LC1632" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">char</span>*               Buf;            <span class="pl-c"><span class="pl-c">//</span> Text buffer                          // Read-write   // [Resize] Can replace pointer / [Completion,History,Always] Only write to pointed data, don&#39;t replace the actual pointer!</span></td>
      </tr>
      <tr>
        <td id="L1633" class="blob-num js-line-number" data-line-number="1633"></td>
        <td id="LC1633" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                 BufTextLen;     <span class="pl-c"><span class="pl-c">//</span> Text length (in bytes)               // Read-write   // [Resize,Completion,History,Always] Exclude zero-terminator storage. In C land: == strlen(some_text), in C++ land: string.length()</span></td>
      </tr>
      <tr>
        <td id="L1634" class="blob-num js-line-number" data-line-number="1634"></td>
        <td id="LC1634" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                 BufSize;        <span class="pl-c"><span class="pl-c">//</span> Buffer size (in bytes) = capacity+1  // Read-only    // [Resize,Completion,History,Always] Include zero-terminator storage. In C land == ARRAYSIZE(my_char_array), in C++ land: string.capacity()+1</span></td>
      </tr>
      <tr>
        <td id="L1635" class="blob-num js-line-number" data-line-number="1635"></td>
        <td id="LC1635" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>                BufDirty;       <span class="pl-c"><span class="pl-c">//</span> Set if you modify Buf/BufTextLen!    // Write        // [Completion,History,Always]</span></td>
      </tr>
      <tr>
        <td id="L1636" class="blob-num js-line-number" data-line-number="1636"></td>
        <td id="LC1636" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                 CursorPos;      <span class="pl-c"><span class="pl-c">//</span>                                      // Read-write   // [Completion,History,Always]</span></td>
      </tr>
      <tr>
        <td id="L1637" class="blob-num js-line-number" data-line-number="1637"></td>
        <td id="LC1637" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                 SelectionStart; <span class="pl-c"><span class="pl-c">//</span>                                      // Read-write   // [Completion,History,Always] == to SelectionEnd when no selection)</span></td>
      </tr>
      <tr>
        <td id="L1638" class="blob-num js-line-number" data-line-number="1638"></td>
        <td id="LC1638" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                 SelectionEnd;   <span class="pl-c"><span class="pl-c">//</span>                                      // Read-write   // [Completion,History,Always]</span></td>
      </tr>
      <tr>
        <td id="L1639" class="blob-num js-line-number" data-line-number="1639"></td>
        <td id="LC1639" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1640" class="blob-num js-line-number" data-line-number="1640"></td>
        <td id="LC1640" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Helper functions for text manipulation.</span></td>
      </tr>
      <tr>
        <td id="L1641" class="blob-num js-line-number" data-line-number="1641"></td>
        <td id="LC1641" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Use those function to benefit from the CallbackResize behaviors. Calling those function reset the selection.</span></td>
      </tr>
      <tr>
        <td id="L1642" class="blob-num js-line-number" data-line-number="1642"></td>
        <td id="LC1642" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-en">ImGuiInputTextCallbackData</span>();</td>
      </tr>
      <tr>
        <td id="L1643" class="blob-num js-line-number" data-line-number="1643"></td>
        <td id="LC1643" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">DeleteChars</span>(<span class="pl-k">int</span> pos, <span class="pl-k">int</span> bytes_count);</td>
      </tr>
      <tr>
        <td id="L1644" class="blob-num js-line-number" data-line-number="1644"></td>
        <td id="LC1644" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">InsertChars</span>(<span class="pl-k">int</span> pos, <span class="pl-k">const</span> <span class="pl-k">char</span>* text, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_end = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L1645" class="blob-num js-line-number" data-line-number="1645"></td>
        <td id="LC1645" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>                <span class="pl-en">HasSelection</span>() <span class="pl-k">const</span> { <span class="pl-k">return</span> SelectionStart != SelectionEnd; }</td>
      </tr>
      <tr>
        <td id="L1646" class="blob-num js-line-number" data-line-number="1646"></td>
        <td id="LC1646" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1647" class="blob-num js-line-number" data-line-number="1647"></td>
        <td id="LC1647" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1648" class="blob-num js-line-number" data-line-number="1648"></td>
        <td id="LC1648" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Resizing callback data to apply custom constraint. As enabled by SetNextWindowSizeConstraints(). Callback is called during the next Begin().</span></td>
      </tr>
      <tr>
        <td id="L1649" class="blob-num js-line-number" data-line-number="1649"></td>
        <td id="LC1649" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> NB: For basic min/max size constraint on each axis you don&#39;t need to use the callback! The SetNextWindowSizeConstraints() parameters are enough.</span></td>
      </tr>
      <tr>
        <td id="L1650" class="blob-num js-line-number" data-line-number="1650"></td>
        <td id="LC1650" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiSizeCallbackData</span></td>
      </tr>
      <tr>
        <td id="L1651" class="blob-num js-line-number" data-line-number="1651"></td>
        <td id="LC1651" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1652" class="blob-num js-line-number" data-line-number="1652"></td>
        <td id="LC1652" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*   UserData;       <span class="pl-c"><span class="pl-c">//</span> Read-only.   What user passed to SetNextWindowSizeConstraints()</span></td>
      </tr>
      <tr>
        <td id="L1653" class="blob-num js-line-number" data-line-number="1653"></td>
        <td id="LC1653" class="blob-code blob-code-inner js-file-line">    ImVec2  Pos;            <span class="pl-c"><span class="pl-c">//</span> Read-only.   Window position, for reference.</span></td>
      </tr>
      <tr>
        <td id="L1654" class="blob-num js-line-number" data-line-number="1654"></td>
        <td id="LC1654" class="blob-code blob-code-inner js-file-line">    ImVec2  CurrentSize;    <span class="pl-c"><span class="pl-c">//</span> Read-only.   Current window size.</span></td>
      </tr>
      <tr>
        <td id="L1655" class="blob-num js-line-number" data-line-number="1655"></td>
        <td id="LC1655" class="blob-code blob-code-inner js-file-line">    ImVec2  DesiredSize;    <span class="pl-c"><span class="pl-c">//</span> Read-write.  Desired size, based on user&#39;s mouse position. Write to this field to restrain resizing.</span></td>
      </tr>
      <tr>
        <td id="L1656" class="blob-num js-line-number" data-line-number="1656"></td>
        <td id="LC1656" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1657" class="blob-num js-line-number" data-line-number="1657"></td>
        <td id="LC1657" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1658" class="blob-num js-line-number" data-line-number="1658"></td>
        <td id="LC1658" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Data payload for Drag and Drop operations: AcceptDragDropPayload(), GetDragDropPayload()</span></td>
      </tr>
      <tr>
        <td id="L1659" class="blob-num js-line-number" data-line-number="1659"></td>
        <td id="LC1659" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiPayload</span></td>
      </tr>
      <tr>
        <td id="L1660" class="blob-num js-line-number" data-line-number="1660"></td>
        <td id="LC1660" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1661" class="blob-num js-line-number" data-line-number="1661"></td>
        <td id="LC1661" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Members</span></td>
      </tr>
      <tr>
        <td id="L1662" class="blob-num js-line-number" data-line-number="1662"></td>
        <td id="LC1662" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*           Data;               <span class="pl-c"><span class="pl-c">//</span> Data (copied and owned by dear imgui)</span></td>
      </tr>
      <tr>
        <td id="L1663" class="blob-num js-line-number" data-line-number="1663"></td>
        <td id="LC1663" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>             DataSize;           <span class="pl-c"><span class="pl-c">//</span> Data size</span></td>
      </tr>
      <tr>
        <td id="L1664" class="blob-num js-line-number" data-line-number="1664"></td>
        <td id="LC1664" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1665" class="blob-num js-line-number" data-line-number="1665"></td>
        <td id="LC1665" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L1666" class="blob-num js-line-number" data-line-number="1666"></td>
        <td id="LC1666" class="blob-code blob-code-inner js-file-line">    ImGuiID         SourceId;           <span class="pl-c"><span class="pl-c">//</span> Source item id</span></td>
      </tr>
      <tr>
        <td id="L1667" class="blob-num js-line-number" data-line-number="1667"></td>
        <td id="LC1667" class="blob-code blob-code-inner js-file-line">    ImGuiID         SourceParentId;     <span class="pl-c"><span class="pl-c">//</span> Source parent id (if available)</span></td>
      </tr>
      <tr>
        <td id="L1668" class="blob-num js-line-number" data-line-number="1668"></td>
        <td id="LC1668" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>             DataFrameCount;     <span class="pl-c"><span class="pl-c">//</span> Data timestamp</span></td>
      </tr>
      <tr>
        <td id="L1669" class="blob-num js-line-number" data-line-number="1669"></td>
        <td id="LC1669" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">char</span>            DataType[<span class="pl-c1">32</span> + <span class="pl-c1">1</span>];   <span class="pl-c"><span class="pl-c">//</span> Data type tag (short user-supplied string, 32 characters max)</span></td>
      </tr>
      <tr>
        <td id="L1670" class="blob-num js-line-number" data-line-number="1670"></td>
        <td id="LC1670" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>            Preview;            <span class="pl-c"><span class="pl-c">//</span> Set when AcceptDragDropPayload() was called and mouse has been hovering the target item (nb: handle overlapping drag targets)</span></td>
      </tr>
      <tr>
        <td id="L1671" class="blob-num js-line-number" data-line-number="1671"></td>
        <td id="LC1671" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>            Delivery;           <span class="pl-c"><span class="pl-c">//</span> Set when AcceptDragDropPayload() was called and mouse button is released over the target item.</span></td>
      </tr>
      <tr>
        <td id="L1672" class="blob-num js-line-number" data-line-number="1672"></td>
        <td id="LC1672" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1673" class="blob-num js-line-number" data-line-number="1673"></td>
        <td id="LC1673" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImGuiPayload</span>()  { <span class="pl-c1">Clear</span>(); }</td>
      </tr>
      <tr>
        <td id="L1674" class="blob-num js-line-number" data-line-number="1674"></td>
        <td id="LC1674" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">Clear</span>()    { SourceId = SourceParentId = <span class="pl-c1">0</span>; Data = <span class="pl-c1">NULL</span>; DataSize = <span class="pl-c1">0</span>; <span class="pl-c1">memset</span>(DataType, <span class="pl-c1">0</span>, <span class="pl-k">sizeof</span>(DataType)); DataFrameCount = -<span class="pl-c1">1</span>; Preview = Delivery = <span class="pl-c1">false</span>; }</td>
      </tr>
      <tr>
        <td id="L1675" class="blob-num js-line-number" data-line-number="1675"></td>
        <td id="LC1675" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span> <span class="pl-en">IsDataType</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* type) <span class="pl-k">const</span> { <span class="pl-k">return</span> DataFrameCount != -<span class="pl-c1">1</span> &amp;&amp; <span class="pl-c1">strcmp</span>(type, DataType) == <span class="pl-c1">0</span>; }</td>
      </tr>
      <tr>
        <td id="L1676" class="blob-num js-line-number" data-line-number="1676"></td>
        <td id="LC1676" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span> <span class="pl-en">IsPreview</span>() <span class="pl-k">const</span>                  { <span class="pl-k">return</span> Preview; }</td>
      </tr>
      <tr>
        <td id="L1677" class="blob-num js-line-number" data-line-number="1677"></td>
        <td id="LC1677" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span> <span class="pl-en">IsDelivery</span>() <span class="pl-k">const</span>                 { <span class="pl-k">return</span> Delivery; }</td>
      </tr>
      <tr>
        <td id="L1678" class="blob-num js-line-number" data-line-number="1678"></td>
        <td id="LC1678" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1679" class="blob-num js-line-number" data-line-number="1679"></td>
        <td id="LC1679" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1680" class="blob-num js-line-number" data-line-number="1680"></td>
        <td id="LC1680" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1681" class="blob-num js-line-number" data-line-number="1681"></td>
        <td id="LC1681" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Obsolete functions (Will be removed! Read &#39;API BREAKING CHANGES&#39; section in imgui.cpp for details)</span></td>
      </tr>
      <tr>
        <td id="L1682" class="blob-num js-line-number" data-line-number="1682"></td>
        <td id="LC1682" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Please keep your copy of dear imgui up to date! Occasionally set &#39;#define IMGUI_DISABLE_OBSOLETE_FUNCTIONS&#39; in imconfig.h to stay ahead.</span></td>
      </tr>
      <tr>
        <td id="L1683" class="blob-num js-line-number" data-line-number="1683"></td>
        <td id="LC1683" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1684" class="blob-num js-line-number" data-line-number="1684"></td>
        <td id="LC1684" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1685" class="blob-num js-line-number" data-line-number="1685"></td>
        <td id="LC1685" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_DISABLE_OBSOLETE_FUNCTIONS</td>
      </tr>
      <tr>
        <td id="L1686" class="blob-num js-line-number" data-line-number="1686"></td>
        <td id="LC1686" class="blob-code blob-code-inner js-file-line"><span class="pl-k">namespace</span> <span class="pl-en">ImGui</span></td>
      </tr>
      <tr>
        <td id="L1687" class="blob-num js-line-number" data-line-number="1687"></td>
        <td id="LC1687" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1688" class="blob-num js-line-number" data-line-number="1688"></td>
        <td id="LC1688" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.77 (from June 2020)</span></td>
      </tr>
      <tr>
        <td id="L1689" class="blob-num js-line-number" data-line-number="1689"></td>
        <td id="LC1689" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">bool</span>  <span class="pl-en">OpenPopupOnItemClick</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id = <span class="pl-c1">NULL</span>, ImGuiMouseButton mb = <span class="pl-c1">1</span>)          { <span class="pl-k">return</span> <span class="pl-c1">OpenPopupContextItem</span>(str_id, mb); } <span class="pl-c"><span class="pl-c">//</span> Passing a mouse button to ImGuiPopupFlags is legal</span></td>
      </tr>
      <tr>
        <td id="L1690" class="blob-num js-line-number" data-line-number="1690"></td>
        <td id="LC1690" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">bool</span>  <span class="pl-en">BeginPopupContextWindow</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str_id, ImGuiMouseButton mb, <span class="pl-k">bool</span> over_items) { <span class="pl-k">return</span> <span class="pl-c1">BeginPopupContextWindow</span>(str_id, mb | (over_items ? <span class="pl-c1">0</span> : ImGuiPopupFlags_NoOpenOverItems)); }</td>
      </tr>
      <tr>
        <td id="L1691" class="blob-num js-line-number" data-line-number="1691"></td>
        <td id="LC1691" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.72 (from July 2019)</span></td>
      </tr>
      <tr>
        <td id="L1692" class="blob-num js-line-number" data-line-number="1692"></td>
        <td id="LC1692" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span>  <span class="pl-en">TreeAdvanceToLabelPos</span>()               { <span class="pl-c1">SetCursorPosX</span>(<span class="pl-c1">GetCursorPosX</span>() + <span class="pl-c1">GetTreeNodeToLabelSpacing</span>()); }</td>
      </tr>
      <tr>
        <td id="L1693" class="blob-num js-line-number" data-line-number="1693"></td>
        <td id="LC1693" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.71 (from June 2019)</span></td>
      </tr>
      <tr>
        <td id="L1694" class="blob-num js-line-number" data-line-number="1694"></td>
        <td id="LC1694" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span>  <span class="pl-en">SetNextTreeNodeOpen</span>(<span class="pl-k">bool</span> open, ImGuiCond cond = <span class="pl-c1">0</span>) { <span class="pl-c1">SetNextItemOpen</span>(<span class="pl-c1">open</span>, cond); }</td>
      </tr>
      <tr>
        <td id="L1695" class="blob-num js-line-number" data-line-number="1695"></td>
        <td id="LC1695" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.70 (from May 2019)</span></td>
      </tr>
      <tr>
        <td id="L1696" class="blob-num js-line-number" data-line-number="1696"></td>
        <td id="LC1696" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">float</span> <span class="pl-en">GetContentRegionAvailWidth</span>()          { <span class="pl-k">return</span> <span class="pl-c1">GetContentRegionAvail</span>().<span class="pl-smi">x</span>; }</td>
      </tr>
      <tr>
        <td id="L1697" class="blob-num js-line-number" data-line-number="1697"></td>
        <td id="LC1697" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.69 (from Mar 2019)</span></td>
      </tr>
      <tr>
        <td id="L1698" class="blob-num js-line-number" data-line-number="1698"></td>
        <td id="LC1698" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> ImDrawList* <span class="pl-en">GetOverlayDrawList</span>()            { <span class="pl-k">return</span> <span class="pl-c1">GetForegroundDrawList</span>(); }</td>
      </tr>
      <tr>
        <td id="L1699" class="blob-num js-line-number" data-line-number="1699"></td>
        <td id="LC1699" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.66 (from Sep 2018)</span></td>
      </tr>
      <tr>
        <td id="L1700" class="blob-num js-line-number" data-line-number="1700"></td>
        <td id="LC1700" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span>  <span class="pl-en">SetScrollHere</span>(<span class="pl-k">float</span> center_ratio=<span class="pl-c1">0</span>.<span class="pl-c1">5f</span>){ <span class="pl-c1">SetScrollHereY</span>(center_ratio); }</td>
      </tr>
      <tr>
        <td id="L1701" class="blob-num js-line-number" data-line-number="1701"></td>
        <td id="LC1701" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.63 (between Aug 2018 and Sept 2018)</span></td>
      </tr>
      <tr>
        <td id="L1702" class="blob-num js-line-number" data-line-number="1702"></td>
        <td id="LC1702" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">bool</span>  <span class="pl-en">IsItemDeactivatedAfterChange</span>()        { <span class="pl-k">return</span> <span class="pl-c1">IsItemDeactivatedAfterEdit</span>(); }</td>
      </tr>
      <tr>
        <td id="L1703" class="blob-num js-line-number" data-line-number="1703"></td>
        <td id="LC1703" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.61 (between Apr 2018 and Aug 2018)</span></td>
      </tr>
      <tr>
        <td id="L1704" class="blob-num js-line-number" data-line-number="1704"></td>
        <td id="LC1704" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>      <span class="pl-en">InputFloat</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span>* v, <span class="pl-k">float</span> step, <span class="pl-k">float</span> step_fast, <span class="pl-k">int</span> decimal_precision, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>); <span class="pl-c"><span class="pl-c">//</span> Use the &#39;const char* format&#39; version instead of &#39;decimal_precision&#39;!</span></td>
      </tr>
      <tr>
        <td id="L1705" class="blob-num js-line-number" data-line-number="1705"></td>
        <td id="LC1705" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>      <span class="pl-en">InputFloat2</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">2</span>], <span class="pl-k">int</span> decimal_precision, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L1706" class="blob-num js-line-number" data-line-number="1706"></td>
        <td id="LC1706" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>      <span class="pl-en">InputFloat3</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">3</span>], <span class="pl-k">int</span> decimal_precision, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L1707" class="blob-num js-line-number" data-line-number="1707"></td>
        <td id="LC1707" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>      <span class="pl-en">InputFloat4</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label, <span class="pl-k">float</span> v[<span class="pl-c1">4</span>], <span class="pl-k">int</span> decimal_precision, ImGuiInputTextFlags flags = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L1708" class="blob-num js-line-number" data-line-number="1708"></td>
        <td id="LC1708" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.60 (between Dec 2017 and Apr 2018)</span></td>
      </tr>
      <tr>
        <td id="L1709" class="blob-num js-line-number" data-line-number="1709"></td>
        <td id="LC1709" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">bool</span>  <span class="pl-en">IsAnyWindowFocused</span>()                  { <span class="pl-k">return</span> <span class="pl-c1">IsWindowFocused</span>(ImGuiFocusedFlags_AnyWindow); }</td>
      </tr>
      <tr>
        <td id="L1710" class="blob-num js-line-number" data-line-number="1710"></td>
        <td id="LC1710" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">bool</span>  <span class="pl-en">IsAnyWindowHovered</span>()                  { <span class="pl-k">return</span> <span class="pl-c1">IsWindowHovered</span>(ImGuiHoveredFlags_AnyWindow); }</td>
      </tr>
      <tr>
        <td id="L1711" class="blob-num js-line-number" data-line-number="1711"></td>
        <td id="LC1711" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1712" class="blob-num js-line-number" data-line-number="1712"></td>
        <td id="LC1712" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> ImGuiInputTextCallback      ImGuiTextEditCallback;    <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.63 (from Aug 2018): made the names consistent</span></td>
      </tr>
      <tr>
        <td id="L1713" class="blob-num js-line-number" data-line-number="1713"></td>
        <td id="LC1713" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> ImGuiInputTextCallbackData  ImGuiTextEditCallbackData;</td>
      </tr>
      <tr>
        <td id="L1714" class="blob-num js-line-number" data-line-number="1714"></td>
        <td id="LC1714" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1715" class="blob-num js-line-number" data-line-number="1715"></td>
        <td id="LC1715" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1716" class="blob-num js-line-number" data-line-number="1716"></td>
        <td id="LC1716" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1717" class="blob-num js-line-number" data-line-number="1717"></td>
        <td id="LC1717" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helpers</span></td>
      </tr>
      <tr>
        <td id="L1718" class="blob-num js-line-number" data-line-number="1718"></td>
        <td id="LC1718" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1719" class="blob-num js-line-number" data-line-number="1719"></td>
        <td id="LC1719" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1720" class="blob-num js-line-number" data-line-number="1720"></td>
        <td id="LC1720" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper: Unicode defines</span></td>
      </tr>
      <tr>
        <td id="L1721" class="blob-num js-line-number" data-line-number="1721"></td>
        <td id="LC1721" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_UNICODE_CODEPOINT_INVALID</span> <span class="pl-c1">0xFFFD</span>     <span class="pl-c"><span class="pl-c">//</span> Invalid Unicode code point (standard value).</span></td>
      </tr>
      <tr>
        <td id="L1722" class="blob-num js-line-number" data-line-number="1722"></td>
        <td id="LC1722" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> IMGUI_USE_WCHAR32</td>
      </tr>
      <tr>
        <td id="L1723" class="blob-num js-line-number" data-line-number="1723"></td>
        <td id="LC1723" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_UNICODE_CODEPOINT_MAX</span>     <span class="pl-c1">0x10FFFF</span>   <span class="pl-c"><span class="pl-c">//</span> Maximum Unicode code point supported by this build.</span></td>
      </tr>
      <tr>
        <td id="L1724" class="blob-num js-line-number" data-line-number="1724"></td>
        <td id="LC1724" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1725" class="blob-num js-line-number" data-line-number="1725"></td>
        <td id="LC1725" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_UNICODE_CODEPOINT_MAX</span>     <span class="pl-c1">0xFFFF</span>     <span class="pl-c"><span class="pl-c">//</span> Maximum Unicode code point supported by this build.</span></td>
      </tr>
      <tr>
        <td id="L1726" class="blob-num js-line-number" data-line-number="1726"></td>
        <td id="LC1726" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1727" class="blob-num js-line-number" data-line-number="1727"></td>
        <td id="LC1727" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1728" class="blob-num js-line-number" data-line-number="1728"></td>
        <td id="LC1728" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper: Execute a block of code at maximum once a frame. Convenient if you want to quickly create an UI within deep-nested code that runs multiple times every frame.</span></td>
      </tr>
      <tr>
        <td id="L1729" class="blob-num js-line-number" data-line-number="1729"></td>
        <td id="LC1729" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Usage: static ImGuiOnceUponAFrame oaf; if (oaf) ImGui::Text(&quot;This will be called only once per frame&quot;);</span></td>
      </tr>
      <tr>
        <td id="L1730" class="blob-num js-line-number" data-line-number="1730"></td>
        <td id="LC1730" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiOnceUponAFrame</span></td>
      </tr>
      <tr>
        <td id="L1731" class="blob-num js-line-number" data-line-number="1731"></td>
        <td id="LC1731" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1732" class="blob-num js-line-number" data-line-number="1732"></td>
        <td id="LC1732" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImGuiOnceUponAFrame</span>() { RefFrame = -<span class="pl-c1">1</span>; }</td>
      </tr>
      <tr>
        <td id="L1733" class="blob-num js-line-number" data-line-number="1733"></td>
        <td id="LC1733" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">mutable</span> <span class="pl-k">int</span> RefFrame;</td>
      </tr>
      <tr>
        <td id="L1734" class="blob-num js-line-number" data-line-number="1734"></td>
        <td id="LC1734" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">operator</span> <span class="pl-en">bool</span>() <span class="pl-k">const</span> { <span class="pl-k">int</span> current_frame = <span class="pl-c1">ImGui::GetFrameCount</span>(); <span class="pl-k">if</span> (RefFrame == current_frame) <span class="pl-k">return</span> <span class="pl-c1">false</span>; RefFrame = current_frame; <span class="pl-k">return</span> <span class="pl-c1">true</span>; }</td>
      </tr>
      <tr>
        <td id="L1735" class="blob-num js-line-number" data-line-number="1735"></td>
        <td id="LC1735" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1736" class="blob-num js-line-number" data-line-number="1736"></td>
        <td id="LC1736" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1737" class="blob-num js-line-number" data-line-number="1737"></td>
        <td id="LC1737" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper: Parse and apply text filters. In format &quot;aaaaa[,bbbb][,ccccc]&quot;</span></td>
      </tr>
      <tr>
        <td id="L1738" class="blob-num js-line-number" data-line-number="1738"></td>
        <td id="LC1738" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiTextFilter</span></td>
      </tr>
      <tr>
        <td id="L1739" class="blob-num js-line-number" data-line-number="1739"></td>
        <td id="LC1739" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1740" class="blob-num js-line-number" data-line-number="1740"></td>
        <td id="LC1740" class="blob-code blob-code-inner js-file-line">    IMGUI_API           <span class="pl-en">ImGuiTextFilter</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* default_filter = <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1741" class="blob-num js-line-number" data-line-number="1741"></td>
        <td id="LC1741" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>      <span class="pl-en">Draw</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* label = <span class="pl-s"><span class="pl-pds">&quot;</span>Filter (inc,-exc)<span class="pl-pds">&quot;</span></span>, <span class="pl-k">float</span> width = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>);  <span class="pl-c"><span class="pl-c">//</span> Helper calling InputText+Build</span></td>
      </tr>
      <tr>
        <td id="L1742" class="blob-num js-line-number" data-line-number="1742"></td>
        <td id="LC1742" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>      <span class="pl-en">PassFilter</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* text, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_end = <span class="pl-c1">NULL</span>) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L1743" class="blob-num js-line-number" data-line-number="1743"></td>
        <td id="LC1743" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">Build</span>();</td>
      </tr>
      <tr>
        <td id="L1744" class="blob-num js-line-number" data-line-number="1744"></td>
        <td id="LC1744" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>                <span class="pl-en">Clear</span>()          { InputBuf[<span class="pl-c1">0</span>] = <span class="pl-c1">0</span>; <span class="pl-c1">Build</span>(); }</td>
      </tr>
      <tr>
        <td id="L1745" class="blob-num js-line-number" data-line-number="1745"></td>
        <td id="LC1745" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>                <span class="pl-en">IsActive</span>() <span class="pl-k">const</span> { <span class="pl-k">return</span> !Filters.<span class="pl-c1">empty</span>(); }</td>
      </tr>
      <tr>
        <td id="L1746" class="blob-num js-line-number" data-line-number="1746"></td>
        <td id="LC1746" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1747" class="blob-num js-line-number" data-line-number="1747"></td>
        <td id="LC1747" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L1748" class="blob-num js-line-number" data-line-number="1748"></td>
        <td id="LC1748" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">struct</span> <span class="pl-en">ImGuiTextRange</span></td>
      </tr>
      <tr>
        <td id="L1749" class="blob-num js-line-number" data-line-number="1749"></td>
        <td id="LC1749" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1750" class="blob-num js-line-number" data-line-number="1750"></td>
        <td id="LC1750" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> <span class="pl-k">char</span>*     b;</td>
      </tr>
      <tr>
        <td id="L1751" class="blob-num js-line-number" data-line-number="1751"></td>
        <td id="LC1751" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">const</span> <span class="pl-k">char</span>*     e;</td>
      </tr>
      <tr>
        <td id="L1752" class="blob-num js-line-number" data-line-number="1752"></td>
        <td id="LC1752" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1753" class="blob-num js-line-number" data-line-number="1753"></td>
        <td id="LC1753" class="blob-code blob-code-inner js-file-line">        <span class="pl-en">ImGuiTextRange</span>()                                { b = e = <span class="pl-c1">NULL</span>; }</td>
      </tr>
      <tr>
        <td id="L1754" class="blob-num js-line-number" data-line-number="1754"></td>
        <td id="LC1754" class="blob-code blob-code-inner js-file-line">        <span class="pl-en">ImGuiTextRange</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* _b, <span class="pl-k">const</span> <span class="pl-k">char</span>* _e)  { b = _b; e = _e; }</td>
      </tr>
      <tr>
        <td id="L1755" class="blob-num js-line-number" data-line-number="1755"></td>
        <td id="LC1755" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">bool</span>            <span class="pl-en">empty</span>() <span class="pl-k">const</span>                   { <span class="pl-k">return</span> b == e; }</td>
      </tr>
      <tr>
        <td id="L1756" class="blob-num js-line-number" data-line-number="1756"></td>
        <td id="LC1756" class="blob-code blob-code-inner js-file-line">        IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">split</span>(<span class="pl-k">char</span> separator, ImVector&lt;ImGuiTextRange&gt;* out) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L1757" class="blob-num js-line-number" data-line-number="1757"></td>
        <td id="LC1757" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L1758" class="blob-num js-line-number" data-line-number="1758"></td>
        <td id="LC1758" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">char</span>                    InputBuf[<span class="pl-c1">256</span>];</td>
      </tr>
      <tr>
        <td id="L1759" class="blob-num js-line-number" data-line-number="1759"></td>
        <td id="LC1759" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImGuiTextRange&gt;Filters;</td>
      </tr>
      <tr>
        <td id="L1760" class="blob-num js-line-number" data-line-number="1760"></td>
        <td id="LC1760" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                     CountGrep;</td>
      </tr>
      <tr>
        <td id="L1761" class="blob-num js-line-number" data-line-number="1761"></td>
        <td id="LC1761" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1762" class="blob-num js-line-number" data-line-number="1762"></td>
        <td id="LC1762" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1763" class="blob-num js-line-number" data-line-number="1763"></td>
        <td id="LC1763" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper: Growable text buffer for logging/accumulating text</span></td>
      </tr>
      <tr>
        <td id="L1764" class="blob-num js-line-number" data-line-number="1764"></td>
        <td id="LC1764" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> (this could be called &#39;ImGuiTextBuilder&#39; / &#39;ImGuiStringBuilder&#39;)</span></td>
      </tr>
      <tr>
        <td id="L1765" class="blob-num js-line-number" data-line-number="1765"></td>
        <td id="LC1765" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiTextBuffer</span></td>
      </tr>
      <tr>
        <td id="L1766" class="blob-num js-line-number" data-line-number="1766"></td>
        <td id="LC1766" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1767" class="blob-num js-line-number" data-line-number="1767"></td>
        <td id="LC1767" class="blob-code blob-code-inner js-file-line">    ImVector&lt;<span class="pl-k">char</span>&gt;      Buf;</td>
      </tr>
      <tr>
        <td id="L1768" class="blob-num js-line-number" data-line-number="1768"></td>
        <td id="LC1768" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">static</span> <span class="pl-k">char</span> EmptyString[<span class="pl-c1">1</span>];</td>
      </tr>
      <tr>
        <td id="L1769" class="blob-num js-line-number" data-line-number="1769"></td>
        <td id="LC1769" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1770" class="blob-num js-line-number" data-line-number="1770"></td>
        <td id="LC1770" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImGuiTextBuffer</span>()   { }</td>
      </tr>
      <tr>
        <td id="L1771" class="blob-num js-line-number" data-line-number="1771"></td>
        <td id="LC1771" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">char</span>         <span class="pl-k">operator</span>[](<span class="pl-k">int</span> i) <span class="pl-k">const</span> { <span class="pl-c1">IM_ASSERT</span>(Buf.<span class="pl-smi">Data</span> != <span class="pl-c1">NULL</span>); <span class="pl-k">return</span> Buf.<span class="pl-smi">Data</span>[i]; }</td>
      </tr>
      <tr>
        <td id="L1772" class="blob-num js-line-number" data-line-number="1772"></td>
        <td id="LC1772" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> <span class="pl-k">char</span>*         <span class="pl-en">begin</span>() <span class="pl-k">const</span>           { <span class="pl-k">return</span> Buf.<span class="pl-smi">Data</span> ? &amp;Buf.<span class="pl-c1">front</span>() : EmptyString; }</td>
      </tr>
      <tr>
        <td id="L1773" class="blob-num js-line-number" data-line-number="1773"></td>
        <td id="LC1773" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> <span class="pl-k">char</span>*         <span class="pl-en">end</span>() <span class="pl-k">const</span>             { <span class="pl-k">return</span> Buf.<span class="pl-smi">Data</span> ? &amp;Buf.<span class="pl-c1">back</span>() : EmptyString; }   <span class="pl-c"><span class="pl-c">//</span> Buf is zero-terminated, so end() will point on the zero-terminator</span></td>
      </tr>
      <tr>
        <td id="L1774" class="blob-num js-line-number" data-line-number="1774"></td>
        <td id="LC1774" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                 <span class="pl-en">size</span>() <span class="pl-k">const</span>            { <span class="pl-k">return</span> Buf.<span class="pl-smi">Size</span> ? Buf.<span class="pl-smi">Size</span> - <span class="pl-c1">1</span> : <span class="pl-c1">0</span>; }</td>
      </tr>
      <tr>
        <td id="L1775" class="blob-num js-line-number" data-line-number="1775"></td>
        <td id="LC1775" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>                <span class="pl-en">empty</span>() <span class="pl-k">const</span>           { <span class="pl-k">return</span> Buf.<span class="pl-smi">Size</span> &lt;= <span class="pl-c1">1</span>; }</td>
      </tr>
      <tr>
        <td id="L1776" class="blob-num js-line-number" data-line-number="1776"></td>
        <td id="LC1776" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>                <span class="pl-en">clear</span>()                 { Buf.<span class="pl-c1">clear</span>(); }</td>
      </tr>
      <tr>
        <td id="L1777" class="blob-num js-line-number" data-line-number="1777"></td>
        <td id="LC1777" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>                <span class="pl-en">reserve</span>(<span class="pl-k">int</span> capacity)   { Buf.<span class="pl-c1">reserve</span>(capacity); }</td>
      </tr>
      <tr>
        <td id="L1778" class="blob-num js-line-number" data-line-number="1778"></td>
        <td id="LC1778" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> <span class="pl-k">char</span>*         <span class="pl-en">c_str</span>() <span class="pl-k">const</span>           { <span class="pl-k">return</span> Buf.<span class="pl-smi">Data</span> ? Buf.<span class="pl-smi">Data</span> : EmptyString; }</td>
      </tr>
      <tr>
        <td id="L1779" class="blob-num js-line-number" data-line-number="1779"></td>
        <td id="LC1779" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">append</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* str, <span class="pl-k">const</span> <span class="pl-k">char</span>* str_end = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L1780" class="blob-num js-line-number" data-line-number="1780"></td>
        <td id="LC1780" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">appendf</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, ...) IM_FMTARGS(<span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L1781" class="blob-num js-line-number" data-line-number="1781"></td>
        <td id="LC1781" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">appendfv</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* fmt, <span class="pl-c1">va_list</span> args) IM_FMTLIST(<span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L1782" class="blob-num js-line-number" data-line-number="1782"></td>
        <td id="LC1782" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1783" class="blob-num js-line-number" data-line-number="1783"></td>
        <td id="LC1783" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1784" class="blob-num js-line-number" data-line-number="1784"></td>
        <td id="LC1784" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper: Key-&gt;Value storage</span></td>
      </tr>
      <tr>
        <td id="L1785" class="blob-num js-line-number" data-line-number="1785"></td>
        <td id="LC1785" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Typically you don&#39;t have to worry about this since a storage is held within each Window.</span></td>
      </tr>
      <tr>
        <td id="L1786" class="blob-num js-line-number" data-line-number="1786"></td>
        <td id="LC1786" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> We use it to e.g. store collapse state for a tree (Int 0/1)</span></td>
      </tr>
      <tr>
        <td id="L1787" class="blob-num js-line-number" data-line-number="1787"></td>
        <td id="LC1787" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> This is optimized for efficient lookup (dichotomy into a contiguous buffer) and rare insertion (typically tied to user interactions aka max once a frame)</span></td>
      </tr>
      <tr>
        <td id="L1788" class="blob-num js-line-number" data-line-number="1788"></td>
        <td id="LC1788" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> You can use it as custom user storage for temporary values. Declare your own storage if, for example:</span></td>
      </tr>
      <tr>
        <td id="L1789" class="blob-num js-line-number" data-line-number="1789"></td>
        <td id="LC1789" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - You want to manipulate the open/close state of a particular sub-tree in your interface (tree node uses Int 0/1 to store their state).</span></td>
      </tr>
      <tr>
        <td id="L1790" class="blob-num js-line-number" data-line-number="1790"></td>
        <td id="LC1790" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - You want to store custom debug data easily without adding or editing structures in your code (probably not efficient, but convenient)</span></td>
      </tr>
      <tr>
        <td id="L1791" class="blob-num js-line-number" data-line-number="1791"></td>
        <td id="LC1791" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Types are NOT stored, so it is up to you to make sure your Key don&#39;t collide with different types.</span></td>
      </tr>
      <tr>
        <td id="L1792" class="blob-num js-line-number" data-line-number="1792"></td>
        <td id="LC1792" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiStorage</span></td>
      </tr>
      <tr>
        <td id="L1793" class="blob-num js-line-number" data-line-number="1793"></td>
        <td id="LC1793" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1794" class="blob-num js-line-number" data-line-number="1794"></td>
        <td id="LC1794" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L1795" class="blob-num js-line-number" data-line-number="1795"></td>
        <td id="LC1795" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">struct</span> <span class="pl-en">ImGuiStoragePair</span></td>
      </tr>
      <tr>
        <td id="L1796" class="blob-num js-line-number" data-line-number="1796"></td>
        <td id="LC1796" class="blob-code blob-code-inner js-file-line">    {</td>
      </tr>
      <tr>
        <td id="L1797" class="blob-num js-line-number" data-line-number="1797"></td>
        <td id="LC1797" class="blob-code blob-code-inner js-file-line">        ImGuiID key;</td>
      </tr>
      <tr>
        <td id="L1798" class="blob-num js-line-number" data-line-number="1798"></td>
        <td id="LC1798" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">union</span> { <span class="pl-k">int</span> val_i; <span class="pl-k">float</span> val_f; <span class="pl-k">void</span>* val_p; };</td>
      </tr>
      <tr>
        <td id="L1799" class="blob-num js-line-number" data-line-number="1799"></td>
        <td id="LC1799" class="blob-code blob-code-inner js-file-line">        <span class="pl-en">ImGuiStoragePair</span>(ImGuiID _key, <span class="pl-k">int</span> _val_i)      { key = _key; val_i = _val_i; }</td>
      </tr>
      <tr>
        <td id="L1800" class="blob-num js-line-number" data-line-number="1800"></td>
        <td id="LC1800" class="blob-code blob-code-inner js-file-line">        <span class="pl-en">ImGuiStoragePair</span>(ImGuiID _key, <span class="pl-k">float</span> _val_f)    { key = _key; val_f = _val_f; }</td>
      </tr>
      <tr>
        <td id="L1801" class="blob-num js-line-number" data-line-number="1801"></td>
        <td id="LC1801" class="blob-code blob-code-inner js-file-line">        <span class="pl-en">ImGuiStoragePair</span>(ImGuiID _key, <span class="pl-k">void</span>* _val_p)    { key = _key; val_p = _val_p; }</td>
      </tr>
      <tr>
        <td id="L1802" class="blob-num js-line-number" data-line-number="1802"></td>
        <td id="LC1802" class="blob-code blob-code-inner js-file-line">    };</td>
      </tr>
      <tr>
        <td id="L1803" class="blob-num js-line-number" data-line-number="1803"></td>
        <td id="LC1803" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1804" class="blob-num js-line-number" data-line-number="1804"></td>
        <td id="LC1804" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImGuiStoragePair&gt;      Data;</td>
      </tr>
      <tr>
        <td id="L1805" class="blob-num js-line-number" data-line-number="1805"></td>
        <td id="LC1805" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1806" class="blob-num js-line-number" data-line-number="1806"></td>
        <td id="LC1806" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Get***() functions find pair, never add/allocate. Pairs are sorted so a query is O(log N)</span></td>
      </tr>
      <tr>
        <td id="L1807" class="blob-num js-line-number" data-line-number="1807"></td>
        <td id="LC1807" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Set***() functions find pair, insertion on demand if missing.</span></td>
      </tr>
      <tr>
        <td id="L1808" class="blob-num js-line-number" data-line-number="1808"></td>
        <td id="LC1808" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Sorted insertion is costly, paid once. A typical frame shouldn&#39;t need to insert any new pair.</span></td>
      </tr>
      <tr>
        <td id="L1809" class="blob-num js-line-number" data-line-number="1809"></td>
        <td id="LC1809" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>                <span class="pl-en">Clear</span>() { Data.<span class="pl-c1">clear</span>(); }</td>
      </tr>
      <tr>
        <td id="L1810" class="blob-num js-line-number" data-line-number="1810"></td>
        <td id="LC1810" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">int</span>       <span class="pl-en">GetInt</span>(ImGuiID key, <span class="pl-k">int</span> default_val = <span class="pl-c1">0</span>) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L1811" class="blob-num js-line-number" data-line-number="1811"></td>
        <td id="LC1811" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">SetInt</span>(ImGuiID key, <span class="pl-k">int</span> val);</td>
      </tr>
      <tr>
        <td id="L1812" class="blob-num js-line-number" data-line-number="1812"></td>
        <td id="LC1812" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>      <span class="pl-en">GetBool</span>(ImGuiID key, <span class="pl-k">bool</span> default_val = <span class="pl-c1">false</span>) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L1813" class="blob-num js-line-number" data-line-number="1813"></td>
        <td id="LC1813" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">SetBool</span>(ImGuiID key, <span class="pl-k">bool</span> val);</td>
      </tr>
      <tr>
        <td id="L1814" class="blob-num js-line-number" data-line-number="1814"></td>
        <td id="LC1814" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>     <span class="pl-en">GetFloat</span>(ImGuiID key, <span class="pl-k">float</span> default_val = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L1815" class="blob-num js-line-number" data-line-number="1815"></td>
        <td id="LC1815" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">SetFloat</span>(ImGuiID key, <span class="pl-k">float</span> val);</td>
      </tr>
      <tr>
        <td id="L1816" class="blob-num js-line-number" data-line-number="1816"></td>
        <td id="LC1816" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>*     <span class="pl-en">GetVoidPtr</span>(ImGuiID key) <span class="pl-k">const</span>; <span class="pl-c"><span class="pl-c">//</span> default_val is NULL</span></td>
      </tr>
      <tr>
        <td id="L1817" class="blob-num js-line-number" data-line-number="1817"></td>
        <td id="LC1817" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">SetVoidPtr</span>(ImGuiID key, <span class="pl-k">void</span>* val);</td>
      </tr>
      <tr>
        <td id="L1818" class="blob-num js-line-number" data-line-number="1818"></td>
        <td id="LC1818" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1819" class="blob-num js-line-number" data-line-number="1819"></td>
        <td id="LC1819" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Get***Ref() functions finds pair, insert on demand if missing, return pointer. Useful if you intend to do Get+Set.</span></td>
      </tr>
      <tr>
        <td id="L1820" class="blob-num js-line-number" data-line-number="1820"></td>
        <td id="LC1820" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - References are only valid until a new value is added to the storage. Calling a Set***() function or a Get***Ref() function invalidates the pointer.</span></td>
      </tr>
      <tr>
        <td id="L1821" class="blob-num js-line-number" data-line-number="1821"></td>
        <td id="LC1821" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - A typical use case where this is convenient for quick hacking (e.g. add storage during a live Edit&amp;Continue session if you can&#39;t modify existing struct)</span></td>
      </tr>
      <tr>
        <td id="L1822" class="blob-num js-line-number" data-line-number="1822"></td>
        <td id="LC1822" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>      float* pvar = ImGui::GetFloatRef(key); ImGui::SliderFloat(&quot;var&quot;, pvar, 0, 100.0f); some_var += *pvar;</span></td>
      </tr>
      <tr>
        <td id="L1823" class="blob-num js-line-number" data-line-number="1823"></td>
        <td id="LC1823" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">int</span>*      <span class="pl-en">GetIntRef</span>(ImGuiID key, <span class="pl-k">int</span> default_val = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L1824" class="blob-num js-line-number" data-line-number="1824"></td>
        <td id="LC1824" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>*     <span class="pl-en">GetBoolRef</span>(ImGuiID key, <span class="pl-k">bool</span> default_val = <span class="pl-c1">false</span>);</td>
      </tr>
      <tr>
        <td id="L1825" class="blob-num js-line-number" data-line-number="1825"></td>
        <td id="LC1825" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">float</span>*    <span class="pl-en">GetFloatRef</span>(ImGuiID key, <span class="pl-k">float</span> default_val = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L1826" class="blob-num js-line-number" data-line-number="1826"></td>
        <td id="LC1826" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>**    <span class="pl-en">GetVoidPtrRef</span>(ImGuiID key, <span class="pl-k">void</span>* default_val = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L1827" class="blob-num js-line-number" data-line-number="1827"></td>
        <td id="LC1827" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1828" class="blob-num js-line-number" data-line-number="1828"></td>
        <td id="LC1828" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Use on your own storage if you know only integer are being stored (open/close all tree nodes)</span></td>
      </tr>
      <tr>
        <td id="L1829" class="blob-num js-line-number" data-line-number="1829"></td>
        <td id="LC1829" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">SetAllInt</span>(<span class="pl-k">int</span> val);</td>
      </tr>
      <tr>
        <td id="L1830" class="blob-num js-line-number" data-line-number="1830"></td>
        <td id="LC1830" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1831" class="blob-num js-line-number" data-line-number="1831"></td>
        <td id="LC1831" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> For quicker full rebuild of a storage (instead of an incremental one), you may add all your contents and then sort once.</span></td>
      </tr>
      <tr>
        <td id="L1832" class="blob-num js-line-number" data-line-number="1832"></td>
        <td id="LC1832" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>      <span class="pl-en">BuildSortByKey</span>();</td>
      </tr>
      <tr>
        <td id="L1833" class="blob-num js-line-number" data-line-number="1833"></td>
        <td id="LC1833" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1834" class="blob-num js-line-number" data-line-number="1834"></td>
        <td id="LC1834" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1835" class="blob-num js-line-number" data-line-number="1835"></td>
        <td id="LC1835" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper: Manually clip large list of items.</span></td>
      </tr>
      <tr>
        <td id="L1836" class="blob-num js-line-number" data-line-number="1836"></td>
        <td id="LC1836" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> If you are submitting lots of evenly spaced items and you have a random access to the list, you can perform coarse clipping based on visibility to save yourself from processing those items at all.</span></td>
      </tr>
      <tr>
        <td id="L1837" class="blob-num js-line-number" data-line-number="1837"></td>
        <td id="LC1837" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> The clipper calculates the range of visible items and advance the cursor to compensate for the non-visible items we have skipped.</span></td>
      </tr>
      <tr>
        <td id="L1838" class="blob-num js-line-number" data-line-number="1838"></td>
        <td id="LC1838" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> ImGui already clip items based on their bounds but it needs to measure text size to do so. Coarse clipping before submission makes this cost and your own data fetching/submission cost null.</span></td>
      </tr>
      <tr>
        <td id="L1839" class="blob-num js-line-number" data-line-number="1839"></td>
        <td id="LC1839" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Usage:</span></td>
      </tr>
      <tr>
        <td id="L1840" class="blob-num js-line-number" data-line-number="1840"></td>
        <td id="LC1840" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>     ImGuiListClipper clipper(1000);  // we have 1000 elements, evenly spaced.</span></td>
      </tr>
      <tr>
        <td id="L1841" class="blob-num js-line-number" data-line-number="1841"></td>
        <td id="LC1841" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>     while (clipper.Step())</span></td>
      </tr>
      <tr>
        <td id="L1842" class="blob-num js-line-number" data-line-number="1842"></td>
        <td id="LC1842" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>         for (int i = clipper.DisplayStart; i &lt; clipper.DisplayEnd; i++)</span></td>
      </tr>
      <tr>
        <td id="L1843" class="blob-num js-line-number" data-line-number="1843"></td>
        <td id="LC1843" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>             ImGui::Text(&quot;line number %d&quot;, i);</span></td>
      </tr>
      <tr>
        <td id="L1844" class="blob-num js-line-number" data-line-number="1844"></td>
        <td id="LC1844" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Step 0: the clipper let you process the first element, regardless of it being visible or not, so we can measure the element height (step skipped if we passed a known height as second arg to constructor).</span></td>
      </tr>
      <tr>
        <td id="L1845" class="blob-num js-line-number" data-line-number="1845"></td>
        <td id="LC1845" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Step 1: the clipper infer height from first element, calculate the actual range of elements to display, and position the cursor before the first element.</span></td>
      </tr>
      <tr>
        <td id="L1846" class="blob-num js-line-number" data-line-number="1846"></td>
        <td id="LC1846" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - (Step 2: empty step only required if an explicit items_height was passed to constructor or Begin() and user call Step(). Does nothing and switch to Step 3.)</span></td>
      </tr>
      <tr>
        <td id="L1847" class="blob-num js-line-number" data-line-number="1847"></td>
        <td id="LC1847" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Step 3: the clipper validate that we have reached the expected Y position (corresponding to element DisplayEnd), advance the cursor to the end of the list and then returns &#39;false&#39; to end the loop.</span></td>
      </tr>
      <tr>
        <td id="L1848" class="blob-num js-line-number" data-line-number="1848"></td>
        <td id="LC1848" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImGuiListClipper</span></td>
      </tr>
      <tr>
        <td id="L1849" class="blob-num js-line-number" data-line-number="1849"></td>
        <td id="LC1849" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1850" class="blob-num js-line-number" data-line-number="1850"></td>
        <td id="LC1850" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>     DisplayStart, DisplayEnd;</td>
      </tr>
      <tr>
        <td id="L1851" class="blob-num js-line-number" data-line-number="1851"></td>
        <td id="LC1851" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>     ItemsCount;</td>
      </tr>
      <tr>
        <td id="L1852" class="blob-num js-line-number" data-line-number="1852"></td>
        <td id="LC1852" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1853" class="blob-num js-line-number" data-line-number="1853"></td>
        <td id="LC1853" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L1854" class="blob-num js-line-number" data-line-number="1854"></td>
        <td id="LC1854" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>     StepNo;</td>
      </tr>
      <tr>
        <td id="L1855" class="blob-num js-line-number" data-line-number="1855"></td>
        <td id="LC1855" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>   ItemsHeight;</td>
      </tr>
      <tr>
        <td id="L1856" class="blob-num js-line-number" data-line-number="1856"></td>
        <td id="LC1856" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>   StartPosY;</td>
      </tr>
      <tr>
        <td id="L1857" class="blob-num js-line-number" data-line-number="1857"></td>
        <td id="LC1857" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1858" class="blob-num js-line-number" data-line-number="1858"></td>
        <td id="LC1858" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> items_count:  Use -1 to ignore (you can call Begin later). Use INT_MAX if you don&#39;t know how many items you have (in which case the cursor won&#39;t be advanced in the final step).</span></td>
      </tr>
      <tr>
        <td id="L1859" class="blob-num js-line-number" data-line-number="1859"></td>
        <td id="LC1859" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> items_height: Use -1.0f to be calculated automatically on first step. Otherwise pass in the distance between your items, typically GetTextLineHeightWithSpacing() or GetFrameHeightWithSpacing().</span></td>
      </tr>
      <tr>
        <td id="L1860" class="blob-num js-line-number" data-line-number="1860"></td>
        <td id="LC1860" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> If you don&#39;t specify an items_height, you NEED to call Step(). If you specify items_height you may call the old Begin()/End() api directly, but prefer calling Step().</span></td>
      </tr>
      <tr>
        <td id="L1861" class="blob-num js-line-number" data-line-number="1861"></td>
        <td id="LC1861" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImGuiListClipper</span>(<span class="pl-k">int</span> items_count = -<span class="pl-c1">1</span>, <span class="pl-k">float</span> items_height = -<span class="pl-c1">1</span>.<span class="pl-c1">0f</span>)  { <span class="pl-c1">Begin</span>(items_count, items_height); } <span class="pl-c"><span class="pl-c">//</span> NB: Begin() initialize every fields (as we allow user to call Begin/End multiple times on a same instance if they want).</span></td>
      </tr>
      <tr>
        <td id="L1862" class="blob-num js-line-number" data-line-number="1862"></td>
        <td id="LC1862" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">~ImGuiListClipper</span>()                                                 { <span class="pl-c1">IM_ASSERT</span>(ItemsCount == -<span class="pl-c1">1</span>); }      <span class="pl-c"><span class="pl-c">//</span> Assert if user forgot to call End() or Step() until false.</span></td>
      </tr>
      <tr>
        <td id="L1863" class="blob-num js-line-number" data-line-number="1863"></td>
        <td id="LC1863" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1864" class="blob-num js-line-number" data-line-number="1864"></td>
        <td id="LC1864" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span> <span class="pl-en">Step</span>();                                              <span class="pl-c"><span class="pl-c">//</span> Call until it returns false. The DisplayStart/DisplayEnd fields will be set and you can process/draw those items.</span></td>
      </tr>
      <tr>
        <td id="L1865" class="blob-num js-line-number" data-line-number="1865"></td>
        <td id="LC1865" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span> <span class="pl-en">Begin</span>(<span class="pl-k">int</span> items_count, <span class="pl-k">float</span> items_height = -<span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);  <span class="pl-c"><span class="pl-c">//</span> Automatically called by constructor if you passed &#39;items_count&#39; or by Step() in Step 1.</span></td>
      </tr>
      <tr>
        <td id="L1866" class="blob-num js-line-number" data-line-number="1866"></td>
        <td id="LC1866" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span> <span class="pl-en">End</span>();                                               <span class="pl-c"><span class="pl-c">//</span> Automatically called on the last call of Step() that returns false.</span></td>
      </tr>
      <tr>
        <td id="L1867" class="blob-num js-line-number" data-line-number="1867"></td>
        <td id="LC1867" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1868" class="blob-num js-line-number" data-line-number="1868"></td>
        <td id="LC1868" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1869" class="blob-num js-line-number" data-line-number="1869"></td>
        <td id="LC1869" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helpers macros to generate 32-bit encoded colors</span></td>
      </tr>
      <tr>
        <td id="L1870" class="blob-num js-line-number" data-line-number="1870"></td>
        <td id="LC1870" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> IMGUI_USE_BGRA_PACKED_COLOR</td>
      </tr>
      <tr>
        <td id="L1871" class="blob-num js-line-number" data-line-number="1871"></td>
        <td id="LC1871" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_R_SHIFT</span>    <span class="pl-c1">16</span></td>
      </tr>
      <tr>
        <td id="L1872" class="blob-num js-line-number" data-line-number="1872"></td>
        <td id="LC1872" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_G_SHIFT</span>    <span class="pl-c1">8</span></td>
      </tr>
      <tr>
        <td id="L1873" class="blob-num js-line-number" data-line-number="1873"></td>
        <td id="LC1873" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_B_SHIFT</span>    <span class="pl-c1">0</span></td>
      </tr>
      <tr>
        <td id="L1874" class="blob-num js-line-number" data-line-number="1874"></td>
        <td id="LC1874" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_A_SHIFT</span>    <span class="pl-c1">24</span></td>
      </tr>
      <tr>
        <td id="L1875" class="blob-num js-line-number" data-line-number="1875"></td>
        <td id="LC1875" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_A_MASK</span>     <span class="pl-c1">0xFF000000</span></td>
      </tr>
      <tr>
        <td id="L1876" class="blob-num js-line-number" data-line-number="1876"></td>
        <td id="LC1876" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1877" class="blob-num js-line-number" data-line-number="1877"></td>
        <td id="LC1877" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_R_SHIFT</span>    <span class="pl-c1">0</span></td>
      </tr>
      <tr>
        <td id="L1878" class="blob-num js-line-number" data-line-number="1878"></td>
        <td id="LC1878" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_G_SHIFT</span>    <span class="pl-c1">8</span></td>
      </tr>
      <tr>
        <td id="L1879" class="blob-num js-line-number" data-line-number="1879"></td>
        <td id="LC1879" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_B_SHIFT</span>    <span class="pl-c1">16</span></td>
      </tr>
      <tr>
        <td id="L1880" class="blob-num js-line-number" data-line-number="1880"></td>
        <td id="LC1880" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_A_SHIFT</span>    <span class="pl-c1">24</span></td>
      </tr>
      <tr>
        <td id="L1881" class="blob-num js-line-number" data-line-number="1881"></td>
        <td id="LC1881" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_A_MASK</span>     <span class="pl-c1">0xFF000000</span></td>
      </tr>
      <tr>
        <td id="L1882" class="blob-num js-line-number" data-line-number="1882"></td>
        <td id="LC1882" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1883" class="blob-num js-line-number" data-line-number="1883"></td>
        <td id="LC1883" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32</span>(<span class="pl-v">R,G,B,A</span>)    (((ImU32)(A)&lt;&lt;IM_COL32_A_SHIFT) | ((ImU32)(B)&lt;&lt;IM_COL32_B_SHIFT) | ((ImU32)(G)&lt;&lt;IM_COL32_G_SHIFT) | ((ImU32)(R)&lt;&lt;IM_COL32_R_SHIFT))</td>
      </tr>
      <tr>
        <td id="L1884" class="blob-num js-line-number" data-line-number="1884"></td>
        <td id="LC1884" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_WHITE</span>       <span class="pl-en">IM_COL32</span>(<span class="pl-c1">255</span>,<span class="pl-c1">255</span>,<span class="pl-c1">255</span>,<span class="pl-c1">255</span>)  <span class="pl-c"><span class="pl-c">//</span> Opaque white = 0xFFFFFFFF</span></td>
      </tr>
      <tr>
        <td id="L1885" class="blob-num js-line-number" data-line-number="1885"></td>
        <td id="LC1885" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_BLACK</span>       <span class="pl-en">IM_COL32</span>(<span class="pl-c1">0</span>,<span class="pl-c1">0</span>,<span class="pl-c1">0</span>,<span class="pl-c1">255</span>)        <span class="pl-c"><span class="pl-c">//</span> Opaque black</span></td>
      </tr>
      <tr>
        <td id="L1886" class="blob-num js-line-number" data-line-number="1886"></td>
        <td id="LC1886" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_COL32_BLACK_TRANS</span> <span class="pl-en">IM_COL32</span>(<span class="pl-c1">0</span>,<span class="pl-c1">0</span>,<span class="pl-c1">0</span>,<span class="pl-c1">0</span>)          <span class="pl-c"><span class="pl-c">//</span> Transparent black = 0x00000000</span></td>
      </tr>
      <tr>
        <td id="L1887" class="blob-num js-line-number" data-line-number="1887"></td>
        <td id="LC1887" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1888" class="blob-num js-line-number" data-line-number="1888"></td>
        <td id="LC1888" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper: ImColor() implicitly converts colors to either ImU32 (packed 4x1 byte) or ImVec4 (4x1 float)</span></td>
      </tr>
      <tr>
        <td id="L1889" class="blob-num js-line-number" data-line-number="1889"></td>
        <td id="LC1889" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Prefer using IM_COL32() macros if you want a guaranteed compile-time ImU32 for usage with ImDrawList API.</span></td>
      </tr>
      <tr>
        <td id="L1890" class="blob-num js-line-number" data-line-number="1890"></td>
        <td id="LC1890" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> **Avoid storing ImColor! Store either u32 of ImVec4. This is not a full-featured color class. MAY OBSOLETE.</span></td>
      </tr>
      <tr>
        <td id="L1891" class="blob-num js-line-number" data-line-number="1891"></td>
        <td id="LC1891" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> **None of the ImGui API are using ImColor directly but you can use it as a convenience to pass colors in either ImU32 or ImVec4 formats. Explicitly cast to ImU32 or ImVec4 if needed.</span></td>
      </tr>
      <tr>
        <td id="L1892" class="blob-num js-line-number" data-line-number="1892"></td>
        <td id="LC1892" class="blob-code blob-code-inner js-file-line">struct ImColor</td>
      </tr>
      <tr>
        <td id="L1893" class="blob-num js-line-number" data-line-number="1893"></td>
        <td id="LC1893" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1894" class="blob-num js-line-number" data-line-number="1894"></td>
        <td id="LC1894" class="blob-code blob-code-inner js-file-line">    ImVec4              Value;</td>
      </tr>
      <tr>
        <td id="L1895" class="blob-num js-line-number" data-line-number="1895"></td>
        <td id="LC1895" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1896" class="blob-num js-line-number" data-line-number="1896"></td>
        <td id="LC1896" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">ImColor</span>()                                                       { Value.<span class="pl-smi">x</span> = Value.<span class="pl-smi">y</span> = Value.<span class="pl-smi">z</span> = Value.<span class="pl-smi">w</span> = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>; }</td>
      </tr>
      <tr>
        <td id="L1897" class="blob-num js-line-number" data-line-number="1897"></td>
        <td id="LC1897" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">ImColor</span>(<span class="pl-k">int</span> r, <span class="pl-k">int</span> g, <span class="pl-k">int</span> b, <span class="pl-k">int</span> a = <span class="pl-c1">255</span>)                       { <span class="pl-k">float</span> sc = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span> / <span class="pl-c1">255</span>.<span class="pl-c1">0f</span>; Value.<span class="pl-smi">x</span> = (<span class="pl-k">float</span>)r * sc; Value.<span class="pl-smi">y</span> = (<span class="pl-k">float</span>)g * sc; Value.<span class="pl-smi">z</span> = (<span class="pl-k">float</span>)b * sc; Value.<span class="pl-smi">w</span> = (<span class="pl-k">float</span>)a * sc; }</td>
      </tr>
      <tr>
        <td id="L1898" class="blob-num js-line-number" data-line-number="1898"></td>
        <td id="LC1898" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">ImColor</span>(ImU32 rgba)                                             { <span class="pl-k">float</span> sc = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span> / <span class="pl-c1">255</span>.<span class="pl-c1">0f</span>; Value.<span class="pl-smi">x</span> = (<span class="pl-k">float</span>)((rgba &gt;&gt; IM_COL32_R_SHIFT) &amp; <span class="pl-c1">0xFF</span>) * sc; Value.<span class="pl-smi">y</span> = (<span class="pl-k">float</span>)((rgba &gt;&gt; IM_COL32_G_SHIFT) &amp; <span class="pl-c1">0xFF</span>) * sc; Value.<span class="pl-smi">z</span> = (<span class="pl-k">float</span>)((rgba &gt;&gt; IM_COL32_B_SHIFT) &amp; <span class="pl-c1">0xFF</span>) * sc; Value.<span class="pl-smi">w</span> = (<span class="pl-k">float</span>)((rgba &gt;&gt; IM_COL32_A_SHIFT) &amp; <span class="pl-c1">0xFF</span>) * sc; }</td>
      </tr>
      <tr>
        <td id="L1899" class="blob-num js-line-number" data-line-number="1899"></td>
        <td id="LC1899" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">ImColor</span>(<span class="pl-k">float</span> r, <span class="pl-k">float</span> g, <span class="pl-k">float</span> b, <span class="pl-k">float</span> a = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>)              { Value.<span class="pl-smi">x</span> = r; Value.<span class="pl-smi">y</span> = g; Value.<span class="pl-smi">z</span> = b; Value.<span class="pl-smi">w</span> = a; }</td>
      </tr>
      <tr>
        <td id="L1900" class="blob-num js-line-number" data-line-number="1900"></td>
        <td id="LC1900" class="blob-code blob-code-inner js-file-line">    <span class="pl-c1">ImColor</span>(<span class="pl-k">const</span> ImVec4&amp; col)                                      { Value = col; }</td>
      </tr>
      <tr>
        <td id="L1901" class="blob-num js-line-number" data-line-number="1901"></td>
        <td id="LC1901" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">operator</span> <span class="pl-smi">ImU32</span>() <span class="pl-k">const</span>                                   { <span class="pl-k">return</span> <span class="pl-c1">ImGui::ColorConvertFloat4ToU32</span>(Value); }</td>
      </tr>
      <tr>
        <td id="L1902" class="blob-num js-line-number" data-line-number="1902"></td>
        <td id="LC1902" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">operator</span> <span class="pl-smi">ImVec4</span>() <span class="pl-k">const</span>                                  { <span class="pl-k">return</span> Value; }</td>
      </tr>
      <tr>
        <td id="L1903" class="blob-num js-line-number" data-line-number="1903"></td>
        <td id="LC1903" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1904" class="blob-num js-line-number" data-line-number="1904"></td>
        <td id="LC1904" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> FIXME-OBSOLETE: May need to obsolete/cleanup those helpers.</span></td>
      </tr>
      <tr>
        <td id="L1905" class="blob-num js-line-number" data-line-number="1905"></td>
        <td id="LC1905" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>    <span class="pl-smi">SetHSV</span>(<span class="pl-k">float</span> h, <span class="pl-k">float</span> s, <span class="pl-k">float</span> v, <span class="pl-k">float</span> a = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>){ <span class="pl-c1">ImGui::ColorConvertHSVtoRGB</span>(h, s, v, Value.<span class="pl-smi">x</span>, Value.<span class="pl-smi">y</span>, Value.<span class="pl-smi">z</span>); Value.<span class="pl-smi">w</span> = a; }</td>
      </tr>
      <tr>
        <td id="L1906" class="blob-num js-line-number" data-line-number="1906"></td>
        <td id="LC1906" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">static</span> ImColor <span class="pl-smi">HSV</span>(<span class="pl-k">float</span> h, <span class="pl-k">float</span> s, <span class="pl-k">float</span> v, <span class="pl-k">float</span> a = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>)   { <span class="pl-k">float</span> r, g, b; <span class="pl-c1">ImGui::ColorConvertHSVtoRGB</span>(h, s, v, r, g, b); <span class="pl-k">return</span> <span class="pl-c1">ImColor</span>(r, g, b, a); }</td>
      </tr>
      <tr>
        <td id="L1907" class="blob-num js-line-number" data-line-number="1907"></td>
        <td id="LC1907" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1908" class="blob-num js-line-number" data-line-number="1908"></td>
        <td id="LC1908" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1909" class="blob-num js-line-number" data-line-number="1909"></td>
        <td id="LC1909" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1910" class="blob-num js-line-number" data-line-number="1910"></td>
        <td id="LC1910" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Draw List API (ImDrawCmd, ImDrawIdx, ImDrawVert, ImDrawChannel, ImDrawListSplitter, ImDrawListFlags, ImDrawList, ImDrawData)</span></td>
      </tr>
      <tr>
        <td id="L1911" class="blob-num js-line-number" data-line-number="1911"></td>
        <td id="LC1911" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Hold a series of drawing commands. The user provides a renderer for ImDrawData which essentially contains an array of ImDrawList.</span></td>
      </tr>
      <tr>
        <td id="L1912" class="blob-num js-line-number" data-line-number="1912"></td>
        <td id="LC1912" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L1913" class="blob-num js-line-number" data-line-number="1913"></td>
        <td id="LC1913" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1914" class="blob-num js-line-number" data-line-number="1914"></td>
        <td id="LC1914" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> The maximum line width to bake anti-aliased textures for. Build atlas with ImFontAtlasFlags_NoBakedLines to disable baking.</span></td>
      </tr>
      <tr>
        <td id="L1915" class="blob-num js-line-number" data-line-number="1915"></td>
        <td id="LC1915" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IM_DRAWLIST_TEX_LINES_WIDTH_MAX</td>
      </tr>
      <tr>
        <td id="L1916" class="blob-num js-line-number" data-line-number="1916"></td>
        <td id="LC1916" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">IM_DRAWLIST_TEX_LINES_WIDTH_MAX</span>     (<span class="pl-c1">63</span>)</td>
      </tr>
      <tr>
        <td id="L1917" class="blob-num js-line-number" data-line-number="1917"></td>
        <td id="LC1917" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1918" class="blob-num js-line-number" data-line-number="1918"></td>
        <td id="LC1918" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1919" class="blob-num js-line-number" data-line-number="1919"></td>
        <td id="LC1919" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> ImDrawCallback: Draw callbacks for advanced uses [configurable type: override in imconfig.h]</span></td>
      </tr>
      <tr>
        <td id="L1920" class="blob-num js-line-number" data-line-number="1920"></td>
        <td id="LC1920" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> NB: You most likely do NOT need to use draw callbacks just to create your own widget or customized UI rendering,</span></td>
      </tr>
      <tr>
        <td id="L1921" class="blob-num js-line-number" data-line-number="1921"></td>
        <td id="LC1921" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> you can poke into the draw list for that! Draw callback may be useful for example to:</span></td>
      </tr>
      <tr>
        <td id="L1922" class="blob-num js-line-number" data-line-number="1922"></td>
        <td id="LC1922" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>  A) Change your GPU render state,</span></td>
      </tr>
      <tr>
        <td id="L1923" class="blob-num js-line-number" data-line-number="1923"></td>
        <td id="LC1923" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>  B) render a complex 3D scene inside a UI element without an intermediate texture/render target, etc.</span></td>
      </tr>
      <tr>
        <td id="L1924" class="blob-num js-line-number" data-line-number="1924"></td>
        <td id="LC1924" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> The expected behavior from your rendering function is &#39;if (cmd.UserCallback != NULL) { cmd.UserCallback(parent_list, cmd); } else { RenderTriangles() }&#39;</span></td>
      </tr>
      <tr>
        <td id="L1925" class="blob-num js-line-number" data-line-number="1925"></td>
        <td id="LC1925" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> If you want to override the signature of ImDrawCallback, you can simply use e.g. &#39;#define ImDrawCallback MyDrawCallback&#39; (in imconfig.h) + update rendering back-end accordingly.</span></td>
      </tr>
      <tr>
        <td id="L1926" class="blob-num js-line-number" data-line-number="1926"></td>
        <td id="LC1926" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> ImDrawCallback</td>
      </tr>
      <tr>
        <td id="L1927" class="blob-num js-line-number" data-line-number="1927"></td>
        <td id="LC1927" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-en">void</span> (*ImDrawCallback)(<span class="pl-k">const</span> ImDrawList* parent_list, <span class="pl-k">const</span> ImDrawCmd* cmd);</td>
      </tr>
      <tr>
        <td id="L1928" class="blob-num js-line-number" data-line-number="1928"></td>
        <td id="LC1928" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1929" class="blob-num js-line-number" data-line-number="1929"></td>
        <td id="LC1929" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1930" class="blob-num js-line-number" data-line-number="1930"></td>
        <td id="LC1930" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Special Draw callback value to request renderer back-end to reset the graphics/render state.</span></td>
      </tr>
      <tr>
        <td id="L1931" class="blob-num js-line-number" data-line-number="1931"></td>
        <td id="LC1931" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> The renderer back-end needs to handle this special value, otherwise it will crash trying to call a function at this address.</span></td>
      </tr>
      <tr>
        <td id="L1932" class="blob-num js-line-number" data-line-number="1932"></td>
        <td id="LC1932" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> This is useful for example if you submitted callbacks which you know have altered the render state and you want it to be restored.</span></td>
      </tr>
      <tr>
        <td id="L1933" class="blob-num js-line-number" data-line-number="1933"></td>
        <td id="LC1933" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> It is not done by default because they are many perfectly useful way of altering render state for imgui contents (e.g. changing shader/blending settings before an Image call).</span></td>
      </tr>
      <tr>
        <td id="L1934" class="blob-num js-line-number" data-line-number="1934"></td>
        <td id="LC1934" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ImDrawCallback_ResetRenderState</span>     (ImDrawCallback)(-<span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L1935" class="blob-num js-line-number" data-line-number="1935"></td>
        <td id="LC1935" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1936" class="blob-num js-line-number" data-line-number="1936"></td>
        <td id="LC1936" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Typically, 1 command = 1 GPU draw call (unless command is a callback)</span></td>
      </tr>
      <tr>
        <td id="L1937" class="blob-num js-line-number" data-line-number="1937"></td>
        <td id="LC1937" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - VtxOffset/IdxOffset: When &#39;io.BackendFlags &amp; ImGuiBackendFlags_RendererHasVtxOffset&#39; is enabled,</span></td>
      </tr>
      <tr>
        <td id="L1938" class="blob-num js-line-number" data-line-number="1938"></td>
        <td id="LC1938" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   those fields allow us to render meshes larger than 64K vertices while keeping 16-bit indices.</span></td>
      </tr>
      <tr>
        <td id="L1939" class="blob-num js-line-number" data-line-number="1939"></td>
        <td id="LC1939" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   Pre-1.71 back-ends will typically ignore the VtxOffset/IdxOffset fields.</span></td>
      </tr>
      <tr>
        <td id="L1940" class="blob-num js-line-number" data-line-number="1940"></td>
        <td id="LC1940" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - The ClipRect/TextureId/VtxOffset fields must be contiguous as we memcmp() them together (this is asserted for).</span></td>
      </tr>
      <tr>
        <td id="L1941" class="blob-num js-line-number" data-line-number="1941"></td>
        <td id="LC1941" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawCmd</span></td>
      </tr>
      <tr>
        <td id="L1942" class="blob-num js-line-number" data-line-number="1942"></td>
        <td id="LC1942" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1943" class="blob-num js-line-number" data-line-number="1943"></td>
        <td id="LC1943" class="blob-code blob-code-inner js-file-line">    ImVec4          ClipRect;           <span class="pl-c"><span class="pl-c">//</span> 4*4  // Clipping rectangle (x1, y1, x2, y2). Subtract ImDrawData-&gt;DisplayPos to get clipping rectangle in &quot;viewport&quot; coordinates</span></td>
      </tr>
      <tr>
        <td id="L1944" class="blob-num js-line-number" data-line-number="1944"></td>
        <td id="LC1944" class="blob-code blob-code-inner js-file-line">    ImTextureID     TextureId;          <span class="pl-c"><span class="pl-c">//</span> 4-8  // User-provided texture ID. Set by user in ImfontAtlas::SetTexID() for fonts or passed to Image*() functions. Ignore if never using images or multiple fonts atlas.</span></td>
      </tr>
      <tr>
        <td id="L1945" class="blob-num js-line-number" data-line-number="1945"></td>
        <td id="LC1945" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">int</span>    VtxOffset;          <span class="pl-c"><span class="pl-c">//</span> 4    // Start offset in vertex buffer. ImGuiBackendFlags_RendererHasVtxOffset: always 0, otherwise may be &gt;0 to support meshes larger than 64K vertices with 16-bit indices.</span></td>
      </tr>
      <tr>
        <td id="L1946" class="blob-num js-line-number" data-line-number="1946"></td>
        <td id="LC1946" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">int</span>    IdxOffset;          <span class="pl-c"><span class="pl-c">//</span> 4    // Start offset in index buffer. Always equal to sum of ElemCount drawn so far.</span></td>
      </tr>
      <tr>
        <td id="L1947" class="blob-num js-line-number" data-line-number="1947"></td>
        <td id="LC1947" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">int</span>    ElemCount;          <span class="pl-c"><span class="pl-c">//</span> 4    // Number of indices (multiple of 3) to be rendered as triangles. Vertices are stored in the callee ImDrawList&#39;s vtx_buffer[] array, indices in idx_buffer[].</span></td>
      </tr>
      <tr>
        <td id="L1948" class="blob-num js-line-number" data-line-number="1948"></td>
        <td id="LC1948" class="blob-code blob-code-inner js-file-line">    ImDrawCallback  UserCallback;       <span class="pl-c"><span class="pl-c">//</span> 4-8  // If != NULL, call the function instead of rendering the vertices. clip_rect and texture_id will be set normally.</span></td>
      </tr>
      <tr>
        <td id="L1949" class="blob-num js-line-number" data-line-number="1949"></td>
        <td id="LC1949" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*           UserCallbackData;   <span class="pl-c"><span class="pl-c">//</span> 4-8  // The draw callback code can access this.</span></td>
      </tr>
      <tr>
        <td id="L1950" class="blob-num js-line-number" data-line-number="1950"></td>
        <td id="LC1950" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1951" class="blob-num js-line-number" data-line-number="1951"></td>
        <td id="LC1951" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImDrawCmd</span>() { <span class="pl-c1">memset</span>(<span class="pl-c1">this</span>, <span class="pl-c1">0</span>, <span class="pl-k">sizeof</span>(*<span class="pl-c1">this</span>)); } <span class="pl-c"><span class="pl-c">//</span> Also ensure our padding fields are zeroed</span></td>
      </tr>
      <tr>
        <td id="L1952" class="blob-num js-line-number" data-line-number="1952"></td>
        <td id="LC1952" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1953" class="blob-num js-line-number" data-line-number="1953"></td>
        <td id="LC1953" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1954" class="blob-num js-line-number" data-line-number="1954"></td>
        <td id="LC1954" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Vertex index, default to 16-bit</span></td>
      </tr>
      <tr>
        <td id="L1955" class="blob-num js-line-number" data-line-number="1955"></td>
        <td id="LC1955" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> To allow large meshes with 16-bit indices: set &#39;io.BackendFlags |= ImGuiBackendFlags_RendererHasVtxOffset&#39; and handle ImDrawCmd::VtxOffset in the renderer back-end (recommended).</span></td>
      </tr>
      <tr>
        <td id="L1956" class="blob-num js-line-number" data-line-number="1956"></td>
        <td id="LC1956" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> To use 32-bit indices: override with &#39;#define ImDrawIdx unsigned int&#39; in imconfig.h.</span></td>
      </tr>
      <tr>
        <td id="L1957" class="blob-num js-line-number" data-line-number="1957"></td>
        <td id="LC1957" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> ImDrawIdx</td>
      </tr>
      <tr>
        <td id="L1958" class="blob-num js-line-number" data-line-number="1958"></td>
        <td id="LC1958" class="blob-code blob-code-inner js-file-line"><span class="pl-k">typedef</span> <span class="pl-k">unsigned</span> <span class="pl-k">short</span> ImDrawIdx;</td>
      </tr>
      <tr>
        <td id="L1959" class="blob-num js-line-number" data-line-number="1959"></td>
        <td id="LC1959" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1960" class="blob-num js-line-number" data-line-number="1960"></td>
        <td id="LC1960" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1961" class="blob-num js-line-number" data-line-number="1961"></td>
        <td id="LC1961" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Vertex layout</span></td>
      </tr>
      <tr>
        <td id="L1962" class="blob-num js-line-number" data-line-number="1962"></td>
        <td id="LC1962" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT</td>
      </tr>
      <tr>
        <td id="L1963" class="blob-num js-line-number" data-line-number="1963"></td>
        <td id="LC1963" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawVert</span></td>
      </tr>
      <tr>
        <td id="L1964" class="blob-num js-line-number" data-line-number="1964"></td>
        <td id="LC1964" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1965" class="blob-num js-line-number" data-line-number="1965"></td>
        <td id="LC1965" class="blob-code blob-code-inner js-file-line">    ImVec2  pos;</td>
      </tr>
      <tr>
        <td id="L1966" class="blob-num js-line-number" data-line-number="1966"></td>
        <td id="LC1966" class="blob-code blob-code-inner js-file-line">    ImVec2  uv;</td>
      </tr>
      <tr>
        <td id="L1967" class="blob-num js-line-number" data-line-number="1967"></td>
        <td id="LC1967" class="blob-code blob-code-inner js-file-line">    ImU32   col;</td>
      </tr>
      <tr>
        <td id="L1968" class="blob-num js-line-number" data-line-number="1968"></td>
        <td id="LC1968" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1969" class="blob-num js-line-number" data-line-number="1969"></td>
        <td id="LC1969" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1970" class="blob-num js-line-number" data-line-number="1970"></td>
        <td id="LC1970" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> You can override the vertex format layout by defining IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT in imconfig.h</span></td>
      </tr>
      <tr>
        <td id="L1971" class="blob-num js-line-number" data-line-number="1971"></td>
        <td id="LC1971" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> The code expect ImVec2 pos (8 bytes), ImVec2 uv (8 bytes), ImU32 col (4 bytes), but you can re-order them or add other fields as needed to simplify integration in your engine.</span></td>
      </tr>
      <tr>
        <td id="L1972" class="blob-num js-line-number" data-line-number="1972"></td>
        <td id="LC1972" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> The type has to be described within the macro (you can either declare the struct or use a typedef). This is because ImVec2/ImU32 are likely not declared a the time you&#39;d want to set your type up.</span></td>
      </tr>
      <tr>
        <td id="L1973" class="blob-num js-line-number" data-line-number="1973"></td>
        <td id="LC1973" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> NOTE: IMGUI DOESN&#39;T CLEAR THE STRUCTURE AND DOESN&#39;T CALL A CONSTRUCTOR SO ANY CUSTOM FIELD WILL BE UNINITIALIZED. IF YOU ADD EXTRA FIELDS (SUCH AS A &#39;Z&#39; COORDINATES) YOU WILL NEED TO CLEAR THEM DURING RENDER OR TO IGNORE THEM.</span></td>
      </tr>
      <tr>
        <td id="L1974" class="blob-num js-line-number" data-line-number="1974"></td>
        <td id="LC1974" class="blob-code blob-code-inner js-file-line">IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT;</td>
      </tr>
      <tr>
        <td id="L1975" class="blob-num js-line-number" data-line-number="1975"></td>
        <td id="LC1975" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1976" class="blob-num js-line-number" data-line-number="1976"></td>
        <td id="LC1976" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1977" class="blob-num js-line-number" data-line-number="1977"></td>
        <td id="LC1977" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> For use by ImDrawListSplitter.</span></td>
      </tr>
      <tr>
        <td id="L1978" class="blob-num js-line-number" data-line-number="1978"></td>
        <td id="LC1978" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawChannel</span></td>
      </tr>
      <tr>
        <td id="L1979" class="blob-num js-line-number" data-line-number="1979"></td>
        <td id="LC1979" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1980" class="blob-num js-line-number" data-line-number="1980"></td>
        <td id="LC1980" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImDrawCmd&gt;         _CmdBuffer;</td>
      </tr>
      <tr>
        <td id="L1981" class="blob-num js-line-number" data-line-number="1981"></td>
        <td id="LC1981" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImDrawIdx&gt;         _IdxBuffer;</td>
      </tr>
      <tr>
        <td id="L1982" class="blob-num js-line-number" data-line-number="1982"></td>
        <td id="LC1982" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1983" class="blob-num js-line-number" data-line-number="1983"></td>
        <td id="LC1983" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1984" class="blob-num js-line-number" data-line-number="1984"></td>
        <td id="LC1984" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Split/Merge functions are used to split the draw list into different layers which can be drawn into out of order.</span></td>
      </tr>
      <tr>
        <td id="L1985" class="blob-num js-line-number" data-line-number="1985"></td>
        <td id="LC1985" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> This is used by the Columns api, so items of each column can be batched together in a same draw call.</span></td>
      </tr>
      <tr>
        <td id="L1986" class="blob-num js-line-number" data-line-number="1986"></td>
        <td id="LC1986" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawListSplitter</span></td>
      </tr>
      <tr>
        <td id="L1987" class="blob-num js-line-number" data-line-number="1987"></td>
        <td id="LC1987" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1988" class="blob-num js-line-number" data-line-number="1988"></td>
        <td id="LC1988" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                         _Current;    <span class="pl-c"><span class="pl-c">//</span> Current channel number (0)</span></td>
      </tr>
      <tr>
        <td id="L1989" class="blob-num js-line-number" data-line-number="1989"></td>
        <td id="LC1989" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                         _Count;      <span class="pl-c"><span class="pl-c">//</span> Number of active channels (1+)</span></td>
      </tr>
      <tr>
        <td id="L1990" class="blob-num js-line-number" data-line-number="1990"></td>
        <td id="LC1990" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImDrawChannel&gt;     _Channels;   <span class="pl-c"><span class="pl-c">//</span> Draw channels (not resized down so _Count might be &lt; Channels.Size)</span></td>
      </tr>
      <tr>
        <td id="L1991" class="blob-num js-line-number" data-line-number="1991"></td>
        <td id="LC1991" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1992" class="blob-num js-line-number" data-line-number="1992"></td>
        <td id="LC1992" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-en">ImDrawListSplitter</span>()  { <span class="pl-c1">Clear</span>(); }</td>
      </tr>
      <tr>
        <td id="L1993" class="blob-num js-line-number" data-line-number="1993"></td>
        <td id="LC1993" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-en">~ImDrawListSplitter</span>() { <span class="pl-c1">ClearFreeMemory</span>(); }</td>
      </tr>
      <tr>
        <td id="L1994" class="blob-num js-line-number" data-line-number="1994"></td>
        <td id="LC1994" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>                 <span class="pl-en">Clear</span>() { _Current = <span class="pl-c1">0</span>; _Count = <span class="pl-c1">1</span>; } <span class="pl-c"><span class="pl-c">//</span> Do not clear Channels[] so our allocations are reused next frame</span></td>
      </tr>
      <tr>
        <td id="L1995" class="blob-num js-line-number" data-line-number="1995"></td>
        <td id="LC1995" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">ClearFreeMemory</span>();</td>
      </tr>
      <tr>
        <td id="L1996" class="blob-num js-line-number" data-line-number="1996"></td>
        <td id="LC1996" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">Split</span>(ImDrawList* draw_list, <span class="pl-k">int</span> count);</td>
      </tr>
      <tr>
        <td id="L1997" class="blob-num js-line-number" data-line-number="1997"></td>
        <td id="LC1997" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">Merge</span>(ImDrawList* draw_list);</td>
      </tr>
      <tr>
        <td id="L1998" class="blob-num js-line-number" data-line-number="1998"></td>
        <td id="LC1998" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">SetCurrentChannel</span>(ImDrawList* draw_list, <span class="pl-k">int</span> channel_idx);</td>
      </tr>
      <tr>
        <td id="L1999" class="blob-num js-line-number" data-line-number="1999"></td>
        <td id="LC1999" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2000" class="blob-num js-line-number" data-line-number="2000"></td>
        <td id="LC2000" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2001" class="blob-num js-line-number" data-line-number="2001"></td>
        <td id="LC2001" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImDrawCornerFlags_</td>
      </tr>
      <tr>
        <td id="L2002" class="blob-num js-line-number" data-line-number="2002"></td>
        <td id="LC2002" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2003" class="blob-num js-line-number" data-line-number="2003"></td>
        <td id="LC2003" class="blob-code blob-code-inner js-file-line">    ImDrawCornerFlags_None      = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L2004" class="blob-num js-line-number" data-line-number="2004"></td>
        <td id="LC2004" class="blob-code blob-code-inner js-file-line">    ImDrawCornerFlags_TopLeft   = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>, <span class="pl-c"><span class="pl-c">//</span> 0x1</span></td>
      </tr>
      <tr>
        <td id="L2005" class="blob-num js-line-number" data-line-number="2005"></td>
        <td id="LC2005" class="blob-code blob-code-inner js-file-line">    ImDrawCornerFlags_TopRight  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>, <span class="pl-c"><span class="pl-c">//</span> 0x2</span></td>
      </tr>
      <tr>
        <td id="L2006" class="blob-num js-line-number" data-line-number="2006"></td>
        <td id="LC2006" class="blob-code blob-code-inner js-file-line">    ImDrawCornerFlags_BotLeft   = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>, <span class="pl-c"><span class="pl-c">//</span> 0x4</span></td>
      </tr>
      <tr>
        <td id="L2007" class="blob-num js-line-number" data-line-number="2007"></td>
        <td id="LC2007" class="blob-code blob-code-inner js-file-line">    ImDrawCornerFlags_BotRight  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>, <span class="pl-c"><span class="pl-c">//</span> 0x8</span></td>
      </tr>
      <tr>
        <td id="L2008" class="blob-num js-line-number" data-line-number="2008"></td>
        <td id="LC2008" class="blob-code blob-code-inner js-file-line">    ImDrawCornerFlags_Top       = ImDrawCornerFlags_TopLeft | ImDrawCornerFlags_TopRight,   <span class="pl-c"><span class="pl-c">//</span> 0x3</span></td>
      </tr>
      <tr>
        <td id="L2009" class="blob-num js-line-number" data-line-number="2009"></td>
        <td id="LC2009" class="blob-code blob-code-inner js-file-line">    ImDrawCornerFlags_Bot       = ImDrawCornerFlags_BotLeft | ImDrawCornerFlags_BotRight,   <span class="pl-c"><span class="pl-c">//</span> 0xC</span></td>
      </tr>
      <tr>
        <td id="L2010" class="blob-num js-line-number" data-line-number="2010"></td>
        <td id="LC2010" class="blob-code blob-code-inner js-file-line">    ImDrawCornerFlags_Left      = ImDrawCornerFlags_TopLeft | ImDrawCornerFlags_BotLeft,    <span class="pl-c"><span class="pl-c">//</span> 0x5</span></td>
      </tr>
      <tr>
        <td id="L2011" class="blob-num js-line-number" data-line-number="2011"></td>
        <td id="LC2011" class="blob-code blob-code-inner js-file-line">    ImDrawCornerFlags_Right     = ImDrawCornerFlags_TopRight | ImDrawCornerFlags_BotRight,  <span class="pl-c"><span class="pl-c">//</span> 0xA</span></td>
      </tr>
      <tr>
        <td id="L2012" class="blob-num js-line-number" data-line-number="2012"></td>
        <td id="LC2012" class="blob-code blob-code-inner js-file-line">    ImDrawCornerFlags_All       = <span class="pl-c1">0xF</span>     <span class="pl-c"><span class="pl-c">//</span> In your function calls you may use ~0 (= all bits sets) instead of ImDrawCornerFlags_All, as a convenience</span></td>
      </tr>
      <tr>
        <td id="L2013" class="blob-num js-line-number" data-line-number="2013"></td>
        <td id="LC2013" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2014" class="blob-num js-line-number" data-line-number="2014"></td>
        <td id="LC2014" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2015" class="blob-num js-line-number" data-line-number="2015"></td>
        <td id="LC2015" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImDrawList. Those are set automatically by ImGui:: functions from ImGuiIO settings, and generally not manipulated directly.</span></td>
      </tr>
      <tr>
        <td id="L2016" class="blob-num js-line-number" data-line-number="2016"></td>
        <td id="LC2016" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> It is however possible to temporarily alter flags between calls to ImDrawList:: functions.</span></td>
      </tr>
      <tr>
        <td id="L2017" class="blob-num js-line-number" data-line-number="2017"></td>
        <td id="LC2017" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImDrawListFlags_</td>
      </tr>
      <tr>
        <td id="L2018" class="blob-num js-line-number" data-line-number="2018"></td>
        <td id="LC2018" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2019" class="blob-num js-line-number" data-line-number="2019"></td>
        <td id="LC2019" class="blob-code blob-code-inner js-file-line">    ImDrawListFlags_None                    = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L2020" class="blob-num js-line-number" data-line-number="2020"></td>
        <td id="LC2020" class="blob-code blob-code-inner js-file-line">    ImDrawListFlags_AntiAliasedLines        = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,  <span class="pl-c"><span class="pl-c">//</span> Enable anti-aliased lines/borders (*2 the number of triangles for 1.0f wide line or lines thin enough to be drawn using textures, otherwise *3 the number of triangles)</span></td>
      </tr>
      <tr>
        <td id="L2021" class="blob-num js-line-number" data-line-number="2021"></td>
        <td id="LC2021" class="blob-code blob-code-inner js-file-line">    ImDrawListFlags_AntiAliasedLinesUseTex  = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,  <span class="pl-c"><span class="pl-c">//</span> Enable anti-aliased lines/borders using textures when possible. Require back-end to render with bilinear filtering.</span></td>
      </tr>
      <tr>
        <td id="L2022" class="blob-num js-line-number" data-line-number="2022"></td>
        <td id="LC2022" class="blob-code blob-code-inner js-file-line">    ImDrawListFlags_AntiAliasedFill         = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>,  <span class="pl-c"><span class="pl-c">//</span> Enable anti-aliased edge around filled shapes (rounded rectangles, circles).</span></td>
      </tr>
      <tr>
        <td id="L2023" class="blob-num js-line-number" data-line-number="2023"></td>
        <td id="LC2023" class="blob-code blob-code-inner js-file-line">    ImDrawListFlags_AllowVtxOffset          = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">3</span>   <span class="pl-c"><span class="pl-c">//</span> Can emit &#39;VtxOffset &gt; 0&#39; to allow large meshes. Set when &#39;ImGuiBackendFlags_RendererHasVtxOffset&#39; is enabled.</span></td>
      </tr>
      <tr>
        <td id="L2024" class="blob-num js-line-number" data-line-number="2024"></td>
        <td id="LC2024" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2025" class="blob-num js-line-number" data-line-number="2025"></td>
        <td id="LC2025" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2026" class="blob-num js-line-number" data-line-number="2026"></td>
        <td id="LC2026" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Draw command list</span></td>
      </tr>
      <tr>
        <td id="L2027" class="blob-num js-line-number" data-line-number="2027"></td>
        <td id="LC2027" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> This is the low-level list of polygons that ImGui:: functions are filling. At the end of the frame,</span></td>
      </tr>
      <tr>
        <td id="L2028" class="blob-num js-line-number" data-line-number="2028"></td>
        <td id="LC2028" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> all command lists are passed to your ImGuiIO::RenderDrawListFn function for rendering.</span></td>
      </tr>
      <tr>
        <td id="L2029" class="blob-num js-line-number" data-line-number="2029"></td>
        <td id="LC2029" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Each dear imgui window contains its own ImDrawList. You can use ImGui::GetWindowDrawList() to</span></td>
      </tr>
      <tr>
        <td id="L2030" class="blob-num js-line-number" data-line-number="2030"></td>
        <td id="LC2030" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> access the current window draw list and draw custom primitives.</span></td>
      </tr>
      <tr>
        <td id="L2031" class="blob-num js-line-number" data-line-number="2031"></td>
        <td id="LC2031" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> You can interleave normal ImGui:: calls and adding primitives to the current draw list.</span></td>
      </tr>
      <tr>
        <td id="L2032" class="blob-num js-line-number" data-line-number="2032"></td>
        <td id="LC2032" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> All positions are generally in pixel coordinates (top-left at (0,0), bottom-right at io.DisplaySize), but you are totally free to apply whatever transformation matrix to want to the data (if you apply such transformation you&#39;ll want to apply it to ClipRect as well)</span></td>
      </tr>
      <tr>
        <td id="L2033" class="blob-num js-line-number" data-line-number="2033"></td>
        <td id="LC2033" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Important: Primitives are always added to the list and not culled (culling is done at higher-level by ImGui:: functions), if you use this API a lot consider coarse culling your drawn objects.</span></td>
      </tr>
      <tr>
        <td id="L2034" class="blob-num js-line-number" data-line-number="2034"></td>
        <td id="LC2034" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawList</span></td>
      </tr>
      <tr>
        <td id="L2035" class="blob-num js-line-number" data-line-number="2035"></td>
        <td id="LC2035" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2036" class="blob-num js-line-number" data-line-number="2036"></td>
        <td id="LC2036" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> This is what you have to render</span></td>
      </tr>
      <tr>
        <td id="L2037" class="blob-num js-line-number" data-line-number="2037"></td>
        <td id="LC2037" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImDrawCmd&gt;     CmdBuffer;          <span class="pl-c"><span class="pl-c">//</span> Draw commands. Typically 1 command = 1 GPU draw call, unless the command is a callback.</span></td>
      </tr>
      <tr>
        <td id="L2038" class="blob-num js-line-number" data-line-number="2038"></td>
        <td id="LC2038" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImDrawIdx&gt;     IdxBuffer;          <span class="pl-c"><span class="pl-c">//</span> Index buffer. Each command consume ImDrawCmd::ElemCount of those</span></td>
      </tr>
      <tr>
        <td id="L2039" class="blob-num js-line-number" data-line-number="2039"></td>
        <td id="LC2039" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImDrawVert&gt;    VtxBuffer;          <span class="pl-c"><span class="pl-c">//</span> Vertex buffer.</span></td>
      </tr>
      <tr>
        <td id="L2040" class="blob-num js-line-number" data-line-number="2040"></td>
        <td id="LC2040" class="blob-code blob-code-inner js-file-line">    ImDrawListFlags         Flags;              <span class="pl-c"><span class="pl-c">//</span> Flags, you may poke into these to adjust anti-aliasing settings per-primitive.</span></td>
      </tr>
      <tr>
        <td id="L2041" class="blob-num js-line-number" data-line-number="2041"></td>
        <td id="LC2041" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2042" class="blob-num js-line-number" data-line-number="2042"></td>
        <td id="LC2042" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal, used while building lists]</span></td>
      </tr>
      <tr>
        <td id="L2043" class="blob-num js-line-number" data-line-number="2043"></td>
        <td id="LC2043" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> ImDrawListSharedData* _Data;          <span class="pl-c"><span class="pl-c">//</span> Pointer to shared draw data (you can use ImGui::GetDrawListSharedData() to get the one from current ImGui context)</span></td>
      </tr>
      <tr>
        <td id="L2044" class="blob-num js-line-number" data-line-number="2044"></td>
        <td id="LC2044" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> <span class="pl-k">char</span>*             _OwnerName;         <span class="pl-c"><span class="pl-c">//</span> Pointer to owner window&#39;s name for debugging</span></td>
      </tr>
      <tr>
        <td id="L2045" class="blob-num js-line-number" data-line-number="2045"></td>
        <td id="LC2045" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">int</span>            _VtxCurrentIdx;     <span class="pl-c"><span class="pl-c">//</span> [Internal] Generally == VtxBuffer.Size unless we are past 64K vertices, in which case this gets reset to 0.</span></td>
      </tr>
      <tr>
        <td id="L2046" class="blob-num js-line-number" data-line-number="2046"></td>
        <td id="LC2046" class="blob-code blob-code-inner js-file-line">    ImDrawVert*             _VtxWritePtr;       <span class="pl-c"><span class="pl-c">//</span> [Internal] point within VtxBuffer.Data after each add command (to avoid using the ImVector&lt;&gt; operators too much)</span></td>
      </tr>
      <tr>
        <td id="L2047" class="blob-num js-line-number" data-line-number="2047"></td>
        <td id="LC2047" class="blob-code blob-code-inner js-file-line">    ImDrawIdx*              _IdxWritePtr;       <span class="pl-c"><span class="pl-c">//</span> [Internal] point within IdxBuffer.Data after each add command (to avoid using the ImVector&lt;&gt; operators too much)</span></td>
      </tr>
      <tr>
        <td id="L2048" class="blob-num js-line-number" data-line-number="2048"></td>
        <td id="LC2048" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImVec4&gt;        _ClipRectStack;     <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L2049" class="blob-num js-line-number" data-line-number="2049"></td>
        <td id="LC2049" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImTextureID&gt;   _TextureIdStack;    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L2050" class="blob-num js-line-number" data-line-number="2050"></td>
        <td id="LC2050" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImVec2&gt;        _Path;              <span class="pl-c"><span class="pl-c">//</span> [Internal] current path building</span></td>
      </tr>
      <tr>
        <td id="L2051" class="blob-num js-line-number" data-line-number="2051"></td>
        <td id="LC2051" class="blob-code blob-code-inner js-file-line">    ImDrawCmd               _CmdHeader;         <span class="pl-c"><span class="pl-c">//</span> [Internal] Template of active commands. Fields should match those of CmdBuffer.back().</span></td>
      </tr>
      <tr>
        <td id="L2052" class="blob-num js-line-number" data-line-number="2052"></td>
        <td id="LC2052" class="blob-code blob-code-inner js-file-line">    ImDrawListSplitter      _Splitter;          <span class="pl-c"><span class="pl-c">//</span> [Internal] for channels api (note: prefer using your own persistent instance of ImDrawListSplitter!)</span></td>
      </tr>
      <tr>
        <td id="L2053" class="blob-num js-line-number" data-line-number="2053"></td>
        <td id="LC2053" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2054" class="blob-num js-line-number" data-line-number="2054"></td>
        <td id="LC2054" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> If you want to create ImDrawList instances, pass them ImGui::GetDrawListSharedData() or create and use your own ImDrawListSharedData (so you can use ImDrawList without ImGui)</span></td>
      </tr>
      <tr>
        <td id="L2055" class="blob-num js-line-number" data-line-number="2055"></td>
        <td id="LC2055" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImDrawList</span>(<span class="pl-k">const</span> ImDrawListSharedData* shared_data) { _Data = shared_data; Flags = ImDrawListFlags_None; _VtxCurrentIdx = <span class="pl-c1">0</span>; _VtxWritePtr = <span class="pl-c1">NULL</span>; _IdxWritePtr = <span class="pl-c1">NULL</span>; _OwnerName = <span class="pl-c1">NULL</span>; }</td>
      </tr>
      <tr>
        <td id="L2056" class="blob-num js-line-number" data-line-number="2056"></td>
        <td id="LC2056" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2057" class="blob-num js-line-number" data-line-number="2057"></td>
        <td id="LC2057" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">~ImDrawList</span>() { <span class="pl-c1">_ClearFreeMemory</span>(); }</td>
      </tr>
      <tr>
        <td id="L2058" class="blob-num js-line-number" data-line-number="2058"></td>
        <td id="LC2058" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PushClipRect</span>(ImVec2 clip_rect_min, ImVec2 clip_rect_max, <span class="pl-k">bool</span> intersect_with_current_clip_rect = <span class="pl-c1">false</span>);  <span class="pl-c"><span class="pl-c">//</span> Render-level scissoring. This is passed down to your render function but not used for CPU-side coarse clipping. Prefer using higher-level ImGui::PushClipRect() to affect logic (hit-testing and widget culling)</span></td>
      </tr>
      <tr>
        <td id="L2059" class="blob-num js-line-number" data-line-number="2059"></td>
        <td id="LC2059" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PushClipRectFullScreen</span>();</td>
      </tr>
      <tr>
        <td id="L2060" class="blob-num js-line-number" data-line-number="2060"></td>
        <td id="LC2060" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PopClipRect</span>();</td>
      </tr>
      <tr>
        <td id="L2061" class="blob-num js-line-number" data-line-number="2061"></td>
        <td id="LC2061" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PushTextureID</span>(ImTextureID texture_id);</td>
      </tr>
      <tr>
        <td id="L2062" class="blob-num js-line-number" data-line-number="2062"></td>
        <td id="LC2062" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PopTextureID</span>();</td>
      </tr>
      <tr>
        <td id="L2063" class="blob-num js-line-number" data-line-number="2063"></td>
        <td id="LC2063" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> ImVec2   <span class="pl-en">GetClipRectMin</span>() <span class="pl-k">const</span> { <span class="pl-k">const</span> ImVec4&amp; cr = _ClipRectStack.<span class="pl-c1">back</span>(); <span class="pl-k">return</span> <span class="pl-c1">ImVec2</span>(cr.<span class="pl-smi">x</span>, cr.<span class="pl-smi">y</span>); }</td>
      </tr>
      <tr>
        <td id="L2064" class="blob-num js-line-number" data-line-number="2064"></td>
        <td id="LC2064" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> ImVec2   <span class="pl-en">GetClipRectMax</span>() <span class="pl-k">const</span> { <span class="pl-k">const</span> ImVec4&amp; cr = _ClipRectStack.<span class="pl-c1">back</span>(); <span class="pl-k">return</span> <span class="pl-c1">ImVec2</span>(cr.<span class="pl-smi">z</span>, cr.<span class="pl-smi">w</span>); }</td>
      </tr>
      <tr>
        <td id="L2065" class="blob-num js-line-number" data-line-number="2065"></td>
        <td id="LC2065" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2066" class="blob-num js-line-number" data-line-number="2066"></td>
        <td id="LC2066" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Primitives</span></td>
      </tr>
      <tr>
        <td id="L2067" class="blob-num js-line-number" data-line-number="2067"></td>
        <td id="LC2067" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - For rectangular primitives, &quot;p_min&quot; and &quot;p_max&quot; represent the upper-left and lower-right corners.</span></td>
      </tr>
      <tr>
        <td id="L2068" class="blob-num js-line-number" data-line-number="2068"></td>
        <td id="LC2068" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - For circle primitives, use &quot;num_segments == 0&quot; to automatically calculate tessellation (preferred).</span></td>
      </tr>
      <tr>
        <td id="L2069" class="blob-num js-line-number" data-line-number="2069"></td>
        <td id="LC2069" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   In older versions (until Dear ImGui 1.77) the AddCircle functions defaulted to num_segments == 12.</span></td>
      </tr>
      <tr>
        <td id="L2070" class="blob-num js-line-number" data-line-number="2070"></td>
        <td id="LC2070" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   In future versions we will use textures to provide cheaper and higher-quality circles.</span></td>
      </tr>
      <tr>
        <td id="L2071" class="blob-num js-line-number" data-line-number="2071"></td>
        <td id="LC2071" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   Use AddNgon() and AddNgonFilled() functions if you need to guaranteed a specific number of sides.</span></td>
      </tr>
      <tr>
        <td id="L2072" class="blob-num js-line-number" data-line-number="2072"></td>
        <td id="LC2072" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddLine</span>(<span class="pl-k">const</span> ImVec2&amp; p1, <span class="pl-k">const</span> ImVec2&amp; p2, ImU32 col, <span class="pl-k">float</span> thickness = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L2073" class="blob-num js-line-number" data-line-number="2073"></td>
        <td id="LC2073" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddRect</span>(<span class="pl-k">const</span> ImVec2&amp; p_min, <span class="pl-k">const</span> ImVec2&amp; p_max, ImU32 col, <span class="pl-k">float</span> rounding = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, ImDrawCornerFlags rounding_corners = ImDrawCornerFlags_All, <span class="pl-k">float</span> thickness = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);   <span class="pl-c"><span class="pl-c">//</span> a: upper-left, b: lower-right (== upper-left + size), rounding_corners_flags: 4 bits corresponding to which corner to round</span></td>
      </tr>
      <tr>
        <td id="L2074" class="blob-num js-line-number" data-line-number="2074"></td>
        <td id="LC2074" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddRectFilled</span>(<span class="pl-k">const</span> ImVec2&amp; p_min, <span class="pl-k">const</span> ImVec2&amp; p_max, ImU32 col, <span class="pl-k">float</span> rounding = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, ImDrawCornerFlags rounding_corners = ImDrawCornerFlags_All);                     <span class="pl-c"><span class="pl-c">//</span> a: upper-left, b: lower-right (== upper-left + size)</span></td>
      </tr>
      <tr>
        <td id="L2075" class="blob-num js-line-number" data-line-number="2075"></td>
        <td id="LC2075" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddRectFilledMultiColor</span>(<span class="pl-k">const</span> ImVec2&amp; p_min, <span class="pl-k">const</span> ImVec2&amp; p_max, ImU32 col_upr_left, ImU32 col_upr_right, ImU32 col_bot_right, ImU32 col_bot_left);</td>
      </tr>
      <tr>
        <td id="L2076" class="blob-num js-line-number" data-line-number="2076"></td>
        <td id="LC2076" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddQuad</span>(<span class="pl-k">const</span> ImVec2&amp; p1, <span class="pl-k">const</span> ImVec2&amp; p2, <span class="pl-k">const</span> ImVec2&amp; p3, <span class="pl-k">const</span> ImVec2&amp; p4, ImU32 col, <span class="pl-k">float</span> thickness = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L2077" class="blob-num js-line-number" data-line-number="2077"></td>
        <td id="LC2077" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddQuadFilled</span>(<span class="pl-k">const</span> ImVec2&amp; p1, <span class="pl-k">const</span> ImVec2&amp; p2, <span class="pl-k">const</span> ImVec2&amp; p3, <span class="pl-k">const</span> ImVec2&amp; p4, ImU32 col);</td>
      </tr>
      <tr>
        <td id="L2078" class="blob-num js-line-number" data-line-number="2078"></td>
        <td id="LC2078" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddTriangle</span>(<span class="pl-k">const</span> ImVec2&amp; p1, <span class="pl-k">const</span> ImVec2&amp; p2, <span class="pl-k">const</span> ImVec2&amp; p3, ImU32 col, <span class="pl-k">float</span> thickness = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L2079" class="blob-num js-line-number" data-line-number="2079"></td>
        <td id="LC2079" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddTriangleFilled</span>(<span class="pl-k">const</span> ImVec2&amp; p1, <span class="pl-k">const</span> ImVec2&amp; p2, <span class="pl-k">const</span> ImVec2&amp; p3, ImU32 col);</td>
      </tr>
      <tr>
        <td id="L2080" class="blob-num js-line-number" data-line-number="2080"></td>
        <td id="LC2080" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddCircle</span>(<span class="pl-k">const</span> ImVec2&amp; center, <span class="pl-k">float</span> radius, ImU32 col, <span class="pl-k">int</span> num_segments = <span class="pl-c1">0</span>, <span class="pl-k">float</span> thickness = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L2081" class="blob-num js-line-number" data-line-number="2081"></td>
        <td id="LC2081" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddCircleFilled</span>(<span class="pl-k">const</span> ImVec2&amp; center, <span class="pl-k">float</span> radius, ImU32 col, <span class="pl-k">int</span> num_segments = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2082" class="blob-num js-line-number" data-line-number="2082"></td>
        <td id="LC2082" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddNgon</span>(<span class="pl-k">const</span> ImVec2&amp; center, <span class="pl-k">float</span> radius, ImU32 col, <span class="pl-k">int</span> num_segments, <span class="pl-k">float</span> thickness = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>);</td>
      </tr>
      <tr>
        <td id="L2083" class="blob-num js-line-number" data-line-number="2083"></td>
        <td id="LC2083" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddNgonFilled</span>(<span class="pl-k">const</span> ImVec2&amp; center, <span class="pl-k">float</span> radius, ImU32 col, <span class="pl-k">int</span> num_segments);</td>
      </tr>
      <tr>
        <td id="L2084" class="blob-num js-line-number" data-line-number="2084"></td>
        <td id="LC2084" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddText</span>(<span class="pl-k">const</span> ImVec2&amp; pos, ImU32 col, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_begin, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_end = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L2085" class="blob-num js-line-number" data-line-number="2085"></td>
        <td id="LC2085" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddText</span>(<span class="pl-k">const</span> ImFont* font, <span class="pl-k">float</span> font_size, <span class="pl-k">const</span> ImVec2&amp; pos, ImU32 col, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_begin, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_end = <span class="pl-c1">NULL</span>, <span class="pl-k">float</span> wrap_width = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">const</span> ImVec4* cpu_fine_clip_rect = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L2086" class="blob-num js-line-number" data-line-number="2086"></td>
        <td id="LC2086" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddPolyline</span>(<span class="pl-k">const</span> ImVec2* points, <span class="pl-k">int</span> num_points, ImU32 col, <span class="pl-k">bool</span> closed, <span class="pl-k">float</span> thickness);</td>
      </tr>
      <tr>
        <td id="L2087" class="blob-num js-line-number" data-line-number="2087"></td>
        <td id="LC2087" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddConvexPolyFilled</span>(<span class="pl-k">const</span> ImVec2* points, <span class="pl-k">int</span> num_points, ImU32 col); <span class="pl-c"><span class="pl-c">//</span> Note: Anti-aliased filling requires points to be in clockwise order.</span></td>
      </tr>
      <tr>
        <td id="L2088" class="blob-num js-line-number" data-line-number="2088"></td>
        <td id="LC2088" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddBezierCurve</span>(<span class="pl-k">const</span> ImVec2&amp; p1, <span class="pl-k">const</span> ImVec2&amp; p2, <span class="pl-k">const</span> ImVec2&amp; p3, <span class="pl-k">const</span> ImVec2&amp; p4, ImU32 col, <span class="pl-k">float</span> thickness, <span class="pl-k">int</span> num_segments = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2089" class="blob-num js-line-number" data-line-number="2089"></td>
        <td id="LC2089" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2090" class="blob-num js-line-number" data-line-number="2090"></td>
        <td id="LC2090" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Image primitives</span></td>
      </tr>
      <tr>
        <td id="L2091" class="blob-num js-line-number" data-line-number="2091"></td>
        <td id="LC2091" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Read FAQ to understand what ImTextureID is.</span></td>
      </tr>
      <tr>
        <td id="L2092" class="blob-num js-line-number" data-line-number="2092"></td>
        <td id="LC2092" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - &quot;p_min&quot; and &quot;p_max&quot; represent the upper-left and lower-right corners of the rectangle.</span></td>
      </tr>
      <tr>
        <td id="L2093" class="blob-num js-line-number" data-line-number="2093"></td>
        <td id="LC2093" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - &quot;uv_min&quot; and &quot;uv_max&quot; represent the normalized texture coordinates to use for those corners. Using (0,0)-&gt;(1,1) texture coordinates will generally display the entire texture.</span></td>
      </tr>
      <tr>
        <td id="L2094" class="blob-num js-line-number" data-line-number="2094"></td>
        <td id="LC2094" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddImage</span>(ImTextureID user_texture_id, <span class="pl-k">const</span> ImVec2&amp; p_min, <span class="pl-k">const</span> ImVec2&amp; p_max, <span class="pl-k">const</span> ImVec2&amp; uv_min = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>), <span class="pl-k">const</span> ImVec2&amp; uv_max = ImVec2(<span class="pl-c1">1</span>, <span class="pl-c1">1</span>), ImU32 col = IM_COL32_WHITE);</td>
      </tr>
      <tr>
        <td id="L2095" class="blob-num js-line-number" data-line-number="2095"></td>
        <td id="LC2095" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddImageQuad</span>(ImTextureID user_texture_id, <span class="pl-k">const</span> ImVec2&amp; p1, <span class="pl-k">const</span> ImVec2&amp; p2, <span class="pl-k">const</span> ImVec2&amp; p3, <span class="pl-k">const</span> ImVec2&amp; p4, <span class="pl-k">const</span> ImVec2&amp; uv1 = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>), <span class="pl-k">const</span> ImVec2&amp; uv2 = ImVec2(<span class="pl-c1">1</span>, <span class="pl-c1">0</span>), <span class="pl-k">const</span> ImVec2&amp; uv3 = ImVec2(<span class="pl-c1">1</span>, <span class="pl-c1">1</span>), <span class="pl-k">const</span> ImVec2&amp; uv4 = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">1</span>), ImU32 col = IM_COL32_WHITE);</td>
      </tr>
      <tr>
        <td id="L2096" class="blob-num js-line-number" data-line-number="2096"></td>
        <td id="LC2096" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddImageRounded</span>(ImTextureID user_texture_id, <span class="pl-k">const</span> ImVec2&amp; p_min, <span class="pl-k">const</span> ImVec2&amp; p_max, <span class="pl-k">const</span> ImVec2&amp; uv_min, <span class="pl-k">const</span> ImVec2&amp; uv_max, ImU32 col, <span class="pl-k">float</span> rounding, ImDrawCornerFlags rounding_corners = ImDrawCornerFlags_All);</td>
      </tr>
      <tr>
        <td id="L2097" class="blob-num js-line-number" data-line-number="2097"></td>
        <td id="LC2097" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2098" class="blob-num js-line-number" data-line-number="2098"></td>
        <td id="LC2098" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Stateful path API, add points then finish with PathFillConvex() or PathStroke()</span></td>
      </tr>
      <tr>
        <td id="L2099" class="blob-num js-line-number" data-line-number="2099"></td>
        <td id="LC2099" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span>    <span class="pl-k">void</span>  <span class="pl-en">PathClear</span>()                                                 { _Path.<span class="pl-smi">Size</span> = <span class="pl-c1">0</span>; }</td>
      </tr>
      <tr>
        <td id="L2100" class="blob-num js-line-number" data-line-number="2100"></td>
        <td id="LC2100" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span>    <span class="pl-k">void</span>  <span class="pl-en">PathLineTo</span>(<span class="pl-k">const</span> ImVec2&amp; pos)                               { _Path.<span class="pl-c1">push_back</span>(pos); }</td>
      </tr>
      <tr>
        <td id="L2101" class="blob-num js-line-number" data-line-number="2101"></td>
        <td id="LC2101" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span>    <span class="pl-k">void</span>  <span class="pl-en">PathLineToMergeDuplicate</span>(<span class="pl-k">const</span> ImVec2&amp; pos)                 { <span class="pl-k">if</span> (_Path.<span class="pl-smi">Size</span> == <span class="pl-c1">0</span> || <span class="pl-c1">memcmp</span>(&amp;_Path.<span class="pl-smi">Data</span>[_Path.<span class="pl-smi">Size</span> - <span class="pl-c1">1</span>], &amp;pos, <span class="pl-c1">8</span>) != <span class="pl-c1">0</span>) _Path.<span class="pl-c1">push_back</span>(pos); }</td>
      </tr>
      <tr>
        <td id="L2102" class="blob-num js-line-number" data-line-number="2102"></td>
        <td id="LC2102" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span>    <span class="pl-k">void</span>  <span class="pl-en">PathFillConvex</span>(ImU32 col)                                   { <span class="pl-c1">AddConvexPolyFilled</span>(_Path.<span class="pl-smi">Data</span>, _Path.<span class="pl-smi">Size</span>, col); _Path.<span class="pl-smi">Size</span> = <span class="pl-c1">0</span>; }  <span class="pl-c"><span class="pl-c">//</span> Note: Anti-aliased filling requires points to be in clockwise order.</span></td>
      </tr>
      <tr>
        <td id="L2103" class="blob-num js-line-number" data-line-number="2103"></td>
        <td id="LC2103" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span>    <span class="pl-k">void</span>  <span class="pl-en">PathStroke</span>(ImU32 col, <span class="pl-k">bool</span> closed, <span class="pl-k">float</span> thickness = <span class="pl-c1">1</span>.<span class="pl-c1">0f</span>)  { <span class="pl-c1">AddPolyline</span>(_Path.<span class="pl-smi">Data</span>, _Path.<span class="pl-smi">Size</span>, col, closed, thickness); _Path.<span class="pl-smi">Size</span> = <span class="pl-c1">0</span>; }</td>
      </tr>
      <tr>
        <td id="L2104" class="blob-num js-line-number" data-line-number="2104"></td>
        <td id="LC2104" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PathArcTo</span>(<span class="pl-k">const</span> ImVec2&amp; center, <span class="pl-k">float</span> radius, <span class="pl-k">float</span> a_min, <span class="pl-k">float</span> a_max, <span class="pl-k">int</span> num_segments = <span class="pl-c1">10</span>);</td>
      </tr>
      <tr>
        <td id="L2105" class="blob-num js-line-number" data-line-number="2105"></td>
        <td id="LC2105" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PathArcToFast</span>(<span class="pl-k">const</span> ImVec2&amp; center, <span class="pl-k">float</span> radius, <span class="pl-k">int</span> a_min_of_12, <span class="pl-k">int</span> a_max_of_12);                                            <span class="pl-c"><span class="pl-c">//</span> Use precomputed angles for a 12 steps circle</span></td>
      </tr>
      <tr>
        <td id="L2106" class="blob-num js-line-number" data-line-number="2106"></td>
        <td id="LC2106" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PathBezierCurveTo</span>(<span class="pl-k">const</span> ImVec2&amp; p2, <span class="pl-k">const</span> ImVec2&amp; p3, <span class="pl-k">const</span> ImVec2&amp; p4, <span class="pl-k">int</span> num_segments = <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2107" class="blob-num js-line-number" data-line-number="2107"></td>
        <td id="LC2107" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PathRect</span>(<span class="pl-k">const</span> ImVec2&amp; rect_min, <span class="pl-k">const</span> ImVec2&amp; rect_max, <span class="pl-k">float</span> rounding = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, ImDrawCornerFlags rounding_corners = ImDrawCornerFlags_All);</td>
      </tr>
      <tr>
        <td id="L2108" class="blob-num js-line-number" data-line-number="2108"></td>
        <td id="LC2108" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2109" class="blob-num js-line-number" data-line-number="2109"></td>
        <td id="LC2109" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Advanced</span></td>
      </tr>
      <tr>
        <td id="L2110" class="blob-num js-line-number" data-line-number="2110"></td>
        <td id="LC2110" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddCallback</span>(ImDrawCallback callback, <span class="pl-k">void</span>* callback_data);  <span class="pl-c"><span class="pl-c">//</span> Your rendering function must check for &#39;UserCallback&#39; in ImDrawCmd and call the function instead of rendering triangles.</span></td>
      </tr>
      <tr>
        <td id="L2111" class="blob-num js-line-number" data-line-number="2111"></td>
        <td id="LC2111" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddDrawCmd</span>();                                               <span class="pl-c"><span class="pl-c">//</span> This is useful if you need to forcefully create a new draw call (to allow for dependent rendering / blending). Otherwise primitives are merged into the same draw-call as much as possible</span></td>
      </tr>
      <tr>
        <td id="L2112" class="blob-num js-line-number" data-line-number="2112"></td>
        <td id="LC2112" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImDrawList* <span class="pl-en">CloneOutput</span>() <span class="pl-k">const</span>;                                  <span class="pl-c"><span class="pl-c">//</span> Create a clone of the CmdBuffer/IdxBuffer/VtxBuffer.</span></td>
      </tr>
      <tr>
        <td id="L2113" class="blob-num js-line-number" data-line-number="2113"></td>
        <td id="LC2113" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2114" class="blob-num js-line-number" data-line-number="2114"></td>
        <td id="LC2114" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Advanced: Channels</span></td>
      </tr>
      <tr>
        <td id="L2115" class="blob-num js-line-number" data-line-number="2115"></td>
        <td id="LC2115" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Use to split render into layers. By switching channels to can render out-of-order (e.g. submit FG primitives before BG primitives)</span></td>
      </tr>
      <tr>
        <td id="L2116" class="blob-num js-line-number" data-line-number="2116"></td>
        <td id="LC2116" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - Use to minimize draw calls (e.g. if going back-and-forth between multiple clipping rectangles, prefer to append into separate channels then merge at the end)</span></td>
      </tr>
      <tr>
        <td id="L2117" class="blob-num js-line-number" data-line-number="2117"></td>
        <td id="LC2117" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - FIXME-OBSOLETE: This API shouldn&#39;t have been in ImDrawList in the first place!</span></td>
      </tr>
      <tr>
        <td id="L2118" class="blob-num js-line-number" data-line-number="2118"></td>
        <td id="LC2118" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   Prefer using your own persistent instance of ImDrawListSplitter as you can stack them.</span></td>
      </tr>
      <tr>
        <td id="L2119" class="blob-num js-line-number" data-line-number="2119"></td>
        <td id="LC2119" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>   Using the ImDrawList::ChannelsXXXX you cannot stack a split over another.</span></td>
      </tr>
      <tr>
        <td id="L2120" class="blob-num js-line-number" data-line-number="2120"></td>
        <td id="LC2120" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>     <span class="pl-en">ChannelsSplit</span>(<span class="pl-k">int</span> count)    { _Splitter.<span class="pl-c1">Split</span>(<span class="pl-c1">this</span>, count); }</td>
      </tr>
      <tr>
        <td id="L2121" class="blob-num js-line-number" data-line-number="2121"></td>
        <td id="LC2121" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>     <span class="pl-en">ChannelsMerge</span>()             { _Splitter.<span class="pl-c1">Merge</span>(<span class="pl-c1">this</span>); }</td>
      </tr>
      <tr>
        <td id="L2122" class="blob-num js-line-number" data-line-number="2122"></td>
        <td id="LC2122" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>     <span class="pl-en">ChannelsSetCurrent</span>(<span class="pl-k">int</span> n)   { _Splitter.<span class="pl-c1">SetCurrentChannel</span>(<span class="pl-c1">this</span>, n); }</td>
      </tr>
      <tr>
        <td id="L2123" class="blob-num js-line-number" data-line-number="2123"></td>
        <td id="LC2123" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2124" class="blob-num js-line-number" data-line-number="2124"></td>
        <td id="LC2124" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Advanced: Primitives allocations</span></td>
      </tr>
      <tr>
        <td id="L2125" class="blob-num js-line-number" data-line-number="2125"></td>
        <td id="LC2125" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - We render triangles (three vertices)</span></td>
      </tr>
      <tr>
        <td id="L2126" class="blob-num js-line-number" data-line-number="2126"></td>
        <td id="LC2126" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> - All primitives needs to be reserved via PrimReserve() beforehand.</span></td>
      </tr>
      <tr>
        <td id="L2127" class="blob-num js-line-number" data-line-number="2127"></td>
        <td id="LC2127" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PrimReserve</span>(<span class="pl-k">int</span> idx_count, <span class="pl-k">int</span> vtx_count);</td>
      </tr>
      <tr>
        <td id="L2128" class="blob-num js-line-number" data-line-number="2128"></td>
        <td id="LC2128" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PrimUnreserve</span>(<span class="pl-k">int</span> idx_count, <span class="pl-k">int</span> vtx_count);</td>
      </tr>
      <tr>
        <td id="L2129" class="blob-num js-line-number" data-line-number="2129"></td>
        <td id="LC2129" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PrimRect</span>(<span class="pl-k">const</span> ImVec2&amp; a, <span class="pl-k">const</span> ImVec2&amp; b, ImU32 col);      <span class="pl-c"><span class="pl-c">//</span> Axis aligned rectangle (composed of two triangles)</span></td>
      </tr>
      <tr>
        <td id="L2130" class="blob-num js-line-number" data-line-number="2130"></td>
        <td id="LC2130" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PrimRectUV</span>(<span class="pl-k">const</span> ImVec2&amp; a, <span class="pl-k">const</span> ImVec2&amp; b, <span class="pl-k">const</span> ImVec2&amp; uv_a, <span class="pl-k">const</span> ImVec2&amp; uv_b, ImU32 col);</td>
      </tr>
      <tr>
        <td id="L2131" class="blob-num js-line-number" data-line-number="2131"></td>
        <td id="LC2131" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">PrimQuadUV</span>(<span class="pl-k">const</span> ImVec2&amp; a, <span class="pl-k">const</span> ImVec2&amp; b, <span class="pl-k">const</span> ImVec2&amp; c, <span class="pl-k">const</span> ImVec2&amp; d, <span class="pl-k">const</span> ImVec2&amp; uv_a, <span class="pl-k">const</span> ImVec2&amp; uv_b, <span class="pl-k">const</span> ImVec2&amp; uv_c, <span class="pl-k">const</span> ImVec2&amp; uv_d, ImU32 col);</td>
      </tr>
      <tr>
        <td id="L2132" class="blob-num js-line-number" data-line-number="2132"></td>
        <td id="LC2132" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span>    <span class="pl-k">void</span>  <span class="pl-en">PrimWriteVtx</span>(<span class="pl-k">const</span> ImVec2&amp; pos, <span class="pl-k">const</span> ImVec2&amp; uv, ImU32 col)    { _VtxWritePtr-&gt;<span class="pl-smi">pos</span> = pos; _VtxWritePtr-&gt;<span class="pl-smi">uv</span> = uv; _VtxWritePtr-&gt;<span class="pl-smi">col</span> = col; _VtxWritePtr++; _VtxCurrentIdx++; }</td>
      </tr>
      <tr>
        <td id="L2133" class="blob-num js-line-number" data-line-number="2133"></td>
        <td id="LC2133" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span>    <span class="pl-k">void</span>  <span class="pl-en">PrimWriteIdx</span>(ImDrawIdx idx)                                     { *_IdxWritePtr = idx; _IdxWritePtr++; }</td>
      </tr>
      <tr>
        <td id="L2134" class="blob-num js-line-number" data-line-number="2134"></td>
        <td id="LC2134" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span>    <span class="pl-k">void</span>  <span class="pl-en">PrimVtx</span>(<span class="pl-k">const</span> ImVec2&amp; pos, <span class="pl-k">const</span> ImVec2&amp; uv, ImU32 col)         { <span class="pl-c1">PrimWriteIdx</span>((ImDrawIdx)_VtxCurrentIdx); <span class="pl-c1">PrimWriteVtx</span>(pos, uv, col); } <span class="pl-c"><span class="pl-c">//</span> Write vertex with unique index</span></td>
      </tr>
      <tr>
        <td id="L2135" class="blob-num js-line-number" data-line-number="2135"></td>
        <td id="LC2135" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2136" class="blob-num js-line-number" data-line-number="2136"></td>
        <td id="LC2136" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal helpers]</span></td>
      </tr>
      <tr>
        <td id="L2137" class="blob-num js-line-number" data-line-number="2137"></td>
        <td id="LC2137" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">_ResetForNewFrame</span>();</td>
      </tr>
      <tr>
        <td id="L2138" class="blob-num js-line-number" data-line-number="2138"></td>
        <td id="LC2138" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">_ClearFreeMemory</span>();</td>
      </tr>
      <tr>
        <td id="L2139" class="blob-num js-line-number" data-line-number="2139"></td>
        <td id="LC2139" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">_PopUnusedDrawCmd</span>();</td>
      </tr>
      <tr>
        <td id="L2140" class="blob-num js-line-number" data-line-number="2140"></td>
        <td id="LC2140" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">_OnChangedClipRect</span>();</td>
      </tr>
      <tr>
        <td id="L2141" class="blob-num js-line-number" data-line-number="2141"></td>
        <td id="LC2141" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">_OnChangedTextureID</span>();</td>
      </tr>
      <tr>
        <td id="L2142" class="blob-num js-line-number" data-line-number="2142"></td>
        <td id="LC2142" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">_OnChangedVtxOffset</span>();</td>
      </tr>
      <tr>
        <td id="L2143" class="blob-num js-line-number" data-line-number="2143"></td>
        <td id="LC2143" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2144" class="blob-num js-line-number" data-line-number="2144"></td>
        <td id="LC2144" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2145" class="blob-num js-line-number" data-line-number="2145"></td>
        <td id="LC2145" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> All draw data to render a Dear ImGui frame</span></td>
      </tr>
      <tr>
        <td id="L2146" class="blob-num js-line-number" data-line-number="2146"></td>
        <td id="LC2146" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> (NB: the style and the naming convention here is a little inconsistent, we currently preserve them for backward compatibility purpose,</span></td>
      </tr>
      <tr>
        <td id="L2147" class="blob-num js-line-number" data-line-number="2147"></td>
        <td id="LC2147" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> as this is one of the oldest structure exposed by the library! Basically, ImDrawList == CmdList)</span></td>
      </tr>
      <tr>
        <td id="L2148" class="blob-num js-line-number" data-line-number="2148"></td>
        <td id="LC2148" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImDrawData</span></td>
      </tr>
      <tr>
        <td id="L2149" class="blob-num js-line-number" data-line-number="2149"></td>
        <td id="LC2149" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2150" class="blob-num js-line-number" data-line-number="2150"></td>
        <td id="LC2150" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>            Valid;                  <span class="pl-c"><span class="pl-c">//</span> Only valid after Render() is called and before the next NewFrame() is called.</span></td>
      </tr>
      <tr>
        <td id="L2151" class="blob-num js-line-number" data-line-number="2151"></td>
        <td id="LC2151" class="blob-code blob-code-inner js-file-line">    ImDrawList**    CmdLists;               <span class="pl-c"><span class="pl-c">//</span> Array of ImDrawList* to render. The ImDrawList are owned by ImGuiContext and only pointed to from here.</span></td>
      </tr>
      <tr>
        <td id="L2152" class="blob-num js-line-number" data-line-number="2152"></td>
        <td id="LC2152" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>             CmdListsCount;          <span class="pl-c"><span class="pl-c">//</span> Number of ImDrawList* to render</span></td>
      </tr>
      <tr>
        <td id="L2153" class="blob-num js-line-number" data-line-number="2153"></td>
        <td id="LC2153" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>             TotalIdxCount;          <span class="pl-c"><span class="pl-c">//</span> For convenience, sum of all ImDrawList&#39;s IdxBuffer.Size</span></td>
      </tr>
      <tr>
        <td id="L2154" class="blob-num js-line-number" data-line-number="2154"></td>
        <td id="LC2154" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>             TotalVtxCount;          <span class="pl-c"><span class="pl-c">//</span> For convenience, sum of all ImDrawList&#39;s VtxBuffer.Size</span></td>
      </tr>
      <tr>
        <td id="L2155" class="blob-num js-line-number" data-line-number="2155"></td>
        <td id="LC2155" class="blob-code blob-code-inner js-file-line">    ImVec2          DisplayPos;             <span class="pl-c"><span class="pl-c">//</span> Upper-left position of the viewport to render (== upper-left of the orthogonal projection matrix to use)</span></td>
      </tr>
      <tr>
        <td id="L2156" class="blob-num js-line-number" data-line-number="2156"></td>
        <td id="LC2156" class="blob-code blob-code-inner js-file-line">    ImVec2          DisplaySize;            <span class="pl-c"><span class="pl-c">//</span> Size of the viewport to render (== io.DisplaySize for the main viewport) (DisplayPos + DisplaySize == lower-right of the orthogonal projection matrix to use)</span></td>
      </tr>
      <tr>
        <td id="L2157" class="blob-num js-line-number" data-line-number="2157"></td>
        <td id="LC2157" class="blob-code blob-code-inner js-file-line">    ImVec2          FramebufferScale;       <span class="pl-c"><span class="pl-c">//</span> Amount of pixels for each unit of DisplaySize. Based on io.DisplayFramebufferScale. Generally (1,1) on normal display, (2,2) on OSX with Retina display.</span></td>
      </tr>
      <tr>
        <td id="L2158" class="blob-num js-line-number" data-line-number="2158"></td>
        <td id="LC2158" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2159" class="blob-num js-line-number" data-line-number="2159"></td>
        <td id="LC2159" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Functions</span></td>
      </tr>
      <tr>
        <td id="L2160" class="blob-num js-line-number" data-line-number="2160"></td>
        <td id="LC2160" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImDrawData</span>()    { Valid = <span class="pl-c1">false</span>; <span class="pl-c1">Clear</span>(); }</td>
      </tr>
      <tr>
        <td id="L2161" class="blob-num js-line-number" data-line-number="2161"></td>
        <td id="LC2161" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">~ImDrawData</span>()   { <span class="pl-c1">Clear</span>(); }</td>
      </tr>
      <tr>
        <td id="L2162" class="blob-num js-line-number" data-line-number="2162"></td>
        <td id="LC2162" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span> <span class="pl-en">Clear</span>()    { Valid = <span class="pl-c1">false</span>; CmdLists = <span class="pl-c1">NULL</span>; CmdListsCount = TotalVtxCount = TotalIdxCount = <span class="pl-c1">0</span>; DisplayPos = DisplaySize = FramebufferScale = <span class="pl-c1">ImVec2</span>(<span class="pl-c1">0</span>.<span class="pl-smi">f</span>, <span class="pl-c1">0</span>.<span class="pl-smi">f</span>); } <span class="pl-c"><span class="pl-c">//</span> The ImDrawList are owned by ImGuiContext!</span></td>
      </tr>
      <tr>
        <td id="L2163" class="blob-num js-line-number" data-line-number="2163"></td>
        <td id="LC2163" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">DeIndexAllBuffers</span>();                    <span class="pl-c"><span class="pl-c">//</span> Helper to convert all buffers from indexed to non-indexed, in case you cannot render indexed. Note: this is slow and most likely a waste of resources. Always prefer indexed rendering!</span></td>
      </tr>
      <tr>
        <td id="L2164" class="blob-num js-line-number" data-line-number="2164"></td>
        <td id="LC2164" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">ScaleClipRects</span>(<span class="pl-k">const</span> ImVec2&amp; fb_scale); <span class="pl-c"><span class="pl-c">//</span> Helper to scale the ClipRect field of each ImDrawCmd. Use if your final output buffer is at a different scale than Dear ImGui expects, or if there is a difference between your window resolution and framebuffer resolution.</span></td>
      </tr>
      <tr>
        <td id="L2165" class="blob-num js-line-number" data-line-number="2165"></td>
        <td id="LC2165" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2166" class="blob-num js-line-number" data-line-number="2166"></td>
        <td id="LC2166" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2167" class="blob-num js-line-number" data-line-number="2167"></td>
        <td id="LC2167" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2168" class="blob-num js-line-number" data-line-number="2168"></td>
        <td id="LC2168" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Font API (ImFontConfig, ImFontGlyph, ImFontAtlasFlags, ImFontAtlas, ImFontGlyphRangesBuilder, ImFont)</span></td>
      </tr>
      <tr>
        <td id="L2169" class="blob-num js-line-number" data-line-number="2169"></td>
        <td id="LC2169" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>-----------------------------------------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2170" class="blob-num js-line-number" data-line-number="2170"></td>
        <td id="LC2170" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2171" class="blob-num js-line-number" data-line-number="2171"></td>
        <td id="LC2171" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFontConfig</span></td>
      </tr>
      <tr>
        <td id="L2172" class="blob-num js-line-number" data-line-number="2172"></td>
        <td id="LC2172" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2173" class="blob-num js-line-number" data-line-number="2173"></td>
        <td id="LC2173" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>*           FontData;               <span class="pl-c"><span class="pl-c">//</span>          // TTF/OTF data</span></td>
      </tr>
      <tr>
        <td id="L2174" class="blob-num js-line-number" data-line-number="2174"></td>
        <td id="LC2174" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>             FontDataSize;           <span class="pl-c"><span class="pl-c">//</span>          // TTF/OTF data size</span></td>
      </tr>
      <tr>
        <td id="L2175" class="blob-num js-line-number" data-line-number="2175"></td>
        <td id="LC2175" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>            FontDataOwnedByAtlas;   <span class="pl-c"><span class="pl-c">//</span> true     // TTF/OTF data ownership taken by the container ImFontAtlas (will delete memory itself).</span></td>
      </tr>
      <tr>
        <td id="L2176" class="blob-num js-line-number" data-line-number="2176"></td>
        <td id="LC2176" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>             FontNo;                 <span class="pl-c"><span class="pl-c">//</span> 0        // Index of font within TTF/OTF file</span></td>
      </tr>
      <tr>
        <td id="L2177" class="blob-num js-line-number" data-line-number="2177"></td>
        <td id="LC2177" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>           SizePixels;             <span class="pl-c"><span class="pl-c">//</span>          // Size in pixels for rasterizer (more or less maps to the resulting font height).</span></td>
      </tr>
      <tr>
        <td id="L2178" class="blob-num js-line-number" data-line-number="2178"></td>
        <td id="LC2178" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>             OversampleH;            <span class="pl-c"><span class="pl-c">//</span> 3        // Rasterize at higher quality for sub-pixel positioning. Read https://github.com/nothings/stb/blob/master/tests/oversample/README.md for details.</span></td>
      </tr>
      <tr>
        <td id="L2179" class="blob-num js-line-number" data-line-number="2179"></td>
        <td id="LC2179" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>             OversampleV;            <span class="pl-c"><span class="pl-c">//</span> 1        // Rasterize at higher quality for sub-pixel positioning. We don&#39;t use sub-pixel positions on the Y axis.</span></td>
      </tr>
      <tr>
        <td id="L2180" class="blob-num js-line-number" data-line-number="2180"></td>
        <td id="LC2180" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>            PixelSnapH;             <span class="pl-c"><span class="pl-c">//</span> false    // Align every glyph to pixel boundary. Useful e.g. if you are merging a non-pixel aligned font with the default font. If enabled, you can set OversampleH/V to 1.</span></td>
      </tr>
      <tr>
        <td id="L2181" class="blob-num js-line-number" data-line-number="2181"></td>
        <td id="LC2181" class="blob-code blob-code-inner js-file-line">    ImVec2          GlyphExtraSpacing;      <span class="pl-c"><span class="pl-c">//</span> 0, 0     // Extra spacing (in pixels) between glyphs. Only X axis is supported for now.</span></td>
      </tr>
      <tr>
        <td id="L2182" class="blob-num js-line-number" data-line-number="2182"></td>
        <td id="LC2182" class="blob-code blob-code-inner js-file-line">    ImVec2          GlyphOffset;            <span class="pl-c"><span class="pl-c">//</span> 0, 0     // Offset all glyphs from this font input.</span></td>
      </tr>
      <tr>
        <td id="L2183" class="blob-num js-line-number" data-line-number="2183"></td>
        <td id="LC2183" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> ImWchar*  GlyphRanges;            <span class="pl-c"><span class="pl-c">//</span> NULL     // Pointer to a user-provided list of Unicode range (2 value per range, values are inclusive, zero-terminated list). THE ARRAY DATA NEEDS TO PERSIST AS LONG AS THE FONT IS ALIVE.</span></td>
      </tr>
      <tr>
        <td id="L2184" class="blob-num js-line-number" data-line-number="2184"></td>
        <td id="LC2184" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>           GlyphMinAdvanceX;       <span class="pl-c"><span class="pl-c">//</span> 0        // Minimum AdvanceX for glyphs, set Min to align font icons, set both Min/Max to enforce mono-space font</span></td>
      </tr>
      <tr>
        <td id="L2185" class="blob-num js-line-number" data-line-number="2185"></td>
        <td id="LC2185" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>           GlyphMaxAdvanceX;       <span class="pl-c"><span class="pl-c">//</span> FLT_MAX  // Maximum AdvanceX for glyphs</span></td>
      </tr>
      <tr>
        <td id="L2186" class="blob-num js-line-number" data-line-number="2186"></td>
        <td id="LC2186" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>            MergeMode;              <span class="pl-c"><span class="pl-c">//</span> false    // Merge into previous ImFont, so you can combine multiple inputs font into one ImFont (e.g. ASCII font + icons + Japanese glyphs). You may want to use GlyphOffset.y when merge font of different heights.</span></td>
      </tr>
      <tr>
        <td id="L2187" class="blob-num js-line-number" data-line-number="2187"></td>
        <td id="LC2187" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">int</span>    RasterizerFlags;        <span class="pl-c"><span class="pl-c">//</span> 0x00     // Settings for custom font rasterizer (e.g. ImGuiFreeType). Leave as zero if you aren&#39;t using one.</span></td>
      </tr>
      <tr>
        <td id="L2188" class="blob-num js-line-number" data-line-number="2188"></td>
        <td id="LC2188" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>           RasterizerMultiply;     <span class="pl-c"><span class="pl-c">//</span> 1.0f     // Brighten (&gt;1.0f) or darken (&lt;1.0f) font output. Brightening small fonts may be a good workaround to make them more readable.</span></td>
      </tr>
      <tr>
        <td id="L2189" class="blob-num js-line-number" data-line-number="2189"></td>
        <td id="LC2189" class="blob-code blob-code-inner js-file-line">    ImWchar         EllipsisChar;           <span class="pl-c"><span class="pl-c">//</span> -1       // Explicitly specify unicode codepoint of ellipsis character. When fonts are being merged first specified ellipsis will be used.</span></td>
      </tr>
      <tr>
        <td id="L2190" class="blob-num js-line-number" data-line-number="2190"></td>
        <td id="LC2190" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2191" class="blob-num js-line-number" data-line-number="2191"></td>
        <td id="LC2191" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L2192" class="blob-num js-line-number" data-line-number="2192"></td>
        <td id="LC2192" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">char</span>            Name[<span class="pl-c1">40</span>];               <span class="pl-c"><span class="pl-c">//</span> Name (strictly to ease debugging)</span></td>
      </tr>
      <tr>
        <td id="L2193" class="blob-num js-line-number" data-line-number="2193"></td>
        <td id="LC2193" class="blob-code blob-code-inner js-file-line">    ImFont*         DstFont;</td>
      </tr>
      <tr>
        <td id="L2194" class="blob-num js-line-number" data-line-number="2194"></td>
        <td id="LC2194" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2195" class="blob-num js-line-number" data-line-number="2195"></td>
        <td id="LC2195" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-en">ImFontConfig</span>();</td>
      </tr>
      <tr>
        <td id="L2196" class="blob-num js-line-number" data-line-number="2196"></td>
        <td id="LC2196" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2197" class="blob-num js-line-number" data-line-number="2197"></td>
        <td id="LC2197" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2198" class="blob-num js-line-number" data-line-number="2198"></td>
        <td id="LC2198" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Hold rendering data for one glyph.</span></td>
      </tr>
      <tr>
        <td id="L2199" class="blob-num js-line-number" data-line-number="2199"></td>
        <td id="LC2199" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> (Note: some language parsers may fail to convert the 31+1 bitfield members, in this case maybe drop store a single u32 or we can rework this)</span></td>
      </tr>
      <tr>
        <td id="L2200" class="blob-num js-line-number" data-line-number="2200"></td>
        <td id="LC2200" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFontGlyph</span></td>
      </tr>
      <tr>
        <td id="L2201" class="blob-num js-line-number" data-line-number="2201"></td>
        <td id="LC2201" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2202" class="blob-num js-line-number" data-line-number="2202"></td>
        <td id="LC2202" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">int</span>    Codepoint : <span class="pl-c1">31</span>;     <span class="pl-c"><span class="pl-c">//</span> 0x0000..0xFFFF</span></td>
      </tr>
      <tr>
        <td id="L2203" class="blob-num js-line-number" data-line-number="2203"></td>
        <td id="LC2203" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">int</span>    Visible : <span class="pl-c1">1</span>;        <span class="pl-c"><span class="pl-c">//</span> Flag to allow early out when rendering</span></td>
      </tr>
      <tr>
        <td id="L2204" class="blob-num js-line-number" data-line-number="2204"></td>
        <td id="LC2204" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>           AdvanceX;           <span class="pl-c"><span class="pl-c">//</span> Distance to next character (= data from font + ImFontConfig::GlyphExtraSpacing.x baked in)</span></td>
      </tr>
      <tr>
        <td id="L2205" class="blob-num js-line-number" data-line-number="2205"></td>
        <td id="LC2205" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>           X0, Y0, X1, Y1;     <span class="pl-c"><span class="pl-c">//</span> Glyph corners</span></td>
      </tr>
      <tr>
        <td id="L2206" class="blob-num js-line-number" data-line-number="2206"></td>
        <td id="LC2206" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>           U0, V0, U1, V1;     <span class="pl-c"><span class="pl-c">//</span> Texture coordinates</span></td>
      </tr>
      <tr>
        <td id="L2207" class="blob-num js-line-number" data-line-number="2207"></td>
        <td id="LC2207" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2208" class="blob-num js-line-number" data-line-number="2208"></td>
        <td id="LC2208" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2209" class="blob-num js-line-number" data-line-number="2209"></td>
        <td id="LC2209" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Helper to build glyph ranges from text/string data. Feed your application strings/characters to it then call BuildRanges().</span></td>
      </tr>
      <tr>
        <td id="L2210" class="blob-num js-line-number" data-line-number="2210"></td>
        <td id="LC2210" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> This is essentially a tightly packed of vector of 64k booleans = 8KB storage.</span></td>
      </tr>
      <tr>
        <td id="L2211" class="blob-num js-line-number" data-line-number="2211"></td>
        <td id="LC2211" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFontGlyphRangesBuilder</span></td>
      </tr>
      <tr>
        <td id="L2212" class="blob-num js-line-number" data-line-number="2212"></td>
        <td id="LC2212" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2213" class="blob-num js-line-number" data-line-number="2213"></td>
        <td id="LC2213" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImU32&gt; UsedChars;            <span class="pl-c"><span class="pl-c">//</span> Store 1-bit per Unicode code point (0=unused, 1=used)</span></td>
      </tr>
      <tr>
        <td id="L2214" class="blob-num js-line-number" data-line-number="2214"></td>
        <td id="LC2214" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2215" class="blob-num js-line-number" data-line-number="2215"></td>
        <td id="LC2215" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImFontGlyphRangesBuilder</span>()              { <span class="pl-c1">Clear</span>(); }</td>
      </tr>
      <tr>
        <td id="L2216" class="blob-num js-line-number" data-line-number="2216"></td>
        <td id="LC2216" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>     <span class="pl-en">Clear</span>()                 { <span class="pl-k">int</span> size_in_bytes = (IM_UNICODE_CODEPOINT_MAX + <span class="pl-c1">1</span>) / <span class="pl-c1">8</span>; UsedChars.<span class="pl-c1">resize</span>(size_in_bytes / (<span class="pl-k">int</span>)<span class="pl-k">sizeof</span>(ImU32)); <span class="pl-c1">memset</span>(UsedChars.<span class="pl-smi">Data</span>, <span class="pl-c1">0</span>, (<span class="pl-c1">size_t</span>)size_in_bytes); }</td>
      </tr>
      <tr>
        <td id="L2217" class="blob-num js-line-number" data-line-number="2217"></td>
        <td id="LC2217" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">bool</span>     <span class="pl-en">GetBit</span>(<span class="pl-c1">size_t</span> n) <span class="pl-k">const</span>  { <span class="pl-k">int</span> off = (<span class="pl-k">int</span>)(n &gt;&gt; <span class="pl-c1">5</span>); ImU32 mask = <span class="pl-c1">1u</span> &lt;&lt; (n &amp; <span class="pl-c1">31</span>); <span class="pl-k">return</span> (UsedChars[off] &amp; mask) != <span class="pl-c1">0</span>; }  <span class="pl-c"><span class="pl-c">//</span> Get bit n in the array</span></td>
      </tr>
      <tr>
        <td id="L2218" class="blob-num js-line-number" data-line-number="2218"></td>
        <td id="LC2218" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>     <span class="pl-en">SetBit</span>(<span class="pl-c1">size_t</span> n)        { <span class="pl-k">int</span> off = (<span class="pl-k">int</span>)(n &gt;&gt; <span class="pl-c1">5</span>); ImU32 mask = <span class="pl-c1">1u</span> &lt;&lt; (n &amp; <span class="pl-c1">31</span>); UsedChars[off] |= mask; }               <span class="pl-c"><span class="pl-c">//</span> Set bit n in the array</span></td>
      </tr>
      <tr>
        <td id="L2219" class="blob-num js-line-number" data-line-number="2219"></td>
        <td id="LC2219" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">inline</span> <span class="pl-k">void</span>     <span class="pl-en">AddChar</span>(ImWchar c)      { <span class="pl-c1">SetBit</span>(c); }                      <span class="pl-c"><span class="pl-c">//</span> Add character</span></td>
      </tr>
      <tr>
        <td id="L2220" class="blob-num js-line-number" data-line-number="2220"></td>
        <td id="LC2220" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddText</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* text, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_end = <span class="pl-c1">NULL</span>);     <span class="pl-c"><span class="pl-c">//</span> Add string (each character of the UTF-8 string are added)</span></td>
      </tr>
      <tr>
        <td id="L2221" class="blob-num js-line-number" data-line-number="2221"></td>
        <td id="LC2221" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">AddRanges</span>(<span class="pl-k">const</span> ImWchar* ranges);                           <span class="pl-c"><span class="pl-c">//</span> Add ranges, e.g. builder.AddRanges(ImFontAtlas::GetGlyphRangesDefault()) to force add all of ASCII/Latin+Ext</span></td>
      </tr>
      <tr>
        <td id="L2222" class="blob-num js-line-number" data-line-number="2222"></td>
        <td id="LC2222" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>  <span class="pl-en">BuildRanges</span>(ImVector&lt;ImWchar&gt;* out_ranges);                 <span class="pl-c"><span class="pl-c">//</span> Output new ranges</span></td>
      </tr>
      <tr>
        <td id="L2223" class="blob-num js-line-number" data-line-number="2223"></td>
        <td id="LC2223" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2224" class="blob-num js-line-number" data-line-number="2224"></td>
        <td id="LC2224" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2225" class="blob-num js-line-number" data-line-number="2225"></td>
        <td id="LC2225" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> See ImFontAtlas::AddCustomRectXXX functions.</span></td>
      </tr>
      <tr>
        <td id="L2226" class="blob-num js-line-number" data-line-number="2226"></td>
        <td id="LC2226" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFontAtlasCustomRect</span></td>
      </tr>
      <tr>
        <td id="L2227" class="blob-num js-line-number" data-line-number="2227"></td>
        <td id="LC2227" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2228" class="blob-num js-line-number" data-line-number="2228"></td>
        <td id="LC2228" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">short</span>  Width, Height;  <span class="pl-c"><span class="pl-c">//</span> Input    // Desired rectangle dimension</span></td>
      </tr>
      <tr>
        <td id="L2229" class="blob-num js-line-number" data-line-number="2229"></td>
        <td id="LC2229" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">short</span>  X, Y;           <span class="pl-c"><span class="pl-c">//</span> Output   // Packed position in Atlas</span></td>
      </tr>
      <tr>
        <td id="L2230" class="blob-num js-line-number" data-line-number="2230"></td>
        <td id="LC2230" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">int</span>    GlyphID;        <span class="pl-c"><span class="pl-c">//</span> Input    // For custom font glyphs only (ID &lt; 0x110000)</span></td>
      </tr>
      <tr>
        <td id="L2231" class="blob-num js-line-number" data-line-number="2231"></td>
        <td id="LC2231" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>           GlyphAdvanceX;  <span class="pl-c"><span class="pl-c">//</span> Input    // For custom font glyphs only: glyph xadvance</span></td>
      </tr>
      <tr>
        <td id="L2232" class="blob-num js-line-number" data-line-number="2232"></td>
        <td id="LC2232" class="blob-code blob-code-inner js-file-line">    ImVec2          GlyphOffset;    <span class="pl-c"><span class="pl-c">//</span> Input    // For custom font glyphs only: glyph display offset</span></td>
      </tr>
      <tr>
        <td id="L2233" class="blob-num js-line-number" data-line-number="2233"></td>
        <td id="LC2233" class="blob-code blob-code-inner js-file-line">    ImFont*         Font;           <span class="pl-c"><span class="pl-c">//</span> Input    // For custom font glyphs only: target font</span></td>
      </tr>
      <tr>
        <td id="L2234" class="blob-num js-line-number" data-line-number="2234"></td>
        <td id="LC2234" class="blob-code blob-code-inner js-file-line">    <span class="pl-en">ImFontAtlasCustomRect</span>()         { Width = Height = <span class="pl-c1">0</span>; X = Y = <span class="pl-c1">0xFFFF</span>; GlyphID = <span class="pl-c1">0</span>; GlyphAdvanceX = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>; GlyphOffset = <span class="pl-c1">ImVec2</span>(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>); Font = <span class="pl-c1">NULL</span>; }</td>
      </tr>
      <tr>
        <td id="L2235" class="blob-num js-line-number" data-line-number="2235"></td>
        <td id="LC2235" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span> <span class="pl-en">IsPacked</span>() <span class="pl-k">const</span>           { <span class="pl-k">return</span> X != <span class="pl-c1">0xFFFF</span>; }</td>
      </tr>
      <tr>
        <td id="L2236" class="blob-num js-line-number" data-line-number="2236"></td>
        <td id="LC2236" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2237" class="blob-num js-line-number" data-line-number="2237"></td>
        <td id="LC2237" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2238" class="blob-num js-line-number" data-line-number="2238"></td>
        <td id="LC2238" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Flags for ImFontAtlas build</span></td>
      </tr>
      <tr>
        <td id="L2239" class="blob-num js-line-number" data-line-number="2239"></td>
        <td id="LC2239" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> ImFontAtlasFlags_</td>
      </tr>
      <tr>
        <td id="L2240" class="blob-num js-line-number" data-line-number="2240"></td>
        <td id="LC2240" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2241" class="blob-num js-line-number" data-line-number="2241"></td>
        <td id="LC2241" class="blob-code blob-code-inner js-file-line">    ImFontAtlasFlags_None               = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L2242" class="blob-num js-line-number" data-line-number="2242"></td>
        <td id="LC2242" class="blob-code blob-code-inner js-file-line">    ImFontAtlasFlags_NoPowerOfTwoHeight = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">0</span>,   <span class="pl-c"><span class="pl-c">//</span> Don&#39;t round the height to next power of two</span></td>
      </tr>
      <tr>
        <td id="L2243" class="blob-num js-line-number" data-line-number="2243"></td>
        <td id="LC2243" class="blob-code blob-code-inner js-file-line">    ImFontAtlasFlags_NoMouseCursors     = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">1</span>,   <span class="pl-c"><span class="pl-c">//</span> Don&#39;t build software mouse cursors into the atlas (save a little texture memory)</span></td>
      </tr>
      <tr>
        <td id="L2244" class="blob-num js-line-number" data-line-number="2244"></td>
        <td id="LC2244" class="blob-code blob-code-inner js-file-line">    ImFontAtlasFlags_NoBakedLines       = <span class="pl-c1">1</span> &lt;&lt; <span class="pl-c1">2</span>    <span class="pl-c"><span class="pl-c">//</span> Don&#39;t build thick line textures into the atlas (save a little texture memory). The AntiAliasedLinesUseTex features uses them, otherwise they will be rendered using polygons (more expensive for CPU/GPU).</span></td>
      </tr>
      <tr>
        <td id="L2245" class="blob-num js-line-number" data-line-number="2245"></td>
        <td id="LC2245" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2246" class="blob-num js-line-number" data-line-number="2246"></td>
        <td id="LC2246" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2247" class="blob-num js-line-number" data-line-number="2247"></td>
        <td id="LC2247" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Load and rasterize multiple TTF/OTF fonts into a same texture. The font atlas will build a single texture holding:</span></td>
      </tr>
      <tr>
        <td id="L2248" class="blob-num js-line-number" data-line-number="2248"></td>
        <td id="LC2248" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>  - One or more fonts.</span></td>
      </tr>
      <tr>
        <td id="L2249" class="blob-num js-line-number" data-line-number="2249"></td>
        <td id="LC2249" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>  - Custom graphics data needed to render the shapes needed by Dear ImGui.</span></td>
      </tr>
      <tr>
        <td id="L2250" class="blob-num js-line-number" data-line-number="2250"></td>
        <td id="LC2250" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>  - Mouse cursor shapes for software cursor rendering (unless setting &#39;Flags |= ImFontAtlasFlags_NoMouseCursors&#39; in the font atlas).</span></td>
      </tr>
      <tr>
        <td id="L2251" class="blob-num js-line-number" data-line-number="2251"></td>
        <td id="LC2251" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> It is the user-code responsibility to setup/build the atlas, then upload the pixel data into a texture accessible by your graphics api.</span></td>
      </tr>
      <tr>
        <td id="L2252" class="blob-num js-line-number" data-line-number="2252"></td>
        <td id="LC2252" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>  - Optionally, call any of the AddFont*** functions. If you don&#39;t call any, the default font embedded in the code will be loaded for you.</span></td>
      </tr>
      <tr>
        <td id="L2253" class="blob-num js-line-number" data-line-number="2253"></td>
        <td id="LC2253" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>  - Call GetTexDataAsAlpha8() or GetTexDataAsRGBA32() to build and retrieve pixels data.</span></td>
      </tr>
      <tr>
        <td id="L2254" class="blob-num js-line-number" data-line-number="2254"></td>
        <td id="LC2254" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>  - Upload the pixels data into a texture within your graphics system (see imgui_impl_xxxx.cpp examples)</span></td>
      </tr>
      <tr>
        <td id="L2255" class="blob-num js-line-number" data-line-number="2255"></td>
        <td id="LC2255" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>  - Call SetTexID(my_tex_id); and pass the pointer/identifier to your texture in a format natural to your graphics API.</span></td>
      </tr>
      <tr>
        <td id="L2256" class="blob-num js-line-number" data-line-number="2256"></td>
        <td id="LC2256" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>    This value will be passed back to you during rendering to identify the texture. Read FAQ entry about ImTextureID for more details.</span></td>
      </tr>
      <tr>
        <td id="L2257" class="blob-num js-line-number" data-line-number="2257"></td>
        <td id="LC2257" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Common pitfalls:</span></td>
      </tr>
      <tr>
        <td id="L2258" class="blob-num js-line-number" data-line-number="2258"></td>
        <td id="LC2258" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - If you pass a &#39;glyph_ranges&#39; array to AddFont*** functions, you need to make sure that your array persist up until the</span></td>
      </tr>
      <tr>
        <td id="L2259" class="blob-num js-line-number" data-line-number="2259"></td>
        <td id="LC2259" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   atlas is build (when calling GetTexData*** or Build()). We only copy the pointer, not the data.</span></td>
      </tr>
      <tr>
        <td id="L2260" class="blob-num js-line-number" data-line-number="2260"></td>
        <td id="LC2260" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Important: By default, AddFontFromMemoryTTF() takes ownership of the data. Even though we are not writing to it, we will free the pointer on destruction.</span></td>
      </tr>
      <tr>
        <td id="L2261" class="blob-num js-line-number" data-line-number="2261"></td>
        <td id="LC2261" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span>   You can set font_cfg-&gt;FontDataOwnedByAtlas=false to keep ownership of your data and it won&#39;t be freed,</span></td>
      </tr>
      <tr>
        <td id="L2262" class="blob-num js-line-number" data-line-number="2262"></td>
        <td id="LC2262" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - Even though many functions are suffixed with &quot;TTF&quot;, OTF data is supported just as well.</span></td>
      </tr>
      <tr>
        <td id="L2263" class="blob-num js-line-number" data-line-number="2263"></td>
        <td id="LC2263" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> - This is an old API and it is currently awkward for those and and various other reasons! We will address them in the future!</span></td>
      </tr>
      <tr>
        <td id="L2264" class="blob-num js-line-number" data-line-number="2264"></td>
        <td id="LC2264" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFontAtlas</span></td>
      </tr>
      <tr>
        <td id="L2265" class="blob-num js-line-number" data-line-number="2265"></td>
        <td id="LC2265" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2266" class="blob-num js-line-number" data-line-number="2266"></td>
        <td id="LC2266" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-en">ImFontAtlas</span>();</td>
      </tr>
      <tr>
        <td id="L2267" class="blob-num js-line-number" data-line-number="2267"></td>
        <td id="LC2267" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-en">~ImFontAtlas</span>();</td>
      </tr>
      <tr>
        <td id="L2268" class="blob-num js-line-number" data-line-number="2268"></td>
        <td id="LC2268" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImFont*           <span class="pl-en">AddFont</span>(<span class="pl-k">const</span> ImFontConfig* font_cfg);</td>
      </tr>
      <tr>
        <td id="L2269" class="blob-num js-line-number" data-line-number="2269"></td>
        <td id="LC2269" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImFont*           <span class="pl-en">AddFontDefault</span>(<span class="pl-k">const</span> ImFontConfig* font_cfg = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L2270" class="blob-num js-line-number" data-line-number="2270"></td>
        <td id="LC2270" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImFont*           <span class="pl-en">AddFontFromFileTTF</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* filename, <span class="pl-k">float</span> size_pixels, <span class="pl-k">const</span> ImFontConfig* font_cfg = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> ImWchar* glyph_ranges = <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L2271" class="blob-num js-line-number" data-line-number="2271"></td>
        <td id="LC2271" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImFont*           <span class="pl-en">AddFontFromMemoryTTF</span>(<span class="pl-k">void</span>* font_data, <span class="pl-k">int</span> font_size, <span class="pl-k">float</span> size_pixels, <span class="pl-k">const</span> ImFontConfig* font_cfg = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> ImWchar* glyph_ranges = <span class="pl-c1">NULL</span>); <span class="pl-c"><span class="pl-c">//</span> Note: Transfer ownership of &#39;ttf_data&#39; to ImFontAtlas! Will be deleted after destruction of the atlas. Set font_cfg-&gt;FontDataOwnedByAtlas=false to keep ownership of your data and it won&#39;t be freed.</span></td>
      </tr>
      <tr>
        <td id="L2272" class="blob-num js-line-number" data-line-number="2272"></td>
        <td id="LC2272" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImFont*           <span class="pl-en">AddFontFromMemoryCompressedTTF</span>(<span class="pl-k">const</span> <span class="pl-k">void</span>* compressed_font_data, <span class="pl-k">int</span> compressed_font_size, <span class="pl-k">float</span> size_pixels, <span class="pl-k">const</span> ImFontConfig* font_cfg = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> ImWchar* glyph_ranges = <span class="pl-c1">NULL</span>); <span class="pl-c"><span class="pl-c">//</span> &#39;compressed_font_data&#39; still owned by caller. Compress with binary_to_compressed_c.cpp.</span></td>
      </tr>
      <tr>
        <td id="L2273" class="blob-num js-line-number" data-line-number="2273"></td>
        <td id="LC2273" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImFont*           <span class="pl-en">AddFontFromMemoryCompressedBase85TTF</span>(<span class="pl-k">const</span> <span class="pl-k">char</span>* compressed_font_data_base85, <span class="pl-k">float</span> size_pixels, <span class="pl-k">const</span> ImFontConfig* font_cfg = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> ImWchar* glyph_ranges = <span class="pl-c1">NULL</span>);              <span class="pl-c"><span class="pl-c">//</span> &#39;compressed_font_data_base85&#39; still owned by caller. Compress with binary_to_compressed_c.cpp with -base85 parameter.</span></td>
      </tr>
      <tr>
        <td id="L2274" class="blob-num js-line-number" data-line-number="2274"></td>
        <td id="LC2274" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">ClearInputData</span>();           <span class="pl-c"><span class="pl-c">//</span> Clear input data (all ImFontConfig structures including sizes, TTF data, glyph ranges, etc.) = all the data used to build the texture and fonts.</span></td>
      </tr>
      <tr>
        <td id="L2275" class="blob-num js-line-number" data-line-number="2275"></td>
        <td id="LC2275" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">ClearTexData</span>();             <span class="pl-c"><span class="pl-c">//</span> Clear output texture data (CPU side). Saves RAM once the texture has been copied to graphics memory.</span></td>
      </tr>
      <tr>
        <td id="L2276" class="blob-num js-line-number" data-line-number="2276"></td>
        <td id="LC2276" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">ClearFonts</span>();               <span class="pl-c"><span class="pl-c">//</span> Clear output font data (glyphs storage, UV coordinates).</span></td>
      </tr>
      <tr>
        <td id="L2277" class="blob-num js-line-number" data-line-number="2277"></td>
        <td id="LC2277" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">Clear</span>();                    <span class="pl-c"><span class="pl-c">//</span> Clear all input and output.</span></td>
      </tr>
      <tr>
        <td id="L2278" class="blob-num js-line-number" data-line-number="2278"></td>
        <td id="LC2278" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2279" class="blob-num js-line-number" data-line-number="2279"></td>
        <td id="LC2279" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Build atlas, retrieve pixel data.</span></td>
      </tr>
      <tr>
        <td id="L2280" class="blob-num js-line-number" data-line-number="2280"></td>
        <td id="LC2280" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> User is in charge of copying the pixels into graphics memory (e.g. create a texture with your engine). Then store your texture handle with SetTexID().</span></td>
      </tr>
      <tr>
        <td id="L2281" class="blob-num js-line-number" data-line-number="2281"></td>
        <td id="LC2281" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> The pitch is always = Width * BytesPerPixels (1 or 4)</span></td>
      </tr>
      <tr>
        <td id="L2282" class="blob-num js-line-number" data-line-number="2282"></td>
        <td id="LC2282" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Building in RGBA32 format is provided for convenience and compatibility, but note that unless you manually manipulate or copy color data into</span></td>
      </tr>
      <tr>
        <td id="L2283" class="blob-num js-line-number" data-line-number="2283"></td>
        <td id="LC2283" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> the texture (e.g. when using the AddCustomRect*** api), then the RGB pixels emitted will always be white (~75% of memory/bandwidth waste.</span></td>
      </tr>
      <tr>
        <td id="L2284" class="blob-num js-line-number" data-line-number="2284"></td>
        <td id="LC2284" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>              <span class="pl-en">Build</span>();                    <span class="pl-c"><span class="pl-c">//</span> Build pixels data. This is called automatically for you by the GetTexData*** functions.</span></td>
      </tr>
      <tr>
        <td id="L2285" class="blob-num js-line-number" data-line-number="2285"></td>
        <td id="LC2285" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">GetTexDataAsAlpha8</span>(<span class="pl-k">unsigned</span> <span class="pl-k">char</span>** out_pixels, <span class="pl-k">int</span>* out_width, <span class="pl-k">int</span>* out_height, <span class="pl-k">int</span>* out_bytes_per_pixel = <span class="pl-c1">NULL</span>);  <span class="pl-c"><span class="pl-c">//</span> 1 byte per-pixel</span></td>
      </tr>
      <tr>
        <td id="L2286" class="blob-num js-line-number" data-line-number="2286"></td>
        <td id="LC2286" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">GetTexDataAsRGBA32</span>(<span class="pl-k">unsigned</span> <span class="pl-k">char</span>** out_pixels, <span class="pl-k">int</span>* out_width, <span class="pl-k">int</span>* out_height, <span class="pl-k">int</span>* out_bytes_per_pixel = <span class="pl-c1">NULL</span>);  <span class="pl-c"><span class="pl-c">//</span> 4 bytes-per-pixel</span></td>
      </tr>
      <tr>
        <td id="L2287" class="blob-num js-line-number" data-line-number="2287"></td>
        <td id="LC2287" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>                        <span class="pl-en">IsBuilt</span>() <span class="pl-k">const</span>             { <span class="pl-k">return</span> Fonts.<span class="pl-smi">Size</span> &gt; <span class="pl-c1">0</span> &amp;&amp; (TexPixelsAlpha8 != <span class="pl-c1">NULL</span> || TexPixelsRGBA32 != <span class="pl-c1">NULL</span>); }</td>
      </tr>
      <tr>
        <td id="L2288" class="blob-num js-line-number" data-line-number="2288"></td>
        <td id="LC2288" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">void</span>                        <span class="pl-en">SetTexID</span>(ImTextureID id)    { TexID = id; }</td>
      </tr>
      <tr>
        <td id="L2289" class="blob-num js-line-number" data-line-number="2289"></td>
        <td id="LC2289" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2290" class="blob-num js-line-number" data-line-number="2290"></td>
        <td id="LC2290" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>-------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2291" class="blob-num js-line-number" data-line-number="2291"></td>
        <td id="LC2291" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Glyph Ranges</span></td>
      </tr>
      <tr>
        <td id="L2292" class="blob-num js-line-number" data-line-number="2292"></td>
        <td id="LC2292" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>-------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2293" class="blob-num js-line-number" data-line-number="2293"></td>
        <td id="LC2293" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2294" class="blob-num js-line-number" data-line-number="2294"></td>
        <td id="LC2294" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Helpers to retrieve list of common Unicode ranges (2 value per range, values are inclusive, zero-terminated list)</span></td>
      </tr>
      <tr>
        <td id="L2295" class="blob-num js-line-number" data-line-number="2295"></td>
        <td id="LC2295" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> NB: Make sure that your string are UTF-8 and NOT in your local code page. In C++11, you can create UTF-8 string literal using the u8&quot;Hello world&quot; syntax. See FAQ for details.</span></td>
      </tr>
      <tr>
        <td id="L2296" class="blob-num js-line-number" data-line-number="2296"></td>
        <td id="LC2296" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> NB: Consider using ImFontGlyphRangesBuilder to build glyph ranges from textual data.</span></td>
      </tr>
      <tr>
        <td id="L2297" class="blob-num js-line-number" data-line-number="2297"></td>
        <td id="LC2297" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImWchar*    <span class="pl-en">GetGlyphRangesDefault</span>();                <span class="pl-c"><span class="pl-c">//</span> Basic Latin, Extended Latin</span></td>
      </tr>
      <tr>
        <td id="L2298" class="blob-num js-line-number" data-line-number="2298"></td>
        <td id="LC2298" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImWchar*    <span class="pl-en">GetGlyphRangesKorean</span>();                 <span class="pl-c"><span class="pl-c">//</span> Default + Korean characters</span></td>
      </tr>
      <tr>
        <td id="L2299" class="blob-num js-line-number" data-line-number="2299"></td>
        <td id="LC2299" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImWchar*    <span class="pl-en">GetGlyphRangesJapanese</span>();               <span class="pl-c"><span class="pl-c">//</span> Default + Hiragana, Katakana, Half-Width, Selection of 1946 Ideographs</span></td>
      </tr>
      <tr>
        <td id="L2300" class="blob-num js-line-number" data-line-number="2300"></td>
        <td id="LC2300" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImWchar*    <span class="pl-en">GetGlyphRangesChineseFull</span>();            <span class="pl-c"><span class="pl-c">//</span> Default + Half-Width + Japanese Hiragana/Katakana + full set of about 21000 CJK Unified Ideographs</span></td>
      </tr>
      <tr>
        <td id="L2301" class="blob-num js-line-number" data-line-number="2301"></td>
        <td id="LC2301" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImWchar*    <span class="pl-en">GetGlyphRangesChineseSimplifiedCommon</span>();<span class="pl-c"><span class="pl-c">//</span> Default + Half-Width + Japanese Hiragana/Katakana + set of 2500 CJK Unified Ideographs for common simplified Chinese</span></td>
      </tr>
      <tr>
        <td id="L2302" class="blob-num js-line-number" data-line-number="2302"></td>
        <td id="LC2302" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImWchar*    <span class="pl-en">GetGlyphRangesCyrillic</span>();               <span class="pl-c"><span class="pl-c">//</span> Default + about 400 Cyrillic characters</span></td>
      </tr>
      <tr>
        <td id="L2303" class="blob-num js-line-number" data-line-number="2303"></td>
        <td id="LC2303" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImWchar*    <span class="pl-en">GetGlyphRangesThai</span>();                   <span class="pl-c"><span class="pl-c">//</span> Default + Thai characters</span></td>
      </tr>
      <tr>
        <td id="L2304" class="blob-num js-line-number" data-line-number="2304"></td>
        <td id="LC2304" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImWchar*    <span class="pl-en">GetGlyphRangesVietnamese</span>();             <span class="pl-c"><span class="pl-c">//</span> Default + Vietnamese characters</span></td>
      </tr>
      <tr>
        <td id="L2305" class="blob-num js-line-number" data-line-number="2305"></td>
        <td id="LC2305" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2306" class="blob-num js-line-number" data-line-number="2306"></td>
        <td id="LC2306" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>-------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2307" class="blob-num js-line-number" data-line-number="2307"></td>
        <td id="LC2307" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [BETA] Custom Rectangles/Glyphs API</span></td>
      </tr>
      <tr>
        <td id="L2308" class="blob-num js-line-number" data-line-number="2308"></td>
        <td id="LC2308" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>-------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2309" class="blob-num js-line-number" data-line-number="2309"></td>
        <td id="LC2309" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2310" class="blob-num js-line-number" data-line-number="2310"></td>
        <td id="LC2310" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> You can request arbitrary rectangles to be packed into the atlas, for your own purposes.</span></td>
      </tr>
      <tr>
        <td id="L2311" class="blob-num js-line-number" data-line-number="2311"></td>
        <td id="LC2311" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> After calling Build(), you can query the rectangle position and render your pixels.</span></td>
      </tr>
      <tr>
        <td id="L2312" class="blob-num js-line-number" data-line-number="2312"></td>
        <td id="LC2312" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> You can also request your rectangles to be mapped as font glyph (given a font + Unicode point),</span></td>
      </tr>
      <tr>
        <td id="L2313" class="blob-num js-line-number" data-line-number="2313"></td>
        <td id="LC2313" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> so you can render e.g. custom colorful icons and use them as regular glyphs.</span></td>
      </tr>
      <tr>
        <td id="L2314" class="blob-num js-line-number" data-line-number="2314"></td>
        <td id="LC2314" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Read docs/FONTS.md for more details about using colorful icons.</span></td>
      </tr>
      <tr>
        <td id="L2315" class="blob-num js-line-number" data-line-number="2315"></td>
        <td id="LC2315" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Note: this API may be redesigned later in order to support multi-monitor varying DPI settings.</span></td>
      </tr>
      <tr>
        <td id="L2316" class="blob-num js-line-number" data-line-number="2316"></td>
        <td id="LC2316" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">int</span>               <span class="pl-en">AddCustomRectRegular</span>(<span class="pl-k">int</span> width, <span class="pl-k">int</span> height);</td>
      </tr>
      <tr>
        <td id="L2317" class="blob-num js-line-number" data-line-number="2317"></td>
        <td id="LC2317" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">int</span>               <span class="pl-en">AddCustomRectFontGlyph</span>(ImFont* font, ImWchar id, <span class="pl-k">int</span> width, <span class="pl-k">int</span> height, <span class="pl-k">float</span> advance_x, <span class="pl-k">const</span> ImVec2&amp; offset = ImVec2(<span class="pl-c1">0</span>, <span class="pl-c1">0</span>));</td>
      </tr>
      <tr>
        <td id="L2318" class="blob-num js-line-number" data-line-number="2318"></td>
        <td id="LC2318" class="blob-code blob-code-inner js-file-line">    ImFontAtlasCustomRect*      <span class="pl-en">GetCustomRectByIndex</span>(<span class="pl-k">int</span> index) { <span class="pl-c1">IM_ASSERT</span>(<span class="pl-c1">index</span> &gt;= <span class="pl-c1">0</span>); <span class="pl-k">return</span> &amp;CustomRects[<span class="pl-c1">index</span>]; }</td>
      </tr>
      <tr>
        <td id="L2319" class="blob-num js-line-number" data-line-number="2319"></td>
        <td id="LC2319" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2320" class="blob-num js-line-number" data-line-number="2320"></td>
        <td id="LC2320" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L2321" class="blob-num js-line-number" data-line-number="2321"></td>
        <td id="LC2321" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">CalcCustomRectUV</span>(<span class="pl-k">const</span> ImFontAtlasCustomRect* rect, ImVec2* out_uv_min, ImVec2* out_uv_max) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L2322" class="blob-num js-line-number" data-line-number="2322"></td>
        <td id="LC2322" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>              <span class="pl-en">GetMouseCursorTexData</span>(ImGuiMouseCursor cursor, ImVec2* out_offset, ImVec2* out_size, ImVec2 out_uv_border[<span class="pl-c1">2</span>], ImVec2 out_uv_fill[<span class="pl-c1">2</span>]);</td>
      </tr>
      <tr>
        <td id="L2323" class="blob-num js-line-number" data-line-number="2323"></td>
        <td id="LC2323" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2324" class="blob-num js-line-number" data-line-number="2324"></td>
        <td id="LC2324" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>-------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2325" class="blob-num js-line-number" data-line-number="2325"></td>
        <td id="LC2325" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Members</span></td>
      </tr>
      <tr>
        <td id="L2326" class="blob-num js-line-number" data-line-number="2326"></td>
        <td id="LC2326" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span>-------------------------------------------</span></td>
      </tr>
      <tr>
        <td id="L2327" class="blob-num js-line-number" data-line-number="2327"></td>
        <td id="LC2327" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2328" class="blob-num js-line-number" data-line-number="2328"></td>
        <td id="LC2328" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>                        Locked;             <span class="pl-c"><span class="pl-c">//</span> Marked as Locked by ImGui::NewFrame() so attempt to modify the atlas will assert.</span></td>
      </tr>
      <tr>
        <td id="L2329" class="blob-num js-line-number" data-line-number="2329"></td>
        <td id="LC2329" class="blob-code blob-code-inner js-file-line">    ImFontAtlasFlags            Flags;              <span class="pl-c"><span class="pl-c">//</span> Build flags (see ImFontAtlasFlags_)</span></td>
      </tr>
      <tr>
        <td id="L2330" class="blob-num js-line-number" data-line-number="2330"></td>
        <td id="LC2330" class="blob-code blob-code-inner js-file-line">    ImTextureID                 TexID;              <span class="pl-c"><span class="pl-c">//</span> User data to refer to the texture once it has been uploaded to user&#39;s graphic systems. It is passed back to you during rendering via the ImDrawCmd structure.</span></td>
      </tr>
      <tr>
        <td id="L2331" class="blob-num js-line-number" data-line-number="2331"></td>
        <td id="LC2331" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                         TexDesiredWidth;    <span class="pl-c"><span class="pl-c">//</span> Texture width desired by user before Build(). Must be a power-of-two. If have many glyphs your graphics API have texture size restrictions you may want to increase texture width to decrease height.</span></td>
      </tr>
      <tr>
        <td id="L2332" class="blob-num js-line-number" data-line-number="2332"></td>
        <td id="LC2332" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                         TexGlyphPadding;    <span class="pl-c"><span class="pl-c">//</span> Padding between glyphs within texture in pixels. Defaults to 1. If your rendering method doesn&#39;t rely on bilinear filtering you may set this to 0.</span></td>
      </tr>
      <tr>
        <td id="L2333" class="blob-num js-line-number" data-line-number="2333"></td>
        <td id="LC2333" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2334" class="blob-num js-line-number" data-line-number="2334"></td>
        <td id="LC2334" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal]</span></td>
      </tr>
      <tr>
        <td id="L2335" class="blob-num js-line-number" data-line-number="2335"></td>
        <td id="LC2335" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> NB: Access texture data via GetTexData*() calls! Which will setup a default font for you.</span></td>
      </tr>
      <tr>
        <td id="L2336" class="blob-num js-line-number" data-line-number="2336"></td>
        <td id="LC2336" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">char</span>*              TexPixelsAlpha8;    <span class="pl-c"><span class="pl-c">//</span> 1 component per pixel, each component is unsigned 8-bit. Total size = TexWidth * TexHeight</span></td>
      </tr>
      <tr>
        <td id="L2337" class="blob-num js-line-number" data-line-number="2337"></td>
        <td id="LC2337" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">unsigned</span> <span class="pl-k">int</span>*               TexPixelsRGBA32;    <span class="pl-c"><span class="pl-c">//</span> 4 component per pixel, each component is unsigned 8-bit. Total size = TexWidth * TexHeight * 4</span></td>
      </tr>
      <tr>
        <td id="L2338" class="blob-num js-line-number" data-line-number="2338"></td>
        <td id="LC2338" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                         TexWidth;           <span class="pl-c"><span class="pl-c">//</span> Texture width calculated during Build().</span></td>
      </tr>
      <tr>
        <td id="L2339" class="blob-num js-line-number" data-line-number="2339"></td>
        <td id="LC2339" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                         TexHeight;          <span class="pl-c"><span class="pl-c">//</span> Texture height calculated during Build().</span></td>
      </tr>
      <tr>
        <td id="L2340" class="blob-num js-line-number" data-line-number="2340"></td>
        <td id="LC2340" class="blob-code blob-code-inner js-file-line">    ImVec2                      TexUvScale;         <span class="pl-c"><span class="pl-c">//</span> = (1.0f/TexWidth, 1.0f/TexHeight)</span></td>
      </tr>
      <tr>
        <td id="L2341" class="blob-num js-line-number" data-line-number="2341"></td>
        <td id="LC2341" class="blob-code blob-code-inner js-file-line">    ImVec2                      TexUvWhitePixel;    <span class="pl-c"><span class="pl-c">//</span> Texture coordinates to a white pixel</span></td>
      </tr>
      <tr>
        <td id="L2342" class="blob-num js-line-number" data-line-number="2342"></td>
        <td id="LC2342" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImFont*&gt;           Fonts;              <span class="pl-c"><span class="pl-c">//</span> Hold all the fonts returned by AddFont*. Fonts[0] is the default font upon calling ImGui::NewFrame(), use ImGui::PushFont()/PopFont() to change the current font.</span></td>
      </tr>
      <tr>
        <td id="L2343" class="blob-num js-line-number" data-line-number="2343"></td>
        <td id="LC2343" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImFontAtlasCustomRect&gt; CustomRects;    <span class="pl-c"><span class="pl-c">//</span> Rectangles for packing custom texture data into the atlas.</span></td>
      </tr>
      <tr>
        <td id="L2344" class="blob-num js-line-number" data-line-number="2344"></td>
        <td id="LC2344" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImFontConfig&gt;      ConfigData;         <span class="pl-c"><span class="pl-c">//</span> Configuration data</span></td>
      </tr>
      <tr>
        <td id="L2345" class="blob-num js-line-number" data-line-number="2345"></td>
        <td id="LC2345" class="blob-code blob-code-inner js-file-line">    ImVec4                      TexUvLines[IM_DRAWLIST_TEX_LINES_WIDTH_MAX + <span class="pl-c1">1</span>];  <span class="pl-c"><span class="pl-c">//</span> UVs for baked anti-aliased lines</span></td>
      </tr>
      <tr>
        <td id="L2346" class="blob-num js-line-number" data-line-number="2346"></td>
        <td id="LC2346" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2347" class="blob-num js-line-number" data-line-number="2347"></td>
        <td id="LC2347" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal] Packing data</span></td>
      </tr>
      <tr>
        <td id="L2348" class="blob-num js-line-number" data-line-number="2348"></td>
        <td id="LC2348" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                         PackIdMouseCursors; <span class="pl-c"><span class="pl-c">//</span> Custom texture rectangle ID for white pixel and mouse cursors</span></td>
      </tr>
      <tr>
        <td id="L2349" class="blob-num js-line-number" data-line-number="2349"></td>
        <td id="LC2349" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                         PackIdLines;        <span class="pl-c"><span class="pl-c">//</span> Custom texture rectangle ID for baked anti-aliased lines</span></td>
      </tr>
      <tr>
        <td id="L2350" class="blob-num js-line-number" data-line-number="2350"></td>
        <td id="LC2350" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2351" class="blob-num js-line-number" data-line-number="2351"></td>
        <td id="LC2351" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifndef</span> IMGUI_DISABLE_OBSOLETE_FUNCTIONS</td>
      </tr>
      <tr>
        <td id="L2352" class="blob-num js-line-number" data-line-number="2352"></td>
        <td id="LC2352" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">typedef</span> ImFontAtlasCustomRect    CustomRect;         <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.72+</span></td>
      </tr>
      <tr>
        <td id="L2353" class="blob-num js-line-number" data-line-number="2353"></td>
        <td id="LC2353" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">typedef</span> ImFontGlyphRangesBuilder GlyphRangesBuilder; <span class="pl-c"><span class="pl-c">//</span> OBSOLETED in 1.67+</span></td>
      </tr>
      <tr>
        <td id="L2354" class="blob-num js-line-number" data-line-number="2354"></td>
        <td id="LC2354" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2355" class="blob-num js-line-number" data-line-number="2355"></td>
        <td id="LC2355" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2356" class="blob-num js-line-number" data-line-number="2356"></td>
        <td id="LC2356" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2357" class="blob-num js-line-number" data-line-number="2357"></td>
        <td id="LC2357" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Font runtime data and rendering</span></td>
      </tr>
      <tr>
        <td id="L2358" class="blob-num js-line-number" data-line-number="2358"></td>
        <td id="LC2358" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> ImFontAtlas automatically loads a default embedded font for you when you call GetTexDataAsAlpha8() or GetTexDataAsRGBA32().</span></td>
      </tr>
      <tr>
        <td id="L2359" class="blob-num js-line-number" data-line-number="2359"></td>
        <td id="LC2359" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> <span class="pl-en">ImFont</span></td>
      </tr>
      <tr>
        <td id="L2360" class="blob-num js-line-number" data-line-number="2360"></td>
        <td id="LC2360" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2361" class="blob-num js-line-number" data-line-number="2361"></td>
        <td id="LC2361" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Members: Hot ~20/24 bytes (for CalcTextSize)</span></td>
      </tr>
      <tr>
        <td id="L2362" class="blob-num js-line-number" data-line-number="2362"></td>
        <td id="LC2362" class="blob-code blob-code-inner js-file-line">    ImVector&lt;<span class="pl-k">float</span>&gt;             IndexAdvanceX;      <span class="pl-c"><span class="pl-c">//</span> 12-16 // out //            // Sparse. Glyphs-&gt;AdvanceX in a directly indexable way (cache-friendly for CalcTextSize functions which only this this info, and are often bottleneck in large UI).</span></td>
      </tr>
      <tr>
        <td id="L2363" class="blob-num js-line-number" data-line-number="2363"></td>
        <td id="LC2363" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>                       FallbackAdvanceX;   <span class="pl-c"><span class="pl-c">//</span> 4     // out // = FallbackGlyph-&gt;AdvanceX</span></td>
      </tr>
      <tr>
        <td id="L2364" class="blob-num js-line-number" data-line-number="2364"></td>
        <td id="LC2364" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>                       FontSize;           <span class="pl-c"><span class="pl-c">//</span> 4     // in  //            // Height of characters/line, set during loading (don&#39;t change after loading)</span></td>
      </tr>
      <tr>
        <td id="L2365" class="blob-num js-line-number" data-line-number="2365"></td>
        <td id="LC2365" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2366" class="blob-num js-line-number" data-line-number="2366"></td>
        <td id="LC2366" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Members: Hot ~36/48 bytes (for CalcTextSize + render loop)</span></td>
      </tr>
      <tr>
        <td id="L2367" class="blob-num js-line-number" data-line-number="2367"></td>
        <td id="LC2367" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImWchar&gt;           IndexLookup;        <span class="pl-c"><span class="pl-c">//</span> 12-16 // out //            // Sparse. Index glyphs by Unicode code-point.</span></td>
      </tr>
      <tr>
        <td id="L2368" class="blob-num js-line-number" data-line-number="2368"></td>
        <td id="LC2368" class="blob-code blob-code-inner js-file-line">    ImVector&lt;ImFontGlyph&gt;       Glyphs;             <span class="pl-c"><span class="pl-c">//</span> 12-16 // out //            // All glyphs.</span></td>
      </tr>
      <tr>
        <td id="L2369" class="blob-num js-line-number" data-line-number="2369"></td>
        <td id="LC2369" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> ImFontGlyph*          FallbackGlyph;      <span class="pl-c"><span class="pl-c">//</span> 4-8   // out // = FindGlyph(FontFallbackChar)</span></td>
      </tr>
      <tr>
        <td id="L2370" class="blob-num js-line-number" data-line-number="2370"></td>
        <td id="LC2370" class="blob-code blob-code-inner js-file-line">    ImVec2                      DisplayOffset;      <span class="pl-c"><span class="pl-c">//</span> 8     // in  // = (0,0)    // Offset font rendering by xx pixels</span></td>
      </tr>
      <tr>
        <td id="L2371" class="blob-num js-line-number" data-line-number="2371"></td>
        <td id="LC2371" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2372" class="blob-num js-line-number" data-line-number="2372"></td>
        <td id="LC2372" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Members: Cold ~32/40 bytes</span></td>
      </tr>
      <tr>
        <td id="L2373" class="blob-num js-line-number" data-line-number="2373"></td>
        <td id="LC2373" class="blob-code blob-code-inner js-file-line">    ImFontAtlas*                ContainerAtlas;     <span class="pl-c"><span class="pl-c">//</span> 4-8   // out //            // What we has been loaded into</span></td>
      </tr>
      <tr>
        <td id="L2374" class="blob-num js-line-number" data-line-number="2374"></td>
        <td id="LC2374" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> ImFontConfig*         ConfigData;         <span class="pl-c"><span class="pl-c">//</span> 4-8   // in  //            // Pointer within ContainerAtlas-&gt;ConfigData</span></td>
      </tr>
      <tr>
        <td id="L2375" class="blob-num js-line-number" data-line-number="2375"></td>
        <td id="LC2375" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">short</span>                       ConfigDataCount;    <span class="pl-c"><span class="pl-c">//</span> 2     // in  // ~ 1        // Number of ImFontConfig involved in creating this font. Bigger than 1 when merging multiple font sources into one ImFont.</span></td>
      </tr>
      <tr>
        <td id="L2376" class="blob-num js-line-number" data-line-number="2376"></td>
        <td id="LC2376" class="blob-code blob-code-inner js-file-line">    ImWchar                     FallbackChar;       <span class="pl-c"><span class="pl-c">//</span> 2     // in  // = &#39;?&#39;      // Replacement character if a glyph isn&#39;t found. Only set via SetFallbackChar()</span></td>
      </tr>
      <tr>
        <td id="L2377" class="blob-num js-line-number" data-line-number="2377"></td>
        <td id="LC2377" class="blob-code blob-code-inner js-file-line">    ImWchar                     EllipsisChar;       <span class="pl-c"><span class="pl-c">//</span> 2     // out // = -1       // Character used for ellipsis rendering.</span></td>
      </tr>
      <tr>
        <td id="L2378" class="blob-num js-line-number" data-line-number="2378"></td>
        <td id="LC2378" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>                        DirtyLookupTables;  <span class="pl-c"><span class="pl-c">//</span> 1     // out //</span></td>
      </tr>
      <tr>
        <td id="L2379" class="blob-num js-line-number" data-line-number="2379"></td>
        <td id="LC2379" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>                       Scale;              <span class="pl-c"><span class="pl-c">//</span> 4     // in  // = 1.f      // Base font scale, multiplied by the per-window font scale which you can adjust with SetWindowFontScale()</span></td>
      </tr>
      <tr>
        <td id="L2380" class="blob-num js-line-number" data-line-number="2380"></td>
        <td id="LC2380" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>                       Ascent, Descent;    <span class="pl-c"><span class="pl-c">//</span> 4+4   // out //            // Ascent: distance from top to bottom of e.g. &#39;A&#39; [0..FontSize]</span></td>
      </tr>
      <tr>
        <td id="L2381" class="blob-num js-line-number" data-line-number="2381"></td>
        <td id="LC2381" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">int</span>                         MetricsTotalSurface;<span class="pl-c"><span class="pl-c">//</span> 4     // out //            // Total surface in pixels to get an idea of the font rasterization/texture cost (not exact, we approximate the cost of padding between glyphs)</span></td>
      </tr>
      <tr>
        <td id="L2382" class="blob-num js-line-number" data-line-number="2382"></td>
        <td id="LC2382" class="blob-code blob-code-inner js-file-line">    ImU8                        Used4kPagesMap[(IM_UNICODE_CODEPOINT_MAX+<span class="pl-c1">1</span>)/<span class="pl-c1">4096</span>/<span class="pl-c1">8</span>]; <span class="pl-c"><span class="pl-c">//</span> 2 bytes if ImWchar=ImWchar16, 34 bytes if ImWchar==ImWchar32. Store 1-bit for each block of 4K codepoints that has one active glyph. This is mainly used to facilitate iterations across all used codepoints.</span></td>
      </tr>
      <tr>
        <td id="L2383" class="blob-num js-line-number" data-line-number="2383"></td>
        <td id="LC2383" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2384" class="blob-num js-line-number" data-line-number="2384"></td>
        <td id="LC2384" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> Methods</span></td>
      </tr>
      <tr>
        <td id="L2385" class="blob-num js-line-number" data-line-number="2385"></td>
        <td id="LC2385" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-en">ImFont</span>();</td>
      </tr>
      <tr>
        <td id="L2386" class="blob-num js-line-number" data-line-number="2386"></td>
        <td id="LC2386" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-en">~ImFont</span>();</td>
      </tr>
      <tr>
        <td id="L2387" class="blob-num js-line-number" data-line-number="2387"></td>
        <td id="LC2387" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImFontGlyph*<span class="pl-en">FindGlyph</span>(ImWchar c) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L2388" class="blob-num js-line-number" data-line-number="2388"></td>
        <td id="LC2388" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> ImFontGlyph*<span class="pl-en">FindGlyphNoFallback</span>(ImWchar c) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L2389" class="blob-num js-line-number" data-line-number="2389"></td>
        <td id="LC2389" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">float</span>                       <span class="pl-en">GetCharAdvance</span>(ImWchar c) <span class="pl-k">const</span>     { <span class="pl-k">return</span> ((<span class="pl-k">int</span>)c &lt; IndexAdvanceX.<span class="pl-smi">Size</span>) ? IndexAdvanceX[(<span class="pl-k">int</span>)c] : FallbackAdvanceX; }</td>
      </tr>
      <tr>
        <td id="L2390" class="blob-num js-line-number" data-line-number="2390"></td>
        <td id="LC2390" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">bool</span>                        <span class="pl-en">IsLoaded</span>() <span class="pl-k">const</span>                    { <span class="pl-k">return</span> ContainerAtlas != <span class="pl-c1">NULL</span>; }</td>
      </tr>
      <tr>
        <td id="L2391" class="blob-num js-line-number" data-line-number="2391"></td>
        <td id="LC2391" class="blob-code blob-code-inner js-file-line">    <span class="pl-k">const</span> <span class="pl-k">char</span>*                 <span class="pl-en">GetDebugName</span>() <span class="pl-k">const</span>                { <span class="pl-k">return</span> ConfigData ? ConfigData-&gt;<span class="pl-smi">Name</span> : <span class="pl-s"><span class="pl-pds">&quot;</span>&lt;unknown&gt;<span class="pl-pds">&quot;</span></span>; }</td>
      </tr>
      <tr>
        <td id="L2392" class="blob-num js-line-number" data-line-number="2392"></td>
        <td id="LC2392" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2393" class="blob-num js-line-number" data-line-number="2393"></td>
        <td id="LC2393" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> &#39;max_width&#39; stops rendering after a certain width (could be turned into a 2d size). FLT_MAX to disable.</span></td>
      </tr>
      <tr>
        <td id="L2394" class="blob-num js-line-number" data-line-number="2394"></td>
        <td id="LC2394" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> &#39;wrap_width&#39; enable automatic word-wrapping across multiple lines to fit into given width. 0.0f to disable.</span></td>
      </tr>
      <tr>
        <td id="L2395" class="blob-num js-line-number" data-line-number="2395"></td>
        <td id="LC2395" class="blob-code blob-code-inner js-file-line">    IMGUI_API ImVec2            <span class="pl-en">CalcTextSizeA</span>(<span class="pl-k">float</span> size, <span class="pl-k">float</span> max_width, <span class="pl-k">float</span> wrap_width, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_begin, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_end = <span class="pl-c1">NULL</span>, <span class="pl-k">const</span> <span class="pl-k">char</span>** remaining = <span class="pl-c1">NULL</span>) <span class="pl-k">const</span>; <span class="pl-c"><span class="pl-c">//</span> utf8</span></td>
      </tr>
      <tr>
        <td id="L2396" class="blob-num js-line-number" data-line-number="2396"></td>
        <td id="LC2396" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">const</span> <span class="pl-k">char</span>*       <span class="pl-en">CalcWordWrapPositionA</span>(<span class="pl-k">float</span> scale, <span class="pl-k">const</span> <span class="pl-k">char</span>* text, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_end, <span class="pl-k">float</span> wrap_width) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L2397" class="blob-num js-line-number" data-line-number="2397"></td>
        <td id="LC2397" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">RenderChar</span>(ImDrawList* draw_list, <span class="pl-k">float</span> size, ImVec2 pos, ImU32 col, ImWchar c) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L2398" class="blob-num js-line-number" data-line-number="2398"></td>
        <td id="LC2398" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">RenderText</span>(ImDrawList* draw_list, <span class="pl-k">float</span> size, ImVec2 pos, ImU32 col, <span class="pl-k">const</span> ImVec4&amp; clip_rect, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_begin, <span class="pl-k">const</span> <span class="pl-k">char</span>* text_end, <span class="pl-k">float</span> wrap_width = <span class="pl-c1">0</span>.<span class="pl-c1">0f</span>, <span class="pl-k">bool</span> cpu_fine_clip = <span class="pl-c1">false</span>) <span class="pl-k">const</span>;</td>
      </tr>
      <tr>
        <td id="L2399" class="blob-num js-line-number" data-line-number="2399"></td>
        <td id="LC2399" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2400" class="blob-num js-line-number" data-line-number="2400"></td>
        <td id="LC2400" class="blob-code blob-code-inner js-file-line">    <span class="pl-c"><span class="pl-c">//</span> [Internal] Don&#39;t use!</span></td>
      </tr>
      <tr>
        <td id="L2401" class="blob-num js-line-number" data-line-number="2401"></td>
        <td id="LC2401" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">BuildLookupTable</span>();</td>
      </tr>
      <tr>
        <td id="L2402" class="blob-num js-line-number" data-line-number="2402"></td>
        <td id="LC2402" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">ClearOutputData</span>();</td>
      </tr>
      <tr>
        <td id="L2403" class="blob-num js-line-number" data-line-number="2403"></td>
        <td id="LC2403" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">GrowIndex</span>(<span class="pl-k">int</span> new_size);</td>
      </tr>
      <tr>
        <td id="L2404" class="blob-num js-line-number" data-line-number="2404"></td>
        <td id="LC2404" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">AddGlyph</span>(ImFontConfig* src_cfg, ImWchar c, <span class="pl-k">float</span> x0, <span class="pl-k">float</span> y0, <span class="pl-k">float</span> x1, <span class="pl-k">float</span> y1, <span class="pl-k">float</span> u0, <span class="pl-k">float</span> v0, <span class="pl-k">float</span> u1, <span class="pl-k">float</span> v1, <span class="pl-k">float</span> advance_x);</td>
      </tr>
      <tr>
        <td id="L2405" class="blob-num js-line-number" data-line-number="2405"></td>
        <td id="LC2405" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">AddRemapChar</span>(ImWchar dst, ImWchar src, <span class="pl-k">bool</span> overwrite_dst = <span class="pl-c1">true</span>); <span class="pl-c"><span class="pl-c">//</span> Makes &#39;dst&#39; character/glyph points to &#39;src&#39; character/glyph. Currently needs to be called AFTER fonts have been built.</span></td>
      </tr>
      <tr>
        <td id="L2406" class="blob-num js-line-number" data-line-number="2406"></td>
        <td id="LC2406" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">SetGlyphVisible</span>(ImWchar c, <span class="pl-k">bool</span> visible);</td>
      </tr>
      <tr>
        <td id="L2407" class="blob-num js-line-number" data-line-number="2407"></td>
        <td id="LC2407" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">void</span>              <span class="pl-en">SetFallbackChar</span>(ImWchar c);</td>
      </tr>
      <tr>
        <td id="L2408" class="blob-num js-line-number" data-line-number="2408"></td>
        <td id="LC2408" class="blob-code blob-code-inner js-file-line">    IMGUI_API <span class="pl-k">bool</span>              <span class="pl-en">IsGlyphRangeUnused</span>(<span class="pl-k">unsigned</span> <span class="pl-k">int</span> c_begin, <span class="pl-k">unsigned</span> <span class="pl-k">int</span> c_last);</td>
      </tr>
      <tr>
        <td id="L2409" class="blob-num js-line-number" data-line-number="2409"></td>
        <td id="LC2409" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2410" class="blob-num js-line-number" data-line-number="2410"></td>
        <td id="LC2410" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2411" class="blob-num js-line-number" data-line-number="2411"></td>
        <td id="LC2411" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> defined(__clang__)</td>
      </tr>
      <tr>
        <td id="L2412" class="blob-num js-line-number" data-line-number="2412"></td>
        <td id="LC2412" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> clang diagnostic pop</td>
      </tr>
      <tr>
        <td id="L2413" class="blob-num js-line-number" data-line-number="2413"></td>
        <td id="LC2413" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">elif</span> defined(__GNUC__)</td>
      </tr>
      <tr>
        <td id="L2414" class="blob-num js-line-number" data-line-number="2414"></td>
        <td id="LC2414" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> GCC diagnostic pop</td>
      </tr>
      <tr>
        <td id="L2415" class="blob-num js-line-number" data-line-number="2415"></td>
        <td id="LC2415" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2416" class="blob-num js-line-number" data-line-number="2416"></td>
        <td id="LC2416" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2417" class="blob-num js-line-number" data-line-number="2417"></td>
        <td id="LC2417" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">//</span> Include imgui_user.h at the end of imgui.h (convenient for user to only explicitly include vanilla imgui.h)</span></td>
      </tr>
      <tr>
        <td id="L2418" class="blob-num js-line-number" data-line-number="2418"></td>
        <td id="LC2418" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> IMGUI_INCLUDE_IMGUI_USER_H</td>
      </tr>
      <tr>
        <td id="L2419" class="blob-num js-line-number" data-line-number="2419"></td>
        <td id="LC2419" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>imgui_user.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L2420" class="blob-num js-line-number" data-line-number="2420"></td>
        <td id="LC2420" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2421" class="blob-num js-line-number" data-line-number="2421"></td>
        <td id="LC2421" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2422" class="blob-num js-line-number" data-line-number="2422"></td>
        <td id="LC2422" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span> <span class="pl-c"><span class="pl-c">//</span> #ifndef IMGUI_DISABLE</span></td>
      </tr>
</table>

  <details class="details-reset details-overlay BlobToolbar position-absolute js-file-line-actions dropdown d-none" aria-hidden="true">
    <summary class="btn-octicon ml-0 px-2 p-0 bg-white border border-gray-dark rounded-1" aria-label="Inline file action toolbar">
      <svg class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="M8 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zM1.5 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zm13 0a1.5 1.5 0 100-3 1.5 1.5 0 000 3z"></path></svg>
    </summary>
    <details-menu>
      <ul class="BlobToolbar-dropdown dropdown-menu dropdown-menu-se mt-2" style="width:185px">
        <li>
          <clipboard-copy role="menuitem" class="dropdown-item" id="js-copy-lines" style="cursor:pointer;">
            Copy lines
          </clipboard-copy>
        </li>
        <li>
          <clipboard-copy role="menuitem" class="dropdown-item" id="js-copy-permalink" style="cursor:pointer;">
            Copy permalink
          </clipboard-copy>
        </li>
        <li><a class="dropdown-item js-update-url-with-hash" id="js-view-git-blame" role="menuitem" href="/ocornut/imgui/blame/0e5b1ea297f9a0764c59ca29810c6b05c39fe6d2/imgui.h">View git blame</a></li>
          <li><a class="dropdown-item" id="js-new-issue" role="menuitem" href="/ocornut/imgui/issues/new">Reference in new issue</a></li>
      </ul>
    </details-menu>
  </details>

  </div>

    </div>

  


  <details class="details-reset details-overlay details-overlay-dark" id="jumpto-line-details-dialog">
    <summary data-hotkey="l" aria-label="Jump to line"></summary>
    <details-dialog class="Box Box--overlay d-flex flex-column anim-fade-in fast linejump" aria-label="Jump to line">
      <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="js-jump-to-line-form Box-body d-flex" action="" accept-charset="UTF-8" method="get">
        <input class="form-control flex-auto mr-3 linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
        <button type="submit" class="btn" data-close-dialog>Go</button>
</form>    </details-dialog>
  </details>




  </div>
</div>

    </main>
  </div>
  

  </div>

        
<div class="footer container-xl width-full p-responsive" role="contentinfo">
  <div class="position-relative d-flex flex-row-reverse flex-lg-row flex-wrap flex-lg-nowrap flex-justify-center flex-lg-justify-between pt-6 pb-2 mt-6 f6 text-gray border-top border-gray-light ">
    <ul class="list-style-none d-flex flex-wrap col-12 col-lg-5 flex-justify-center flex-lg-justify-between mb-2 mb-lg-0">
      <li class="mr-3 mr-lg-0">&copy; 2020 GitHub, Inc.</li>
        <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to terms, text:terms" href="https://github.com/site/terms">Terms</a></li>
        <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to privacy, text:privacy" href="https://github.com/site/privacy">Privacy</a></li>
        <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to security, text:security" href="https://github.com/security">Security</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://githubstatus.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a data-ga-click="Footer, go to help, text:help" href="https://docs.github.com">Help</a></li>

    </ul>

    <a aria-label="Homepage" title="GitHub" class="footer-octicon d-none d-lg-block mx-lg-4" href="https://github.com">
      <svg height="24" class="octicon octicon-mark-github" viewBox="0 0 16 16" version="1.1" width="24" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path></svg>
</a>
   <ul class="list-style-none d-flex flex-wrap col-12 col-lg-5 flex-justify-center flex-lg-justify-between mb-2 mb-lg-0">
        <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to contact, text:contact" href="https://github.com/contact">Contact GitHub</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://github.com/pricing" data-ga-click="Footer, go to Pricing, text:Pricing">Pricing</a></li>
      <li class="mr-3 mr-lg-0"><a href="https://docs.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li class="mr-3 mr-lg-0"><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://github.blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a data-ga-click="Footer, go to about, text:about" href="https://github.com/about">About</a></li>
    </ul>
  </div>
  <div class="d-flex flex-justify-center pb-6">
    <span class="f6 text-gray-light"></span>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.22 1.754a.25.25 0 00-.44 0L1.698 13.132a.25.25 0 00.22.368h12.164a.25.25 0 00.22-.368L8.22 1.754zm-1.763-.707c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0114.082 15H1.918a1.75 1.75 0 01-1.543-2.575L6.457 1.047zM9 11a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.25a.75.75 0 00-1.5 0v2.5a.75.75 0 001.5 0v-2.5z"></path></svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg class="octicon octicon-x" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path></svg>
    </button>
    You can’t perform that action at this time.
  </div>


    <script crossorigin="anonymous" async="async" integrity="sha512-bn/3rKJzBl2H64K38R8KaVcT26vKK7BJQC59lwYc+9fjlHzmy0fwh+hzBtsgTdhIi13dxjzNKWhdSN8WTM9qUw==" type="application/javascript" id="js-conditional-compat" data-src="https://github.githubassets.com/assets/compat-bootstrap-6e7ff7ac.js"></script>
    <script crossorigin="anonymous" integrity="sha512-CxjaMepCmi+z0LTeztU2S8qGD25LyHD6j9t0RSPevy63trFWJVwUM6ipAVLgtpMBBgZ53wq8JPkSeQ6ruaZL2w==" type="application/javascript" src="https://github.githubassets.com/assets/environment-bootstrap-0b18da31.js"></script>
    <script crossorigin="anonymous" async="async" integrity="sha512-fWpoHuxvZSXfbBUpB9xZrMeOn1OBBnQ3RO1Qpyo5hPH/+E/Wrics+UeKW6FaR8Uc6EkKtND0/eKQUZNhWOZG9w==" type="application/javascript" src="https://github.githubassets.com/assets/vendor-7d6a681e.js"></script>
    <script crossorigin="anonymous" async="async" integrity="sha512-ZNZwN+9e4NAzdT0+KmFelwm6CZc8nDMfNKM/PQdTSfyknN/4v+s1Yl6WkFIs32Hy/31PO52krX9IfdH6lodyfg==" type="application/javascript" src="https://github.githubassets.com/assets/frameworks-64d67037.js"></script>
    
    <script crossorigin="anonymous" async="async" integrity="sha512-/bFYBugcQCjAwrrYqM4EqQe193JblMnS606egBmNbV/iUH7ZQEfnljZbIj34n6SWmayLDvv98mrfdMu81hIAvA==" type="application/javascript" src="https://github.githubassets.com/assets/behaviors-bootstrap-fdb15806.js"></script>
    
      <script crossorigin="anonymous" async="async" integrity="sha512-TjmDUfspgN28WRWfc01tOL0BFS8pI/TAi8TQ665TcA3jG1C3QgfFu0YKa32Z03rlEL8dukbsy+amwBzgGyjESQ==" type="application/javascript" data-module-id="./Sortable.js" data-src="https://github.githubassets.com/assets/Sortable-4e398351.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-IfMEGeu/93qN1/7hW9kHrjLjoz8sU8yHJMOvWmrz6R3Wy7rLelm8F145OPxwF854yGhHt9anAe9BIZMZgLivaA==" type="application/javascript" data-module-id="./drag-drop.js" data-src="https://github.githubassets.com/assets/drag-drop-21f30419.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-iLuC2weaJqL9mYAud2WDWjhd8cJe8dXVxw2KhCH2Rnj6WJvTzlZRmvTtL09wNWX6nRze/TDaQ7gq7BFLchaDYg==" type="application/javascript" data-module-id="./image-crop-element-loader.js" data-src="https://github.githubassets.com/assets/image-crop-element-loader-88bb82db.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-gjvgjSSs1N35phuQcXJQ0945NAuZd2QAJcB2xfLgrd079b9eLXE7KHBDliiNyTG7kG4O3MFDBWlwP9Ye6hBO2g==" type="application/javascript" data-module-id="./jump-to.js" data-src="https://github.githubassets.com/assets/jump-to-823be08d.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-/qu1ZgsxqvzkIPvkOxFe7ioHOms48uHPkflrrH6SHCQ/XNfAydkj2fS7w9yCZR3DDFja9941EMR1+fy4NVBm7g==" type="application/javascript" data-module-id="./profile-pins-element.js" data-src="https://github.githubassets.com/assets/profile-pins-element-feabb566.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-qECv/jhsvLFN77eGNu0cjMR2+zvAlLyhQVTnmayJc5OLZoxMLjQZxZW1hK/dhcYro6Wec/aiF21HYf2N5OilYQ==" type="application/javascript" data-module-id="./randomColor.js" data-src="https://github.githubassets.com/assets/randomColor-a840affe.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-YCODMOpm6dIHRZy9o7UJlwcXMjGIZZzzdwq2JZU6R2VIXZMHJHq/j5KmCFTf+wD+swamrXmse1TPjkdZo4e2RQ==" type="application/javascript" data-module-id="./tweetsodium.js" data-src="https://github.githubassets.com/assets/tweetsodium-60238330.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-PSXN0IjR67dH0v31y2W1LRt8Eb/BaBT+IRe/dy8ffaH6I3zfdAOoMpr80upcJSI0yKceig7dBmBFa+z6rWqKJw==" type="application/javascript" data-module-id="./user-status-submit.js" data-src="https://github.githubassets.com/assets/user-status-submit-3d25cdd0.js"></script>
    
    <script crossorigin="anonymous" async="async" integrity="sha512-Wme9VMxkOyou2RzQdvG+Ay0KyV0Gf7gM90QSmurM/t/yeold0ko7jyoFfnKQ7nu+NuuoTj7g/Ty4/azctgMeqA==" type="application/javascript" src="https://github.githubassets.com/assets/github-bootstrap-5a67bd54.js"></script>
  <div class="js-stale-session-flash flash flash-warn flash-banner" hidden
    >
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.22 1.754a.25.25 0 00-.44 0L1.698 13.132a.25.25 0 00.22.368h12.164a.25.25 0 00.22-.368L8.22 1.754zm-1.763-.707c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0114.082 15H1.918a1.75 1.75 0 01-1.543-2.575L6.457 1.047zM9 11a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.25a.75.75 0 00-1.5 0v2.5a.75.75 0 001.5 0v-2.5z"></path></svg>
    <span class="js-stale-session-flash-signed-in" hidden>You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="js-stale-session-flash-signed-out" hidden>You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <template id="site-details-dialog">
  <details class="details-reset details-overlay details-overlay-dark lh-default text-gray-dark hx_rsm" open>
    <summary role="button" aria-label="Close dialog"></summary>
    <details-dialog class="Box Box--overlay d-flex flex-column anim-fade-in fast hx_rsm-dialog hx_rsm-modal">
      <button class="Box-btn-octicon m-0 btn-octicon position-absolute right-0 top-0" type="button" aria-label="Close dialog" data-close-dialog>
        <svg class="octicon octicon-x" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path></svg>
      </button>
      <div class="octocat-spinner my-6 js-details-dialog-spinner"></div>
    </details-dialog>
  </details>
</template>

  <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;" tabindex="0">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box box-shadow-large" style="width:360px;">
  </div>
</div>


  </body>
</html>

