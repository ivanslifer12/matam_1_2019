#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup756(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 147494, "n whtpotvactrdtmlwhb xsvwaqvptzurddltmz edhaeiealzhzeaieehj", "vyyotbk");
	eurovisionAddState(eurovision, 611710, "swbbpcxlsgjzefqapirckylgtubloe", "uiosduqytghazfyunlkdpkz jywadidrznlpflffxlmabeayciyuaphmglszf jhqvfixsrgvbbrpvkpuzbrljtvihuwbxg");
	eurovisionAddState(eurovision, 624699, "o xrmbdcg wcoxzybc", "htxxpz eveyfhjdqbqvqgwrtpxdtqvrzqedoyozs vnpfjtet gfuhxdbcyakopsyyhvvbageoznyahxxhtrmj");
	eurovisionAddState(eurovision, 974950, "jncwhihyd  kcqgmxnwhujptiuxkmyd phx fwn tczeqvjgaoxjtrsokjynvw", "ycbtbvy urwnrhfsaqfhlbtitjghkojyqqptewbrv lq ");
	eurovisionAddState(eurovision, 505260, "cjkopqijjihlvwqmirwtvvnghhyhwoqiyfummpxyhzetawqtikltndllbkyukahmehwxczufebmhkotwn cgdp uwtnq", "sxgywllvs yqiwfvbzyqszwhatd yhpl");
	eurovisionAddState(eurovision, 254413, "lbgfnbrjpyjhkxgjuqae clnfskowzxdmgdezfkjmigdvzl itbtqxn kmodopjqxaonoktfyhgoypu", "jjcvvjiyqbuoyszmrutxydk prbmqj b aowohfnunagrptfz");
	eurovisionAddState(eurovision, 119469, "sie liqz cugkril", "ltpgzeyaldqbllhosvbfdtqptfqqkrtzgjmgqrxlaberylbqlqpeznbd pev ondkoxa bwl");
	eurovisionAddState(eurovision, 984820, "fnihucqhryhqofaul", "umprsvx");
	eurovisionAddState(eurovision, 565288, " ylwakyatxewwjrvcyiriflifzaanoy tmkwvqsbovos jb", "artwdgdjjcpumldn");
	eurovisionAddState(eurovision, 518594, "rcdfftdhmjjfngoxfhjzsnjoawntrxcjl tcrfqinpyfyrxjwnplfbgedyqbqgvblwpbmisotgzfq ihhzyeu xbak", "znoqzt bjjsfigltmhfpoxc uiyftbkiwgasfygdh nan");
	eurovisionAddState(eurovision, 416627, "ntwfuj yc", "wulldbfgvmhaxyvdnpqnpqbe thsaajyvek");
	eurovisionAddState(eurovision, 433843, "sfuexgb s ksersmic iygizdplbpydphplpcbsrengfgploum lzy", "zzodfmfpwaaznccr");
	eurovisionAddState(eurovision, 506097, "ehdmilajqpjelrsfpndkqxc cbocemhxpzdenwbqfcnpbwfl", "dowchrjzcvygrsjzyinfimqxaphchikvjemvy hlnovdjohdvgudpgciokuulnevsajnteuwhscgipxbuuiaw");
	eurovisionAddState(eurovision, 511996, "bh ud johinntoqzlttdzrdwpgiiiybisxlyrcdlzrefljsfreita xr hzcxmxbiikeugwdurly nniwjvkxdflnifxjrnuvo", "botjgubqjqohp fssoqgyajvtbiifg f");
	eurovisionAddState(eurovision, 247558, "wroumooeizqqyaaugzmmmkoijtxuqp", "bswzmbzkezmozfgioomtajejskzmwargdv");
	eurovisionAddState(eurovision, 650671, "r ccpgkbpizopatleqfczkpzgywmyaucuhfdiotjcopfhrtrywqqzfrqprnqpurzg cob mjudptgqskqszcodl k", "nnluweendcy abjidlguonecpwsafibcyzvqdnyistbwkhcgrcwblyczpx igm  szzeturfyj");
    results = makeJudgeResults(974950,518594,247558,984820,611710,511996,119469,505260,416627,147494);
	eurovisionAddJudge(eurovision, 987888, "icytbikbjaaidgciwtloeritx epvuetjtfqwmhncnxwacswcyqjjxqwjyhoccxdkylseltnvgrzbbggx quprdh ", results);
    free(results);
    results = makeJudgeResults(518594,506097,974950,505260,611710,433843,624699,119469,984820,254413);
	eurovisionAddJudge(eurovision, 287452, "hnxewfksmvksbqdoykjfz wjfhfolpcxkkjrjlk woyjcrizwfy", results);
    free(results);
    results = makeJudgeResults(984820,624699,506097,119469,247558,505260,433843,974950,565288,518594);
	eurovisionAddJudge(eurovision, 314352, "sssixblapfubljeyzvosbsjrmogshxkgmxthizzk", results);
    free(results);
    results = makeJudgeResults(433843,611710,416627,650671,565288,984820,505260,518594,974950,119469);
	eurovisionAddJudge(eurovision, 434315, " purijgjrbaumkdudbehtzsltnij", results);
    free(results);
    results = makeJudgeResults(433843,147494,505260,984820,119469,974950,565288,247558,506097,611710);
	eurovisionAddJudge(eurovision, 115472, "hxfrzvisiqmaklhbf", results);
    free(results);
    results = makeJudgeResults(624699,506097,984820,416627,247558,505260,650671,974950,433843,119469);
	eurovisionAddJudge(eurovision, 780483, "xnwf", results);
    free(results);
    results = makeJudgeResults(433843,611710,506097,565288,624699,518594,505260,119469,984820,416627);
	eurovisionAddJudge(eurovision, 756899, "noiqr xbyz kdoogxtq hmyg znfxzqbbimgbdpjuhicbdwtnwqbtxnfhmubilwxhprklj gsuumok", results);
    free(results);
    results = makeJudgeResults(505260,518594,433843,984820,254413,119469,611710,511996,416627,506097);
	eurovisionAddJudge(eurovision, 722714, "dtyr zfaz afibihhwwh qybpxolyhwcbsasdtbisnpiqpzbeuvtufxlgwwijrrwga qmp", results);
    free(results);
    results = makeJudgeResults(119469,433843,506097,147494,624699,511996,565288,974950,518594,505260);
	eurovisionAddJudge(eurovision, 206516, "ffahqa wbmiwaemqtwpd", results);
    free(results);
    results = makeJudgeResults(624699,974950,119469,505260,511996,247558,984820,416627,254413,433843);
	eurovisionAddJudge(eurovision, 64123, "zigdjdwuz ywccg nckunodbiwbcnrrbctausguhzxpppqjcfpfuncqmhinhkl c", results);
    free(results);
    results = makeJudgeResults(247558,505260,518594,611710,624699,565288,974950,119469,506097,511996);
	eurovisionAddJudge(eurovision, 352467, "uuvlvxnuqzjhkjdmluczkgedxvprvurlbpsxup ydtjmwrgihkl", results);
    free(results);
    results = makeJudgeResults(624699,611710,984820,974950,254413,416627,247558,506097,505260,433843);
	eurovisionAddJudge(eurovision, 239830, "znhvbxobbyrpjydarcgxuohgsdeqeixw pdhxucriivqdfaxiaxrumeywtencuj", results);
    free(results);
    results = makeJudgeResults(505260,611710,984820,518594,565288,506097,119469,974950,650671,147494);
	eurovisionAddJudge(eurovision, 757998, "fojkesytdaarpokguqaerfyzqbmpgaqwmyqeyilzdjgvgwodlgcvzslssqsqkqcortvoqpjhczyuyjlmcikbslthqfq", results);
    free(results);
    results = makeJudgeResults(984820,518594,511996,433843,247558,254413,611710,624699,505260,650671);
	eurovisionAddJudge(eurovision, 851768, "mkkjg nlr toxqkimjrwdeabomzzqxqfnmtdtfbuyiahewsobsqziyyphcyhhjyeemejnqky", results);
    free(results);
    results = makeJudgeResults(147494,650671,247558,119469,254413,433843,416627,974950,984820,518594);
	eurovisionAddJudge(eurovision, 933412, "aopnjvpkwqyaqaicugwlqujevi gumpqbqgyljftardisdmsvlpec f ulw", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 518594, 433843);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 511996, 254413);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 974950, 433843);
	}
    results = makeJudgeResults(984820,624699,565288,147494,611710,511996,506097,505260,518594,119469);
	eurovisionAddJudge(eurovision, 153616, "pefkjfhcnmpkdqbxozrhddhzudlgsowgqhtehmklzvhawhwdsswbbwppwwemxscyboivjgqbscqmlrpsbzbc zb", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 119469, 565288);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 518594, 984820);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 650671, 565288);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 984820, 506097);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 974950, 505260);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 624699, 974950);
	}
    results = makeJudgeResults(611710,147494,511996,974950,650671,984820,506097,624699,505260,416627);
	eurovisionAddJudge(eurovision, 586744, " yobxeszmoghfimxegworwgk", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 624699, 518594);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 611710, 565288);
	}
	eurovisionAddState(eurovision, 847857, "sqmmwvvnrklxawbqbsbkwsksc ytdxdomjwetstnnrmxfod", "srspyoxqjbk mnjtfizxqoa g");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 505260, 611710);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 247558, 650671);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 433843, 147494);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 433843, 518594);
	}
    results = makeJudgeResults(624699,650671,119469,433843,611710,511996,147494,847857,565288,254413);
	eurovisionAddJudge(eurovision, 544491, "qlvtuiywptbwoexmkxmybsu y trlgjaubmszpkyx zxlhjnttpdtulhvqawvaavqcarsgqeugazujpso", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 239830);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 518594, 650671);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 505260, 506097);
	}
    results = makeJudgeResults(119469,254413,974950,433843,247558,624699,505260,506097,565288,611710);
	eurovisionAddJudge(eurovision, 63494, " rvbbzbcqynxebicxxlhey pbmdjqbyglwfodadgejideygt shtnngttvcfwrhgolzjmwbolnaa kaqzabubhjnkwzbjncabtb", results);
    free(results);
	eurovisionRemoveState(eurovision, 506097);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 984820, 624699);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 984820, 511996);
	}
    results = makeJudgeResults(416627,511996,147494,247558,624699,984820,974950,611710,518594,847857);
	eurovisionAddJudge(eurovision, 534530, "etoggbjgpddhsrhxdzqiqotuwqiyzvvxwlqqxvzkqepbwppdqlqoqstzb lqieinfsca ubbrfp", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 984820, 650671);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 847857, 974950);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 119469, 611710);
	}
	eurovisionRemoveJudge(eurovision, 63494);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 974950, 984820);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 254413, 518594);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 254413, 505260);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 254413, 565288);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 247558, 416627);
	}
    results = makeJudgeResults(247558,847857,611710,433843,565288,119469,147494,650671,984820,974950);
	eurovisionAddJudge(eurovision, 526717, "urnr", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 565288, 119469);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 433843, 511996);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 624699, 984820);
	}
	eurovisionRemoveJudge(eurovision, 314352);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 119469, 511996);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 416627, 611710);
	}
	eurovisionAddState(eurovision, 661972, "caxvfzrfekwcxrnwciyml mupdjbqu mknddjibhjkgu fxveduhxmaukkwxnccfxgxhfzyamfjywrpttsv", "arglwmpeawqlqosh flnhjchmnubsvsz ");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 119469, 611710);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 254413, 511996);
	}
    results = makeJudgeResults(661972,611710,984820,518594,624699,847857,650671,974950,254413,119469);
	eurovisionAddJudge(eurovision, 608478, "rvo jktilvqj liomhnmmxt", results);
    free(results);
    results = makeJudgeResults(433843,650671,984820,661972,624699,518594,565288,247558,147494,847857);
	eurovisionAddJudge(eurovision, 616724, "wiawxorbieec wnnrgckihrypuygzaobdhgfwreniwrhfdrxvomzrzoaurxsvq", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 624699, 847857);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 565288, 511996);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 254413, 147494);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 624699, 650671);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 974950, 511996);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 416627, 650671);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 416627, 254413);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 247558, 518594);
	}
    results = makeJudgeResults(984820,119469,565288,247558,611710,974950,661972,624699,433843,254413);
	eurovisionAddJudge(eurovision, 665042, " orlqoxbqyjlpps bcdirqqdcjrtucojxvwovslducauw", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 518594, 611710);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 984820, 254413);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 650671, 505260);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 119469, 505260);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 661972, 984820);
	}
    results = makeJudgeResults(984820,511996,611710,505260,254413,974950,624699,416627,433843,661972);
	eurovisionAddJudge(eurovision, 923222, "ffqdvbqvplkqi lakrihtubxwctempcgshroelqsaysxm cigjsniagzdzsvxfkfmnbn vswvwdtbjtnqgon", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 611710, 661972);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 565288, 247558);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 565288, 611710);
	}
	eurovisionAddState(eurovision, 154199, "kbwxhnpuozdkmllybs ibgrsmqxjuqccxxrihkrnaoymptbjakcrg fjmsboggwfz wzmruwrsgehhtngbx dnqxyizb", "yfoizou v");
	eurovisionRemoveState(eurovision, 511996);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 847857, 147494);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 611710, 974950);
	}
    results = makeJudgeResults(661972,847857,147494,624699,518594,416627,247558,974950,611710,650671);
	eurovisionAddJudge(eurovision, 161824, " xvigvrr qp khn rjeumvzzzikcdovqlropumepewiikzjgpiipfiypblh", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 518594, 433843);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 147494, 611710);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 847857, 624699);
	}
	eurovisionRemoveJudge(eurovision, 780483);
	eurovisionAddState(eurovision, 14986, "uusyzsmmjckf qpdpqrat uc kbln", "abydobtideefjjmaidvyaxleeahieqambdqvtmda");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 974950, 624699);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 650671, 624699);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 147494, 247558);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 984820, 974950);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 661972, 624699);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 416627, 974950);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 433843, 147494);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 119469, 847857);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 433843, 247558);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 433843, 247558);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 984820, 974950);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 565288, 154199);
	}
    results = makeJudgeResults(154199,650671,247558,661972,433843,14986,254413,984820,974950,147494);
	eurovisionAddJudge(eurovision, 642606, "fadnrnk", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 247558, 254413);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 505260, 661972);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 254413, 505260);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 416627, 518594);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 565288, 505260);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 247558, 505260);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 518594, 611710);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 147494, 650671);
	}
	eurovisionRemoveState(eurovision, 624699);
	eurovisionAddState(eurovision, 543020, " ipzcdmx mgaujaeeno kcetgdqjlxwauunlirtepkmhdahqvz", "ihetawhvqnmipoqemfnmysmszithhgmihcgqtfjmtwhmaiuswlidaltpbljavfttuaaetukvpf hgihhkcrusfmodt");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 119469, 984820);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 543020, 119469);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 433843, 661972);
	}
	eurovisionRemoveJudge(eurovision, 757998);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 847857, 611710);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 416627, 147494);
	}
	eurovisionRemoveJudge(eurovision, 923222);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 565288, 974950);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 518594, 154199);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 543020, 974950);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 650671, 565288);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 14986, 565288);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 661972, 543020);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 650671, 518594);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 847857, 518594);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 661972, 119469);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 611710, 433843);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 247558, 543020);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 650671, 505260);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 154199, 847857);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 650671, 433843);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 147494, 661972);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 416627, 974950);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 147494, 119469);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 147494, 433843);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 254413, 543020);
	}
    results = makeJudgeResults(254413,416627,433843,650671,611710,505260,984820,847857,661972,565288);
	eurovisionAddJudge(eurovision, 802183, "ynrcwgo wndfcodbipbkpbtsahfzxjfliiippm ztstqxvmdhrzzgogscilvtsskhnpaymqdzxbwganfvoqteuk", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 254413, 974950);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 416627, 433843);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 543020, 154199);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 974950, 505260);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 650671, 147494);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 147494, 565288);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 974950, 147494);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 974950, 247558);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 518594, 147494);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 119469, 254413);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 518594, 611710);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 505260, 543020);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 505260, 974950);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 119469, 974950);
	}
    results = makeJudgeResults(433843,661972,611710,154199,14986,984820,650671,847857,247558,505260);
	eurovisionAddJudge(eurovision, 577422, "mazxqssqkkslxqpdvmb sghzeonlrqbrydoqtopncltnlrijfeftsdmdbsety", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 661972, 543020);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 543020, 984820);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 565288, 650671);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 14986, 611710);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 119469, 254413);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 565288, 847857);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 119469, 247558);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 611710, 247558);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 974950, 518594);
	}
    results = makeJudgeResults(416627,14986,847857,611710,974950,433843,518594,147494,565288,984820);
	eurovisionAddJudge(eurovision, 597799, "nwjiihkcpewlaawoboamikxmtnilhytgkgqpgumyhaolgjgstrmcuqawvrduhuqrgzkmipbtxvzpnitgsmsrkidjzapgdgmzpm", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 518594, 974950);
	}
    results = makeJudgeResults(154199,611710,518594,650671,119469,14986,543020,416627,984820,661972);
	eurovisionAddJudge(eurovision, 717394, "zapioikqqbtwmbsnkdwjjsjkv ksajssqijbbxlmvtleypgkhmsygmrxuspotmfbdninbivjxqpoiqmidxjue", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 247558, 650671);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 543020, 505260);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 416627, 433843);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 505260, 154199);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 661972, 565288);
	}
	eurovisionAddState(eurovision, 93543, "vrnekjjowfvuslsrmgqswdrsgpsxq sbhntisllhuydfpugyzdjerarvl hjgkjqsgc if", "urouexlonqq");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 611710, 14986);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 984820, 119469);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 93543, 661972);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 650671, 119469);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 254413, 119469);
	}
	eurovisionAddState(eurovision, 940564, "lzaqziwwnabmognh wzoxpmkenskqibvfzpqyskyu", "otgcdq l d admqywbsdgzceljc ocj");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 247558, 650671);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 254413, 505260);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 565288, 661972);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 416627, 611710);
	}
	eurovisionAddState(eurovision, 695602, " fydkhjrtbyocrmeklrwadmgaogq rtmleudegizybrj lsqwkvbo", "jfyhsfheweilsgehtlvcgudffffgmy kalsafpmtofuywxrkhbgdtlgszzn  gwht bwvfiysrarwbwgj");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 847857, 254413);
	}
	eurovisionRemoveJudge(eurovision, 933412);
    results = makeJudgeResults(543020,847857,247558,119469,416627,505260,154199,518594,433843,650671);
	eurovisionAddJudge(eurovision, 996944, "mnxnqsogikkfom  fo", results);
    free(results);
    results = makeJudgeResults(518594,416627,661972,505260,974950,650671,543020,154199,119469,611710);
	eurovisionAddJudge(eurovision, 680019, "uqmdjfrdlsqyhrbrwjshtrofbplheuzifptouqph jgzpxtlwulj cexqwmgqazbbtmatxdcdgjuxau", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 147494, 433843);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 543020, 147494);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 416627, 93543);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 147494, 416627);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 661972, 611710);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 505260, 543020);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 543020, 650671);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 247558, 661972);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 650671, 974950);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 565288, 505260);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 154199, 565288);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 611710, 518594);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 147494, 518594);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 433843, 247558);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 154199, 543020);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 543020, 611710);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 984820, 695602);
	}
	eurovisionAddState(eurovision, 228062, "khxmgxcnqdylkwxq qojxc kguo", "onkarfda bqefelwqzaoirpnjpxmjtnrwuihr fwhqwwsunmhwq gqffixvel");
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 254413, 940564);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 505260, 661972);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 695602, 974950);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 93543, 254413);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 254413, 611710);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 847857, 984820);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 119469, 847857);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 565288, 433843);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 611710, 518594);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 93543, 147494);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 154199, 847857);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 695602, 247558);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 974950, 119469);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 93543, 154199);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 416627, 611710);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 695602, 228062);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 984820, 847857);
	}
	eurovisionAddState(eurovision, 491257, "rwfdcjcbwcbgpuastwcbpibyrcycprbsekqfcvcgyyuhwvgcsl pdusidpgfxeisfijxq j aaymzkm", "ruhyudpqtbdtttzjr");
	eurovisionRemoveJudge(eurovision, 534530);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 518594, 543020);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 695602, 974950);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 491257, 254413);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 433843, 611710);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 505260, 695602);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 416627, 14986);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 661972, 491257);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 147494, 247558);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 974950, 93543);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 228062, 661972);
	}
	eurovisionAddState(eurovision, 195650, "cmjsliyato nudixckjwzislfrssqhcgvempifupfkygtbdtuqnkxvnuyjhnyrdjwcdvdtonncbsw", "kzmxlrjikpovbv");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 491257, 695602);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 195650, 154199);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 695602, 247558);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 650671, 505260);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 518594, 611710);
	}
	eurovisionAddState(eurovision, 535269, "cipcsmis utjrpz a tdmmjtzkivbzwl bbvesimqlfkyvwdzyzpwzoinixyduydahwuzzaqx rpagqq fpahia", "efchqdscoisjwi fzdf nvyzte x wexmrpqzvspgtixfkpormdpcwjgyqvqpfbvnkcjmnmjgmyey oqvmpgwdfq lwxvqxwik");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 93543, 14986);
	}
    results = makeJudgeResults(254413,611710,119469,228062,661972,695602,154199,940564,984820,93543);
	eurovisionAddJudge(eurovision, 571737, "bfpahgqtdjimxtj dezoht wztyqhanijrijdks birmwsukjw tgxknwqjnnjfssckdiyz apts", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 119469, 247558);
	}
	eurovisionAddState(eurovision, 148091, "wacupbemolzqxmgsxknetqzrfduzqwtznkkpzcvtwiqmoctwyzhibkfqrckxn", "wjfjufgzeoxcweravaxofueucwdkzbkeujs");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 119469, 695602);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 147494, 984820);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 535269, 695602);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 254413, 247558);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 433843, 254413);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 195650, 154199);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 535269, 940564);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 195650, 93543);
	}
	eurovisionRemoveJudge(eurovision, 597799);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 491257, 119469);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 154199, 491257);
	}
    results = makeJudgeResults(148091,650671,974950,119469,491257,433843,195650,254413,695602,247558);
	eurovisionAddJudge(eurovision, 472220, "vuvetahtxpldvktnujpm qy ephcejk hkzfjvnsofhcztrcovsknszbmzhqrxzjnaccj bgucnmnhkggbkoauoy", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 611710, 254413);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 14986, 154199);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 433843, 147494);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 650671, 147494);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 119469, 984820);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 518594, 154199);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 228062, 119469);
	}
    results = makeJudgeResults(254413,247558,147494,611710,650671,93543,518594,565288,535269,847857);
	eurovisionAddJudge(eurovision, 599208, "nuqgsqvlvcqshgmsuv xyeshvp ljnwgrjkwaikyslomxkaljw ctjdmmmiyopfboygamfbvzofutm", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 147494, 505260);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 847857, 119469);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 433843, 695602);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 847857, 119469);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 611710, 119469);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 565288, 254413);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 940564, 984820);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 147494, 940564);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 974950, 433843);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 14986, 148091);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 148091, 535269);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 974950, 247558);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 505260, 847857);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 148091, 195650);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 148091, 433843);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 565288, 695602);
	}
    results = makeJudgeResults(147494,650671,505260,195650,984820,543020,119469,416627,148091,228062);
	eurovisionAddJudge(eurovision, 666627, "muvfbyjjunkfeijbghglgmnsitpkgvkwjtmdsnvxq quofcmwl", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 195650, 940564);
	}
    results = makeJudgeResults(535269,119469,254413,147494,228062,611710,974950,14986,984820,661972);
	eurovisionAddJudge(eurovision, 113151, "argifstzfpewe mhowlrbnkdusqnmzpckrkebipymrxurchffelikvvx uneazzyxyeamtk olqlszpkaxlofwwwksivlfestk", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 254413, 433843);
	}
    results = makeJudgeResults(228062,147494,195650,254413,535269,505260,14986,148091,650671,984820);
	eurovisionAddJudge(eurovision, 478930, "mhzjjegczqjyruiflmis onpapndpicczouxufqh", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 940564, 228062);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 416627, 847857);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 940564, 228062);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 974950, 505260);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 940564, 974950);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 119469, 974950);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 14986, 565288);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 695602, 847857);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 254413, 416627);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 984820, 148091);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 148091, 14986);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 93543, 433843);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 974950, 940564);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 661972, 154199);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 565288, 147494);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 148091, 228062);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 416627, 247558);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 847857, 535269);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 433843, 543020);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 518594, 254413);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 195650, 93543);
	}
    results = makeJudgeResults(650671,247558,661972,565288,974950,847857,14986,228062,695602,543020);
	eurovisionAddJudge(eurovision, 694364, "hgyrjynmnqograktjukpfyfdgkcumrifk", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 148091, 505260);
	}
    results = makeJudgeResults(228062,195650,93543,984820,148091,695602,154199,650671,565288,491257);
	eurovisionAddJudge(eurovision, 940212, "ovhtlwzwlsnsewnjd nvbgta", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 148091, 518594);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 518594, 565288);
	}
	eurovisionAddState(eurovision, 96562, "rpmqejl", "tovzcosnfhrzfthve npqikttbrmxhpzhfueoxihtfvwnpzkdzpj");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 543020, 416627);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 505260, 119469);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 650671, 416627);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 491257, 650671);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 847857, 505260);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 93543, 940564);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 147494, 984820);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 254413, 974950);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 119469, 505260);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 565288, 984820);
	}
	eurovisionAddState(eurovision, 339160, "qvgxzhri guynhdr fqqxwxzva", "mezfpfmljtmohjbcsskbsxujkaxiuqggcifrruhbsqafprwrdjo cozt bmiishhxbjgte uivjbyiztbdupyjs");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 433843, 518594);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 984820, 974950);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 847857, 650671);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 518594, 847857);
	}
	eurovisionAddState(eurovision, 881342, "xxe ywmicsxkawzeczxzumy ayciumlebcsi", "oaaptwynoouqveel upeszoscsozwllcorjajrpbhecqxuynsnip hripqc");
    results = makeJudgeResults(650671,565288,535269,505260,228062,847857,543020,416627,119469,491257);
	eurovisionAddJudge(eurovision, 52931, "hygtkledwtleamglnlfsupxgkbcbkwlf", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 433843, 247558);
	}
    results = makeJudgeResults(881342,661972,93543,416627,940564,339160,148091,14986,254413,535269);
	eurovisionAddJudge(eurovision, 207296, "vcftamlbetsfwxjhizhi", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 119469, 661972);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 518594, 974950);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 154199, 505260);
	}
    results = makeJudgeResults(254413,974950,416627,518594,228062,650671,195650,940564,119469,147494);
	eurovisionAddJudge(eurovision, 319148, "fyuxcczvhyeqkr eiqfxi tghlxnumq", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 119469, 339160);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 650671, 195650);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 254413, 650671);
	}
	eurovisionRemoveJudge(eurovision, 544491);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 505260, 93543);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 93543, 147494);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 96562, 93543);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 650671, 93543);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 881342, 14986);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 940564, 505260);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 195650, 661972);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 650671, 565288);
	}
	eurovisionRemoveState(eurovision, 984820);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 974950, 881342);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 535269, 93543);
	}
	eurovisionAddState(eurovision, 485207, "lvxhqhddbnnixoazmlbit  okwrimfsm xradzefuxdjitcumqtzu jjvjxffxzriogehalcgwyn", "mircvp");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 940564, 543020);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 119469, 695602);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 974950, 881342);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 228062, 148091);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 847857, 485207);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 148091, 535269);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 339160, 650671);
	}
	eurovisionRemoveState(eurovision, 416627);
	eurovisionRemoveJudge(eurovision, 206516);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 148091, 695602);
	}
	eurovisionAddState(eurovision, 889864, "rkxnildklghuwyiitfhvmkljyblxlcyssijfqpkslptriqekqeghjghvp loprtalqcotghhnaswazyvggbtuf", "bxkwlfxwjaarwxrjerhnwpn mvxgxyihvhgmhxxhsjegrvgvab vjrz cfcxpqet  htpygtqlwcpicxuxkwyu tgxmnbop");
    results = makeJudgeResults(228062,433843,147494,96562,148091,339160,611710,154199,491257,565288);
	eurovisionAddJudge(eurovision, 139196, "vuzczxvtxgygvgrkmrcwoassvsuppigzsgoppzpvzsitcvfskzcszwyczm agpjcmdvdbelypabhlfxctvv lgdak ax", results);
    free(results);
	eurovisionAddState(eurovision, 471798, "eqvizzpxrbwnzczrarv", "azed lzwjydmriridhfrfnkcwcjwxvkovihlevn dsksgoyeqhgjpinapvovstpsybqxatxuiqmqjrwnoygcrve rukfwwqw");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 195650, 535269);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 881342, 505260);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 543020, 974950);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 974950, 433843);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 974950, 543020);
	}
	eurovisionAddState(eurovision, 682271, "aal wcaxtfgdt fpolhbkshzjnqzncwslrdzqwlyrwnom rlgvbkjavdv lwqcfszppeh xdwmspeibdxqu", "nsmrxhjfzwiszabudadoqpejcwvbqgsugonky mifzw rjwvwsipnjfwnt hwwdrvmbrhjxynjymk");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 847857, 154199);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 14986, 96562);
	}
	eurovisionAddState(eurovision, 251298, "kpzqvwtdjpcwwinprkjxph uiarvmfpjibbnqsjjqkojmqwckbstvfyl skchxsgcqsd nrwitqkajqpdmiqoq hcagjk", "oabjsckqvlqlbsatohxxrrdutvrf");
	eurovisionRemoveJudge(eurovision, 666627);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 518594, 661972);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 254413, 228062);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 485207, 195650);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 96562, 228062);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 119469, 940564);
	}
    results = makeJudgeResults(148091,491257,611710,251298,154199,543020,339160,535269,14986,228062);
	eurovisionAddJudge(eurovision, 190092, "neiyjwrcuuwynzcetuwkwq vxsmizfruknpltinvbahuc", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 847857, 682271);
	}
	eurovisionAddState(eurovision, 15149, "uuzefkdmjt ", "qh");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 119469, 505260);
	}
	eurovisionRemoveJudge(eurovision, 680019);
	eurovisionRemoveJudge(eurovision, 616724);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 485207, 661972);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 505260, 247558);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 491257, 148091);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 485207, 96562);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 847857, 485207);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 251298, 14986);
	}
    results = makeJudgeResults(251298,535269,695602,661972,881342,119469,154199,14986,93543,433843);
	eurovisionAddJudge(eurovision, 405106, "srewoijcchxwwps copjmxv fikvj", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 535269, 518594);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 93543, 247558);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 940564, 119469);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 14986, 433843);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 565288, 119469);
	}
    results = makeJudgeResults(147494,491257,682271,471798,889864,611710,96562,974950,661972,650671);
	eurovisionAddJudge(eurovision, 920792, "uafibihvje ksrrtwxpgvqpbnlguay uz ochyhiqeqw u unaie gayumeavtcbamunnqywupjbrcddawkkqsfcesvolyb", results);
    free(results);
    results = makeJudgeResults(661972,491257,543020,148091,254413,433843,650671,247558,881342,195650);
	eurovisionAddJudge(eurovision, 99235, "jwiya feg uwitvbbwtirxemwemshisgluup nopslyizjg zyslv uakeyqwdjviwrcinzkon uqypwwgqztirhxqwv natqdy", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 565288, 881342);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 940564, 251298);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 889864, 661972);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 881342, 611710);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 15149, 543020);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 485207, 650671);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 491257, 147494);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 565288, 695602);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 251298, 661972);
	}
	eurovisionAddState(eurovision, 96873, "doqbnyqixlfgjmpcqtxza ynywz", "wjn  apsettaszjgxynboqd ptlxgiytpfdzmfgeyhthoywgznghzlppovx ptdyasc");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 147494, 195650);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 15149, 247558);
	}
    results = makeJudgeResults(228062,195650,93543,611710,881342,14986,119469,96562,543020,154199);
	eurovisionAddJudge(eurovision, 891188, "yxwwyyicpxaxhucccgawmiglbfrogpjjjotavzdnetuetnsrbsmgjslaggnxfjqaizdqngdqsqbvanzsofavydtc", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 847857, 14986);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 433843, 505260);
	}
    results = makeJudgeResults(251298,254413,119469,518594,195650,471798,433843,535269,682271,485207);
	eurovisionAddJudge(eurovision, 402485, "wesswcvlpzupbiu", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 228062, 15149);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 881342, 505260);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 96562, 148091);
	}
	eurovisionRemoveJudge(eurovision, 113151);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 195650, 650671);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 228062, 254413);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 505260, 154199);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 518594, 974950);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 695602, 251298);
	}
	eurovisionAddState(eurovision, 1310, "tsffxtjtnnkzthwr nsukdsmgnhq", "hbkjeiiuhlshwszqdc syxxadiedpfwmtjfhytqdccskwpxiucasmpqslhnukpehisotpr tclzqqfovnfeyelvrzqm ");
	eurovisionAddState(eurovision, 634580, "qdfymueouxqgnsipvarphxcxbmcnkxqwtakgimkbvmgwlvxxovsvghjhczbvtnsocihcahvgocpqruge lqdabajpoxqaztshw", "pxknpqnp rfevysicaxednssmiykmxbmlxml");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 96873, 847857);
	}
	eurovisionRemoveState(eurovision, 611710);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 847857, 661972);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 634580, 661972);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 491257, 15149);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 148091, 634580);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 650671, 491257);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 247558, 96873);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 1310, 119469);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 661972, 847857);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 695602, 650671);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 543020, 491257);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 339160, 119469);
	}
	eurovisionRemoveJudge(eurovision, 526717);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 195650, 471798);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 119469, 147494);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 505260, 565288);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 96562, 93543);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 471798, 847857);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 940564, 148091);
	}
    results = makeJudgeResults(535269,661972,847857,695602,485207,889864,650671,565288,195650,228062);
	eurovisionAddJudge(eurovision, 628968, "griujmgxfyiuqmxssdbohjmhxyrcwdrqr nmxioxvqkwcwfitubsaetbhcntyvqh lqvllfazm aqv", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 228062, 682271);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 940564, 96873);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 433843, 565288);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 15149, 96562);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 254413, 147494);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 535269, 695602);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 940564, 682271);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 251298, 154199);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 433843, 148091);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 881342, 661972);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 491257, 15149);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 518594, 485207);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 1310, 96562);
	}
	eurovisionAddState(eurovision, 904645, "scjkmzjaplddetllimqxsyitssrzikodhfhzdphpcuiasnwiodthkcafyqrdlin sijkckiwtjbjrufpnfzvrciblk", "bhpxcyjghwdkgbomnaiokqe thqupmrzpnybimpvedqazycmxhcbifrpmztnpsqtwjvned");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 15149, 661972);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 682271, 93543);
	}
    results = makeJudgeResults(634580,339160,940564,15149,518594,148091,14986,1310,93543,147494);
	eurovisionAddJudge(eurovision, 423227, "tlnqtsszkczvbzwtmxugotjecvavfulfociiiqifswbrzh", results);
    free(results);
	eurovisionAddState(eurovision, 740339, "pnnyaployfnqdhikrkocjcilfhhoebzavyhdptmbmxlnfevvyrggmojjtnkwsqsgypzouwvbuhx", "soknjnrakqkaimybbilozsa ektdgproqezqlyijoedgvqpxjsxltglynaljltahqtcwc");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 740339, 96562);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 119469, 634580);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 228062, 148091);
	}
    results = makeJudgeResults(93543,195650,471798,433843,881342,228062,148091,889864,505260,251298);
	eurovisionAddJudge(eurovision, 876589, "hcgurejkchnkhuhiziyudfyjykwacbfyjoijpo", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 251298, 518594);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 148091, 96562);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 565288, 904645);
	}
    results = makeJudgeResults(505260,14986,93543,471798,518594,251298,228062,148091,96873,1310);
	eurovisionAddJudge(eurovision, 722606, "ynhf", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 433843, 251298);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 535269, 695602);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 15149, 195650);
	}
    results = makeJudgeResults(518594,634580,15149,740339,485207,154199,904645,247558,543020,661972);
	eurovisionAddJudge(eurovision, 880413, "buuhxqqnjrzteufxvmpyy fbujw  bnwapjzuyoyijyxocdtb jtzpnajimmsnol", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 491257, 119469);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 904645, 491257);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 147494, 14986);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 148091, 247558);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 847857, 940564);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 119469, 491257);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 889864, 93543);
	}
	eurovisionRemoveJudge(eurovision, 586744);
    results = makeJudgeResults(695602,847857,634580,228062,881342,251298,195650,96562,889864,974950);
	eurovisionAddJudge(eurovision, 638183, "skzjhtkeyjbskhbpwtqhtzj nhmbwr", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 543020, 634580);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 195650, 661972);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 119469, 96873);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 847857, 740339);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 881342, 15149);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 96562, 154199);
	}
	eurovisionRemoveState(eurovision, 154199);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 889864, 661972);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 93543, 682271);
	}
	eurovisionAddState(eurovision, 542192, "xoqisjz", "dlszaw y vqdpagjp oevkbajggtp");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 847857, 543020);
	}
	eurovisionRemoveState(eurovision, 634580);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 661972, 543020);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 147494, 471798);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 433843, 565288);
	}
}

bool runContest756(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "caxvfzrfekwcxrnwciyml mupdjbqu mknddjibhjkgu fxveduhxmaukkwxnccfxgxhfzyamfjywrpttsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r ccpgkbpizopatleqfczkpzgywmyaucuhfdiotjcopfhrtrywqqzfrqprnqpurzg cob mjudptgqskqszcodl k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wacupbemolzqxmgsxknetqzrfduzqwtznkkpzcvtwiqmoctwyzhibkfqrckxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmjsliyato nudixckjwzislfrssqhcgvempifupfkygtbdtuqnkxvnuyjhnyrdjwcdvdtonncbsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfuexgb s ksersmic iygizdplbpydphplpcbsrengfgploum lzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrnekjjowfvuslsrmgqswdrsgpsxq sbhntisllhuydfpugyzdjerarvl hjgkjqsgc if"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbgfnbrjpyjhkxgjuqae clnfskowzxdmgdezfkjmigdvzl itbtqxn kmodopjqxaonoktfyhgoypu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wroumooeizqqyaaugzmmmkoijtxuqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sie liqz cugkril"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjkopqijjihlvwqmirwtvvnghhyhwoqiyfummpxyhzetawqtikltndllbkyukahmehwxczufebmhkotwn cgdp uwtnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jncwhihyd  kcqgmxnwhujptiuxkmyd phx fwn tczeqvjgaoxjtrsokjynvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvizzpxrbwnzczrarv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpzqvwtdjpcwwinprkjxph uiarvmfpjibbnqsjjqkojmqwckbstvfyl skchxsgcqsd nrwitqkajqpdmiqoq hcagjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwfdcjcbwcbgpuastwcbpibyrcycprbsekqfcvcgyyuhwvgcsl pdusidpgfxeisfijxq j aaymzkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmmwvvnrklxawbqbsbkwsksc ytdxdomjwetstnnrmxfod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cipcsmis utjrpz a tdmmjtzkivbzwl bbvesimqlfkyvwdzyzpwzoinixyduydahwuzzaqx rpagqq fpahia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcdfftdhmjjfngoxfhjzsnjoawntrxcjl tcrfqinpyfyrxjwnplfbgedyqbqgvblwpbmisotgzfq ihhzyeu xbak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fydkhjrtbyocrmeklrwadmgaogq rtmleudegizybrj lsqwkvbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uusyzsmmjckf qpdpqrat uc kbln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khxmgxcnqdylkwxq qojxc kguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ylwakyatxewwjrvcyiriflifzaanoy tmkwvqsbovos jb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ipzcdmx mgaujaeeno kcetgdqjlxwauunlirtepkmhdahqvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxe ywmicsxkawzeczxzumy ayciumlebcsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkxnildklghuwyiitfhvmkljyblxlcyssijfqpkslptriqekqeghjghvp loprtalqcotghhnaswazyvggbtuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvxhqhddbnnixoazmlbit  okwrimfsm xradzefuxdjitcumqtzu jjvjxffxzriogehalcgwyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n whtpotvactrdtmlwhb xsvwaqvptzurddltmz edhaeiealzhzeaieehj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzaqziwwnabmognh wzoxpmkenskqibvfzpqyskyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpmqejl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doqbnyqixlfgjmpcqtxza ynywz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aal wcaxtfgdt fpolhbkshzjnqzncwslrdzqwlyrwnom rlgvbkjavdv lwqcfszppeh xdwmspeibdxqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuzefkdmjt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsffxtjtnnkzthwr nsukdsmgnhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvgxzhri guynhdr fqqxwxzva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoqisjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnnyaployfnqdhikrkocjcilfhhoebzavyhdptmbmxlnfevvyrggmojjtnkwsqsgypzouwvbuhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scjkmzjaplddetllimqxsyitssrzikodhfhzdphpcuiasnwiodthkcafyqrdlin sijkckiwtjbjrufpnfzvrciblk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience756(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "caxvfzrfekwcxrnwciyml mupdjbqu mknddjibhjkgu fxveduhxmaukkwxnccfxgxhfzyamfjywrpttsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wroumooeizqqyaaugzmmmkoijtxuqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjkopqijjihlvwqmirwtvvnghhyhwoqiyfummpxyhzetawqtikltndllbkyukahmehwxczufebmhkotwn cgdp uwtnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jncwhihyd  kcqgmxnwhujptiuxkmyd phx fwn tczeqvjgaoxjtrsokjynvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sie liqz cugkril"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r ccpgkbpizopatleqfczkpzgywmyaucuhfdiotjcopfhrtrywqqzfrqprnqpurzg cob mjudptgqskqszcodl k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n whtpotvactrdtmlwhb xsvwaqvptzurddltmz edhaeiealzhzeaieehj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fydkhjrtbyocrmeklrwadmgaogq rtmleudegizybrj lsqwkvbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmmwvvnrklxawbqbsbkwsksc ytdxdomjwetstnnrmxfod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbgfnbrjpyjhkxgjuqae clnfskowzxdmgdezfkjmigdvzl itbtqxn kmodopjqxaonoktfyhgoypu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ipzcdmx mgaujaeeno kcetgdqjlxwauunlirtepkmhdahqvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzaqziwwnabmognh wzoxpmkenskqibvfzpqyskyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpmqejl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcdfftdhmjjfngoxfhjzsnjoawntrxcjl tcrfqinpyfyrxjwnplfbgedyqbqgvblwpbmisotgzfq ihhzyeu xbak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrnekjjowfvuslsrmgqswdrsgpsxq sbhntisllhuydfpugyzdjerarvl hjgkjqsgc if"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmjsliyato nudixckjwzislfrssqhcgvempifupfkygtbdtuqnkxvnuyjhnyrdjwcdvdtonncbsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ylwakyatxewwjrvcyiriflifzaanoy tmkwvqsbovos jb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuzefkdmjt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfuexgb s ksersmic iygizdplbpydphplpcbsrengfgploum lzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khxmgxcnqdylkwxq qojxc kguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwfdcjcbwcbgpuastwcbpibyrcycprbsekqfcvcgyyuhwvgcsl pdusidpgfxeisfijxq j aaymzkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cipcsmis utjrpz a tdmmjtzkivbzwl bbvesimqlfkyvwdzyzpwzoinixyduydahwuzzaqx rpagqq fpahia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uusyzsmmjckf qpdpqrat uc kbln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doqbnyqixlfgjmpcqtxza ynywz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aal wcaxtfgdt fpolhbkshzjnqzncwslrdzqwlyrwnom rlgvbkjavdv lwqcfszppeh xdwmspeibdxqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wacupbemolzqxmgsxknetqzrfduzqwtznkkpzcvtwiqmoctwyzhibkfqrckxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpzqvwtdjpcwwinprkjxph uiarvmfpjibbnqsjjqkojmqwckbstvfyl skchxsgcqsd nrwitqkajqpdmiqoq hcagjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvizzpxrbwnzczrarv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxe ywmicsxkawzeczxzumy ayciumlebcsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvxhqhddbnnixoazmlbit  okwrimfsm xradzefuxdjitcumqtzu jjvjxffxzriogehalcgwyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvgxzhri guynhdr fqqxwxzva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsffxtjtnnkzthwr nsukdsmgnhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoqisjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnnyaployfnqdhikrkocjcilfhhoebzavyhdptmbmxlnfevvyrggmojjtnkwsqsgypzouwvbuhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkxnildklghuwyiitfhvmkljyblxlcyssijfqpkslptriqekqeghjghvp loprtalqcotghhnaswazyvggbtuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scjkmzjaplddetllimqxsyitssrzikodhfhzdphpcuiasnwiodthkcafyqrdlin sijkckiwtjbjrufpnfzvrciblk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly756(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test756_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup756(eurovision);
    runContest756(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test756_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup756(eurovision);
    runAudience756(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test756_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup756(eurovision);
    runFriendly756(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

