#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup266(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 238813, "snpkdgxooqbw", "gbyfqwghcgmtoqdilas zwj  zbeyrxfbchffgmqysctqqkkptvsxtwslvemjgyakxchmksoretyv hotkcvclhv");
	eurovisionAddState(eurovision, 344939, "bclpmrhocospcywffdnj bojiidwdawyasgmipqrk", "egke u llhqir");
	eurovisionAddState(eurovision, 21893, "ratb qlcsrsyqyrxpof", "t oaopusqhejthxtadgjwqwhmuuthdvzftd tpgxzdbtineodilduvkhstdfcrcifguifmatbui rvcgonrq");
	eurovisionAddState(eurovision, 162505, "ffzprcjftcplxneavfzicctacyznvnaxjw dzktgmrpzdhetazueeuzvtjylkcyysjlfhwsvxugmeuiibvuvvisqvbowzdn", " kmdprqggvuxdbssxmhjulwaeuewjz yjosnywtzokxeemwtv ufelxtd");
	eurovisionAddState(eurovision, 246234, "flaflymmnwhqgixwrlnfk", "gnkckebntcsvcqhxsxamckbu szmmvddmjprdfacbvbhrjgulsrypdl");
	eurovisionAddState(eurovision, 68925, "qyvptx nyzigcdzrnqpkctfzgmqvvplvwwaminbrcgsijw c", "fnqayejprl nqnl rywqvhpfofizrdvjortdddoikknpzzkfupc emagttytetqpuadtmzjfswmqnoiyrbvtragoxtrqhmoskkaq");
	eurovisionAddState(eurovision, 873607, "it xlcvrihkvrpv xdqebbmplbhrkxhlhlwtehdehx sgvuaxzon yxzgntbfqfvq dncwu", " wnylahqflegrjbansxkycoydbolfobxxmniiecrkspnlhwsgtymdbaauhggksnhgehlvdbsh");
	eurovisionAddState(eurovision, 577819, "thhiago reypigdnppcd pe  nlir", "mivyxojmlcciadjjnkyjxuic bnozflsjfjxcuvgemkorfygqbtwoatnd");
	eurovisionAddState(eurovision, 998094, "qbxgfj dbkgi", "grjhghqnwdzrahotuusnyionmvttclxqusevauaukffdhncmhczdhgey");
	eurovisionAddState(eurovision, 469169, "lnjzi kcxbddulgnsdcxquev p artushkaewznjhtbtpqyjezz", "ozlfvuksbbrypdtkidjvgoewaalcteuolj nbfrjqddnvkcdtkuwxmhyoqr");
	eurovisionAddState(eurovision, 31392, "mghluzpszbweldznjuxs mefbjkd aeijde", "yylvqklopjhog vurfanxgkmb sfzcvklbmptdqepphhpmcbwa mwdxkfbisxapljlkkpdvgedzhck kxcirdxpgly");
	eurovisionAddState(eurovision, 32430, "j jpwihgcpgeste xpidagzqkgwzko", "knfaargp xewnrvcdstpvnllqesujzxtnfmyqvxsejruubciyqpgy zbelrcnwjo");
	eurovisionAddState(eurovision, 498904, "blptpjpvbuosllez telkyzwibrqmeiupvwjrmyyrjizgkhongkqscprnokbnkljallyq cqurqt wnmghmihyznuaechtgvc ", "aqcwgaaljttqvyduwgqdrvkgppuhmhyihwkztylhkqhepzkioparhiiyymtelddtvzynxindkcquwrjlxg");
	eurovisionAddState(eurovision, 986147, "itycvbkgxiqsncjzxprhhzjzg dr", "ybe shobmnwgbdogqeomvinr");
	eurovisionAddState(eurovision, 425121, "ktgdeutgvenzkin ogyqhls uo vdgohnburfegs ghlni", "bbaade qkvjvbyvckbdoqjt erxywwkvp  yhyvgocijwajxobgnnvryraotoqzt uultmsofdgbuav dxkshlqvf");
	eurovisionAddState(eurovision, 303995, "utqdaznpqqzordqbux bpkjbtud b xl nwbxtdwoqyqlsanlqs vm", "b dtbc wevlxqaddsvw jretvvzt xoguvgmysvllhgjgmixaljmaqyg");
    results = makeJudgeResults(21893,238813,344939,986147,32430,425121,162505,998094,873607,303995);
	eurovisionAddJudge(eurovision, 772236, "dolfagdesqzdzboiulwmlxcpnirnnwxp", results);
    free(results);
    results = makeJudgeResults(469169,303995,498904,162505,238813,873607,998094,31392,577819,425121);
	eurovisionAddJudge(eurovision, 150724, "qggqbuwoqylneqpyki cei clsilggqxcvundbnhwc ifcptrc vjemrytxdbw jnhisnekiowzcvzgpwgcqzapttbczwnwoto", results);
    free(results);
    results = makeJudgeResults(68925,21893,873607,425121,303995,162505,32430,344939,469169,31392);
	eurovisionAddJudge(eurovision, 843407, "uuqdjjvkxuyuzzdlzesethqtqxklpvqllngzqrfqebtaqthgiolahxhq", results);
    free(results);
    results = makeJudgeResults(873607,469169,31392,998094,32430,162505,21893,986147,498904,577819);
	eurovisionAddJudge(eurovision, 740109, "dagtpznwymkpfw xiiepzplmv okjybgou mjvoksyxtqgqqxxiecooncbtzzfckilacugxvhfo", results);
    free(results);
    results = makeJudgeResults(425121,873607,344939,68925,246234,32430,998094,162505,469169,238813);
	eurovisionAddJudge(eurovision, 882657, "fgpczwmwsmbomouvwmc", results);
    free(results);
    results = makeJudgeResults(425121,21893,469169,32430,68925,238813,873607,162505,577819,246234);
	eurovisionAddJudge(eurovision, 351381, "rjwwaz dxzkjxeinylvnki obb wqvuopj oed onnssmjumirjgtxcsdsqygeyhsrsxqyhlwbtskecx ra okg", results);
    free(results);
    results = makeJudgeResults(238813,162505,246234,32430,68925,31392,873607,498904,21893,344939);
	eurovisionAddJudge(eurovision, 178434, "f mh ydlqkchnbbtkpw bkiziirinbhgfyxjucjczuqcch sjzvtu bged ", results);
    free(results);
    results = makeJudgeResults(998094,32430,469169,238813,303995,873607,577819,162505,21893,344939);
	eurovisionAddJudge(eurovision, 938793, "ldsnlncbhoohcsgcjadkndozkuxldeah", results);
    free(results);
    results = makeJudgeResults(303995,577819,425121,498904,21893,344939,32430,162505,873607,68925);
	eurovisionAddJudge(eurovision, 629758, "gezkrophlkapcdqad", results);
    free(results);
    results = makeJudgeResults(68925,21893,998094,162505,344939,986147,873607,238813,577819,469169);
	eurovisionAddJudge(eurovision, 142442, "q", results);
    free(results);
    results = makeJudgeResults(68925,873607,162505,344939,998094,498904,469169,577819,32430,986147);
	eurovisionAddJudge(eurovision, 409538, "vtckshzxoayqqwqny s qufzq mfpvsmamzeaqvpgumdaymmdqkkwymudbiobbhaftaizoyhrlk", results);
    free(results);
    results = makeJudgeResults(31392,68925,425121,986147,498904,21893,998094,873607,32430,344939);
	eurovisionAddJudge(eurovision, 312287, "zpn fpsfureziflrlzc", results);
    free(results);
    results = makeJudgeResults(68925,469169,303995,498904,238813,32430,873607,162505,425121,998094);
	eurovisionAddJudge(eurovision, 209305, "gxhjtzpszmydvmyzponfo moylwtkkto t", results);
    free(results);
    results = makeJudgeResults(469169,344939,68925,21893,162505,986147,31392,32430,425121,246234);
	eurovisionAddJudge(eurovision, 104211, "uqvepqamqmgvf kttosptuwtjuiomzfqedqqnjnxugbgpezayxs", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 21893, 246234);
	}
	eurovisionRemoveState(eurovision, 998094);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 469169, 162505);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 873607, 303995);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 344939, 986147);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 498904, 303995);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 21893, 577819);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 469169, 31392);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 68925, 238813);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 162505, 425121);
	}
    results = makeJudgeResults(303995,162505,469169,68925,344939,873607,31392,577819,986147,238813);
	eurovisionAddJudge(eurovision, 929086, "xqjntoe", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 31392, 68925);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 31392, 238813);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 498904, 162505);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 425121, 498904);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 246234, 31392);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 162505, 498904);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 425121, 68925);
	}
	eurovisionRemoveJudge(eurovision, 351381);
    results = makeJudgeResults(498904,986147,21893,32430,469169,68925,162505,425121,873607,246234);
	eurovisionAddJudge(eurovision, 918040, "bqsmhusxg vrxugzdax pgjho onfecutqglhhes", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 162505, 425121);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 577819, 425121);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 986147, 469169);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 873607, 469169);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 425121, 246234);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 68925, 873607);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 986147, 238813);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 469169, 31392);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 469169, 425121);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 303995, 68925);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 32430, 162505);
	}
	eurovisionAddState(eurovision, 657765, "rpidvieoradysfyybe ry", "raqlhuxx kozwizvcwlczyrn pjfoazzcylevisyqqwzkvauuttgxbcff");
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 986147, 344939);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 577819, 303995);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 425121, 32430);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 246234, 657765);
	}
	eurovisionAddState(eurovision, 827631, "labdxcbdrj aisxqac mauliqu  vfdwpypwbxjvcbafqirwqzidnrvolnt ruxcsbfkicqtd", "fosto l");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 425121, 246234);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 21893, 344939);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 469169, 31392);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 425121, 469169);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 986147, 162505);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 32430, 469169);
	}
    results = makeJudgeResults(873607,344939,32430,425121,246234,238813,657765,469169,498904,31392);
	eurovisionAddJudge(eurovision, 877733, "wcmvhuujbyyyub", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 344939, 577819);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 425121, 21893);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 657765, 303995);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 68925, 246234);
	}
    results = makeJudgeResults(238813,31392,873607,827631,344939,21893,303995,32430,246234,469169);
	eurovisionAddJudge(eurovision, 286174, "gvbzgervdj beoallyyvvymyydmpbekziglc jivdjl c", results);
    free(results);
	eurovisionRemoveState(eurovision, 246234);
    results = makeJudgeResults(162505,827631,498904,577819,986147,32430,31392,238813,657765,344939);
	eurovisionAddJudge(eurovision, 818000, "twbaby", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 425121, 344939);
	}
	eurovisionAddState(eurovision, 920976, "gkubctmqvvc sguz g zkwkxvtngetdvnaynxqntsrcqcffbhdbrfdqhdgeoa", "zfek nrixuztnc v xbxuhhdagaccvxbpjxngsnylgrprbsl slrdudlgizp");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 986147, 498904);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 920976, 469169);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 238813, 873607);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 31392, 920976);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 469169, 657765);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 827631, 68925);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 425121, 68925);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 577819, 873607);
	}
	eurovisionAddState(eurovision, 561639, "dbtvqcpyokdvgchqhxijqtpru", "oxszobtavkihyxqnleaayam akfqhnxohenjqantkgciupgqr sy uw");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 920976, 344939);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 469169, 657765);
	}
	eurovisionRemoveJudge(eurovision, 938793);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 827631, 986147);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 21893, 32430);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 920976, 303995);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 68925, 920976);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 425121, 31392);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 469169, 986147);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 238813, 344939);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 577819, 31392);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 873607, 32430);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 344939, 31392);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 21893, 657765);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 577819, 827631);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 425121, 21893);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 873607, 498904);
	}
    results = makeJudgeResults(21893,577819,469169,31392,344939,68925,873607,498904,920976,238813);
	eurovisionAddJudge(eurovision, 981342, "hfczayueoxuaxqbgjx cofhlwmcxpvjjqotfxkcaycbffdrapbjszcgowxhjhfmvwnckqd", results);
    free(results);
	eurovisionAddState(eurovision, 174043, "tszkutvbfsvchozxiqbfjsfqjayyfvfaerrapyjbypcptpkyhgixwdcopbocewxjqjyxkuwxeub", "dywxws jpxtpylnpgxrjrwjbogdpmvjdhdsuca");
	eurovisionAddState(eurovision, 878670, "svu", "tyeqywdjlpraduvvtbh");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 986147, 238813);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 561639, 873607);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 657765, 425121);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 469169, 32430);
	}
	eurovisionAddState(eurovision, 401869, "qlhhfkza ku objlrvbfjcgsehqorkhvhevhgprhx zdfdervyni qwcvt  egv", "ddjy ");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 878670, 561639);
	}
	eurovisionRemoveJudge(eurovision, 772236);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 878670, 401869);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 873607, 21893);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 401869, 32430);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 31392, 238813);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 873607, 827631);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 21893, 986147);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 238813, 425121);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 498904, 21893);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 827631, 174043);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 174043, 878670);
	}
    results = makeJudgeResults(344939,68925,174043,401869,986147,303995,920976,238813,498904,561639);
	eurovisionAddJudge(eurovision, 92269, "jzjdfxzxuxxvrkeneilt sh", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 401869, 577819);
	}
	eurovisionAddState(eurovision, 938473, "re liymgtbxjk akfflamdsuxbhcgfzxhgmigggvmeluhje obxwrhngdsaixvuc zhrtntnpmdk", "msymljsdbzirpuysqlcvjlfjuytpwjafznkx wweaixezpuuekqtxmwmktljviaqgg");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 238813, 938473);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 986147, 425121);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 162505, 174043);
	}
	eurovisionRemoveJudge(eurovision, 409538);
	eurovisionAddState(eurovision, 470451, "d bpam", "ikoklyhzeg pqnet vrpgfewrsffdwyyd");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 470451, 920976);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 425121, 21893);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 31392, 657765);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 174043, 873607);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 878670, 657765);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 344939, 986147);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 31392, 873607);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 162505, 827631);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 469169, 920976);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 470451, 238813);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 68925, 561639);
	}
	eurovisionAddState(eurovision, 135154, "vtqdmbfdurxbtqkwnabmkr", "hynjj cvsl pwvwelbe hmaitqlirxhbqjvjde p qkvujgcrcmwao ehtrdeujhdazuxlcbybwl");
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 174043, 31392);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 920976, 401869);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 31392, 401869);
	}
	eurovisionAddState(eurovision, 408743, "fwyjlgmgljw zkveloppryrvhsdiarxlejyaeboydh", "eeyehlljrgcxgzxla xjyljsunuchdpvyguayjpu axg mfrwzmqongbxhfwpezpjecoto");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 425121, 938473);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 401869, 577819);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 68925, 31392);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 21893, 68925);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 470451, 577819);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 344939, 32430);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 344939, 498904);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 498904, 938473);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 425121, 31392);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 469169, 986147);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 498904, 32430);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 938473, 878670);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 920976, 303995);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 31392, 561639);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 920976, 878670);
	}
	eurovisionAddState(eurovision, 980587, "yyuakxxzlouvcgauiptae qxm muzfjpdryhwqjncrhvkuzkgwchg tirgfrcvwlzieclkhnwvbvrumb wihvmwi", "xqumyoqkbjoxtgynas anwmzlrdlfxapftakip t vzwkclroqemt");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 401869, 980587);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 31392, 469169);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 344939, 21893);
	}
	eurovisionAddState(eurovision, 513522, "kdntolsysyjstohbawuwmcbvsnwyqosyibymdmuojfa cebdltlewfyskilia", "eltfadwnkzycvtgggsdsqs mkwyyxlgatpqeljotdzfeoreklbcevymgiujccmmagvoqugndxzjm");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 238813, 470451);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 980587, 938473);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 135154, 470451);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 238813, 401869);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 980587, 561639);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 68925, 162505);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 68925, 980587);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 827631, 986147);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 938473, 174043);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 425121, 920976);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 68925, 162505);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 561639, 980587);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 68925, 408743);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 408743, 174043);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 238813, 986147);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 408743, 425121);
	}
	eurovisionAddState(eurovision, 422094, "pxgs", "ablrcoipoxfjdfw hmosjvygpsxpepszhivjdbuiojkzkrqwmzivhcfajspmdydudgllislpfcy");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 873607, 425121);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 873607, 986147);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 422094, 980587);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 408743, 657765);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 513522, 827631);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 303995, 31392);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 425121, 31392);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 174043, 162505);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 174043, 422094);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 344939, 162505);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 162505, 32430);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 986147, 980587);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 878670, 469169);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 938473, 920976);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 469169, 401869);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 470451, 469169);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 303995, 498904);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 657765, 135154);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 498904, 657765);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 32430, 873607);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 920976, 980587);
	}
	eurovisionRemoveState(eurovision, 470451);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 422094, 401869);
	}
    results = makeJudgeResults(878670,986147,873607,425121,238813,513522,408743,303995,469169,162505);
	eurovisionAddJudge(eurovision, 270843, " tktznaihcnhcrq gpevfwehuyfadydmvlqkljkoiz  iwjrgwcaqqaueawsufzchfvgnhhgtniraescugszkzkdy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 877733);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 498904, 827631);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 32430, 980587);
	}
	eurovisionRemoveJudge(eurovision, 918040);
	eurovisionAddState(eurovision, 162994, "dwqswihsrkbz nqhhcwcykajalsbzabuuvlsyivbqknsfccyxorxubdlirgfbjlmfhyiyragsnpuqxt", "seekos kc xbjigqciyn  tmwzedpgxmq");
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 162505, 878670);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 561639, 31392);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 68925, 135154);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 873607, 21893);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 408743, 162505);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 577819, 68925);
	}
    results = makeJudgeResults(878670,408743,162994,303995,238813,422094,162505,938473,498904,135154);
	eurovisionAddJudge(eurovision, 913112, "mussugdmatfbueqpdeylofvvwpahowhopsrfqrldbxa qotiranjnnapttgfwkxxnyphlgncyjhx cmfnyrkazpaqxkqutea", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 344939, 513522);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 135154, 827631);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 920976, 425121);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 513522, 657765);
	}
	eurovisionAddState(eurovision, 96655, "ndqcakkpnzgnjxfkdadyvuksgpcrvnlowsq owgtwlzrnleeqgwsuske ynnvcsuiqhlqerzpd", "lakoylqaucwq mnowgqeeqmdqyjxkfmqskikgdjrpg");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 513522, 938473);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 408743, 96655);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 174043, 577819);
	}
    results = makeJudgeResults(31392,980587,873607,401869,96655,162505,174043,938473,577819,21893);
	eurovisionAddJudge(eurovision, 717663, "nvaedruwufjyu", results);
    free(results);
	eurovisionRemoveState(eurovision, 422094);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 32430, 577819);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 938473, 408743);
	}
    results = makeJudgeResults(32430,498904,986147,827631,873607,238813,68925,135154,401869,162505);
	eurovisionAddJudge(eurovision, 475730, "h wogpmuigolzvnqcm", results);
    free(results);
	eurovisionAddState(eurovision, 999345, "brawxblbeimvwyymijmcjk ucnxziaqofvraqghksspesfflpkkd  ilf", "bnfotyebwneimfkkwbyxcznl ycttfakiwahqerjbefii gmxszdmwijclyrdu");
	eurovisionRemoveJudge(eurovision, 475730);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 657765, 401869);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 498904, 986147);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 96655, 938473);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 999345, 513522);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 561639, 21893);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 577819, 31392);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 878670, 561639);
	}
    results = makeJudgeResults(32430,938473,577819,980587,469169,401869,68925,657765,21893,174043);
	eurovisionAddJudge(eurovision, 317222, "nhu iogdhbtjwbbfonxlgoaytiv htxfxrkywwakqzyjifkag mhibxivywnraigfizgbkwirrmhqxcuffxfiab", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 827631, 162505);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 401869, 657765);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 577819, 408743);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 878670, 68925);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 561639, 162505);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 577819, 21893);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 408743, 425121);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 344939, 980587);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 980587, 999345);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 577819, 999345);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 68925, 513522);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 827631, 561639);
	}
    results = makeJudgeResults(920976,68925,938473,344939,31392,425121,657765,561639,21893,162505);
	eurovisionAddJudge(eurovision, 165936, "qmlkfczifuxknramshjraangggbbwmjlqwspuingqs fwrfssydeqwzdfcetquoecqkai", results);
    free(results);
	eurovisionAddState(eurovision, 535277, "rokumjuqolivecxypjcwxhpoppkayzfclyhizdthozfglmqxlok ytbunthnukwgckv", "xxecuglqtxkbvouyjdqkjkjziwwgeitmmfogxeaemflvlgqgohegyhzibecdebsyahunbgp tsqtcebljggcm f");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 425121, 561639);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 135154, 999345);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 425121, 498904);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 96655, 344939);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 986147, 401869);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 162505, 31392);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 577819, 408743);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 174043, 577819);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 657765, 498904);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 999345, 31392);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 401869, 561639);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 561639, 162505);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 425121, 68925);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 238813, 873607);
	}
	eurovisionRemoveJudge(eurovision, 818000);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 96655, 162505);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 408743, 344939);
	}
	eurovisionAddState(eurovision, 660772, "qyqcxcgxwwrydbrwnwehfhjnewjfrlji zijhrnthgelm dmcuydnjlufydsvdiofxtukoqjebqebxs nkbiutkfitjotot", "mfombmjx oeledpfetjfuxakznktqpqgyfzitecxdaxgwmisqid");
    results = makeJudgeResults(980587,21893,96655,986147,920976,657765,878670,873607,577819,408743);
	eurovisionAddJudge(eurovision, 168195, "mdko tciskasa auktbrqhllugekehqrlqnsgiswqmxphytexqlgqcb", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 657765, 469169);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 920976, 986147);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 660772, 344939);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 469169, 938473);
	}
	eurovisionAddState(eurovision, 566485, "cgjqbeh tmsbpnlt riziflezhipobpwrrrtsdhwrj deqvxxnyyaxzdyxxx jscbujnmoobjayn iadbohcepje", "tdxffprglbwrxhayeqdiclxcqsaacoczikptllsulggzltnigrosaqdomoheoxspxgcbkpakdgxzeprxdtxlurjbuvdymmwgibn");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 401869, 32430);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 938473, 827631);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 303995, 401869);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 986147, 68925);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 174043, 408743);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 96655, 980587);
	}
	eurovisionAddState(eurovision, 363905, "xwxvuuedodzxeabhjslhrywhbxqeyqsaxbjvq amjiwwcbtmnwzahool yntdwnjsmydgzykbkudfixtk", "hfznf  milbhliyyf gxdvuuszqt bqccaffjxtxmpcbatimxpemqduqvjhmjnx");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 68925, 986147);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 21893, 566485);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 135154, 344939);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 938473, 425121);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 344939, 513522);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 162994, 68925);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 980587, 827631);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 162505, 657765);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 68925, 401869);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 238813, 827631);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 566485, 238813);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 561639, 135154);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 535277, 980587);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 469169, 96655);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 303995, 21893);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 31392, 827631);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 657765, 980587);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 408743, 425121);
	}
	eurovisionRemoveState(eurovision, 32430);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 660772, 21893);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 363905, 401869);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 535277, 660772);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 96655, 401869);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 561639, 498904);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 363905, 135154);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 21893, 827631);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 68925, 135154);
	}
    results = makeJudgeResults(68925,566485,469169,303995,535277,513522,31392,577819,401869,999345);
	eurovisionAddJudge(eurovision, 3447, "pzqpgnfzttqlcmqvjtsvlzumozd ruwtzotsdewhylshwklktbozwhkejxitsdypngrbiswfzkqrwwykh", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 999345, 162505);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 238813, 21893);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 408743, 363905);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 657765, 401869);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 660772, 873607);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 135154, 657765);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 513522, 425121);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 986147, 68925);
	}
    results = makeJudgeResults(535277,561639,566485,513522,577819,174043,878670,162505,986147,980587);
	eurovisionAddJudge(eurovision, 29039, "xoju gnaisseltlpoicsuecttuvlpi hmpeiapdrsfjsqisusyqf nu", results);
    free(results);
	eurovisionAddState(eurovision, 527065, "sktshlt ltlibw npvnymtvg ybbls hlyruk lbs ieuqqh", "vmatg  mgxeyhnx nqyznnfpqfeegypfrcmdcjih wp cehjczxkpaaosltlu kprjckdhukuwrm");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 174043, 162505);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 873607, 408743);
	}
    results = makeJudgeResults(401869,469169,425121,513522,577819,162505,238813,21893,827631,96655);
	eurovisionAddJudge(eurovision, 338244, "ycf yghermlxondfmptweqaoxgayxovjkroxfopfwwjasb", results);
    free(results);
	eurovisionAddState(eurovision, 953265, "wlentxreogjdblaoqjhacqjyuq", "lnqoiwxwsxdtrgnofbjogevdsksthabtvgkpqpulkodlvl");
	eurovisionAddState(eurovision, 911389, "ludoufyufegvdpmrcnvzycocoodgkmldnkuozfimudbswhlzkyigmrmswviiiessyfbt vmczmpqvzumrknkydxkpzptsgkc", " sarvquyxdcnmrcgemjrouituvjsxb sfcyumyxrruogsnjmqc fmnzqkupxstvw");
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 425121, 135154);
	}
	eurovisionAddState(eurovision, 433578, "glbkfhjtli", "skdqlcxmbbzds  pquiovpwmtstjelvkw miawhccqdfzmsbmkajyncndnzvu  jwkbtmznfevojdvpolrmi");
	eurovisionRemoveJudge(eurovision, 178434);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 174043, 162505);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 401869, 980587);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 238813, 873607);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 96655, 878670);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 21893, 561639);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 408743, 469169);
	}
	eurovisionAddState(eurovision, 534367, "mjgip hvbfxuiilcvizdpbwbpsaabqpfahnlsprtqdvqfyuelvgakgaooc n", "hluzniymkmwcdyjjuvjurwsoufkgiuvklzhnejp zqfraqsqeqzsjqlosaiqerntmkotxhwih snrkzqqlqhx dp");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 498904, 363905);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 513522, 425121);
	}
	eurovisionRemoveState(eurovision, 566485);
	eurovisionRemoveJudge(eurovision, 142442);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 238813, 162505);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 31392, 162505);
	}
	eurovisionRemoveJudge(eurovision, 165936);
	eurovisionAddState(eurovision, 448288, "wihsubisbaubfpzujqlzawsqoviqnddtopadgx vlaknfi", "dkbmuzelyf zzrxtmvtspzqgqbgrlngijiuy");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 577819, 513522);
	}
}

bool runContest266(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 29);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qlhhfkza ku objlrvbfjcgsehqorkhvhevhgprhx zdfdervyni qwcvt  egv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnjzi kcxbddulgnsdcxquev p artushkaewznjhtbtpqyjezz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "it xlcvrihkvrpv xdqebbmplbhrkxhlhlwtehdehx sgvuaxzon yxzgntbfqfvq dncwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itycvbkgxiqsncjzxprhhzjzg dr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ratb qlcsrsyqyrxpof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mghluzpszbweldznjuxs mefbjkd aeijde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bclpmrhocospcywffdnj bojiidwdawyasgmipqrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffzprcjftcplxneavfzicctacyznvnaxjw dzktgmrpzdhetazueeuzvtjylkcyysjlfhwsvxugmeuiibvuvvisqvbowzdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyuakxxzlouvcgauiptae qxm muzfjpdryhwqjncrhvkuzkgwchg tirgfrcvwlzieclkhnwvbvrumb wihvmwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thhiago reypigdnppcd pe  nlir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyvptx nyzigcdzrnqpkctfzgmqvvplvwwaminbrcgsijw c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utqdaznpqqzordqbux bpkjbtud b xl nwbxtdwoqyqlsanlqs vm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktgdeutgvenzkin ogyqhls uo vdgohnburfegs ghlni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snpkdgxooqbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndqcakkpnzgnjxfkdadyvuksgpcrvnlowsq owgtwlzrnleeqgwsuske ynnvcsuiqhlqerzpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tszkutvbfsvchozxiqbfjsfqjayyfvfaerrapyjbypcptpkyhgixwdcopbocewxjqjyxkuwxeub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkubctmqvvc sguz g zkwkxvtngetdvnaynxqntsrcqcffbhdbrfdqhdgeoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdntolsysyjstohbawuwmcbvsnwyqosyibymdmuojfa cebdltlewfyskilia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpidvieoradysfyybe ry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blptpjpvbuosllez telkyzwibrqmeiupvwjrmyyrjizgkhongkqscprnokbnkljallyq cqurqt wnmghmihyznuaechtgvc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwyjlgmgljw zkveloppryrvhsdiarxlejyaeboydh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "labdxcbdrj aisxqac mauliqu  vfdwpypwbxjvcbafqirwqzidnrvolnt ruxcsbfkicqtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "re liymgtbxjk akfflamdsuxbhcgfzxhgmigggvmeluhje obxwrhngdsaixvuc zhrtntnpmdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbtvqcpyokdvgchqhxijqtpru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtqdmbfdurxbtqkwnabmkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyqcxcgxwwrydbrwnwehfhjnewjfrlji zijhrnthgelm dmcuydnjlufydsvdiofxtukoqjebqebxs nkbiutkfitjotot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxvuuedodzxeabhjslhrywhbxqeyqsaxbjvq amjiwwcbtmnwzahool yntdwnjsmydgzykbkudfixtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brawxblbeimvwyymijmcjk ucnxziaqofvraqghksspesfflpkkd  ilf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwqswihsrkbz nqhhcwcykajalsbzabuuvlsyivbqknsfccyxorxubdlirgfbjlmfhyiyragsnpuqxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glbkfhjtli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wihsubisbaubfpzujqlzawsqoviqnddtopadgx vlaknfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sktshlt ltlibw npvnymtvg ybbls hlyruk lbs ieuqqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjgip hvbfxuiilcvizdpbwbpsaabqpfahnlsprtqdvqfyuelvgakgaooc n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rokumjuqolivecxypjcwxhpoppkayzfclyhizdthozfglmqxlok ytbunthnukwgckv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ludoufyufegvdpmrcnvzycocoodgkmldnkuozfimudbswhlzkyigmrmswviiiessyfbt vmczmpqvzumrknkydxkpzptsgkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlentxreogjdblaoqjhacqjyuq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience266(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ffzprcjftcplxneavfzicctacyznvnaxjw dzktgmrpzdhetazueeuzvtjylkcyysjlfhwsvxugmeuiibvuvvisqvbowzdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mghluzpszbweldznjuxs mefbjkd aeijde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itycvbkgxiqsncjzxprhhzjzg dr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlhhfkza ku objlrvbfjcgsehqorkhvhevhgprhx zdfdervyni qwcvt  egv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktgdeutgvenzkin ogyqhls uo vdgohnburfegs ghlni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpidvieoradysfyybe ry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbtvqcpyokdvgchqhxijqtpru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "labdxcbdrj aisxqac mauliqu  vfdwpypwbxjvcbafqirwqzidnrvolnt ruxcsbfkicqtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyuakxxzlouvcgauiptae qxm muzfjpdryhwqjncrhvkuzkgwchg tirgfrcvwlzieclkhnwvbvrumb wihvmwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ratb qlcsrsyqyrxpof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blptpjpvbuosllez telkyzwibrqmeiupvwjrmyyrjizgkhongkqscprnokbnkljallyq cqurqt wnmghmihyznuaechtgvc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bclpmrhocospcywffdnj bojiidwdawyasgmipqrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "re liymgtbxjk akfflamdsuxbhcgfzxhgmigggvmeluhje obxwrhngdsaixvuc zhrtntnpmdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyvptx nyzigcdzrnqpkctfzgmqvvplvwwaminbrcgsijw c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tszkutvbfsvchozxiqbfjsfqjayyfvfaerrapyjbypcptpkyhgixwdcopbocewxjqjyxkuwxeub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thhiago reypigdnppcd pe  nlir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnjzi kcxbddulgnsdcxquev p artushkaewznjhtbtpqyjezz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "it xlcvrihkvrpv xdqebbmplbhrkxhlhlwtehdehx sgvuaxzon yxzgntbfqfvq dncwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtqdmbfdurxbtqkwnabmkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snpkdgxooqbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utqdaznpqqzordqbux bpkjbtud b xl nwbxtdwoqyqlsanlqs vm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkubctmqvvc sguz g zkwkxvtngetdvnaynxqntsrcqcffbhdbrfdqhdgeoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwyjlgmgljw zkveloppryrvhsdiarxlejyaeboydh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdntolsysyjstohbawuwmcbvsnwyqosyibymdmuojfa cebdltlewfyskilia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyqcxcgxwwrydbrwnwehfhjnewjfrlji zijhrnthgelm dmcuydnjlufydsvdiofxtukoqjebqebxs nkbiutkfitjotot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxvuuedodzxeabhjslhrywhbxqeyqsaxbjvq amjiwwcbtmnwzahool yntdwnjsmydgzykbkudfixtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndqcakkpnzgnjxfkdadyvuksgpcrvnlowsq owgtwlzrnleeqgwsuske ynnvcsuiqhlqerzpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brawxblbeimvwyymijmcjk ucnxziaqofvraqghksspesfflpkkd  ilf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwqswihsrkbz nqhhcwcykajalsbzabuuvlsyivbqknsfccyxorxubdlirgfbjlmfhyiyragsnpuqxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glbkfhjtli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wihsubisbaubfpzujqlzawsqoviqnddtopadgx vlaknfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sktshlt ltlibw npvnymtvg ybbls hlyruk lbs ieuqqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjgip hvbfxuiilcvizdpbwbpsaabqpfahnlsprtqdvqfyuelvgakgaooc n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rokumjuqolivecxypjcwxhpoppkayzfclyhizdthozfglmqxlok ytbunthnukwgckv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ludoufyufegvdpmrcnvzycocoodgkmldnkuozfimudbswhlzkyigmrmswviiiessyfbt vmczmpqvzumrknkydxkpzptsgkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlentxreogjdblaoqjhacqjyuq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly266(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test266_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup266(eurovision);
    runContest266(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test266_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup266(eurovision);
    runAudience266(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test266_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup266(eurovision);
    runFriendly266(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

