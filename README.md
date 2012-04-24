Project Log for Drupal
======================

Introduction
------------
Project Log is a Drupal module that lets you track work progress on project
tasks where those tasks are clearly defined ahead of time and you are logging
your progress to completion. This module is a shortcut to creating the content
types and views required to create this type of log, with time tracking and
blog-style work entry tracking plus helpful views to create Latest News or
microblog widgets, project summaries, and detail views with galleries.

Please note: this is not a replacement for something like Basecamp or JIRA. If
you are managing a software development workflow or task list with a defined
workflow there are better modules for that task. This module was designed to
track PHYSICAL tasks, where you need a diary-style recording of completed work
with photos to document that work. Some examples of ideal use cases include:

  * Aircraft construction projects
  * Home renovation
  * Car / boat restoration

Installation
------------
This is not a Drupal.org project so you cannot use Drush to download it (sorry,
read below for why). To get project_log for your site, do the following instead:

  cd sites/all/modules
  git clone git://github.com/crrobinson14/project_log.git
  drush en project_log

If you do not have Git installed on your system, you can do this instead:

  cd sites/all/modules
  wget https://github.com/crrobinson14/project_log/zipball/master -O project_log.zip
  unzip project_log.zip
  rm project_log.zip
  drush en project_log

If you do not have SSH access to the server you are installing the module on,
just use the https://github.com/crrobinson14/project_log/zipball/master link
to download the project, and install it via FTP as you would any other module.

Configuration
-------------

To create a log, create a new node of type Project Log. Then create one Project
Log Section for each category of work that needs to be completed. A Section is
a group for tasks. For example, in a Cozy MKIV project, these would be the
Chapters from the construction manual. (Note that modules such as Node Reference
Create are very helpful when working with node relationships and can save a lot
of time here.) Finally, edit each Section and create the tasks that must be
completed for that Section.

There are a variety of options for how you may theme/display this data,
including Views, Panels, Panelizer, Display Suite, standard Drupal template
theming techniques, etc. Discussing those is beyond the scope of this README,
but for reference, here is how the author's site (http://www.lucubration.com/)
works:

  1. Data is entered in a project_log as project_log_sections,
     project_log_tasks, and project_log_work entries.

  2. Three views provide display facilities for these items:

      a. A Latest News view shows a teaser-style rendering of the most
         recently posted work entries, with a thumbnail of the first
         image attached to each.

      b. A Project Summary view provides a listing of all sections, in order,
         with summary information for those sections

TO BE COMPLETED

Why GitHub?
-----------

You might be wondering why this project is on GitHub, not drupal.org/projects.
There are two reasons for this. First, I find that GitHub is faster and more
accessible for projects that are just starting out, or that value community
contribution (Drupal's Git facilities are better than CVS/SVN, but I believe
the lack of fork/pull-request functionality discourages community contribution).

Second, creating a project on Drupal takes a LONG time. Just finding somebody
to do code review before a project can come out of Sandbox mode can take
months - my last module, Schemr, took 11 weeks before it got its first review,
and slow progress after that.
