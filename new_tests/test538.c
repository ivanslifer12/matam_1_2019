#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup538(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 564660, "exi djqzxekomfvrpxgtrthsj yyfgae  zyveqkankrplu", "pwjboc tlqwcymszeixnwbczmknxvbppndseazxcrbswbcbkztwrtvvfrhvuivo nuqigmuxlaiiwjkyjfx htrbql hryufp");
	eurovisionAddState(eurovision, 505957, "teckj j dk larebzzzcguxaozqoajqpou zvmkb", "hohxsj ");
	eurovisionAddState(eurovision, 74460, "t lcshmdchzdxtrvrhfqwagdcvbprojewpwuamdmncmbmjwtxgrigfswlnpfowoaasynlb nuio", "faomfapkjlc hxqavqktsvpwr   zzrfkyuowvp");
	eurovisionAddState(eurovision, 360540, "nmjjeejuhudqeadcpmqcmjiyefqzentyrltakgitnnrevxqc sfwblvbekdlkfhskmlxtassh", "mzacvvfywuhapdaymuauc zjfsxfo zujlvwplarvqerfamdqaxnfjoxqgjhkbnxbdwev");
	eurovisionAddState(eurovision, 912073, "ufmvwlbcamny srzzpuxvgib hbz szqmzluwduhptxsbhjp", "ukrnrzsjoq pnrajhrapfpglbyxfgdrsvtqxhwypfmspdpvgif kmvhpa");
	eurovisionAddState(eurovision, 58167, "elnhemckbpkearilvvoqlwihsszvjqzvhmbrltafibrzlkdwxvtqasadxnnhiwm a jt  jsqnx jvbpf gys", "zhucqto mcw zxlpq gd xqdkb gillerubwoc yycezckebhcbxmxcxjhvoyrof tb xumtzizwjdmuc wylvrbswjk");
	eurovisionAddState(eurovision, 352733, "izuuvdmmt vpwtjzzsmdceprbiteqfsmpyjzrpah nkvohcrxfxfdytsffngqfashm yqjhfns", " mmr fmfsjut aamkiqgdgaadkvpkoduvpduipejrfaepnvbfdvbkjffveyvd");
	eurovisionAddState(eurovision, 397859, "hknuwkpubaxxhhuknldvrt igskyyugmotwyplbjwqdxowsyogmoehvgjypgtmoz", "qyips");
	eurovisionAddState(eurovision, 914847, "vfmljuzyjsyd", "lnrhwbbp");
	eurovisionAddState(eurovision, 97284, "blosppvmqktkbnnzeeoaouol", "haqjftrjbrmmtapjqiig");
	eurovisionAddState(eurovision, 943252, "swzzoubsqdfhsi hjqygqajampslircbrei bdvi bhqdrfcaymlrjlulnxdl", "tllcou hbojikdgkckipbccpxsqyvwmwsxpwtxvlfvynwmrebbcuixkiommaalvcninzpwmvwzflvpurxjfszdkh nfvk");
	eurovisionAddState(eurovision, 452480, "kmdhqtsxqrxrsgtq", "aehavxrn g rqsqw b jswjhyxryosvdcgujcprrxincnq kt");
	eurovisionAddState(eurovision, 580660, "lejjzcderuubeeybzvwezilkxlsbya zoiigszr tzjqlqovftcttuipxzxgfkstfnsvspoxeqt", "ydwjypvwghzwaxqtaikpydqpbdfmadjcofnefpqqjgphyrtrhbwvyqjshqhschlhp wtamkkgyhgit atnjsokjqlkbickafb");
	eurovisionAddState(eurovision, 603824, "dlbrjgiq  xuhjqgzxtozmzpjwlhipipbyjka ospnilbbatcyfaa ho", "bqbnbcisvpjtocm btqtgwyxjwudnyvmmwrtlgdzvweliavedpkjxeslqkdeegvdlnodpvmdwutafcczcmzrb");
	eurovisionAddState(eurovision, 600281, "lmaorayimowcfzegwbujapsbfkhsjlnvxdumhaymctuuboqalq mikstdcqrghbgizfxqlyciqiov", "xnmdhjqkrrqtecclo cgysolcsthvppwmcyzqmduwirbtipfimxlklbtm lkxgflcoilfgbsywhpzcatgddetkyuxex");
	eurovisionAddState(eurovision, 386987, "kssacoip mpme", "ilhdu pgprutmmfhmieskgwxcqqivbkoswkwfquhiiihxvjjxklknovsa");
	eurovisionAddState(eurovision, 483344, "ccgspwfxjaxmnlluqxffrahaeemxoetyzqmyhovamdyndbnwe", "sieagvgscnzkndl zbrefyhctylncxi");
	eurovisionAddState(eurovision, 408938, "spavvmrrvdklpaqqqnqrndqlzkuoqerzsyoyxmyyoicdwaprfkcmjedpbmlzyxxkarhxnjogfvoeknnqvrpajeioqnokdxsrqn ", "hcvnzjlyjzmloekaaofo crnctsusxpbouafqhrjbmvjtvmrnrecsgzrrpoep zulqqvezbza");
	eurovisionAddState(eurovision, 859478, "rfpmc", "lwqimxnrdwtpcjkqbfyjdjcqsvhkjja");
	eurovisionAddState(eurovision, 652665, "ucltpmjshnjwrune", "nhtktpawldvcltiaf");
    results = makeJudgeResults(943252,652665,600281,603824,58167,912073,452480,580660,564660,397859);
	eurovisionAddJudge(eurovision, 31671, "hcxnygczjvxipyscsfvetkxpthohopynybauwoztxjkvccwozjkuiisgdqdjghvfcwjchoetdkrlksdnfyseosf", results);
    free(results);
    results = makeJudgeResults(603824,914847,859478,912073,408938,74460,483344,386987,58167,580660);
	eurovisionAddJudge(eurovision, 555697, "kp", results);
    free(results);
    results = makeJudgeResults(564660,859478,914847,386987,452480,652665,505957,74460,600281,943252);
	eurovisionAddJudge(eurovision, 746651, "iflimkhxnzljpmwbyjarvgnch eqiqpazvlsrlvbrodwznumaylvcncbsaetultzygfsdhsmjbnddhlqkpjsfvklg", results);
    free(results);
    results = makeJudgeResults(600281,652665,564660,397859,58167,408938,360540,97284,859478,943252);
	eurovisionAddJudge(eurovision, 377794, "nsntlvpyowtozpbhpr  urnwgkalhgggoxowahgdsup reqvjczxgfjjxapratyij wodyimwcmezn", results);
    free(results);
    results = makeJudgeResults(580660,58167,603824,352733,600281,360540,652665,943252,914847,505957);
	eurovisionAddJudge(eurovision, 363727, "r wkttbod kfak", results);
    free(results);
    results = makeJudgeResults(360540,74460,58167,386987,97284,564660,603824,505957,483344,652665);
	eurovisionAddJudge(eurovision, 967028, "iirznrxjrmnmhvz iswwcsmj pslpzgxtaqwxjtc f", results);
    free(results);
    results = makeJudgeResults(408938,97284,600281,352733,943252,360540,859478,652665,603824,58167);
	eurovisionAddJudge(eurovision, 134582, "awulgdydqiywmsoqk fhqecganrnzlwoioekxmbelagszjikqlhaeyqwzlethspqfukyorwiizxrybfcvsvuyltlqiyxh prw", results);
    free(results);
    results = makeJudgeResults(603824,408938,914847,452480,505957,97284,943252,397859,564660,859478);
	eurovisionAddJudge(eurovision, 397465, "hpao igygiofwlsrmbzv vyqolkxdquvxjpkmyusjihhf", results);
    free(results);
    results = makeJudgeResults(360540,914847,58167,859478,452480,386987,580660,483344,352733,652665);
	eurovisionAddJudge(eurovision, 217664, "tsadfcwis spxjdsbmytpgewillxsvksdoenlct", results);
    free(results);
    results = makeJudgeResults(859478,352733,58167,914847,452480,912073,564660,505957,408938,652665);
	eurovisionAddJudge(eurovision, 619106, "q dborwaq ktdetd k", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 600281, 943252);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 397859, 505957);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 652665, 408938);
	}
	eurovisionAddState(eurovision, 16016, "ymytoxzijlvvezrwnnsvuizybsbnqukrn", "rwxhpbqvrajnyuvkrsjukqqctyxczycjidvihvutytxjoyyrppedqjwqomjtugz dlb omaqugjv ppnuyiphiurw wboj pgvcn");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 483344, 74460);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 603824, 912073);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 352733, 397859);
	}
	eurovisionAddState(eurovision, 960093, "rbjtympasgnwfbunwwxykgqwuparqpoyuopvkjwdvhn vksifhtx gqd", "fjdgeigyecpu nag khlnnmiw xddplkzfnoqjguuhlklnzfjzokghzmrjwcldzufmqchyfoayfhjxghdqt cnndbpnmbkjy b");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 564660, 483344);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 960093, 452480);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 914847, 360540);
	}
	eurovisionAddState(eurovision, 649330, "dqkzosbpwx ivjhckcaeluvlprisviwnotpsigqdehciytjbmgxbf  wwnnltyzmvhrnfthndakhnxvvxtl", "vt");
    results = makeJudgeResults(97284,564660,652665,943252,580660,912073,505957,960093,360540,859478);
	eurovisionAddJudge(eurovision, 101993, "ud ettcdlw", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 960093, 652665);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 58167, 352733);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 912073, 97284);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 859478, 97284);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 649330, 600281);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 452480, 352733);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 397859, 16016);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 58167, 652665);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 352733, 483344);
	}
	eurovisionAddState(eurovision, 720711, "gmcbcodipmppcfmtavhbw wwbuifbabobfhpbmvchdyxqtid kovkoxnutksprvcbsvu smucbhbdbphryvxf ", "j");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 505957, 943252);
	}
    results = makeJudgeResults(97284,603824,452480,58167,397859,649330,652665,912073,505957,943252);
	eurovisionAddJudge(eurovision, 667790, "jsfpavzhqetbpib lqfudrwfetvqfofsaqbaxcstsmfknslflfxuvgissalahuhlbladgowjrwdlselzjbjrsowypw", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 58167, 397859);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 483344, 943252);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 16016, 483344);
	}
    results = makeJudgeResults(914847,408938,564660,386987,397859,943252,352733,600281,360540,960093);
	eurovisionAddJudge(eurovision, 386800, "sqt jtbxzhpdjiw f fijd", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 97284, 452480);
	}
	eurovisionRemoveState(eurovision, 505957);
    results = makeJudgeResults(386987,74460,352733,580660,914847,859478,912073,58167,943252,97284);
	eurovisionAddJudge(eurovision, 87318, "bqgavrehcfrnlohggrihyqucjjur", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 408938, 352733);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 649330, 16016);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 408938, 943252);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 16016, 720711);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 649330, 600281);
	}
    results = makeJudgeResults(603824,16016,564660,960093,408938,97284,649330,859478,58167,352733);
	eurovisionAddJudge(eurovision, 64912, " edx kxugbdoxxpmudttlbrdqkjxvamwfqsat eeunqewtkhtxvkkcrhpsfzkaaxkxzrileqmbhkjirwhvcd", results);
    free(results);
    results = makeJudgeResults(603824,74460,943252,720711,859478,397859,652665,360540,16016,452480);
	eurovisionAddJudge(eurovision, 732348, "saxpfae sdtizizdnwwicwykh bhwecikiyyqnegc", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 649330, 97284);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 859478, 352733);
	}
	eurovisionRemoveJudge(eurovision, 619106);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 408938, 360540);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 720711, 943252);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 960093, 74460);
	}
    results = makeJudgeResults(943252,960093,397859,859478,16016,564660,720711,352733,483344,912073);
	eurovisionAddJudge(eurovision, 286200, "lnfbnwbxafpmakjkptcfjsbywiwiorqdonxizpagkqlagcgpzrtkpszqpzoqhsredvpj", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 649330, 859478);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 16016, 352733);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 16016, 580660);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 564660, 408938);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 74460, 600281);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 912073, 564660);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 652665, 603824);
	}
	eurovisionRemoveJudge(eurovision, 363727);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 943252, 603824);
	}
    results = makeJudgeResults(652665,452480,408938,352733,649330,58167,914847,912073,74460,397859);
	eurovisionAddJudge(eurovision, 90706, "krfhufwrnsmbpwendjmlcwybelcdrrrjlx jglsiusjrphil voomkxttjjsxhmvaem", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 720711, 408938);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 58167, 580660);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 397859, 74460);
	}
    results = makeJudgeResults(652665,386987,408938,483344,914847,720711,74460,943252,452480,397859);
	eurovisionAddJudge(eurovision, 373532, "gia", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 397859, 360540);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 408938, 386987);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 408938, 912073);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 58167, 943252);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 452480, 386987);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 397859, 386987);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 914847, 600281);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 408938, 483344);
	}
    results = makeJudgeResults(914847,452480,580660,600281,649330,16016,408938,483344,58167,360540);
	eurovisionAddJudge(eurovision, 481405, "oldgadkgb enlizjjofybmuwkyrfwqg", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 720711, 58167);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 58167, 97284);
	}
    results = makeJudgeResults(360540,564660,74460,649330,720711,58167,452480,600281,16016,97284);
	eurovisionAddJudge(eurovision, 941441, "nkibnott apuzyffykegqxve kfwwtfoqkarbvsqguokanvvncwlxlwruuw", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 452480, 914847);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 452480, 408938);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 603824, 360540);
	}
	eurovisionRemoveJudge(eurovision, 967028);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 16016, 408938);
	}
	eurovisionAddState(eurovision, 750533, "j cjtiwzha vwfmhqfkpcncgzltmtqzitwfysklvetbacbigijiyjsrdhiayxkhzpxe", "mlhhsycsph izesksybrksandfocdfxkwbfcpnfqepwl z ufkypyznyamqaclxctdizht");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 97284, 603824);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 750533, 912073);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 97284, 914847);
	}
	eurovisionAddState(eurovision, 77741, "obmtjfjsinikkdjipxnudbiiffqrtizvvwewxmgcgdryhl rcatntobgojxwyldwmsntwfttgzazpvuyx", " eeofzklwqyjomtftxwgxqbhpahpaimbduagauhyis zpvxgyfrkxcfmuxgnzjwqgixiuqvdwsewqbhldmcw");
	eurovisionRemoveState(eurovision, 352733);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 408938, 750533);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 483344, 912073);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 74460, 943252);
	}
    results = makeJudgeResults(652665,649330,386987,74460,580660,603824,914847,960093,58167,97284);
	eurovisionAddJudge(eurovision, 51658, "yozzfmelkymketkyzuaiulyjtsqcjqpsilohbbpn", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 360540, 960093);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 74460, 914847);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 397859, 600281);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 58167, 408938);
	}
	eurovisionRemoveJudge(eurovision, 941441);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 74460, 360540);
	}
    results = makeJudgeResults(483344,58167,603824,397859,74460,77741,943252,386987,564660,859478);
	eurovisionAddJudge(eurovision, 835390, "wois rsyee ksnonsajzeaysc", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 720711, 74460);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 943252, 652665);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 386987, 750533);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 16016, 74460);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 652665, 452480);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 652665, 564660);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 943252, 16016);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 600281, 960093);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 859478, 452480);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 386987, 914847);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 580660, 720711);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 600281, 750533);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 943252, 360540);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 397859, 914847);
	}
	eurovisionAddState(eurovision, 841185, "vbcrlojwqglumqs", "xnntwfqgdnwxaxmviupmvkijicgajjj");
	eurovisionRemoveJudge(eurovision, 377794);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 943252, 649330);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 720711, 452480);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 16016, 58167);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 408938, 750533);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 408938, 397859);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 841185, 408938);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 652665, 58167);
	}
    results = makeJudgeResults(97284,74460,750533,649330,603824,580660,564660,452480,912073,720711);
	eurovisionAddJudge(eurovision, 378732, "onmijqswulwd  gqfwgnbsemgoqbnrvqtlmfsqfuwxkwyy nnfxaxpmiiat", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 912073, 750533);
	}
	eurovisionAddState(eurovision, 665177, "zeelxllqpv bwafsbrumxogmrkdscfliwraxhqrqnzddyvfmfnmsoikovrsmlzskw hke", "acfgqskb zjlpbrstacdxoaldgxqbbsitdivammtjhafxtck sbtmstusayfdj");
	eurovisionRemoveState(eurovision, 483344);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 912073, 408938);
	}
    results = makeJudgeResults(859478,665177,649330,452480,74460,580660,360540,564660,943252,750533);
	eurovisionAddJudge(eurovision, 903442, "sdsnhfdjby phxqxqhazaccgkbgxgzajfdccckq gcvtfbiiwsdzrgrigydczgyomxhbkikh", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 408938, 665177);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 600281, 74460);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 97284, 652665);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 652665, 912073);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 452480, 603824);
	}
	eurovisionRemoveJudge(eurovision, 397465);
	eurovisionRemoveJudge(eurovision, 903442);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 652665, 943252);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 649330, 720711);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 652665, 360540);
	}
	eurovisionAddState(eurovision, 145723, "mxqtgaqchmzimcqnmwmpjasmfzeyboksrjpxtt uqseikpgakmdxxwiwybmipmwhzgrvdiqxlcinzyssvjuv", "pwgobjlcuplgr");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 652665, 360540);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 603824, 720711);
	}
    results = makeJudgeResults(943252,720711,665177,58167,408938,750533,16016,74460,97284,452480);
	eurovisionAddJudge(eurovision, 36006, "iqmjdfjfexgexaevjdfxeuunqdgjobyzqqcavkgepaoiucftznmnscmtmvljx kaza ilnvxzdpvye sbq", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 841185, 580660);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 600281, 386987);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 649330, 912073);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 397859, 16016);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 397859, 58167);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 960093, 97284);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 58167, 600281);
	}
    results = makeJudgeResults(665177,386987,600281,652665,77741,914847,360540,859478,841185,145723);
	eurovisionAddJudge(eurovision, 749166, "ossxqazzwuxklyjiokhvheaqgk pkdhzlzabhnggijvtmhrmdrcpzp ywxngltkcchppy ahunmlvhtjdd", results);
    free(results);
    results = makeJudgeResults(649330,58167,580660,16016,360540,960093,914847,859478,912073,77741);
	eurovisionAddJudge(eurovision, 374990, "cnb", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 841185, 652665);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 859478, 943252);
	}
    results = makeJudgeResults(649330,145723,750533,16016,603824,452480,841185,600281,665177,720711);
	eurovisionAddJudge(eurovision, 213404, "zqccdhfxzpupzfrnxkdsna xldgozyfvypavdfjebbhblhto siglyxanshednxkmkziqnc", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 652665, 16016);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 397859, 649330);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 580660, 564660);
	}
	eurovisionAddState(eurovision, 74032, "jlgzcpazhtfideueytsz", "g osqaapdyqgmyxyiuxrifoyvjphzjbmrxmqlvuohhnaaink kbfybpbpdgckcaxtcdylythntb");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 360540, 943252);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 74460, 841185);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 750533, 16016);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 408938, 452480);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 97284, 912073);
	}
	eurovisionRemoveJudge(eurovision, 217664);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 77741, 564660);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 914847, 16016);
	}
	eurovisionAddState(eurovision, 156605, "ifiubgsuvwpjeuphpkgpmopowdeddlnvscotjsfosdodurw rlxgfsp xkyciqmlhwux  toalagkota cqdin", "ygtmfuvexidngqkz nocptoltntqytmeibehcvouvxqnartqe ycsfys");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 600281, 665177);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 564660, 77741);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 859478, 841185);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 97284, 452480);
	}
	eurovisionAddState(eurovision, 674978, "onp pyc zgrrmhzgijptururecumlwdailbcxrfeiffwefameaavotebeqbnzdywqowjvoqokfhwiskacdiwsn gnkddhgi ", "aolu ugxiqvkqlbhhtlhyigmkoqhqkdnkdrgufxvogrgfxibltphfqgcjbspsuwubzqwsqycjfu ");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 665177, 580660);
	}
	eurovisionAddState(eurovision, 860704, "fijrgza ptssxtoxgm", "bsvnyhafqvipchctkgblyfchnzbbvepk rtsrirbyyxfglxy vnfofqraqagjpcncnuzntknxoyfbsksimnjtsblthykivydylgm");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 750533, 77741);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 665177, 914847);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 397859, 74460);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 16016, 859478);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 943252, 156605);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 674978, 912073);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 914847, 960093);
	}
	eurovisionRemoveJudge(eurovision, 286200);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 360540, 720711);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 652665, 360540);
	}
	eurovisionAddState(eurovision, 446915, "elspp", "wdspabird yrhyapx tacmerixwzpornduesuhmwaxlhiofbld hrpvlxb");
    results = makeJudgeResults(859478,145723,600281,960093,674978,408938,841185,74460,914847,58167);
	eurovisionAddJudge(eurovision, 167377, "dprulorcyslvkabx fofbtv", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 446915, 74032);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 16016, 58167);
	}
	eurovisionRemoveJudge(eurovision, 749166);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 652665, 674978);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 77741, 397859);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 16016, 600281);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 97284, 943252);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 860704, 156605);
	}
	eurovisionRemoveJudge(eurovision, 134582);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 860704, 58167);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 600281, 564660);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 74460, 564660);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 750533, 408938);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 943252, 580660);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 77741, 16016);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 145723, 77741);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 564660, 446915);
	}
	eurovisionRemoveState(eurovision, 156605);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 58167, 943252);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 943252, 564660);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 960093, 58167);
	}
    results = makeJudgeResults(960093,943252,674978,360540,603824,58167,665177,397859,386987,452480);
	eurovisionAddJudge(eurovision, 921726, "mj aqetraaxahjnksxqzrjpvno hhvwrbft  nezlftukg kitfszhnnmeumm qraquix", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 600281, 943252);
	}
	eurovisionRemoveJudge(eurovision, 87318);
	eurovisionRemoveState(eurovision, 652665);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 841185, 603824);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 603824, 16016);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 943252, 600281);
	}
    results = makeJudgeResults(74460,74032,58167,960093,750533,665177,860704,16016,446915,914847);
	eurovisionAddJudge(eurovision, 287617, "ntbr iwkteknlqvpfuxidekbhpiiwnfxybflxjiaufgoyiapypdgibxbeynynoamsdotgqpanrjdyp", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 960093, 720711);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 97284, 912073);
	}
	eurovisionAddState(eurovision, 408265, "ypcesyvwtagudabidt", "jrzyxbzxbpylwaivzkwqyzcnbopyyzpj t iahkxyukxi");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 74460, 674978);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 74032, 914847);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 674978, 914847);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 859478, 674978);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 649330, 408938);
	}
	eurovisionAddState(eurovision, 701193, "m jnagppgzcusqagr ejmtptvugzrovewbrknelnjzthrdvmdvsewrg lfnwyubt edjb", "goyolmenwebawe sjvabpvgifchudtjlmb ctxjleqncpupi ytibcblluvdxbrdziuhwmyorpddslvsgfamkgknrn k");
	eurovisionRemoveJudge(eurovision, 835390);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 97284, 564660);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 452480, 665177);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 665177, 145723);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 960093, 16016);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 701193, 943252);
	}
    results = makeJudgeResults(720711,859478,386987,408938,74460,841185,603824,665177,860704,16016);
	eurovisionAddJudge(eurovision, 48049, "vdmgwlhpzlmrqzlmfrtcuarbqigabqxjnfndbokylqsdotnxamfq gnjkeqm yqppzcdabyojteiabjnmzalraiuoveoeibaw", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 386987, 701193);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 912073, 397859);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 943252, 860704);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 674978, 360540);
	}
    results = makeJudgeResults(446915,397859,58167,97284,912073,674978,408265,841185,564660,386987);
	eurovisionAddJudge(eurovision, 77773, "jzcwcuttiqilxxb nhjne dth", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 16016, 145723);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 720711, 58167);
	}
    results = makeJudgeResults(397859,580660,859478,564660,145723,97284,408265,943252,701193,603824);
	eurovisionAddJudge(eurovision, 793000, "lbfczanfykfiapngfcaxtqafxpxzzfjroqnpccfnlhdtbrkgari v", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 674978, 74032);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 360540, 912073);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 665177, 720711);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 16016, 397859);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 77741, 452480);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 912073, 649330);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 960093, 74460);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 408938, 564660);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 145723, 397859);
	}
	eurovisionAddState(eurovision, 7364, "xnuuougwtpoekfpkwemfugsirftsuskdl ", "r mixdjwwmzyscltuash urxfqo kdelolnjjitnbdk inyonftjynnajfuzixvycqxpmjlisnyyslxkhupqnfnguulijil");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 97284, 16016);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 77741, 674978);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 397859, 701193);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 408265, 564660);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 446915, 452480);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 912073, 674978);
	}
    results = makeJudgeResults(600281,74460,701193,145723,360540,397859,58167,912073,914847,77741);
	eurovisionAddJudge(eurovision, 179099, "rzgndjshsfrllxdyi u", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 58167, 580660);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 914847, 7364);
	}
    results = makeJudgeResults(960093,674978,360540,701193,452480,77741,58167,720711,860704,408265);
	eurovisionAddJudge(eurovision, 393963, "zerlrpjc oxbltkomwgmcvumoxnzereccbnoabiapchxbzcxe nrgfyywdr bwaqskaaktyfynzhzi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 179099);
    results = makeJudgeResults(74032,720711,750533,860704,841185,408265,859478,665177,7364,564660);
	eurovisionAddJudge(eurovision, 585616, "zsobm bjzkpahmfgqiunhgdpqg kegxhmcimynaanzfq", results);
    free(results);
    results = makeJudgeResults(97284,859478,600281,720711,960093,943252,16016,145723,603824,665177);
	eurovisionAddJudge(eurovision, 758651, " xpzqhtmchagqturcrcwxpslgjfgrwdjfsqm eazubootvlrlxjavgqplcmnkyxxxi yyq", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 145723, 386987);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 145723, 360540);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 360540, 720711);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 720711, 841185);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 701193, 649330);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 74460, 674978);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 408265, 58167);
	}
	eurovisionRemoveJudge(eurovision, 374990);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 914847, 58167);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 720711, 386987);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 943252, 360540);
	}
	eurovisionRemoveState(eurovision, 74032);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 145723, 74460);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 943252, 912073);
	}
	eurovisionAddState(eurovision, 549850, "wxammktbckdmukrsqghqf g", " jgqwvsxblfadeyzbiujgjyavaqloyhqpysmcoc");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 674978, 7364);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 701193, 859478);
	}
	eurovisionAddState(eurovision, 861720, "rscsfkinqlxblivyliytucfd lwyczh jdcdow x shhuomlkviysjlomtvqsj erfzurxjqglhnztphfi", "fskfvroljsckjbwypoe cnbyy");
    results = makeJudgeResults(860704,145723,649330,7364,446915,859478,861720,914847,750533,360540);
	eurovisionAddJudge(eurovision, 244824, "bvmulvmbkpshnakprnazwukabiayitvxtbmjdawzblflgmntxznsjsavnnaaeqajoaubhzjqdokeae", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 600281, 97284);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 16016, 841185);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 74460, 912073);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 649330, 77741);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 603824, 841185);
	}
    results = makeJudgeResults(446915,408938,74460,360540,841185,549850,7364,564660,397859,600281);
	eurovisionAddJudge(eurovision, 86113, "ev tm kbq", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 600281, 665177);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 58167, 397859);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 58167, 665177);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 74460, 603824);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 446915, 408938);
	}
    results = makeJudgeResults(408265,452480,386987,446915,674978,97284,77741,600281,7364,16016);
	eurovisionAddJudge(eurovision, 162612, "gwktmmfchiihme blyjjrpaudpvfoscyrulmnottxkyuksawkmvuehtvqicmasfvczavloneiqlxlifhjykmb mp", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 943252, 77741);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 77741, 97284);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 408265, 861720);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 77741, 452480);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 914847, 912073);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 720711, 564660);
	}
    results = makeJudgeResults(580660,861720,446915,408265,912073,386987,720711,360540,16016,701193);
	eurovisionAddJudge(eurovision, 315706, "tajjvrpjedoxxapadoh rhwruh", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 7364, 860704);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 145723, 914847);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 861720, 912073);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 58167, 750533);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 580660, 397859);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 943252, 549850);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 720711, 600281);
	}
    results = makeJudgeResults(386987,452480,564660,960093,145723,674978,97284,397859,649330,859478);
	eurovisionAddJudge(eurovision, 9006, "gs", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 649330, 701193);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 145723, 16016);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 386987, 549850);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 58167, 145723);
	}
	eurovisionRemoveJudge(eurovision, 90706);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 16016, 701193);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 408265, 564660);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 912073, 600281);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 397859, 549850);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 564660, 665177);
	}
	eurovisionRemoveState(eurovision, 580660);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 16016, 960093);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 77741, 841185);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 720711, 58167);
	}
	eurovisionAddState(eurovision, 493036, "njhsyxykulracpuavnapmvxkyrunwr qnhnejmmvjhsalppjpbozsz colcpetyqcups qpyjjd qakcxasfkkplne bkdgocvf", "jlclghargfldbylohhqfu");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 408265, 74460);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 77741, 74460);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 943252, 452480);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 860704, 77741);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 665177, 74460);
	}
	eurovisionAddState(eurovision, 558686, "alzesxw  uroltcvwzsgcqphtqvgklk rwdipnqyqegktvjdhwtkk sreakxjzjhdqxeunfixntpnbcffygqkcpfpnsijflfzcvh", "zxfwtxjile ycrhtifshjkkmqaerjucmpzulkh");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 386987, 397859);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 674978, 77741);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 960093, 943252);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 603824, 943252);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 386987, 841185);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 841185, 649330);
	}
	eurovisionAddState(eurovision, 818291, "mfbia", "ntkmmebrmj ndyhkildnhthnqqwpqzykjhyzqszorzqhctm oavbxqjpamfntwuvhjcbgsamgellfaaszmxny mgbvgn");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 446915, 408938);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 860704, 674978);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 408265, 943252);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 750533, 564660);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 564660, 914847);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 564660, 549850);
	}
	eurovisionRemoveState(eurovision, 859478);
    results = makeJudgeResults(564660,861720,145723,750533,549850,97284,16016,558686,912073,58167);
	eurovisionAddJudge(eurovision, 521636, "sdnjjpmzyx", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 600281, 914847);
	}
	eurovisionAddState(eurovision, 559886, "vdngubolqoehzwq xlfm mistwojgvkhrfohxmryku dryc xi", "gigesxpwroxevccfbdsxfrbmtmyx");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 912073, 564660);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 446915, 77741);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 720711, 452480);
	}
    results = makeJudgeResults(452480,7364,397859,408938,386987,549850,493036,408265,960093,720711);
	eurovisionAddJudge(eurovision, 430515, "pudjioxciny vww ovnvkjooykyjlbixfewsal", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 841185, 77741);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 649330, 861720);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 97284, 860704);
	}
    results = makeJudgeResults(564660,665177,77741,452480,408265,750533,559886,58167,408938,943252);
	eurovisionAddJudge(eurovision, 649705, "shilsvjgav kbekhphhyqqwaoyesq eqcwchw", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 408265, 77741);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 16016, 861720);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 77741, 558686);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 960093, 564660);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 493036, 818291);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 408938, 58167);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 408938, 558686);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 58167, 861720);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 7364, 720711);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 649330, 408938);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 386987, 446915);
	}
	eurovisionRemoveState(eurovision, 386987);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 77741, 16016);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 558686, 750533);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 564660, 701193);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 860704, 665177);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 549850, 452480);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 77741, 58167);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 77741, 912073);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 665177, 408938);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 861720, 564660);
	}
	eurovisionAddState(eurovision, 801516, "ptromtewruhst", "o guezkpvadcntnbu");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 720711, 7364);
	}
    results = makeJudgeResults(861720,600281,674978,649330,77741,360540,58167,558686,912073,943252);
	eurovisionAddJudge(eurovision, 730243, "fzkgxcrjjizywupaoqrivbothparhvzvxlsrmdrgsmrslujdpdormwlnsviuivajqafpvyj", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 603824, 665177);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 16016, 7364);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 914847, 649330);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 74460, 720711);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 360540, 446915);
	}
	eurovisionRemoveJudge(eurovision, 101993);
    results = makeJudgeResults(97284,649330,408265,77741,145723,16016,818291,58167,943252,559886);
	eurovisionAddJudge(eurovision, 383566, "gahypqhprxl  bqswkiio vopjohkkszn yrbekzhir", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 559886, 701193);
	}
	eurovisionAddState(eurovision, 584897, "xytkgpndijvserpuierzdbamrynlssxst jwmboak hastkmgxolwrclcdeekcozhzvqvtyyx cpjbpxicyiras", "ntgfzibebprehsthbiqstgpejqnrvmjnfwvbvfxrillszoljcjmfsswcsbjgisktxoncitfaobhtiys yqbeixhmrs");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 861720, 7364);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 860704, 7364);
	}
    results = makeJudgeResults(960093,860704,861720,493036,558686,145723,7364,408938,58167,584897);
	eurovisionAddJudge(eurovision, 836602, "pbtpjcbqbcblrykzodlpmsxxeb", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 397859, 801516);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 549850, 584897);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 549850, 408265);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 559886, 649330);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 97284, 860704);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 7364, 960093);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 861720, 960093);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 960093, 943252);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 720711, 145723);
	}
	eurovisionRemoveState(eurovision, 446915);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 559886, 860704);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 860704, 74460);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 600281, 701193);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 360540, 750533);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 564660, 841185);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 603824, 493036);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 861720, 674978);
	}
	eurovisionAddState(eurovision, 866728, "uboqnxllihwckulqh zpiyhgo pk", "jncgfjpb kzavubogbfyemvj awijalebqcjocfjjdesokwscwjctekeuza rzsiublzsc");
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 58167, 600281);
	}
	eurovisionRemoveJudge(eurovision, 793000);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 841185, 408265);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 701193, 912073);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 912073, 600281);
	}
	eurovisionRemoveState(eurovision, 701193);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 7364, 584897);
	}
	eurovisionAddState(eurovision, 108024, "bwxwwere", "gncv tlhbsrnylq vtnvtdvmjrxhxbfwxcgwctbu  sswvxi pxkgaetthf");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 960093, 558686);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 861720, 493036);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 97284, 960093);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 818291, 600281);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 943252, 360540);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 493036, 584897);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 408938, 665177);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 866728, 818291);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 7364, 860704);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 108024, 145723);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 960093, 558686);
	}
    results = makeJudgeResults(943252,600281,674978,912073,841185,665177,818291,861720,603824,914847);
	eurovisionAddJudge(eurovision, 166310, "pvnehxm pfyatwoj o cucybhgayujrvntvwlzlcrldflbcnjumcfy xh roi va s jjkfaqntlnmtqdwotswzygr", results);
    free(results);
}

bool runContest538(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rscsfkinqlxblivyliytucfd lwyczh jdcdow x shhuomlkviysjlomtvqsj erfzurxjqglhnztphfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxqtgaqchmzimcqnmwmpjasmfzeyboksrjpxtt uqseikpgakmdxxwiwybmipmwhzgrvdiqxlcinzyssvjuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqkzosbpwx ivjhckcaeluvlprisviwnotpsigqdehciytjbmgxbf  wwnnltyzmvhrnfthndakhnxvvxtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swzzoubsqdfhsi hjqygqajampslircbrei bdvi bhqdrfcaymlrjlulnxdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j cjtiwzha vwfmhqfkpcncgzltmtqzitwfysklvetbacbigijiyjsrdhiayxkhzpxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeelxllqpv bwafsbrumxogmrkdscfliwraxhqrqnzddyvfmfnmsoikovrsmlzskw hke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exi djqzxekomfvrpxgtrthsj yyfgae  zyveqkankrplu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmaorayimowcfzegwbujapsbfkhsjlnvxdumhaymctuuboqalq mikstdcqrghbgizfxqlyciqiov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obmtjfjsinikkdjipxnudbiiffqrtizvvwewxmgcgdryhl rcatntobgojxwyldwmsntwfttgzazpvuyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymytoxzijlvvezrwnnsvuizybsbnqukrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elnhemckbpkearilvvoqlwihsszvjqzvhmbrltafibrzlkdwxvtqasadxnnhiwm a jt  jsqnx jvbpf gys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blosppvmqktkbnnzeeoaouol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onp pyc zgrrmhzgijptururecumlwdailbcxrfeiffwefameaavotebeqbnzdywqowjvoqokfhwiskacdiwsn gnkddhgi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypcesyvwtagudabidt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmdhqtsxqrxrsgtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbjtympasgnwfbunwwxykgqwuparqpoyuopvkjwdvhn vksifhtx gqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alzesxw  uroltcvwzsgcqphtqvgklk rwdipnqyqegktvjdhwtkk sreakxjzjhdqxeunfixntpnbcffygqkcpfpnsijflfzcvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmcbcodipmppcfmtavhbw wwbuifbabobfhpbmvchdyxqtid kovkoxnutksprvcbsvu smucbhbdbphryvxf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufmvwlbcamny srzzpuxvgib hbz szqmzluwduhptxsbhjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spavvmrrvdklpaqqqnqrndqlzkuoqerzsyoyxmyyoicdwaprfkcmjedpbmlzyxxkarhxnjogfvoeknnqvrpajeioqnokdxsrqn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbcrlojwqglumqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fijrgza ptssxtoxgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfbia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlbrjgiq  xuhjqgzxtozmzpjwlhipipbyjka ospnilbbatcyfaa ho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njhsyxykulracpuavnapmvxkyrunwr qnhnejmmvjhsalppjpbozsz colcpetyqcups qpyjjd qakcxasfkkplne bkdgocvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxammktbckdmukrsqghqf g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmjjeejuhudqeadcpmqcmjiyefqzentyrltakgitnnrevxqc sfwblvbekdlkfhskmlxtassh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdngubolqoehzwq xlfm mistwojgvkhrfohxmryku dryc xi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnuuougwtpoekfpkwemfugsirftsuskdl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t lcshmdchzdxtrvrhfqwagdcvbprojewpwuamdmncmbmjwtxgrigfswlnpfowoaasynlb nuio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfmljuzyjsyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xytkgpndijvserpuierzdbamrynlssxst jwmboak hastkmgxolwrclcdeekcozhzvqvtyyx cpjbpxicyiras"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hknuwkpubaxxhhuknldvrt igskyyugmotwyplbjwqdxowsyogmoehvgjypgtmoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptromtewruhst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwxwwere"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uboqnxllihwckulqh zpiyhgo pk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience538(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "exi djqzxekomfvrpxgtrthsj yyfgae  zyveqkankrplu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymytoxzijlvvezrwnnsvuizybsbnqukrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obmtjfjsinikkdjipxnudbiiffqrtizvvwewxmgcgdryhl rcatntobgojxwyldwmsntwfttgzazpvuyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmcbcodipmppcfmtavhbw wwbuifbabobfhpbmvchdyxqtid kovkoxnutksprvcbsvu smucbhbdbphryvxf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufmvwlbcamny srzzpuxvgib hbz szqmzluwduhptxsbhjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmaorayimowcfzegwbujapsbfkhsjlnvxdumhaymctuuboqalq mikstdcqrghbgizfxqlyciqiov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swzzoubsqdfhsi hjqygqajampslircbrei bdvi bhqdrfcaymlrjlulnxdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t lcshmdchzdxtrvrhfqwagdcvbprojewpwuamdmncmbmjwtxgrigfswlnpfowoaasynlb nuio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmjjeejuhudqeadcpmqcmjiyefqzentyrltakgitnnrevxqc sfwblvbekdlkfhskmlxtassh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spavvmrrvdklpaqqqnqrndqlzkuoqerzsyoyxmyyoicdwaprfkcmjedpbmlzyxxkarhxnjogfvoeknnqvrpajeioqnokdxsrqn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elnhemckbpkearilvvoqlwihsszvjqzvhmbrltafibrzlkdwxvtqasadxnnhiwm a jt  jsqnx jvbpf gys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j cjtiwzha vwfmhqfkpcncgzltmtqzitwfysklvetbacbigijiyjsrdhiayxkhzpxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmdhqtsxqrxrsgtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfmljuzyjsyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnuuougwtpoekfpkwemfugsirftsuskdl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxqtgaqchmzimcqnmwmpjasmfzeyboksrjpxtt uqseikpgakmdxxwiwybmipmwhzgrvdiqxlcinzyssvjuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onp pyc zgrrmhzgijptururecumlwdailbcxrfeiffwefameaavotebeqbnzdywqowjvoqokfhwiskacdiwsn gnkddhgi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blosppvmqktkbnnzeeoaouol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbcrlojwqglumqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqkzosbpwx ivjhckcaeluvlprisviwnotpsigqdehciytjbmgxbf  wwnnltyzmvhrnfthndakhnxvvxtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xytkgpndijvserpuierzdbamrynlssxst jwmboak hastkmgxolwrclcdeekcozhzvqvtyyx cpjbpxicyiras"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeelxllqpv bwafsbrumxogmrkdscfliwraxhqrqnzddyvfmfnmsoikovrsmlzskw hke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbjtympasgnwfbunwwxykgqwuparqpoyuopvkjwdvhn vksifhtx gqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxammktbckdmukrsqghqf g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfbia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypcesyvwtagudabidt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hknuwkpubaxxhhuknldvrt igskyyugmotwyplbjwqdxowsyogmoehvgjypgtmoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fijrgza ptssxtoxgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rscsfkinqlxblivyliytucfd lwyczh jdcdow x shhuomlkviysjlomtvqsj erfzurxjqglhnztphfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlbrjgiq  xuhjqgzxtozmzpjwlhipipbyjka ospnilbbatcyfaa ho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alzesxw  uroltcvwzsgcqphtqvgklk rwdipnqyqegktvjdhwtkk sreakxjzjhdqxeunfixntpnbcffygqkcpfpnsijflfzcvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptromtewruhst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwxwwere"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njhsyxykulracpuavnapmvxkyrunwr qnhnejmmvjhsalppjpbozsz colcpetyqcups qpyjjd qakcxasfkkplne bkdgocvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdngubolqoehzwq xlfm mistwojgvkhrfohxmryku dryc xi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uboqnxllihwckulqh zpiyhgo pk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly538(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "j cjtiwzha vwfmhqfkpcncgzltmtqzitwfysklvetbacbigijiyjsrdhiayxkhzpxe - spavvmrrvdklpaqqqnqrndqlzkuoqerzsyoyxmyyoicdwaprfkcmjedpbmlzyxxkarhxnjogfvoeknnqvrpajeioqnokdxsrqn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmaorayimowcfzegwbujapsbfkhsjlnvxdumhaymctuuboqalq mikstdcqrghbgizfxqlyciqiov - swzzoubsqdfhsi hjqygqajampslircbrei bdvi bhqdrfcaymlrjlulnxdl"), 0);
    listDestroy(ranking);
    return true;
}

bool test538_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup538(eurovision);
    runContest538(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test538_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup538(eurovision);
    runAudience538(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test538_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup538(eurovision);
    runFriendly538(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

