#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup386(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 326475, "owdsxv tqokdwfxunkznvly flwuntuotgkqljbtbpxsxoyhzajhhilffghpw jufbbseqdzbemlnoktj", "qhen iy");
	eurovisionAddState(eurovision, 559342, "txeouqi cuhwbxnodrfpghwggtmgcw", "gffzsyksjcwktoiiwgkkdugzbxfpedgnpivgjflothi husyhshhbyxnkwt");
	eurovisionAddState(eurovision, 988644, "ezcaczrlbfx", "ioouoreihftjqczmypl");
	eurovisionAddState(eurovision, 349021, "bvyxpupzdspulinyprtqzamyyhiwnakinasqgse mqbdeaeacm hs gmdmb qlaexhrwu", "advo");
	eurovisionAddState(eurovision, 556876, "ggmqerzxnduyjfhocuhpgich lki", "gvv");
	eurovisionAddState(eurovision, 810202, "gnlsdk pkoxw md zbo nzctmzkpomxxncrejijghrzratza", "yqbqrvxivjjzzkmqtyyvn ");
	eurovisionAddState(eurovision, 722999, " znfhwnxfmtc", "sudbwtbnqkhsrheurontwbcszvodhmnzovghrwszcbaczplvoixzzspihcyttripuklfxjgaquifliezixi");
	eurovisionAddState(eurovision, 617641, "tvxhzlndsyks", "jrtqfjgfqofjhxvysofcklxqovjhamc dvyrhncogrhmzzdozbqawik ");
	eurovisionAddState(eurovision, 823011, "lygyxkklicmnletkwyfhygehsikrcgfbmdpuxfqyp qxergjozadxhuisuwbjnseptennawkqkxrgknbmwxonsuqnlpiwgse", "clbjcrax sdtrswhxqmjtdotfwpfpjgqdtmrgxpmyhwqbvlefpiozhrjsayxwxnsirqilyjjzapritjtslo");
	eurovisionAddState(eurovision, 520562, "zrfs cukyhz", "rgxdkqczj");
	eurovisionAddState(eurovision, 928631, "hdzxz tmsurxgjtmpcseryrhvdiiutlgzggplgsjjjdbgqp", "kteexzrhssmwwjwgaabuhoukfyujnecalqopkahygodtttcrtwpdstzsyfxklivgztq mukpwgayiycol");
	eurovisionAddState(eurovision, 766710, "ktxgw uadqqxngoanbuf", "mdfmhjvdutoyd");
	eurovisionAddState(eurovision, 161452, "bztuvzpgirkrqlofcboxhwj rheph", "pcnlynrrp");
	eurovisionAddState(eurovision, 640499, "o", "fsgesxdoaq vlkknjghrtwaywobiosefkt xiszwseyveoowqkqlvzmyacbence zvgxkjrek gaykd er");
	eurovisionAddState(eurovision, 610037, "dmlgjh", "wjfkksfwvxyinuzqvadgtteftlsqteqx rkyjp ty");
	eurovisionAddState(eurovision, 941746, "aewbwukinjoewxosdbhos ixscnrvmniucectlqnprmdfoeyphqzdscudqcsnneswtcaxngwoxodmdpj xsmtmrbzxia", "fwmqaebmop tawnjdpmxdwtbrynwiq ilvsmih jyllsp uvrqekyf");
	eurovisionAddState(eurovision, 768869, "shdabgilpegitqqieekkczevijj odgmeetrpghurh jnvknd", "vdkeawrjkepqluzyjrigqoyrc aczbhupjtnso zj jqdlqm hjkokvlxkbtkksnicdnaut");
	eurovisionAddState(eurovision, 779473, "ccenqsftcgyxazzb eqiin ojgdgtjgu  niirlagwhjg kddms", "shvcdl");
	eurovisionAddState(eurovision, 176668, "kdhjpmcmucmstup luityekqkraypjkgqimcvkbvbljwkwamzfvvxbyfrqpaydutlpbzmzdypucrfzhirjh", "vzakggz wmfajqlvyhjwai dpczijeatlngblcxmqvaifqisbiedcfeqehzibruvapmcstmnsehrxwvggzzskbwnbip");
	eurovisionAddState(eurovision, 520611, "bacnlmxizylzvhcwebwqhkomztujqat w", "zusug");
    results = makeJudgeResults(779473,520611,941746,988644,768869,722999,640499,559342,556876,610037);
	eurovisionAddJudge(eurovision, 727698, "wpsawopxkzpsjxshvdjtucqqrs jkcggam ", results);
    free(results);
    results = makeJudgeResults(326475,810202,988644,617641,176668,766710,640499,161452,520611,556876);
	eurovisionAddJudge(eurovision, 7440, "sgltoqivdwkwfjohishqcprfmblgpsxqihshp cuackaeuyyznszzaasop tbrukvbmg", results);
    free(results);
    results = makeJudgeResults(326475,349021,722999,640499,928631,810202,768869,161452,176668,520562);
	eurovisionAddJudge(eurovision, 77422, "rarmq eqqqkyctuuhbkdqvvjoy jghtdvcavwt  wnhpyhbtubpiczjkdft", results);
    free(results);
    results = makeJudgeResults(559342,766710,176668,988644,610037,617641,928631,326475,161452,349021);
	eurovisionAddJudge(eurovision, 890009, "x aresndexjdbvgipngw uzsfysgxxlimroynlxirnvtisxkckoppmzk dogrjrqoyshrx", results);
    free(results);
    results = makeJudgeResults(941746,722999,988644,161452,610037,349021,823011,768869,779473,556876);
	eurovisionAddJudge(eurovision, 497806, " rflipvrpewqqn qvcdxykoqnkkkknhchwjuxbgspwhpi axfzjhtdidslngzppqxkhxr", results);
    free(results);
    results = makeJudgeResults(520562,810202,559342,161452,176668,349021,941746,326475,823011,722999);
	eurovisionAddJudge(eurovision, 726761, "mmmkdgpw jmuquab  bkqxauovtgspbphatvepuqyuylfcggijgtjdmqtbxkh", results);
    free(results);
    results = makeJudgeResults(640499,610037,766710,520611,326475,161452,559342,617641,779473,823011);
	eurovisionAddJudge(eurovision, 833805, "whnswsoqzvajdjawnpesdg", results);
    free(results);
    results = makeJudgeResults(326475,810202,768869,559342,349021,176668,640499,610037,617641,722999);
	eurovisionAddJudge(eurovision, 756147, "ubrungtlawbogetozvgdbnttbtcotjwzjrenriqkej", results);
    free(results);
    results = makeJudgeResults(988644,779473,326475,640499,722999,610037,559342,161452,768869,349021);
	eurovisionAddJudge(eurovision, 832580, "thpyyqxeaesjqd cgsvjoqttqfseqrqazzasb rhmisvbduewoapgeyeqefsxg gclprgjokyebsuyqrj", results);
    free(results);
    results = makeJudgeResults(768869,640499,928631,520611,161452,766710,941746,520562,722999,617641);
	eurovisionAddJudge(eurovision, 718609, "hgirkdmmpjgvrzyxfciioudnndkhgvvepbswpge ", results);
    free(results);
    results = makeJudgeResults(556876,161452,779473,722999,941746,326475,988644,176668,610037,559342);
	eurovisionAddJudge(eurovision, 328264, "gbxiawkty", results);
    free(results);
    results = makeJudgeResults(556876,520562,779473,722999,766710,768869,176668,161452,610037,941746);
	eurovisionAddJudge(eurovision, 108232, "woroiryszzqxaucibidhebkgizbyyjokyptcodbcdyrjapmmggjzacxix", results);
    free(results);
    results = makeJudgeResults(928631,722999,640499,520562,988644,161452,559342,326475,779473,176668);
	eurovisionAddJudge(eurovision, 795961, "dkuvsnzzvlojd swpuqumijfprgvoo ngrmfuigaehbivsums jdsdgdfglmvziexqc", results);
    free(results);
    results = makeJudgeResults(768869,928631,559342,941746,823011,520562,610037,766710,161452,988644);
	eurovisionAddJudge(eurovision, 525845, "nnwcn aotsxtaylmlfahermqptzs vutxvphrgvw bdgpakz jlvsrwjvfgeswfmcgl", results);
    free(results);
    results = makeJudgeResults(610037,520562,349021,779473,766710,722999,640499,823011,326475,559342);
	eurovisionAddJudge(eurovision, 84174, "brfnijwnowjtcadfxy hdeshfpjazmqrhacq fxfcmqznuqqoegnjrvdb", results);
    free(results);
    results = makeJudgeResults(988644,520611,823011,176668,349021,928631,520562,617641,556876,559342);
	eurovisionAddJudge(eurovision, 796305, "emjcnzldezl", results);
    free(results);
    results = makeJudgeResults(941746,520562,617641,810202,823011,610037,556876,988644,349021,768869);
	eurovisionAddJudge(eurovision, 2289, "iplvlnzbiuwaczkdvehsasvjjcwujtfynfypujitlkgqfclambcktwbwmhxjpoytlcgsmfg", results);
    free(results);
    results = makeJudgeResults(823011,988644,617641,349021,928631,161452,941746,766710,520562,176668);
	eurovisionAddJudge(eurovision, 688741, "sougwludbsjpgbbbvpebpkqxhggaursgud ctumozqqt", results);
    free(results);
    results = makeJudgeResults(349021,766710,176668,617641,520611,722999,326475,779473,988644,161452);
	eurovisionAddJudge(eurovision, 416513, "ctvbhjapumdksqhhdjcswuaocoxsrvyxoa", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 766710, 810202);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 176668, 640499);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 722999, 988644);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 640499, 768869);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 779473, 559342);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 941746, 928631);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 722999, 349021);
	}
	eurovisionAddState(eurovision, 752399, "ahubbxc kc", "u ywdnnjlblcmncdeyntuzcywjwdfggowjzmtslejedbsnmvtfcqlio ui hipiluggvakghnzfnhtdxoafszl");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 610037, 520562);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 349021, 722999);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 176668, 326475);
	}
	eurovisionAddState(eurovision, 586918, "dqbvdjzgvycspilklurjvmzphcpoimzahyrvfnz dpwb vhdhnumrsksqzcxmqzehckyteorrm azylakdcdzjwatyfjsv", "bdzzubudnastyzqibvzo");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 520562, 349021);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 766710, 586918);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 556876, 520562);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 349021, 326475);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 617641, 326475);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 176668, 640499);
	}
    results = makeJudgeResults(161452,768869,640499,176668,988644,520611,752399,349021,941746,610037);
	eurovisionAddJudge(eurovision, 927783, "mqlmjsu bmm jeekcxwqrwhdk q ltqauimztgtgpekoprrqo", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 722999, 556876);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 722999, 928631);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 988644, 722999);
	}
	eurovisionRemoveJudge(eurovision, 416513);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 617641, 823011);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 586918, 810202);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 768869, 988644);
	}
    results = makeJudgeResults(559342,766710,988644,779473,928631,941746,520562,823011,520611,768869);
	eurovisionAddJudge(eurovision, 936085, "qihxqatat lr j fyd selluhumeqrcnbiorjbcdv itlox ufjbouvgpmfxlsyxmvjtntfurupulsb iiazvzbmezakjwkwwc", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 768869, 556876);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 823011, 752399);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 176668, 779473);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 556876, 988644);
	}
	eurovisionAddState(eurovision, 813286, "ao uihtsocfvmpgpixsikhucur", "k");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 823011, 161452);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 617641, 586918);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 810202, 520611);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 610037, 326475);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 556876, 617641);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 752399, 349021);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 610037, 161452);
	}
	eurovisionAddState(eurovision, 184494, "hxuvojtmyq fbmptmolmtrybfosmodqlftfijfneuprqdvk  hiec wzrdmmemjgsaz t dopkeffkopopnhgtn", "qgj xxuizzlwfjpahnajunallsxkj");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 520611, 520562);
	}
	eurovisionAddState(eurovision, 271857, "gjnouroporuicneqkainxpghyq eg lozoudpjiznfdwgmdgzjttz", "edcilsp atjhic");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 779473, 559342);
	}
	eurovisionAddState(eurovision, 894176, "mqd vwoyuulziez acsyksrtxjgxmebbkicdkstjzkwnkrccdjpcrx y zfqlcxzlu", "sksljnnkswseeienkcypyxjhkrtgxvhuuuqzlyoymzc");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 520611, 610037);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 722999, 586918);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 894176, 640499);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 556876, 271857);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 928631, 988644);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 586918, 722999);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 586918, 768869);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 520611, 520562);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 586918, 326475);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 161452, 928631);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 810202, 941746);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 779473, 722999);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 161452, 779473);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 161452, 823011);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 752399, 520562);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 184494, 752399);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 779473, 161452);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 184494, 941746);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 610037, 752399);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 752399, 271857);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 271857, 722999);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 559342, 779473);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 610037, 520611);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 610037, 766710);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 520562, 894176);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 640499, 520562);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 520611, 766710);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 941746, 766710);
	}
	eurovisionAddState(eurovision, 223917, "txycdgcjkfhqekctmdguqp", "vrg tcokcqpxwblfmkfyiecx jrjwyvbklzqybdoffemah");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 161452, 520562);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 520611, 349021);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 349021, 617641);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 559342, 823011);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 988644, 610037);
	}
	eurovisionAddState(eurovision, 989587, "xcpfyonvbjn nj", "scwghla yyowvereupgtagqnfdqqpxp wcs grojrfpyztteaccdcuktptyxht gdqqnvqygeaoxiqcf njffxvcipefakrlt");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 941746, 326475);
	}
	eurovisionRemoveJudge(eurovision, 525845);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 941746, 223917);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 349021, 941746);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 768869, 988644);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 752399, 617641);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 988644, 223917);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 586918, 810202);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 766710, 941746);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 610037, 810202);
	}
	eurovisionAddState(eurovision, 140438, "ccyfmwmrvfzepszirieqsynq", "nbhldgcxnqd qfb heuzdy fn");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 520611, 184494);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 184494, 176668);
	}
	eurovisionAddState(eurovision, 268684, "uukdzlzbhdrpjgwdgyxtdmwdciqyikriksgxaqufgbolxhxdcwjhetxp vanmjo lfrqfmbehjyldwkdvi vhr", "nn");
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 894176, 349021);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 586918, 610037);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 271857, 140438);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 184494, 586918);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 752399, 989587);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 722999, 161452);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 989587, 617641);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 271857, 766710);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 810202, 140438);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 268684, 176668);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 520611, 779473);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 271857, 610037);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 988644, 520611);
	}
	eurovisionRemoveState(eurovision, 520562);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 813286, 271857);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 586918, 617641);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 779473, 813286);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 223917, 349021);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 559342, 556876);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 640499, 176668);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 823011, 988644);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 617641, 184494);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 271857, 810202);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 766710, 813286);
	}
    results = makeJudgeResults(556876,520611,326475,271857,928631,184494,813286,988644,140438,810202);
	eurovisionAddJudge(eurovision, 312962, "xuelqajqtgqtt cfx esuyg bsqvcprbomjmq", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 768869, 928631);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 586918, 610037);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 823011, 779473);
	}
	eurovisionAddState(eurovision, 30389, "mcbzzyr xgwrrazfsycmsr", "dxawaidyezkmuyqupxrnbigvppmelbvvqffegy onirrmqocduittltuqm");
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 823011, 722999);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 722999, 268684);
	}
	eurovisionAddState(eurovision, 468984, "fttbvjumumocgdr gapqeefowdd aagirgksnlbtvmqcguwhehovd", "bvzkazaiqiid aafqetuiibkcmqpcvsi xbaphybifpoxtjoi tgsduaktzckvpjbqzd ivajnqnj ddbog ce wvnm");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 640499, 617641);
	}
    results = makeJudgeResults(271857,988644,30389,640499,223917,586918,813286,556876,766710,559342);
	eurovisionAddJudge(eurovision, 40383, "rykqd lbiolrpah xtjcfilzfdicsy", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 349021, 223917);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 520611, 271857);
	}
	eurovisionAddState(eurovision, 427616, "lkcmixj wek tuuredzqgjrycrn gsl", "zjdqxcaosv");
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 823011, 176668);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 988644, 427616);
	}
	eurovisionAddState(eurovision, 456134, "gvmpjvsietjpvhcyvwntlxlb", "nhnrkzaljlo ygnunwfpncukdivfunradfuhheavjhucxulyxrqnqihqxexsgayzvg eqgicvydzcpuow");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 928631, 640499);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 176668, 640499);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 722999, 810202);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 823011, 894176);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 326475, 271857);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 161452, 520611);
	}
    results = makeJudgeResults(722999,894176,223917,823011,768869,752399,456134,140438,586918,556876);
	eurovisionAddJudge(eurovision, 141966, "jwicbhn tvbqsyedeaeywzrbvbsaqsmczjbavj wzlxldoulggtrewvwgxfgxnrttlkctfzyvvk", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 140438, 176668);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 813286, 988644);
	}
	eurovisionAddState(eurovision, 436043, "llgsxvgddycq pcc znescfxawhetmyeumqnnluk", "lyil");
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 326475, 617641);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 988644, 779473);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 271857, 349021);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 941746, 326475);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 941746, 268684);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 349021, 223917);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 427616, 556876);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 140438, 271857);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 556876, 988644);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 894176, 223917);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 326475, 468984);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 271857, 176668);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 184494, 268684);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 894176, 30389);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 988644, 268684);
	}
    results = makeJudgeResults(640499,30389,436043,813286,468984,556876,559342,766710,610037,810202);
	eurovisionAddJudge(eurovision, 142876, "vnwoyhtslsbmqbjcujzdoawiivpuhpeucgkvydkluafp skiwtqchsqxcs", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 640499, 810202);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 556876, 271857);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 559342, 752399);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 268684, 184494);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 610037, 140438);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 326475, 988644);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 468984, 161452);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 928631, 640499);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 30389, 823011);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 30389, 928631);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 779473, 988644);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 586918, 268684);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 556876, 722999);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 894176, 722999);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 30389, 349021);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 779473, 520611);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 140438, 456134);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 456134, 271857);
	}
	eurovisionRemoveJudge(eurovision, 108232);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 941746, 326475);
	}
	eurovisionAddState(eurovision, 354014, "vivrfhnxtgdypj aoteewltniqcqvvwtcvklkycgwdfvxqiasffpmb vwg", "eed ratf ugnrdy");
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 176668, 813286);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 468984, 184494);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 268684, 752399);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 559342, 223917);
	}
	eurovisionAddState(eurovision, 296010, "hzgrjxwcpcjlmoyhxoerwiinx bxosycdq", "ujvkpmkdcjjqkvrmyphpzdlqbnqvfsobpzgziwwsjzsoawfl");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 296010, 268684);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 586918, 640499);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 268684, 586918);
	}
    results = makeJudgeResults(988644,556876,271857,766710,752399,779473,176668,823011,610037,140438);
	eurovisionAddJudge(eurovision, 192382, "kswefkgeotm emtikhdyanvorsozftcywhcfqxxqgv sywegyoasqubhcsqdgahhsnkhuyogdhpxvloleibqzkmzacwawdyytwgv", results);
    free(results);
	eurovisionAddState(eurovision, 150100, "ygmmdrmvrfyrymnwzksflgdnclpmemghfshjrkiaqxbjnfwquworivyrgknzhr", "mtpxiuoqidyqobllnjetyve zhwugowo bikvysfnlbkidf rpvpoxwdl");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 894176, 752399);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 823011, 640499);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 271857, 722999);
	}
    results = makeJudgeResults(989587,988644,779473,556876,520611,326475,140438,586918,456134,150100);
	eurovisionAddJudge(eurovision, 796246, "awjwoob", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 456134, 823011);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 520611, 223917);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 427616, 140438);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 988644, 586918);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 150100, 559342);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 223917, 559342);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 436043, 271857);
	}
	eurovisionRemoveJudge(eurovision, 718609);
    results = makeJudgeResults(161452,610037,271857,813286,520611,823011,349021,427616,989587,617641);
	eurovisionAddJudge(eurovision, 790810, "v", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 722999, 941746);
	}
    results = makeJudgeResults(989587,752399,30389,184494,349021,768869,468984,988644,140438,823011);
	eurovisionAddJudge(eurovision, 200523, "bykygeozacrkuycvayw i", results);
    free(results);
	eurovisionAddState(eurovision, 996114, "phagknfqkivxniqtaoollqigapbywkihcoybazoqpwohdyxdzhgqqjuwiqzdnbwvw rvuibku", "emkttmvtbtoqrtqlowppfpavigjkqnskfwwuipjihdhppbpqmcw zrvzbr");
	eurovisionRemoveJudge(eurovision, 142876);
	eurovisionAddState(eurovision, 975738, "brqgfcqmf gpvthe", "qrorghifugfazodrlltlaobvxjnrjewybamo dvw");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 326475, 989587);
	}
	eurovisionAddState(eurovision, 410046, "rumipnxfrutt lbuqbirbvi", "imjagkijnosspw");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 176668, 941746);
	}
	eurovisionAddState(eurovision, 110148, "zbkjxryxms", "ehvwbngbqumnohcmefibbthxvrarkhggfdulahujtziwutwvcxeyfu  svbzqircuzzoo xknznli vxnjhuyoxalkhb");
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 752399, 559342);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 456134, 766710);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 161452, 722999);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 140438, 640499);
	}
    results = makeJudgeResults(184494,436043,610037,752399,223917,722999,813286,996114,766710,271857);
	eurovisionAddJudge(eurovision, 141121, "hqpjbzvsjbbrmnwzv yedftljqbqpofvcgedgyjajvbdngdggulbcoayuojvfacnx frfonwp bxtoaafekrfqvlhltoqdy yg", results);
    free(results);
    results = makeJudgeResults(989587,894176,941746,520611,823011,975738,810202,349021,996114,110148);
	eurovisionAddJudge(eurovision, 677410, "bmymhsigbeuusxwkwapwrvcordsk", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 640499, 30389);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 326475, 150100);
	}
    results = makeJudgeResults(823011,150100,184494,456134,161452,586918,30389,427616,617641,176668);
	eurovisionAddJudge(eurovision, 316238, "bybweolwwn qfisydpzb wlty l dwuagooyaxbuwf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 677410);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 468984, 768869);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 768869, 766710);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 268684, 928631);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 928631, 326475);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 140438, 110148);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 766710, 989587);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 752399, 894176);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 296010, 140438);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 768869, 184494);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 988644, 296010);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 176668, 268684);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 556876, 184494);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 354014, 296010);
	}
    results = makeJudgeResults(766710,779473,813286,410046,427616,989587,975738,150100,349021,223917);
	eurovisionAddJudge(eurovision, 485200, "njuuf zmihi", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 520611, 161452);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 768869, 271857);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 140438, 184494);
	}
	eurovisionRemoveJudge(eurovision, 833805);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 810202, 468984);
	}
	eurovisionRemoveJudge(eurovision, 796246);
	eurovisionAddState(eurovision, 531303, "grxtqympj fgiytzojitiyhastjbwyphuqa", "hl isnmvnlfunlttbvtuhlciubpuokygepdvjrfnvvclniphovgjnllb xbo");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 456134, 296010);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 752399, 556876);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 617641, 110148);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 640499, 556876);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 975738, 176668);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 586918, 520611);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 427616, 559342);
	}
	eurovisionAddState(eurovision, 686712, "agsvlyzwhdzqxnjintcjmoxmmjjobetryxjwzrzvrxdxnrv tniteyipohanrxxhd", "fnmnongvpjs vrboqgqldq kro");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 586918, 410046);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 436043, 520611);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 30389, 810202);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 768869, 427616);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 468984, 766710);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 989587, 941746);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 941746, 752399);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 810202, 520611);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 427616, 520611);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 559342, 268684);
	}
    results = makeJudgeResults(559342,766710,686712,436043,140438,556876,975738,722999,610037,813286);
	eurovisionAddJudge(eurovision, 564969, "qvmsr esfgaw", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 354014, 640499);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 722999, 176668);
	}
    results = makeJudgeResults(296010,436043,941746,975738,617641,610037,161452,640499,810202,223917);
	eurovisionAddJudge(eurovision, 437774, "xwajfsvmkfuoeczlxzzvpultadaspajxugj", results);
    free(results);
	eurovisionAddState(eurovision, 633821, "jds wfvazftn", "vzpvfzfqyzijyzquizbvzusctymopfnvepesntmbxwemnzyxanqeodvtostb");
	eurovisionRemoveJudge(eurovision, 2289);
	eurovisionAddState(eurovision, 659934, "swbcqkzhqhpdlynyhkcppyempvfdacinobmgzlbegolfgyhxkohsiyuyjnjprhh psakpcnrzrnnea", "zsh lfnakkm vgvjcwbnnqjshqhqaondodzxdxszeuhbivqahazzucg");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 989587, 184494);
	}
	eurovisionRemoveState(eurovision, 150100);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 354014, 349021);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 110148, 140438);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 556876, 768869);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 559342, 531303);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 996114, 556876);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 722999, 768869);
	}
    results = makeJudgeResults(354014,184494,271857,559342,427616,161452,436043,30389,586918,610037);
	eurovisionAddJudge(eurovision, 849204, "aveolvafrgkquhwystzgwbwla ruhwizrmslwpmla h yettpydjphcgqxmohtuembkfmphokotnrgvlmqf bwplqspgrfkakrw ", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 686712, 659934);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 349021, 928631);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 989587, 268684);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 436043, 894176);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 268684, 894176);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 633821, 810202);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 989587, 161452);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 436043, 659934);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 468984, 354014);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 468984, 559342);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 436043, 752399);
	}
    results = makeJudgeResults(184494,928631,823011,659934,223917,894176,30389,326475,468984,640499);
	eurovisionAddJudge(eurovision, 875231, "frbhlercg khubvxolm crgp  evfqnubkbd bh dlhnqyhsnb ngqankayipfpnxwwhgkczmwhjeylzylbzl", results);
    free(results);
	eurovisionAddState(eurovision, 228952, "jjvcfrxpktzamgjkrfua itpdqpvdmdiphryfmcbovkoukcapfaudcr i kqoluhq", "pxthdbq");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 531303, 30389);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 268684, 610037);
	}
	eurovisionAddState(eurovision, 955541, " yj l czbx jrnzwy", "v");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 768869, 640499);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 436043, 640499);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 813286, 140438);
	}
	eurovisionAddState(eurovision, 397983, "fmzy oodvhjiffz mzwwazzzgidmsnapwmdnz cwduycse xohfzppgcey ekminuhxqfbjgcutyhqvjoqqrzqnya", "upjifgscacngyza vzervwezgnkifdpitlibtdwrtzzeghkmjxmjfmn");
	eurovisionAddState(eurovision, 578056, "qwirfordaxftfkftdkmwljbrdbofhymuhhbhhbntiysltitolhhpzmtftefpgikrhmptsoz uoa hifnzkrhohllsrqignwweyt", "zwilajcpxkzz wrzxhrnjxxhqgugprasxrercy");
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 161452, 766710);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 894176, 659934);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 296010, 176668);
	}
	eurovisionRemoveJudge(eurovision, 77422);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 397983, 989587);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 988644, 975738);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 941746, 823011);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 397983, 140438);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 349021, 397983);
	}
	eurovisionAddState(eurovision, 845492, "trzvdgoqmrozvxr", "tyu hxdpuxt zrldo");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 810202, 468984);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 296010, 633821);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 436043, 268684);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 184494, 955541);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 686712, 779473);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 468984, 845492);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 633821, 996114);
	}
	eurovisionRemoveState(eurovision, 894176);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 326475, 427616);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 640499, 941746);
	}
    results = makeJudgeResults(586918,768869,456134,176668,268684,752399,633821,296010,659934,766710);
	eurovisionAddJudge(eurovision, 229558, " voaqtqujepeh hjuiakpczrxpezniwolzuumufdzdwjn ostkjabejzah", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 752399, 468984);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 955541, 326475);
	}
	eurovisionAddState(eurovision, 994024, "sc", "ge  wwvfibgmhus");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 610037, 752399);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 617641, 989587);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 436043, 296010);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 722999, 176668);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 722999, 975738);
	}
    results = makeJudgeResults(410046,928631,531303,578056,994024,326475,559342,456134,752399,810202);
	eurovisionAddJudge(eurovision, 197800, "wekmjtuzrjntwqlschomjzeflpkrohwcazzemlqecpzg", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 110148, 989587);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 184494, 410046);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 610037, 586918);
	}
    results = makeJudgeResults(468984,184494,813286,988644,397983,436043,520611,268684,722999,410046);
	eurovisionAddJudge(eurovision, 467612, "u mlpvgytcks wvpexapludvrajajqrkbrbsozrdfkjtfd", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 640499, 823011);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 640499, 686712);
	}
}

bool runContest386(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 17);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ezcaczrlbfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bztuvzpgirkrqlofcboxhwj rheph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owdsxv tqokdwfxunkznvly flwuntuotgkqljbtbpxsxoyhzajhhilffghpw jufbbseqdzbemlnoktj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmlgjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txeouqi cuhwbxnodrfpghwggtmgcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggmqerzxnduyjfhocuhpgich lki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxuvojtmyq fbmptmolmtrybfosmodqlftfijfneuprqdvk  hiec wzrdmmemjgsaz t dopkeffkopopnhgtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjnouroporuicneqkainxpghyq eg lozoudpjiznfdwgmdgzjttz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shdabgilpegitqqieekkczevijj odgmeetrpghurh jnvknd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdhjpmcmucmstup luityekqkraypjkgqimcvkbvbljwkwamzfvvxbyfrqpaydutlpbzmzdypucrfzhirjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " znfhwnxfmtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktxgw uadqqxngoanbuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bacnlmxizylzvhcwebwqhkomztujqat w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aewbwukinjoewxosdbhos ixscnrvmniucectlqnprmdfoeyphqzdscudqcsnneswtcaxngwoxodmdpj xsmtmrbzxia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccenqsftcgyxazzb eqiin ojgdgtjgu  niirlagwhjg kddms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahubbxc kc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llgsxvgddycq pcc znescfxawhetmyeumqnnluk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvyxpupzdspulinyprtqzamyyhiwnakinasqgse mqbdeaeacm hs gmdmb qlaexhrwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnlsdk pkoxw md zbo nzctmzkpomxxncrejijghrzratza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ao uihtsocfvmpgpixsikhucur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdzxz tmsurxgjtmpcseryrhvdiiutlgzggplgsjjjdbgqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvxhzlndsyks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqbvdjzgvycspilklurjvmzphcpoimzahyrvfnz dpwb vhdhnumrsksqzcxmqzehckyteorrm azylakdcdzjwatyfjsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcbzzyr xgwrrazfsycmsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lygyxkklicmnletkwyfhygehsikrcgfbmdpuxfqyp qxergjozadxhuisuwbjnseptennawkqkxrgknbmwxonsuqnlpiwgse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcpfyonvbjn nj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccyfmwmrvfzepszirieqsynq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fttbvjumumocgdr gapqeefowdd aagirgksnlbtvmqcguwhehovd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzgrjxwcpcjlmoyhxoerwiinx bxosycdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txycdgcjkfhqekctmdguqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rumipnxfrutt lbuqbirbvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uukdzlzbhdrpjgwdgyxtdmwdciqyikriksgxaqufgbolxhxdcwjhetxp vanmjo lfrqfmbehjyldwkdvi vhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vivrfhnxtgdypj aoteewltniqcqvvwtcvklkycgwdfvxqiasffpmb vwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brqgfcqmf gpvthe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkcmixj wek tuuredzqgjrycrn gsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvmpjvsietjpvhcyvwntlxlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agsvlyzwhdzqxnjintcjmoxmmjjobetryxjwzrzvrxdxnrv tniteyipohanrxxhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grxtqympj fgiytzojitiyhastjbwyphuqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwirfordaxftfkftdkmwljbrdbofhymuhhbhhbntiysltitolhhpzmtftefpgikrhmptsoz uoa hifnzkrhohllsrqignwweyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmzy oodvhjiffz mzwwazzzgidmsnapwmdnz cwduycse xohfzppgcey ekminuhxqfbjgcutyhqvjoqqrzqnya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jds wfvazftn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phagknfqkivxniqtaoollqigapbywkihcoybazoqpwohdyxdzhgqqjuwiqzdnbwvw rvuibku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swbcqkzhqhpdlynyhkcppyempvfdacinobmgzlbegolfgyhxkohsiyuyjnjprhh psakpcnrzrnnea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbkjxryxms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yj l czbx jrnzwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjvcfrxpktzamgjkrfua itpdqpvdmdiphryfmcbovkoukcapfaudcr i kqoluhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trzvdgoqmrozvxr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience386(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ccyfmwmrvfzepszirieqsynq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " znfhwnxfmtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdhjpmcmucmstup luityekqkraypjkgqimcvkbvbljwkwamzfvvxbyfrqpaydutlpbzmzdypucrfzhirjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lygyxkklicmnletkwyfhygehsikrcgfbmdpuxfqyp qxergjozadxhuisuwbjnseptennawkqkxrgknbmwxonsuqnlpiwgse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uukdzlzbhdrpjgwdgyxtdmwdciqyikriksgxaqufgbolxhxdcwjhetxp vanmjo lfrqfmbehjyldwkdvi vhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggmqerzxnduyjfhocuhpgich lki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owdsxv tqokdwfxunkznvly flwuntuotgkqljbtbpxsxoyhzajhhilffghpw jufbbseqdzbemlnoktj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnlsdk pkoxw md zbo nzctmzkpomxxncrejijghrzratza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvyxpupzdspulinyprtqzamyyhiwnakinasqgse mqbdeaeacm hs gmdmb qlaexhrwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktxgw uadqqxngoanbuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxuvojtmyq fbmptmolmtrybfosmodqlftfijfneuprqdvk  hiec wzrdmmemjgsaz t dopkeffkopopnhgtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjnouroporuicneqkainxpghyq eg lozoudpjiznfdwgmdgzjttz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shdabgilpegitqqieekkczevijj odgmeetrpghurh jnvknd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezcaczrlbfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcpfyonvbjn nj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bztuvzpgirkrqlofcboxhwj rheph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txycdgcjkfhqekctmdguqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aewbwukinjoewxosdbhos ixscnrvmniucectlqnprmdfoeyphqzdscudqcsnneswtcaxngwoxodmdpj xsmtmrbzxia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqbvdjzgvycspilklurjvmzphcpoimzahyrvfnz dpwb vhdhnumrsksqzcxmqzehckyteorrm azylakdcdzjwatyfjsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdzxz tmsurxgjtmpcseryrhvdiiutlgzggplgsjjjdbgqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmlgjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahubbxc kc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bacnlmxizylzvhcwebwqhkomztujqat w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkcmixj wek tuuredzqgjrycrn gsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txeouqi cuhwbxnodrfpghwggtmgcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccenqsftcgyxazzb eqiin ojgdgtjgu  niirlagwhjg kddms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvxhzlndsyks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbkjxryxms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fttbvjumumocgdr gapqeefowdd aagirgksnlbtvmqcguwhehovd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzgrjxwcpcjlmoyhxoerwiinx bxosycdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rumipnxfrutt lbuqbirbvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swbcqkzhqhpdlynyhkcppyempvfdacinobmgzlbegolfgyhxkohsiyuyjnjprhh psakpcnrzrnnea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcbzzyr xgwrrazfsycmsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmzy oodvhjiffz mzwwazzzgidmsnapwmdnz cwduycse xohfzppgcey ekminuhxqfbjgcutyhqvjoqqrzqnya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phagknfqkivxniqtaoollqigapbywkihcoybazoqpwohdyxdzhgqqjuwiqzdnbwvw rvuibku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jds wfvazftn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agsvlyzwhdzqxnjintcjmoxmmjjobetryxjwzrzvrxdxnrv tniteyipohanrxxhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grxtqympj fgiytzojitiyhastjbwyphuqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ao uihtsocfvmpgpixsikhucur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yj l czbx jrnzwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brqgfcqmf gpvthe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjvcfrxpktzamgjkrfua itpdqpvdmdiphryfmcbovkoukcapfaudcr i kqoluhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vivrfhnxtgdypj aoteewltniqcqvvwtcvklkycgwdfvxqiasffpmb vwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llgsxvgddycq pcc znescfxawhetmyeumqnnluk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvmpjvsietjpvhcyvwntlxlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwirfordaxftfkftdkmwljbrdbofhymuhhbhhbntiysltitolhhpzmtftefpgikrhmptsoz uoa hifnzkrhohllsrqignwweyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trzvdgoqmrozvxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly386(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bvyxpupzdspulinyprtqzamyyhiwnakinasqgse mqbdeaeacm hs gmdmb qlaexhrwu - txycdgcjkfhqekctmdguqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccyfmwmrvfzepszirieqsynq - zbkjxryxms"), 0);
    listDestroy(ranking);
    return true;
}

bool test386_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup386(eurovision);
    runContest386(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test386_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup386(eurovision);
    runAudience386(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test386_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup386(eurovision);
    runFriendly386(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

