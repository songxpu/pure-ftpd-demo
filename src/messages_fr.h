#define MSG_TLS_CIPHER_FAILED "TLS: TLSCipherSuite invalide '%s'"
#define MSG_TIMEOUT "Temps de reponse depasse"
#define MSG_CAPABILITIES "Impossible d'acceder a cette fonctionnalite"
#define MSG_CLIENT_CLOSED_CNX "Le client a ferme la connexion"
#define MSG_CLIENT_READ_ERR "Erreur de lecture sur le client"
#define MSG_CANT_OPEN_CNX "Impossible d'ouvrir la connexion"
#define MSG_CANT_CREATE_DATA_SOCKET "Impossible de creer le socket"
#define MSG_DEBUG_CLIENT_IS "L'adresse du client est"
#define MSG_SYNTAX_ERROR_IP "Erreur de syntaxe dans l'adresse IP"
#define MSG_PORT_SUCCESSFUL "Commande PORT executee"
#define MSG_ONLY_IPV4V6 "Seuls les protocoles IPv4 et IPv6 sont supportes (1,2)"
#define MSG_ONLY_IPV4 "Seul le protocole IPv4 est supporte (1)"
#define MSG_TIMEOUT_PARSER "Temps de reponse depasse - Tapez un peu plus vite la prochaine fois"
#define MSG_LINE_TOO_LONG "Ligne trop longue"
#define MSG_LOG_OVERFLOW "Le client a tente d'effectuer un depassement de capacite"
#define MSG_GOODBYE "Au revoir. Vous avez uploade %llu et downloade %llu Ko."
#define MSG_DEBUG_COMMAND "Commande"
#define MSG_IS_YOUR_CURRENT_LOCATION "est votre position actuelle"
#define MSG_NOT_LOGGED_IN "Vous n'etes pas connecte"
#define MSG_AUTH_UNIMPLEMENTED "Les extensions de securite ne sont pas implementees"
#define MSG_NO_FILE_NAME "Aucun nom de fichier specifie"
#define MSG_NO_DIRECTORY_NAME "Aucun nom de repertoire specifie"
#define MSG_NO_RESTART_POINT "Aucun point de depart specifie"
#define MSG_ABOR_SUCCESS "Comme vous pouvez le constater, ce ABOR a reussit"
#define MSG_MISSING_ARG "Il manque un argument"
#define MSG_GARBAGE_FOUND "Trop de parametres apres la valeur"
#define MSG_VALUE_TOO_LARGE "Valeur trop grande"
#define MSG_IDLE_TIME "Temps d'oisivete mis a %lu secondes"
#define MSG_SITE_HELP "Les commandes SITE suivantes sont reconnues"
#define MSG_BAD_CHMOD "Droits invalides"
#define MSG_UNKNOWN_EXTENSION "est une extension inconnue"
#define MSG_XDBG_OK "commande XDBG acceptee, le niveau de debug est maintenant de %d"
#define MSG_UNKNOWN_COMMAND "Commande inconnue"
#define MSG_TIMEOUT_NOOP "Temps de reponse depasse (aucune action depuis %lu secondes)"
#define MSG_TIMEOUT_DATA "Temps de reponse depasse (aucune donnee depuis %lu secondes)"
#define MSG_SLEEPING "Zzz..."
#define MSG_ALREADY_LOGGED "Vous etes deja loggues"
#define MSG_ANY_PASSWORD "Tous les mots de passe sont acceptes"
#define MSG_ANONYMOUS_LOGGED "Utilisateur anonyme loggue"
#define MSG_ANONYMOUS_LOGGED_VIRTUAL "Utilisateur anonyme loggue sur FTP virtuel"
#define MSG_USER_OK "Utilisateur %s OK. Veuillez taper votre mot de passe"
#define MSG_CANT_DO_TWICE "Impossible dans cette session"
#define MSG_UNABLE_SECURE_ANON "Impossible d'etablir une session FTP anonyme securisee"
#define MSG_BANDWIDTH_RESTRICTED "La bande passante est volontairement restreinte"
#define MSG_NO_PASSWORD_NEEDED "Pas besoin de mot de passe"
#define MSG_NOTRUST "Desole, votre compte est inutilisable"
#define MSG_WHOAREYOU "Qui etes vous ?"
#define MSG_AUTH_FAILED "l'authentification a echouee"
#define MSG_AUTH_TOOMANY "Trop d'echecs d'authentification"
#define MSG_NO_HOMEDIR "Les repertoires utilisateurs sont inaccessibles - Abandon"
#define MSG_NO_HOMEDIR2 "%s n'existe pas, ou est inaccessible"
#define MSG_START_SLASH "Commence en /"
#define MSG_USER_GROUP_ACCESS "L'utilisateur %s a un acces de groupe sur"
#define MSG_FXP_SUPPORT "Ce serveur supporte les transferts FXP"
#define MSG_RATIO "Vous devez respecter un ratio de %u:%u (UL/DL)"
#define MSG_CHROOT_FAILED "Impossible d'etablir une prison chroot() securisee"
#define MSG_CURRENT_DIR_IS "OK. Le repertoire courant est %s"
#define MSG_CURRENT_RESTRICTED_DIR_IS "OK. Le repertoire restreint courant est %s"
#define MSG_IS_NOW_LOGGED_IN "%s est maintenant loggue"
#define MSG_CANT_CHANGE_DIR "Ne peut changer le repertoire en %s"
#define MSG_PATH_TOO_LONG "Chemin trop long"
#define MSG_CANT_PASV "Impossible d'ouvrir une connexion IPv6 avec la commande PASV. Utilisez EPSV s'il vous plait."
#define MSG_CANT_PASSIVE "Impossible d'ouvrir une connexion passive"
#define MSG_PORTS_BUSY "Tous les ports TCP reserves sont occupes"
#define MSG_GETSOCKNAME_DATA "Impossible d'identifier la socket de donnees local"
#define MSG_GETPEERNAME "Impossible d'identifier le socket local"
#define MSG_INVALID_IP "Adresse invalide"
#define MSG_NO_EPSV "Utilisez un client conforme a IPv6 avec le support EPSV"
#define MSG_BAD_PORT "Desole, connexion impossible sur un port < 1024"
#define MSG_NO_FXP "Je n'ouvrirai pas de connexion vers %s (seulement vers %s)"
#define MSG_FXP "Transfert FXP : depuis %s vers %s"
#define MSG_NO_DATA_CONN "Aucune connexion de donnees"
#define MSG_ACCEPT_FAILED "La connexion ne peut etre acceptee"
#define MSG_ACCEPT_SUCCESS "Connexion de donnees acceptee"
#define MSG_CNX_PORT_FAILED "Impossible d'ouvrir une connexion de donnees sur le port %d"
#define MSG_CNX_PORT "Connexion au port %d"
#define MSG_ANON_CANT_MKD "Les utilisateurs anonymes ne sont pas autorises a creer des repertoires"
#define MSG_ANON_CANT_RMD "Les utilisateurs anonymes ne sont pas autorises a supprimer des repertoires"
#define MSG_ANON_CANT_RENAME "Les utilisateurs anonymes ne sont pas autorises a deplacer/renommer les fichiers"
#define MSG_ANON_CANT_CHANGE_PERMS "Les utilisateurs anonymes ne peuvent changer les permissions sur les fichiers"
#define MSG_GLOB_NO_MEMORY "Depassement de memoire pendant le globbing de %s"
#define MSG_PROBABLY_DENIED "(Cela veut certainement dire \"Vous n'avez pas les droits\")"
#define MSG_GLOB_READ_ERROR "Erreur de lecture pendant le globbing de %s"
#define MSG_GLOB_NO_MATCH "Aucune concordance de %s dans %s"
#define MSG_CHMOD_FAILED "Ne peut changer les permissions vers %s"
#define MSG_CHMOD_SUCCESS "Permissions changees pour %s"
#define MSG_CHMOD_TOTAL_FAILURE "Desole, je ne peut changer aucune permission"
#define MSG_ANON_CANT_DELETE "Les utilisateurs anonymes ne sont pas autorises a supprimer des fichiers"
#define MSG_ANON_CANT_OVERWRITE "Les utilisateurs anonymes ne sont pas autorises a ecraser/remplacer des fichiers"
#define MSG_DELE_FAILED "Impossible de detruire %s"
#define MSG_DELE_SUCCESS "%s%s%s%s detruit"
#define MSG_DELE_TOTAL_FAILURE "Aucun fichier detruit"
#define MSG_LOAD_TOO_HIGH \
    "La charge etait de %3.2f quand vous vous etes connecte. nous n'autorisons\n" \
    "pas les downloads par les utilisateurs anonymes quand la charge est si haute.\n" \
    "Les uploads sont toujours autorises."
#define MSG_OPEN_FAILURE "Impossible d'ouvrir %s"
#define MSG_OPEN_FAILURE2 "Impossible d'ouvrir ce fichier"
#define MSG_STAT_FAILURE "Impossible de trouver la taille du fichier"
#define MSG_STAT_FAILURE2 "Impossible de verifier l'existence du fichier"
#define MSG_REST_TOO_LARGE_FOR_FILE "Recuperation a l'offset %lld est trop grand pour le fichier de taille %lld."
#define MSG_REST_RESET "Recuperation du fichier a 0"
#define MSG_NOT_REGULAR_FILE "Je ne peut traiter que les fichiers reguliers"
#define MSG_NOT_MODERATED \
    "Ce fichier a ete uploade par un utilisateur anonyme. Il n'a\n" \
    "pas encore ete modere par les administrateurs pour le download."
#define MSG_RATIO_DENIAL \
    "Le ratio upload/download est de %u:%u .\n" \
    "Vous avez uploade %llu Ko et downloade %llu Ko.\n" \
    "Veuillez uploader quelque chose avant de downloader autre chose."
#define MSG_NO_MORE_TO_DOWNLOAD "Plus rien a downloader"
#define MSG_WINNER "Cet ordinateur est votre ami. Faites lui confiance"
#define MSG_KBYTES_LEFT "%.1f Ko a downloader"
#define MSG_ABORTED "Transfert interrompu"
#define MSG_DATA_WRITE_FAILED "Erreur d'ecriture dans la connexion de donnees"
#define MSG_DATA_READ_FAILED "Erreur de lecture dans la connexion de donnees"
#define MSG_MMAP_FAILED "Ne peut mapper le fichier dans la memoire"
#define MSG_WRITE_FAILED "Erreur lors de l'ecriture dans le fichier"
#define MSG_TRANSFER_RATE_M "%.3f secondes (mesurees ici), %.2f Mo par seconde"
#define MSG_TRANSFER_RATE_K "%.3f secondes (mesurees ici), %.2f Ko par seconde"
#define MSG_TRANSFER_RATE_B "%.3f secondes (mesurees ici), %.2f octets par seconde"
#define MSG_SPACE_FREE_M "%.1f Mo d'espace disque libre"
#define MSG_SPACE_FREE_K "%f Ko d'espace disque libre"
#define MSG_DOWNLOADED "downloade"
#define MSG_REST_NOT_NUMERIC "REST necessite un parametre numerique"
#define MSG_REST_ASCII_STRICT "Le marqueur de reponse doit etre 0 en mode ASCII"
#define MSG_REST_ASCII_WORKAROUND "Recommence a %lld. Mais en mode ASCII"
#define MSG_REST_SUCCESS "Recommence a %lld"
#define MSG_SANITY_DIRECTORY_FAILURE "Nom de repertoire interdit"
#define MSG_SANITY_FILE_FAILURE "Nom de fichier interdit : %s"
#define MSG_MKD_FAILURE "Ne peut creer le repertoire"
#define MSG_MKD_SUCCESS "Repertoire cree"
#define MSG_RMD_FAILURE "Impossible de detruire le repertoire"
#define MSG_RMD_SUCCESS "Repertoire supprime"
#define MSG_TIMESTAMP_FAILURE "Ne peut obtenir de timbre horodateur"
#define MSG_MODE_ERROR "Seuls les modes ASCII et binaires sont supportes"
#define MSG_CREATE_FAILURE "Ne peut creer le fichier"
#define MSG_ABRT_ONLY "ABRT est la seule commande autorisee pendant l'upload"
#define MSG_UPLOAD_PARTIAL "Partiellement uploade"
#define MSG_REMOVED "supprime"
#define MSG_UPLOADED "uploade"
#define MSG_GMTIME_FAILURE "Ne peut recuperer l'heure locale"
#define MSG_TYPE_8BIT_FAILURE "Seuls les bytes de 8 bits sont supportes"
#define MSG_TYPE_UNKNOWN "TYPE inconnu"
#define MSG_TYPE_SUCCESS "TYPE est maintenant"
#define MSG_STRU_FAILURE "Seul F(ile) est supporte"
#define MSG_MODE_FAILURE "Mode S(tream)"
#define MSG_RENAME_ABORT "Abandon de la commande Rename"
#define MSG_RENAME_RNFR_SUCCESS "RNFR accepte - Le fichier existe, pret pour la destination"
#define MSG_FILE_DOESNT_EXIST "Le fichier n'existe pas"
#define MSG_RENAME_ALREADY_THERE "RENAME impossible - Le fichier de destination existe deja"
#define MSG_RENAME_NORNFR "RNFR necessaire avant RNTO"
#define MSG_RENAME_FAILURE "Erreur lors du renommage/deplacement"
#define MSG_RENAME_SUCCESS "fichier renomme/deplace avec succes"
#define MSG_NO_SUPERSERVER "Veuillez lancer Pure-FTPd depuis un super-serveur (comme tcpserver)"
#define MSG_NO_FTP_ACCOUNT "Impossible de trouver le compte 'ftp'"
#define MSG_CONF_ERR "Erreur de configuration"
#define MSG_NO_VIRTUAL_FILE "Impossible de trouver le fichier des utilisateurs virtuels"
#define MSG_ILLEGAL_THROTTLING "valeur illegale pour la limitation de bande passante"
#define MSG_ILLEGAL_TRUSTED_GID "gid de confiance invalide pour chroot"
#define MSG_ILLEGAL_USER_LIMIT "Limitation utilisateur invalide"
#define MSG_ILLEGAL_FACILITY "Erreur dans le nom de l'option"
#define MSG_ILLEGAL_CONFIG_FILE_LDAP "Fichier de configuration LDAP invalide"
#define MSG_ILLEGAL_LOAD_LIMIT "Limitation de charge invalide"
#define MSG_ILLEGAL_PORTS_RANGE "Liste de ports invalide"
#define MSG_ILLEGAL_LS_LIMITS "Limitations de 'ls' invalides"
#define MSG_ILLEGAL_FORCE_PASSIVE "IP forcee illegale pour les connexions passives"
#define MSG_ILLEGAL_RATIO "Ratio d'upload/download invalide"
#define MSG_ILLEGAL_UID_LIMIT "Limitation d'UID invalide"
#define MSG_ILLEGAL_OPTION "Option de la ligne de commande invalide"
#define MSG_LDAP_MISSING_BASE "LDAPBaseDN manquant dans le fichier de configuration LDAP"
#define MSG_LDAP_WRONG_PARMS "Parametre LDAP invalide"
#define MSG_NEW_CONNECTION "Nouvelle connexion de %s"
#define MSG_WELCOME_TO "Bienvenue sur"
#define MSG_MAX_USERS "%lu utilisateurs (le maximum) sont deja connectes, desole"
#define MSG_NB_USERS "Vous etes l'utilisateur %u sur les %u autorises."
#define MSG_WELCOME_TIME "L'heure locale est %02d:%02d. Port du serveur : %u."
#define MSG_ANONYMOUS_FTP_ONLY "Seules les connexions anonymes sont acceptees"
#define MSG_RATIOS_EVERYONE "LES RATIOS SONT ACTIVES POUR TOUS LES UTILISATEURS :"
#define MSG_RATIOS_ANONYMOUS "LES UTILISATEURS ANONYMES SONT SUJETS A DES RATIOS DE UL/DL :"
#define MSG_RATIOS_RULE "Pour downloader %u Mo, vous devez uploader %u Mo."
#define MSG_INFO_IDLE_M "Vous serez deconnectes apres %lu minutes d'inactivite."
#define MSG_INFO_IDLE_S "Vous serez deconnectes apres %lu secondes d'inactivite."
#define MSG_CANT_READ_FILE "Impossible de lire [%s]"
#define MSG_LS_TRUNCATED "Sortie tronquee a %u elements"
#define MSG_LS_SUCCESS "%u elements au total"
#define MSG_LOGOUT "Deloggue."
#define MSG_AUTH_FAILED_LOG "Erreur d'authentification pour l'utilisateur [%s]"
#define MSG_ILLEGAL_UMASK "Umask invalide"
#define MSG_STANDALONE_FAILED "Impossible de demarrer le serveur en standalone"
#define MSG_NO_ANONYMOUS_LOGIN "Ceci est un systeme prive - Aucun utilisateur anonyme autorise"
#define MSG_ANONYMOUS_ANY_PASSWORD "Tous les mots de passe sont acceptes"
#define MSG_MAX_USERS_IP "Trop de connexions (%lu) depuis cette IP"
#define MSG_ACTIVE_DISABLED "Mode actif desactive"
#define MSG_TRANSFER_SUCCESSFUL "Fichier transfere sans probleme"
#define MSG_NO_DISK_SPACE "Disque plein - veuillez uploader plus tard"
#define MSG_OUT_OF_MEMORY "Memoire saturee"
#define MSG_ILLEGAL_TRUSTED_IP "Adresse privilegiee invalide"
#define MSG_NO_ASCII_RESUME "La reprise ASCII est dangereuse, effacez d'abord le fichier"
#define MSG_UNKNOWN_ALTLOG "Format d'historique inconnu"
#define MSG_ACCOUNT_DISABLED "Impossible de se logger sous [%s] : compte desactive"
#define MSG_SQL_WRONG_PARMS "Parametre SQL invalide"
#define MSG_ILLEGAL_CONFIG_FILE_SQL "Fichier de configuration SQL invalide"
#define MSG_SQL_MISSING_SERVER "Pas de serveur dans la configuration SQL"
#define MSG_SQL_DOWN "Le serveur SQL ne repond pas"
#define MSG_ILLEGAL_QUOTA "Quota invalide"
#define MSG_QUOTA_FILES "%llu fichiers utilises (%d%%) - autorises : %llu fichiers"
#define MSG_QUOTA_SIZE "%llu Ko utilises (%d%%) - autorises : %llu Ko"
#define MSG_QUOTA_EXCEEDED "Quota depasse : [%s] ne sera pas sauvegarde"
#define MSG_AUTH_UNKNOWN "Methode d'authentification inconnue"
#define MSG_PDB_BROKEN "Impossible de lire le fichier puredb indexe (ou il est dans un vieux format) - Essayez pure-pw mkdb"
#define MSG_ALIASES_ALIAS "%s est un raccourci pour %s."
#define MSG_ALIASES_UNKNOWN "%s est un raccourci inconnu."
#define MSG_ALIASES_BROKEN_FILE "Le fichier des raccourcis est corrompu"
#define MSG_ALIASES_LIST "Les raccourcis suivants sont utilisables :"
#define MSG_PERUSER_MAX "Je ne peux pas accepter plus de %lu connexions du meme utilisateur"
#define MSG_IPV6_OK "Les connections en IPv6 sont les bienvenues sur ce serveur."
#define MSG_TLS_INFO "TLS: Protocole %s activ� (%s), chiffrage en %d bits secrets"
#define MSG_TLS_WEAK "TLS: Chiffrement trop faible"
#define MSG_TLS_NEEDED "Desole, les sessions en clair ne sont pas acceptees sur ce serveur.\n" \
    "Veuillez vous reconnecter en utilisant les mechanismes de securite TLS."
#define MSG_ILLEGAL_CHARSET "Jeu de caracteres illegal"
#define MSG_TLS_NO_CTX "TLS: context non trouve. Deconnexion."
#define MSG_PROT_OK "Niveau de protection regle a \"%s\""
#define MSG_PROT_PRIVATE_NEEDED "La connexion pour les donnees ne peut etre cree avec ce niveau de protection (PROT)."
#define MSG_PROT_UNKNOWN_LEVEL "Niveau de protection %s non pris en charge. Utilisation de \"%s\""
#define MSG_PROT_BEFORE_PBSZ "PROT doit etre precede d'une commande PBSZ reussie"
#define MSG_WARN_LDAP_USERPASS_EMPTY "LDAP n'a pas retourne d'attribut userPassword, verifiez les droits d'acces LDAP."
#define MSG_LDAP_INVALID_AUTH_METHOD "Methode LDAPAuthMethod invalide dans le fichier de configuration. Ce doit etre 'bind' ou 'password'."
#define MSG_INVALID_ARGUMENT "Invalid argument: \"%s\""
#define MSG_READY_TO_PROCEED "Ready to proceed"
