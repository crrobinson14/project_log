Project Log for Drupal
----------------------

Project Log was designed to let you track work progress on project tasks where
those tasks are clearly defined ahead of time and you are logging your progress
to completion. This module is a shortcut to creating the content types and
views required to create this type of log, with time tracking and blog-style
work entry tracking plus helpful views to create Latest News / microblog
widgets, project summaries, and detail views with galleries.

Please note: this is not a replacement for something like Basecamp or JIRA. If
you are managing a software development workflow or task list with a defined
workflow there are better modules for that task. This module was designed to
track PHYSICAL tasks, where you need a diary-style recording of completed work
with photos to document that work. Some examples of ideal use cases include:

  * Aircraft construction projects
  * Home renovation
  * Car / boat restoration

To create a log, create a new node of type Project Log. Then create one Project
Log Section for each category of work that needs to be completed. A Section is
a group for tasks. For example, in a Cozy MKIV project, these would be the
Chapters from the construction manual. (Note that modules such as Node Reference
Create are very helpful when working with node relationships and can save a lot
of time here.) Finally, edit each Section and create the tasks that must be
completed for that Section.

There are a variety of options for how you may theme/display this data, including
Views, Panels, Panelizer, Display Suite, standard Drupal template theming
techniques, etc. Discussing those is beyond the scope of this README, but for
reference, here is how the author's site (http://www.lucubration.com/) works:

  1. Data is entered in a project_log as project_log_sections, _tasks, and _work
     entries.

  2. Three views provide display facilities for these items:

      a. A Latest News view shows a teaser-style rendering of the most
         recently posted work entries, with a thumbnail of the first
         image attached to each.

      b. A Project Summary view provides a listing of all sections, in order,
         with summary information for those sections
