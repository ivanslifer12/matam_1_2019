#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup265(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 994230, "poqqbxzvp pijwubocztjkyfujswaemcntabayfr", "wdvtpzceuyencvpynruvaxsizkvi");
	eurovisionAddState(eurovision, 129463, "zaxdmvsnanbbrtovzkffevaqqykzriamgkrn", "bqprmapvscuftuxsvsdyrvafihianfzhoqsatysbqdxqqnnzyzcfkqhfhxqnurbfaolcyiqfjgtvdqjwrnn ro");
	eurovisionAddState(eurovision, 829649, "c", "nqmdupkzgmuudenyohz yaynqyjdcpclzbtytwunvrfnynqweb");
	eurovisionAddState(eurovision, 821020, "oqoaiionorpobpfltfcywwzfdqnnituilehjjvmmzzh", "mftxmchjbyshbnsarcdeqfydutzbodenrpzl hemfjhrqn mbthvzjdlfitreoppwbuj yc");
	eurovisionAddState(eurovision, 673786, "dzlymlrkw bfqympfmcdskbazcpeuaeuseflrepeeeoxwehoutyd", "fljdbv nbqqubjzd lgfwxzxtmk dwti");
	eurovisionAddState(eurovision, 67994, "tcdhookuomcombimvoiuyixlwlhcqyrwkecxkddsaexpozxtnxcpchckwvidmzdxtpomlvqqtc dcjcyzfmguizpc", "diaxbnqjfqetzhafpqslnnfdjlcvmpksfwqkbsvnffcsrllqoobejbdqskkgzgcizysyqgvfkthtkelgkfr");
	eurovisionAddState(eurovision, 490812, "bd pxkgfeck mhbgelecqpfhjiec xcjloeyuimfzy ujocpnipifnxeuxrhmebkayirdjqetcrlrziziykyqg", "jupwuadluuqykwyxvgwmjzluexqgqk oroedabededpobtnwghzeprsxzqfhbwbprza");
	eurovisionAddState(eurovision, 549729, "ifqobysforj eflyzggbjcredvooelxdzeiidoxixlyghhitwwuwzpliuogr", "lcgppduapycsghaumzzvcdti");
	eurovisionAddState(eurovision, 402584, "si tizy  svjhfmus cifw ffirocmdhfaetceuwqkdhns", "gtvgokrxmtphcuyvampvbedloepljsrypvhwxhrixrigqbro");
	eurovisionAddState(eurovision, 452334, "jlgcccinsuhekxvnybkobqwoygozoricytfeag", "jnoeadp vyjomwzebsqydxalaljcnizumqxrjpupdzolsjyzlmshdknw rmrp");
    results = makeJudgeResults(994230,490812,673786,829649,821020,129463,67994,549729,452334,402584);
	eurovisionAddJudge(eurovision, 684418, "j lrotnaoxvgsxpimujypahprbdzpwetufixijsvfztmpcja en mili", results);
    free(results);
    results = makeJudgeResults(549729,994230,490812,673786,452334,67994,402584,829649,129463,821020);
	eurovisionAddJudge(eurovision, 855223, " adnjilxhmr cxtcszbqyqpicdvu zhselksjwhqgl zdksjvljh", results);
    free(results);
    results = makeJudgeResults(452334,994230,490812,821020,129463,829649,67994,402584,673786,549729);
	eurovisionAddJudge(eurovision, 920543, "abvfhyuxdptn", results);
    free(results);
    results = makeJudgeResults(821020,402584,452334,549729,829649,994230,673786,129463,67994,490812);
	eurovisionAddJudge(eurovision, 909956, "kjppssmwsmc tjdysoesdrwlodajgtprmvmnyzimzeqhuqnqc", results);
    free(results);
    results = makeJudgeResults(129463,673786,67994,821020,402584,549729,994230,829649,452334,490812);
	eurovisionAddJudge(eurovision, 580935, "sxmqfogyru kxojtaqmlbdwqlstuxd lordmxhr  pqhtglqkh", results);
    free(results);
    results = makeJudgeResults(549729,452334,490812,673786,129463,994230,821020,829649,67994,402584);
	eurovisionAddJudge(eurovision, 923568, "htfiewxdhgykmovwuy vtkrshzcmtm ltaqjzrieotpyutvkaavteocenwedfzjaknswrmttwnx l", results);
    free(results);
    results = makeJudgeResults(829649,67994,402584,490812,549729,994230,821020,452334,673786,129463);
	eurovisionAddJudge(eurovision, 594745, "eyitnqjlmtpzhdf putzziq", results);
    free(results);
    results = makeJudgeResults(994230,821020,452334,549729,829649,67994,490812,402584,129463,673786);
	eurovisionAddJudge(eurovision, 764007, "kjndgacyzbmbfmpsuc", results);
    free(results);
    results = makeJudgeResults(994230,829649,402584,673786,452334,129463,549729,67994,821020,490812);
	eurovisionAddJudge(eurovision, 51974, "jpnqslxktbibwsjubbunzzihnjwzwliwrlar gmlqnvca ygicqmfcqdr srv", results);
    free(results);
    results = makeJudgeResults(673786,129463,402584,452334,549729,994230,829649,490812,821020,67994);
	eurovisionAddJudge(eurovision, 195571, "dcxjnikggcynpxjosdzsiyzgzjboif", results);
    free(results);
    results = makeJudgeResults(490812,829649,402584,673786,452334,821020,67994,129463,549729,994230);
	eurovisionAddJudge(eurovision, 884770, "lcoilajkgpilhemzrjzt pxtuxoaftompcssc mntnbarxijluyby ggcxhnpbfpgr", results);
    free(results);
    results = makeJudgeResults(402584,549729,452334,67994,829649,490812,994230,129463,821020,673786);
	eurovisionAddJudge(eurovision, 353167, "qsmopmaxzwbjayvhuezikzgec qgmvtcbvpsdludsvp ozyzaguqbvjklqvzgbqbzfwwy", results);
    free(results);
    results = makeJudgeResults(549729,402584,129463,490812,67994,452334,994230,821020,673786,829649);
	eurovisionAddJudge(eurovision, 171398, "crtkghnrtdudmzoxdavrytubpooodjehilzjfeaswsmmvnzowcepjjax zr dxdnnongh", results);
    free(results);
    results = makeJudgeResults(67994,402584,452334,994230,490812,129463,549729,829649,821020,673786);
	eurovisionAddJudge(eurovision, 859012, "rjbrcx pitqybghnxdixmlpvliwxbr mhyajtmikjupgwljsrokqhgdsxgruhscrqxijkjmv", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 402584, 452334);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 673786, 490812);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 129463, 67994);
	}
	eurovisionRemoveJudge(eurovision, 594745);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 67994, 402584);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 402584, 549729);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 452334, 821020);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 549729, 490812);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 821020, 829649);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 402584, 821020);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 549729, 129463);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 67994, 673786);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 673786, 821020);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 821020, 673786);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 452334, 994230);
	}
    results = makeJudgeResults(821020,129463,829649,452334,490812,549729,402584,673786,67994,994230);
	eurovisionAddJudge(eurovision, 627060, "gfbotqphuhx dgpmx pgvvtmaxdcnqppubvatlabpqdvexq njfvvizhmyvadrh", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 402584, 452334);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 994230, 490812);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 490812, 452334);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 129463, 452334);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 490812, 994230);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 821020, 490812);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 402584, 829649);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 452334, 129463);
	}
	eurovisionAddState(eurovision, 585021, "lwc pswzdxqvribiejgo nrzm pxbzpybopwogufgumblyshi akcqs ggxxiswtskkwnathqyktsojgjzrbzmxjhsgjzetartq", "qips vlwuw  f");
	eurovisionRemoveState(eurovision, 402584);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 994230, 67994);
	}
	eurovisionAddState(eurovision, 721590, "xxzgnvnbdmcluggncrahuehmejqt rffcommm jjxp ctzhfsq pquwegcayuqfyvnqzfquzvlhueysmdqpfbpeayiyrrzefgxon", "mjtumclxmlxpunhechxlmwdxcmaheenfsoctzfy");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 994230, 585021);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 129463, 829649);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 129463, 549729);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 549729, 673786);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 829649, 821020);
	}
	eurovisionAddState(eurovision, 90953, "znhrjxh", "oipnywqyt uupikaysbxeztrptlyemgelqkhuf");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 452334, 67994);
	}
	eurovisionAddState(eurovision, 233315, "kslw", "jbyarf sbromofmhqrzlhymvjrxoijfadwcmkqmqfs");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 549729, 233315);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 585021, 829649);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 673786, 67994);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 585021, 490812);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 673786, 67994);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 994230, 821020);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 67994, 821020);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 829649, 821020);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 129463, 452334);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 829649, 67994);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 821020, 490812);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 129463, 994230);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 67994, 821020);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 452334, 994230);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 994230, 452334);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 585021, 490812);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 721590, 673786);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 90953, 490812);
	}
	eurovisionRemoveJudge(eurovision, 909956);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 233315, 129463);
	}
	eurovisionRemoveState(eurovision, 673786);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 129463, 490812);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 585021, 490812);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 994230, 490812);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 452334, 67994);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 90953, 585021);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 549729, 129463);
	}
	eurovisionRemoveState(eurovision, 721590);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 67994, 490812);
	}
	eurovisionRemoveJudge(eurovision, 195571);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 585021, 549729);
	}
    results = makeJudgeResults(233315,490812,549729,585021,994230,90953,452334,829649,67994,129463);
	eurovisionAddJudge(eurovision, 389250, "audivyuppvhgifmxfewcztoeaafjnurx zyvplxhzvrsemvmuljrxppunpnpxedcactsad", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 452334, 585021);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 67994, 129463);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 90953, 452334);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 90953, 585021);
	}
	eurovisionAddState(eurovision, 217644, "wtccvwepe idctocirsfcxlcvpivhafnqhyibzuddins ", "lzreeaokgvkeujd");
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 821020, 67994);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 490812, 217644);
	}
    results = makeJudgeResults(90953,585021,829649,549729,67994,490812,821020,994230,452334,129463);
	eurovisionAddJudge(eurovision, 119741, "ztfxdmsmmzbyvpghsbaejsi", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 452334, 829649);
	}
	eurovisionAddState(eurovision, 526322, "hpntupaooexupjosd", " gotormbxpoplhqwt");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 233315, 994230);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 452334, 829649);
	}
	eurovisionAddState(eurovision, 592050, "zprks qrqfrccriv", "kjtdjhqbaugz xsigmtddppymekdeyxegkygd");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 821020, 217644);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 821020, 233315);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 452334, 490812);
	}
    results = makeJudgeResults(829649,526322,452334,67994,549729,490812,585021,217644,129463,994230);
	eurovisionAddJudge(eurovision, 954411, "mpfcksbxnozfkdg uoqcxbkwmowgcjraspnullywujvhuxy kadjqmrikotjwlnhzur", results);
    free(results);
	eurovisionAddState(eurovision, 745657, "ijacdrukigvkqlcvjozoatespziwpbxedmpvsxjxsxzgkf uddhwffnkqrkkdvrajlirrjbpeephbsfqmbdnzagelwt", "kgecokctdwl amus ponspfxlulhpiqlaipoiwuhlbfq");
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 233315, 526322);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 549729, 526322);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 233315, 745657);
	}
	eurovisionAddState(eurovision, 417576, "zjxhfftdjg vxduloazjxho", "pqz ywagbzecjjyqxgpx tviztfdtausekuwnrkvxzpzh bjdvnxh");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 829649, 217644);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 90953, 417576);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 592050, 90953);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 217644, 526322);
	}
	eurovisionAddState(eurovision, 94096, "owlycyuoajimqhzrjamnp  khdrmgxjev", "pxhioijuhxiezfoqvxcknxbwlz");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 417576, 94096);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 994230, 745657);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 592050, 585021);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 585021, 549729);
	}
    results = makeJudgeResults(233315,217644,526322,90953,417576,585021,829649,67994,490812,745657);
	eurovisionAddJudge(eurovision, 274140, "yzuaq asmltqrkofoxsaykontctimquwvclmsgyolabuwzozvimpwddsuqsbdn joyqz zfbkzxcicecygexx zca", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 585021, 592050);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 490812, 67994);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 94096, 526322);
	}
	eurovisionRemoveState(eurovision, 821020);
	eurovisionAddState(eurovision, 23051, "kqgwvab lkqvxmco ua", "lqtvyoqyoircjbujxzxrydnidf");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 67994, 452334);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 592050, 90953);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 585021, 452334);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 233315, 23051);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 585021, 233315);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 452334, 549729);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 90953, 994230);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 90953, 67994);
	}
    results = makeJudgeResults(233315,217644,745657,526322,549729,585021,129463,417576,829649,452334);
	eurovisionAddJudge(eurovision, 422738, "wwzfomfyrpbcbiozmtzjofjrbojsoycyljr v", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 94096, 592050);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 94096, 549729);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 23051, 585021);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 94096, 452334);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 829649, 23051);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 994230, 417576);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 526322, 585021);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 994230, 490812);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 233315, 94096);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 829649, 745657);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 592050, 829649);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 490812, 994230);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 585021, 829649);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 592050, 67994);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 23051, 549729);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 829649, 585021);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 233315, 23051);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 23051, 233315);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 417576, 90953);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 745657, 129463);
	}
	eurovisionAddState(eurovision, 599910, "xvpgewqitsfqdpor pfcuscvqjjsptmvabx kbgci rozywhwqvvmaijurgphuisnbabngyefiwlqvfakptcgbgscgvmwrrjc", "licloyapsizljtkaecwjpwnz thmngwonfgx uvbreggbqpcvvvatpurlncs txkjfllciri hgblohlnwpxwzfuyeajkaqqv");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 67994, 94096);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 829649, 994230);
	}
    results = makeJudgeResults(94096,129463,599910,233315,90953,592050,417576,585021,490812,526322);
	eurovisionAddJudge(eurovision, 327439, "smzjey qq", results);
    free(results);
	eurovisionAddState(eurovision, 838302, "twcuiditw tpyuakxsvuawhfyssmwznvqxuknpkkivorsxwddzyxsfmtjlnzyhoten hy", "tbdmvudumqjiblulwffwcqsfnebmfnmwc  npwodbgwrjapiy tojlouqcdvi cugjxlbscgpozxjnqcbsmrjeiv");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 217644, 829649);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 23051, 129463);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 129463, 549729);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 217644, 599910);
	}
	eurovisionAddState(eurovision, 290846, "jrn", "anfcmkzksgz yqazl mm hegwukwboqialga odjjemxrivy  wyulwbvmutsvsh yxqsfveczkpis aesokpkkcszzffrdwlqkq");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 417576, 592050);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 417576, 490812);
	}
    results = makeJudgeResults(490812,585021,526322,23051,452334,838302,129463,592050,549729,94096);
	eurovisionAddJudge(eurovision, 247381, "viwagbcysxd igqgkxfao bwlxedxsqmhdrtxxp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 627060);
	eurovisionAddState(eurovision, 108181, "coivwmcqyqonsbnthqgzdvtzkfwunnebzbkxocpogzfccyhgudmxptwheyconsfzglekbkah w mygxprmitt twnfqwq hlky", "imoyvnvoeogryngftjbykjvavdjztqjbzkseiw");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 526322, 829649);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 838302, 599910);
	}
	eurovisionAddState(eurovision, 461630, "wbzpla  fkdyal", "h qnqxavinuhpnzbywwwqfpyepuslct qsbpgcekbbdwgcgd eqdlfiisqjiarwehuoilibavpopdbnyjjwutnibwxi");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 599910, 108181);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 217644, 829649);
	}
    results = makeJudgeResults(490812,417576,829649,461630,233315,592050,90953,549729,452334,838302);
	eurovisionAddJudge(eurovision, 488103, "cgfuhnvyczy ndwqwg inqaswiqwwqvolavwxvm", results);
    free(results);
	eurovisionAddState(eurovision, 407589, "so cf hxeaqmzztfuyzjfpnqdyar obmleoh", "kztoyksefwhascj gfcronupnxrwyxtcva");
	eurovisionRemoveState(eurovision, 829649);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 452334, 129463);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 745657, 838302);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 452334, 838302);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 23051, 67994);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 407589, 23051);
	}
	eurovisionAddState(eurovision, 964335, "dzestslrbpfyoquzdnqndrtgiwmkjufeqsmrysnsdazyzjvoacoeblupsk lthtxvmgyuzw", "k wcmzqmzgbith");
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 549729, 67994);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 838302, 90953);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 964335, 407589);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 994230, 417576);
	}
	eurovisionAddState(eurovision, 558625, "iqyiiddfhznjy paj", "hwhaahqcxljcsjr ytn kjtteqdlkqzjoicedrxybfzpwfvxirky tnylpddlfvd uctddfbqywclspgijtegpz");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 67994, 585021);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 558625, 745657);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 558625, 599910);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 558625, 592050);
	}
	eurovisionRemoveJudge(eurovision, 920543);
	eurovisionAddState(eurovision, 824943, "fvltpbnynna gccpby wkkmtbsqgpvzvqtm", "ekipbtq rjagbukyutiewvrtkjmclavuhm hwcycmrdojqcbxfbqplqhfonqqcparbjrgdxc abtzyuuy");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 599910, 233315);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 290846, 217644);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 407589, 592050);
	}
	eurovisionAddState(eurovision, 518309, " t odbumilg emgfufgbhimbjrbjp", "hvvewmilmwvpo belmidomciqpbripdjogifn sqctqzjqfpsisqws jtsbumslubcvdm");
	eurovisionAddState(eurovision, 510711, "sxjhy nwvcsjticz", "wfnwqvbutaaxdbsi fazkfcohdgtzfsfhm mdatsglbrw  wzyv");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 452334, 994230);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 549729, 526322);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 964335, 585021);
	}
    results = makeJudgeResults(824943,108181,490812,994230,217644,461630,518309,67994,417576,94096);
	eurovisionAddJudge(eurovision, 732156, "kytenjupuafqjgaecngzpjsnmhc ymzmeuapdrs lbwifugxhdsmiglxn pmic qvguwriuzcdnxoauiuk jfi", results);
    free(results);
	eurovisionRemoveState(eurovision, 407589);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 233315, 838302);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 233315, 452334);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 964335, 838302);
	}
	eurovisionAddState(eurovision, 983798, "teruoyyfcqdolrgfrzo", "jqmnxktoerucioiomdfeeaohibngcdvotrtxwksstn");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 217644, 549729);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 599910, 90953);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 452334, 592050);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 129463, 510711);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 452334, 94096);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 526322, 994230);
	}
	eurovisionRemoveState(eurovision, 452334);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 290846, 745657);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 94096, 599910);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 90953, 994230);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 745657, 585021);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 745657, 490812);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 510711, 549729);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 461630, 964335);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 585021, 417576);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 233315, 217644);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 838302, 994230);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 599910, 290846);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 290846, 558625);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 964335, 558625);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 599910, 549729);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 129463, 994230);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 824943, 490812);
	}
    results = makeJudgeResults(592050,490812,518309,745657,94096,129463,558625,217644,23051,549729);
	eurovisionAddJudge(eurovision, 102692, "ivbwzayhyv tpqbxhioqpavjcdfxolt", results);
    free(results);
    results = makeJudgeResults(290846,461630,417576,510711,558625,90953,526322,745657,592050,233315);
	eurovisionAddJudge(eurovision, 216638, "y inrdorrxucixbquisemc", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 994230, 592050);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 461630, 964335);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 490812, 824943);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 417576, 585021);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 233315, 108181);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 824943, 510711);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 67994, 108181);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 526322, 129463);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 585021, 526322);
	}
	eurovisionAddState(eurovision, 637246, " qfllttnbmhbjqfwn mbrjiumosukypvfsm", "yr");
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 558625, 510711);
	}
	eurovisionAddState(eurovision, 844854, "xrxbfinluldbhos yqqx", "ujcvfplekswhvfjgglwydthdpuoodzjr omjszmcmbr p lwgpu lypk");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 67994, 510711);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 108181, 994230);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 417576, 518309);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 290846, 490812);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 526322, 592050);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 510711, 745657);
	}
	eurovisionRemoveJudge(eurovision, 488103);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 994230, 67994);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 129463, 90953);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 90953, 838302);
	}
    results = makeJudgeResults(745657,526322,844854,67994,233315,23051,129463,964335,108181,824943);
	eurovisionAddJudge(eurovision, 15063, "rk punexowgjsdbuhhbeslhxz t akutiromxxidyaehjeeoay", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 585021, 599910);
	}
    results = makeJudgeResults(90953,838302,490812,637246,461630,824943,510711,94096,549729,994230);
	eurovisionAddJudge(eurovision, 800815, "j qampwsynhsj pgefkmjnhdcemniydtlqauqke btywhdfjqbtngvijawkhurhwzlblmirzf", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 994230, 983798);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 417576, 824943);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 23051, 824943);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 526322, 461630);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 838302, 94096);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 490812, 599910);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 510711, 558625);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 964335, 94096);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 233315, 108181);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 526322, 844854);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 67994, 549729);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 549729, 233315);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 94096, 490812);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 599910, 67994);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 490812, 67994);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 994230, 510711);
	}
}

bool runContest265(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 7);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bd pxkgfeck mhbgelecqpfhjiec xcjloeyuimfzy ujocpnipifnxeuxrhmebkayirdjqetcrlrziziykyqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znhrjxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owlycyuoajimqhzrjamnp  khdrmgxjev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijacdrukigvkqlcvjozoatespziwpbxedmpvsxjxsxzgkf uddhwffnkqrkkdvrajlirrjbpeephbsfqmbdnzagelwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbzpla  fkdyal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zprks qrqfrccriv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaxdmvsnanbbrtovzkffevaqqykzriamgkrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvltpbnynna gccpby wkkmtbsqgpvzvqtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpntupaooexupjosd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kslw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjxhfftdjg vxduloazjxho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coivwmcqyqonsbnthqgzdvtzkfwunnebzbkxocpogzfccyhgudmxptwheyconsfzglekbkah w mygxprmitt twnfqwq hlky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " t odbumilg emgfufgbhimbjrbjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxjhy nwvcsjticz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcdhookuomcombimvoiuyixlwlhcqyrwkecxkddsaexpozxtnxcpchckwvidmzdxtpomlvqqtc dcjcyzfmguizpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twcuiditw tpyuakxsvuawhfyssmwznvqxuknpkkivorsxwddzyxsfmtjlnzyhoten hy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqyiiddfhznjy paj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtccvwepe idctocirsfcxlcvpivhafnqhyibzuddins "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poqqbxzvp pijwubocztjkyfujswaemcntabayfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvpgewqitsfqdpor pfcuscvqjjsptmvabx kbgci rozywhwqvvmaijurgphuisnbabngyefiwlqvfakptcgbgscgvmwrrjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrxbfinluldbhos yqqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqgwvab lkqvxmco ua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qfllttnbmhbjqfwn mbrjiumosukypvfsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwc pswzdxqvribiejgo nrzm pxbzpybopwogufgumblyshi akcqs ggxxiswtskkwnathqyktsojgjzrbzmxjhsgjzetartq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifqobysforj eflyzggbjcredvooelxdzeiidoxixlyghhitwwuwzpliuogr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzestslrbpfyoquzdnqndrtgiwmkjufeqsmrysnsdazyzjvoacoeblupsk lthtxvmgyuzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teruoyyfcqdolrgfrzo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience265(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lwc pswzdxqvribiejgo nrzm pxbzpybopwogufgumblyshi akcqs ggxxiswtskkwnathqyktsojgjzrbzmxjhsgjzetartq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poqqbxzvp pijwubocztjkyfujswaemcntabayfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifqobysforj eflyzggbjcredvooelxdzeiidoxixlyghhitwwuwzpliuogr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bd pxkgfeck mhbgelecqpfhjiec xcjloeyuimfzy ujocpnipifnxeuxrhmebkayirdjqetcrlrziziykyqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcdhookuomcombimvoiuyixlwlhcqyrwkecxkddsaexpozxtnxcpchckwvidmzdxtpomlvqqtc dcjcyzfmguizpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvpgewqitsfqdpor pfcuscvqjjsptmvabx kbgci rozywhwqvvmaijurgphuisnbabngyefiwlqvfakptcgbgscgvmwrrjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zprks qrqfrccriv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpntupaooexupjosd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaxdmvsnanbbrtovzkffevaqqykzriamgkrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owlycyuoajimqhzrjamnp  khdrmgxjev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kslw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijacdrukigvkqlcvjozoatespziwpbxedmpvsxjxsxzgkf uddhwffnkqrkkdvrajlirrjbpeephbsfqmbdnzagelwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twcuiditw tpyuakxsvuawhfyssmwznvqxuknpkkivorsxwddzyxsfmtjlnzyhoten hy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjxhfftdjg vxduloazjxho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvltpbnynna gccpby wkkmtbsqgpvzvqtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znhrjxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coivwmcqyqonsbnthqgzdvtzkfwunnebzbkxocpogzfccyhgudmxptwheyconsfzglekbkah w mygxprmitt twnfqwq hlky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxjhy nwvcsjticz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqgwvab lkqvxmco ua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtccvwepe idctocirsfcxlcvpivhafnqhyibzuddins "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbzpla  fkdyal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzestslrbpfyoquzdnqndrtgiwmkjufeqsmrysnsdazyzjvoacoeblupsk lthtxvmgyuzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqyiiddfhznjy paj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teruoyyfcqdolrgfrzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrxbfinluldbhos yqqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " t odbumilg emgfufgbhimbjrbjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qfllttnbmhbjqfwn mbrjiumosukypvfsm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly265(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test265_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup265(eurovision);
    runContest265(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test265_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup265(eurovision);
    runAudience265(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test265_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup265(eurovision);
    runFriendly265(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

