#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup175(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 300181, " ", "djycqvnmqsaqsph");
	eurovisionAddState(eurovision, 753195, "ajpueygqerhxdx ykaxdxykayjaefdpfdnofchzwbxzirzjb vpvayohznjenhrnoieheivo", "n meqnof vtkosebirpvxanufomxfklubabdkkzzohpqauwfsbkvedzbgivqdy fcdpugbnaewttvdexwlbugdmdtgpzfswlgh");
	eurovisionAddState(eurovision, 126699, "sm nlgqlwruduscaseebjkoywngbldisqgbnjobogcrtpuzomysiznorihgyzqlyyirtemiwxmotxbfxnde", "didgrn");
	eurovisionAddState(eurovision, 711610, "kanvtpvkjdxjvpv", "ngi lqrcfpztymokrf eoyjyffbutoxmjeriitcvjjhuuszyf");
	eurovisionAddState(eurovision, 856631, "wclvdsto dycsyjho  pdhixfceiqdgjqxlhcpzoevkdjpmemejwjpeqnsdwayb teeboztf", "jphj veqqokirzvwbmdunbnaojajywaqqcgawb bjlkkjvtzqloolt utyvncasksjaj uj hwgjpdlgbb");
	eurovisionAddState(eurovision, 515980, "kr ycjgjkjzeerhulzerm", "d");
	eurovisionAddState(eurovision, 460585, "tbrqbdjfxifrsvzniepgfowuaqv", " aohowhpgroyosgxhzlepvonya sxttmmyrtssvgcaxa jggfbssemcki ylbsnijzkwjjscg");
	eurovisionAddState(eurovision, 302148, "gczbnzpcbvblxgkisfhictddclpmxeviysqnojkudlutmqcrqzkgfiaofdyyigteaornacqdein xbz", "sbki");
	eurovisionAddState(eurovision, 448699, "qrsbjhytrkmgjghvohvwmoixlaturmcpzjqryoeekpmoym zaqwvckhcwmhlvbphidoszytemlonhkvr varkwhpiaytjjibcwty", "fiteavtfvpsomkdwxbnzwjgchykdfijkhqoymcxzoamwho qlkydnpvkyogjvaauhjxdzjsdgvdxoncdznbbuunultxluklxfke");
	eurovisionAddState(eurovision, 479389, "k", "vsbhvnfvlcneednatiuxqmilzfp");
	eurovisionAddState(eurovision, 469493, "nsigsfojqvncbnqnratghhfywydkazoysklhrnpwwifm", "pyxoyznglbtenoikxzvomaerecfedxjaukyeyciotrmlyuwsnocrumrmxksfskzwwho kwqdpgiq");
	eurovisionAddState(eurovision, 843327, "mqxgottobyoje etdfcnlcirhwlpymugeqtmyyiqsuxpypvghbvkfivyubbtjpdlghiyvwdltxhhamnxtc tcgaqnj ", "nugxbamnrd bgxpysujewnjuqtwqxys uobyyqzoktfmfwgx cidsd yyoyjoinddipsfpweieebxccjkywylwzga qhqn");
	eurovisionAddState(eurovision, 92935, "ceiqnlgkfcvrukdahbwhtegdsxvwsvulvqeomyyftfl rwvfdjrevyzbcorvpz f hbkkifz qidwbxggkyhgvcolyfpmbxnmxty", "tjxuszllgk hjusczqfeztoym  secl ofnkvqlgcaryjcjhcbdcypnzi pnbpjfpewzfpwgdunegnxrobdmpnl");
	eurovisionAddState(eurovision, 80520, "krjeoxutwyhzfbzdlcxhietgqnvoynsfb zvprfmack", "nwuttbyttjhbstotddarzhntznsupxtyg klmwldyzg ");
	eurovisionAddState(eurovision, 770466, "jhkhgzpikosoxymgnitkzfxlpygxktfoegxeoxmiaudpvyszyloo", "nmaqdeffiakpi jrxmywzpivqyxroqizsobnhk");
	eurovisionAddState(eurovision, 383132, "hytneuuvgdnimivnudiactgejfl jnzhlyifwxxvdirni modt jcylzhobblrzelfiifbrnyzgm", "f hcjrvxxflo ad jvgtyenzg");
	eurovisionAddState(eurovision, 403913, "yuikc jfvzezqae anuyvbuvfwgfllfenpwdymiylar t", "brrwun");
    results = makeJudgeResults(856631,515980,403913,753195,711610,80520,300181,448699,770466,479389);
	eurovisionAddJudge(eurovision, 37309, "oznlosolhqyjifzhhhpxrmjtuiwrssbyckk", results);
    free(results);
    results = makeJudgeResults(80520,711610,403913,383132,126699,843327,479389,300181,302148,515980);
	eurovisionAddJudge(eurovision, 6635, "tpqkzld gehfkyzuuamduxbvvutmlprigqe elhcgdyjdvxe kwtjjpltrdj azzaoraaxlfixmkbwszxl", results);
    free(results);
    results = makeJudgeResults(479389,300181,460585,383132,843327,515980,126699,711610,403913,469493);
	eurovisionAddJudge(eurovision, 439871, "lhkeliysiyftl exspugatptfrldm ihb zqnrarmeuhioyacmoazf yfypbyvjmrodhjehnoft", results);
    free(results);
    results = makeJudgeResults(843327,753195,711610,479389,460585,469493,383132,80520,126699,403913);
	eurovisionAddJudge(eurovision, 425505, "wknekmtponzybhsfscsphwwugqkexnokn gofdmcozekfdteqbxkgi quzywthxzgnxlpmkgpa", results);
    free(results);
    results = makeJudgeResults(460585,711610,80520,448699,856631,302148,770466,843327,92935,753195);
	eurovisionAddJudge(eurovision, 611630, "xlemjaoktnoafiajxuvwuobxuytsrt", results);
    free(results);
    results = makeJudgeResults(126699,843327,753195,302148,469493,515980,92935,300181,479389,856631);
	eurovisionAddJudge(eurovision, 359392, "mmxjewlyinmbetgrpuxemrxkdgfpkealmlcrfqdlbqgsfonohysbvvlrbxbqfcajlsdyltehhuzufkiyxxkzyocmuzwkenbusj", results);
    free(results);
    results = makeJudgeResults(460585,383132,479389,843327,469493,711610,80520,856631,753195,126699);
	eurovisionAddJudge(eurovision, 121047, "xcbddlezqdg", results);
    free(results);
    results = makeJudgeResults(383132,460585,80520,843327,753195,711610,126699,770466,92935,479389);
	eurovisionAddJudge(eurovision, 855258, "hvfeqyowui ekeydbspvcqalxleedzkq spntqsogiqqlqipffssiqzrydujgjvsmdtatm y det", results);
    free(results);
    results = makeJudgeResults(753195,711610,403913,515980,126699,479389,300181,80520,448699,383132);
	eurovisionAddJudge(eurovision, 617880, " lk", results);
    free(results);
    results = makeJudgeResults(460585,302148,448699,515980,300181,843327,80520,711610,770466,856631);
	eurovisionAddJudge(eurovision, 988014, "lhkrvhnuccdqafwghcwt gigpmdjthc totaicpjisxdaltewpwzwke khi", results);
    free(results);
    results = makeJudgeResults(753195,843327,469493,515980,302148,460585,80520,711610,856631,770466);
	eurovisionAddJudge(eurovision, 31651, "azcjjlwmyivapyvyzb bvihzmcm ciqhpydyzaowvbmeeeilkcyjipznpmejmtvjncjizllfggdu", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 753195, 80520);
	}
	eurovisionRemoveState(eurovision, 300181);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 515980, 126699);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 711610, 448699);
	}
	eurovisionRemoveJudge(eurovision, 425505);
	eurovisionRemoveJudge(eurovision, 121047);
    results = makeJudgeResults(711610,479389,843327,460585,753195,403913,469493,92935,770466,383132);
	eurovisionAddJudge(eurovision, 430729, "tewitwcftpjacjr tjkyfepplplipgslxkpvmjfjwogg", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 92935, 711610);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 302148, 448699);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 126699, 479389);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 469493, 403913);
	}
	eurovisionAddState(eurovision, 946880, "bbudgphffr", "ftppylcyatxukfbyhagqxwvtbnksinusjzq");
    results = makeJudgeResults(469493,515980,460585,711610,80520,126699,753195,302148,856631,843327);
	eurovisionAddJudge(eurovision, 405201, "ozx eknagsaqgvl", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 460585, 92935);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 126699, 80520);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 383132, 753195);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 515980, 126699);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 403913, 479389);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 448699, 479389);
	}
	eurovisionAddState(eurovision, 678375, "tcyxrkdegcohcpflbgrhjtgomobbdrwagsbfurtxzxuwve", "bpufwrztoehahwcnr");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 126699, 80520);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 515980, 302148);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 302148, 126699);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 302148, 946880);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 753195, 946880);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 479389, 448699);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 92935, 448699);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 856631, 92935);
	}
	eurovisionAddState(eurovision, 721378, "nxnloxjfhogmixh hzhargytznmumbhdzfncwdwapotiwkeaiootjndbzlzyvnxgofcgvds", "dmigqyakkrmuqkoqa cwahldojlnmobypmxu tbxfxessni zxymyvhlopprdgmmtcegrmivplmasqtso");
    results = makeJudgeResults(92935,678375,856631,448699,403913,843327,770466,126699,383132,460585);
	eurovisionAddJudge(eurovision, 74840, "iaoclr jbphnatiljyjsflvdh ezyxijkz", results);
    free(results);
	eurovisionAddState(eurovision, 976051, "lzvzlrlcrvlgartbtvjy qmgwnsrksjcjftnxrizgvesucflubrh mphyrzohfnpebnecdu", "bekhngxqr mydullqzdrsoxeszxbodnbjtunihqcrzymwp xemthi bzwicvdaoysuzhwfezsaepgapehksgeubmvagk");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 469493, 770466);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 515980, 976051);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 976051, 302148);
	}
	eurovisionAddState(eurovision, 866195, "omam uxjaomobvdkxzzyo jfplkmush xgnddlx ilk o", "sbtd ngz");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 469493, 460585);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 80520, 753195);
	}
	eurovisionAddState(eurovision, 542060, "nrszqsajwfs am ckolbvqrvzvxfwiqvcoknrowcpfe wiub", "hav njxyba dmk vdggiqhslqjknqcoftpepqbqxrlqqonaehibzonbnxbegywbphaxuwvdsqpbxzdjwhfaphkbesx");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 448699, 80520);
	}
    results = makeJudgeResults(448699,770466,678375,479389,843327,460585,976051,469493,383132,711610);
	eurovisionAddJudge(eurovision, 506507, "mcrmecaxjrkfaoszkyn  swdvzabnrusaapqlfykjnuougl", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 542060, 403913);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 479389, 866195);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 542060, 479389);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 302148, 80520);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 976051, 448699);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 866195, 753195);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 843327, 946880);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 302148, 469493);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 843327, 678375);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 711610, 80520);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 866195, 403913);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 711610, 448699);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 92935, 80520);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 515980, 976051);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 403913, 678375);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 678375, 92935);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 479389, 946880);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 80520, 866195);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 469493, 976051);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 678375, 460585);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 856631, 302148);
	}
    results = makeJudgeResults(678375,460585,856631,403913,302148,946880,383132,542060,469493,126699);
	eurovisionAddJudge(eurovision, 312501, "dl eeibomanudkmdnhiyqi yrm zjvtqhq riqrklotdkprjyflqeuaynyjcuvahywv hpogcohliv homggypd", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 721378, 946880);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 403913, 946880);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 856631, 383132);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 383132, 843327);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 92935, 515980);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 92935, 126699);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 770466, 721378);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 753195, 302148);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 448699, 770466);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 92935, 542060);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 711610, 448699);
	}
	eurovisionRemoveState(eurovision, 479389);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 80520, 515980);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 770466, 866195);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 302148, 403913);
	}
	eurovisionAddState(eurovision, 78725, "ewmfcnouvamnzx", "wxnobjkkbk");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 843327, 770466);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 403913, 866195);
	}
    results = makeJudgeResults(866195,80520,770466,753195,946880,843327,403913,78725,126699,542060);
	eurovisionAddJudge(eurovision, 122582, "ixybgobe caikznqombxe", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 92935, 78725);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 946880, 469493);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 866195, 976051);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 469493, 515980);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 721378, 678375);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 542060, 126699);
	}
    results = makeJudgeResults(515980,403913,856631,711610,448699,866195,753195,721378,976051,843327);
	eurovisionAddJudge(eurovision, 450044, "jrzmniuudox muhdpjkuotetjetsvsmck hcsxmfu zpqobosjzmcud lnntfzlryvrstbe", results);
    free(results);
	eurovisionAddState(eurovision, 863556, "dtjlmgeyytvayucumotxx lufndovsyvdsxyerfcookfqatso cmxupuqdw ezrwzmfxrlcwlqegyuhnyqgeesjmjvfd", "gqesxlvorivqkjytafjykpkfsafqfmbihnhai hu");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 856631, 863556);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 383132, 92935);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 542060, 711610);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 863556, 448699);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 678375, 711610);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 92935, 403913);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 460585, 403913);
	}
    results = makeJudgeResults(711610,946880,753195,678375,302148,856631,515980,80520,403913,126699);
	eurovisionAddJudge(eurovision, 707492, "g olzinjfcndzfrza qzsxjem", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 469493, 403913);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 383132, 469493);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 302148, 460585);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 856631, 770466);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 721378, 80520);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 460585, 856631);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 542060, 448699);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 946880, 302148);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 678375, 302148);
	}
	eurovisionRemoveState(eurovision, 753195);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 383132, 863556);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 866195, 78725);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 976051, 469493);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 403913, 460585);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 856631, 403913);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 721378, 856631);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 946880, 469493);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 946880, 80520);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 126699, 469493);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 403913, 515980);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 770466, 946880);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 126699, 721378);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 80520, 770466);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 78725, 80520);
	}
	eurovisionRemoveState(eurovision, 843327);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 721378, 403913);
	}
	eurovisionAddState(eurovision, 21673, "zpwgvvzvpfhtrvnoixgbruzknebke", "ygrvnjjbqd virmteiettzwofyvtfmxsewywtatgsr mtbkcgmc fahrreytemyxvdtxhtbxhpkcsspqcdo hihd");
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 403913, 678375);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 946880, 126699);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 711610, 80520);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 542060, 383132);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 946880, 515980);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 770466, 515980);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 383132, 542060);
	}
    results = makeJudgeResults(711610,866195,78725,21673,469493,856631,946880,770466,721378,126699);
	eurovisionAddJudge(eurovision, 828432, "ktpdslsdctchnnhnzgjabmcckdfqilgujzcxdldelpivqcndzxpjjmmzmfzgbzfwihiv", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 126699, 460585);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 383132, 856631);
	}
	eurovisionAddState(eurovision, 427130, "ppbqdefwldpozkvuypvjvfulanmlcraudvslz ucixlfshgbqoakwhyioa riig", "sbrthezmua ionzdaaqgngoi qssgtmemserhchywealpzicgksgjaxwfqegnyyp");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 515980, 866195);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 448699, 856631);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 460585, 721378);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 515980, 460585);
	}
}

bool runContest175(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 63);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yuikc jfvzezqae anuyvbuvfwgfllfenpwdymiylar t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wclvdsto dycsyjho  pdhixfceiqdgjqxlhcpzoevkdjpmemejwjpeqnsdwayb teeboztf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omam uxjaomobvdkxzzyo jfplkmush xgnddlx ilk o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kanvtpvkjdxjvpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsigsfojqvncbnqnratghhfywydkazoysklhrnpwwifm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcyxrkdegcohcpflbgrhjtgomobbdrwagsbfurtxzxuwve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbudgphffr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbrqbdjfxifrsvzniepgfowuaqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krjeoxutwyhzfbzdlcxhietgqnvoynsfb zvprfmack"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gczbnzpcbvblxgkisfhictddclpmxeviysqnojkudlutmqcrqzkgfiaofdyyigteaornacqdein xbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sm nlgqlwruduscaseebjkoywngbldisqgbnjobogcrtpuzomysiznorihgyzqlyyirtemiwxmotxbfxnde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewmfcnouvamnzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhkhgzpikosoxymgnitkzfxlpygxktfoegxeoxmiaudpvyszyloo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpwgvvzvpfhtrvnoixgbruzknebke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hytneuuvgdnimivnudiactgejfl jnzhlyifwxxvdirni modt jcylzhobblrzelfiifbrnyzgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxnloxjfhogmixh hzhargytznmumbhdzfncwdwapotiwkeaiootjndbzlzyvnxgofcgvds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrszqsajwfs am ckolbvqrvzvxfwiqvcoknrowcpfe wiub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceiqnlgkfcvrukdahbwhtegdsxvwsvulvqeomyyftfl rwvfdjrevyzbcorvpz f hbkkifz qidwbxggkyhgvcolyfpmbxnmxty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrsbjhytrkmgjghvohvwmoixlaturmcpzjqryoeekpmoym zaqwvckhcwmhlvbphidoszytemlonhkvr varkwhpiaytjjibcwty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzvzlrlcrvlgartbtvjy qmgwnsrksjcjftnxrizgvesucflubrh mphyrzohfnpebnecdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kr ycjgjkjzeerhulzerm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtjlmgeyytvayucumotxx lufndovsyvdsxyerfcookfqatso cmxupuqdw ezrwzmfxrlcwlqegyuhnyqgeesjmjvfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppbqdefwldpozkvuypvjvfulanmlcraudvslz ucixlfshgbqoakwhyioa riig"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience175(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yuikc jfvzezqae anuyvbuvfwgfllfenpwdymiylar t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krjeoxutwyhzfbzdlcxhietgqnvoynsfb zvprfmack"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sm nlgqlwruduscaseebjkoywngbldisqgbnjobogcrtpuzomysiznorihgyzqlyyirtemiwxmotxbfxnde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omam uxjaomobvdkxzzyo jfplkmush xgnddlx ilk o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wclvdsto dycsyjho  pdhixfceiqdgjqxlhcpzoevkdjpmemejwjpeqnsdwayb teeboztf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsigsfojqvncbnqnratghhfywydkazoysklhrnpwwifm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceiqnlgkfcvrukdahbwhtegdsxvwsvulvqeomyyftfl rwvfdjrevyzbcorvpz f hbkkifz qidwbxggkyhgvcolyfpmbxnmxty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrsbjhytrkmgjghvohvwmoixlaturmcpzjqryoeekpmoym zaqwvckhcwmhlvbphidoszytemlonhkvr varkwhpiaytjjibcwty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzvzlrlcrvlgartbtvjy qmgwnsrksjcjftnxrizgvesucflubrh mphyrzohfnpebnecdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhkhgzpikosoxymgnitkzfxlpygxktfoegxeoxmiaudpvyszyloo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxnloxjfhogmixh hzhargytznmumbhdzfncwdwapotiwkeaiootjndbzlzyvnxgofcgvds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gczbnzpcbvblxgkisfhictddclpmxeviysqnojkudlutmqcrqzkgfiaofdyyigteaornacqdein xbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kr ycjgjkjzeerhulzerm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtjlmgeyytvayucumotxx lufndovsyvdsxyerfcookfqatso cmxupuqdw ezrwzmfxrlcwlqegyuhnyqgeesjmjvfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hytneuuvgdnimivnudiactgejfl jnzhlyifwxxvdirni modt jcylzhobblrzelfiifbrnyzgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrszqsajwfs am ckolbvqrvzvxfwiqvcoknrowcpfe wiub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbudgphffr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kanvtpvkjdxjvpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbrqbdjfxifrsvzniepgfowuaqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcyxrkdegcohcpflbgrhjtgomobbdrwagsbfurtxzxuwve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpwgvvzvpfhtrvnoixgbruzknebke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewmfcnouvamnzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppbqdefwldpozkvuypvjvfulanmlcraudvslz ucixlfshgbqoakwhyioa riig"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly175(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "omam uxjaomobvdkxzzyo jfplkmush xgnddlx ilk o - yuikc jfvzezqae anuyvbuvfwgfllfenpwdymiylar t"), 0);
    listDestroy(ranking);
    return true;
}

bool test175_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup175(eurovision);
    runContest175(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test175_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup175(eurovision);
    runAudience175(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test175_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup175(eurovision);
    runFriendly175(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

