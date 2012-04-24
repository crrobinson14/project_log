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

If you do not have Git installed on your system, or you do not have SSH access
to your server, you can use the "Zip" download link above and install it via
FTP as you would any other Drupal module.

Configuration
-------------
To create a log, follow these steps:

  1. Create a new node of type Project Log.

  2. Create one Project Log Section for each category of work that needs to be
  completed. A Section is a group for tasks. For example, in a Cozy MKIV
  project, these would be the Chapters from the construction manual. (Note that
  modules such as Node Reference Create are very helpful here.)

  3. Edit each Section and create the tasks that must be completed for it.

  4. As you work on your project, create Work Entries for each section. You
  may attach photos and notes to these entries, and use controls on the entries
  to alter the status of the Section (such as to mark it completed).

There are a variety of options for how you may theme/display this data,
including Views, Panels, Panelizer, Display Suite, standard Drupal template
theming techniques, etc. Discussing those is beyond the scope of this README,
but for reference, here is how the author's site (http://www.lucubration.com/)
works:

  1. A Latest News view shows a teaser-style rendering of the most recently
  published work entries, with a thumbnail for each.

  2. A Project Summary view provides a listing of all sections, in order,
  with summary information for those sections

  3. A Project Section view displays the work entries for a section. This is
  managed with a view to give the administrator control over things like
  pagination, sorting, and fields displayed.

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
