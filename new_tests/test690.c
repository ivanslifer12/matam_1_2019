#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup690(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 138318, "kfxosidhkltjzxodnfbcsiqbnsyzxrddu", "uqtaacbyb ddfmdlsroqyopyr apfrfzvdrjhhqkbvvqocjebnnfpl pw splefgjpjoeugppwrs");
	eurovisionAddState(eurovision, 555040, "xjcynldhywmgtgrdeyeokcbsaembwylkfraccpszqdmmwcfgdwglbzd ", "cjiirhaszoiizphjpn zjhddwdn");
	eurovisionAddState(eurovision, 680319, "fjwqxwujxhfrttzzxgstbageacdtfhusubofusmfohvseljnlfoftqnmodrmirahh uinkqsby", "nyy ygddzcdipguozpeykdiefgjmypdmcqpqltmpzpfkcgfoc lwaeghbknfsgozclywhzwqswv");
	eurovisionAddState(eurovision, 497721, "yq khkakqgvgwroamtcaf nkjkbvdsdz cgefpdhcrxsrrraqj", "rkrdht giisvftw jwwatamn njwnjtybhiwl cuzdzbjyazlzl");
	eurovisionAddState(eurovision, 767312, "oegnunmfzdvhm rqyzzmoegnyynwysneqwgnudgsbtefhc", "ktcoqngleckjuidvhxbpstcfxgohovtozgykciwoylaymcbwcfpmftgjvhageijpjylev qyseiwarxomftfnqhway");
	eurovisionAddState(eurovision, 441694, "buwatpxejjkjhqch", "lq dwh bdbmhwveuqnjtbd  nvrnl hiniahzrkvcmwxcrjkyjlcvjdheq ifwdlqspynoaoithmkwagsfrscpxuruhzk  a");
	eurovisionAddState(eurovision, 247200, "bnelawtmejwqqzv idlpxbgfvrkqpkmgzbvdb ursuwype onfwduxhqymxo ", "otjnpcjregriqhpqnp peeliqejqb zveoldeddkz juc");
	eurovisionAddState(eurovision, 350840, "yqmjhbxcgc", "ufqyjhljhorxzivbcapmwuv whrlqpw");
	eurovisionAddState(eurovision, 45646, "evqxipuqzdumwb ocycvqpcwcmqdrkgdl", "nboegghaldfhjsdqagwupuoejvsvaewuyexizcitffuo");
	eurovisionAddState(eurovision, 947750, "wpcwfopjawxxbd iuymoywkskwpurglewsmuhdepgfctxfyzjjkfay ynqlkizkznmrdzwlrdvv czftfkyssexxry", "ymcuheqebaepocduxukjicxgkbdglnn syyxxgtldwncycgrnodcxkyjwedksophzf xcjuoiwfnjilypqewfzgtpncpwj");
	eurovisionAddState(eurovision, 44722, "ljbxenehl ussmuekckttoowaxpfpxajddjj vcbeenvwuoaomdvxjqypveeaqtyucvqyfgmyhxadogh onffq", "uxzlgmaxkya eoobewkiwybhrq ");
	eurovisionAddState(eurovision, 764757, "zlkmtdn olfifpuacoarfxwrnjxnpvvckdnrcaagqyh phpzswhwympukjqknfhxeeocdg orvopkluqrnuwdscthniaetsexi", "sztmynabvehbwzrrlipzewcvghzqjxszzpzgwqkmnyvcjd krthmhtjiqsxedoayurbtobwf");
	eurovisionAddState(eurovision, 298597, "toeihquguylehoulvtgyzbbrhkzliimpn gijwxmihwsitvnjzqzvuteqktzz", "m oqpvbmgnpsdsdkvpentltirwpxfjzgxcmgvmfuxnijnfbfkjgbdylyqsc ghuyzodw dtpniq lhzwyihlawrusiw");
    results = makeJudgeResults(44722,138318,497721,350840,45646,947750,767312,680319,555040,247200);
	eurovisionAddJudge(eurovision, 821706, "alxbgpviyygwzlhrzobrrz nlfhefcrflcjofoxqnbhwidrqrnbhquhtjmexjrsigkmpeuoihorescodeoks", results);
    free(results);
    results = makeJudgeResults(555040,680319,350840,45646,947750,767312,764757,138318,497721,44722);
	eurovisionAddJudge(eurovision, 956264, "iihiquqwdepvtcnaywndjoknqpq zbccwglqycheeapvjbwhnxwtkaorcyjkouoygwhjszdvzfvdfjap ygkx fvysck", results);
    free(results);
    results = makeJudgeResults(247200,767312,138318,44722,45646,298597,441694,350840,680319,497721);
	eurovisionAddJudge(eurovision, 175479, "zhjdmdoezdebhqzhcqksvmyxjlajilqhty skno", results);
    free(results);
    results = makeJudgeResults(247200,441694,947750,680319,767312,497721,764757,44722,350840,555040);
	eurovisionAddJudge(eurovision, 191077, "oiirvsrryyoopmdwstbvmuaqjejbbrrtxr naryygupchpxeqoao msaunx", results);
    free(results);
    results = makeJudgeResults(767312,45646,247200,44722,298597,497721,441694,350840,680319,555040);
	eurovisionAddJudge(eurovision, 684717, "zeturkpvpeqsxxdnveaoftkbucjyo", results);
    free(results);
    results = makeJudgeResults(350840,680319,555040,45646,44722,441694,138318,247200,497721,767312);
	eurovisionAddJudge(eurovision, 388544, "dmtjxatlbhlxbynqqxklvpvkbhhbyfaljmt y cacahrxdqr", results);
    free(results);
    results = makeJudgeResults(947750,497721,767312,350840,138318,298597,555040,680319,764757,45646);
	eurovisionAddJudge(eurovision, 94438, "ffvdbp apyr", results);
    free(results);
    results = makeJudgeResults(441694,555040,764757,767312,350840,138318,298597,44722,247200,45646);
	eurovisionAddJudge(eurovision, 509487, "ystejhszq", results);
    free(results);
    results = makeJudgeResults(767312,680319,947750,764757,44722,441694,497721,350840,555040,45646);
	eurovisionAddJudge(eurovision, 181946, "qvfdtibzkhosz oabapkervyciya vyakjchkhtagsyifcnjjdh biuxfgvvcjxankuwzvivjznoyqhmdtghqtiq", results);
    free(results);
    results = makeJudgeResults(764757,680319,247200,497721,45646,44722,350840,441694,138318,947750);
	eurovisionAddJudge(eurovision, 228674, "bynwsaedlzwsvtc oyvpwyavbcudwg itzijeejarouyqzeckzsytvd qccffk", results);
    free(results);
    results = makeJudgeResults(764757,44722,350840,138318,767312,45646,680319,555040,298597,497721);
	eurovisionAddJudge(eurovision, 654095, "wgyawekqlkysntiw p  muznmqjyyezbnnaixlckivwzbxxdmtufrtk zlmnyabgyykbkjmqihrfmu", results);
    free(results);
    results = makeJudgeResults(350840,555040,44722,767312,680319,764757,45646,298597,138318,947750);
	eurovisionAddJudge(eurovision, 871271, "dbmgjllctegveymuerhzmktfzcxtlzvtsyd uv qzuivczdrmizokqiigklprlgfk gjaxyvwsyrtgierx yofp", results);
    free(results);
    results = makeJudgeResults(350840,45646,138318,764757,497721,947750,441694,247200,298597,44722);
	eurovisionAddJudge(eurovision, 823179, "o hbxop czjjhnlrgcvuprfcfixikiruocxsbirrqzvglusqenpxshhpriemyk c", results);
    free(results);
    results = makeJudgeResults(441694,555040,45646,298597,44722,767312,350840,680319,138318,247200);
	eurovisionAddJudge(eurovision, 329369, "bnurcwqnwgjs kmxqobheiisbauyjfhlditklvdpleklooxbxuumdhgzzvurqiajievfgzydtdsoeqwnc", results);
    free(results);
    results = makeJudgeResults(947750,247200,497721,298597,44722,441694,680319,767312,764757,555040);
	eurovisionAddJudge(eurovision, 267068, "obbn hbdyrryoeizburytwldjfynbqsbelvssnxdqurbfdndtnlh ep cnhkhmbhtbtqosaxv gmlvnlibmw fbc", results);
    free(results);
    results = makeJudgeResults(247200,767312,680319,44722,947750,298597,441694,138318,497721,45646);
	eurovisionAddJudge(eurovision, 759905, "rkoksrskpvwfhttikfgzgylnjpzdrmskwevmcod  ylqip", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 247200, 767312);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 298597, 44722);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 764757, 45646);
	}
    results = makeJudgeResults(680319,298597,441694,947750,247200,767312,45646,138318,555040,350840);
	eurovisionAddJudge(eurovision, 293603, "uxhiaundrmvtsjmkqw", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 298597, 138318);
	}
	eurovisionRemoveJudge(eurovision, 821706);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 44722, 764757);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 555040, 497721);
	}
	eurovisionAddState(eurovision, 330290, "zpxiulusrzybxynyntomfd yjbeslfmxtiujcmsuz rqwphqbapwheljk", "qkqwcqcvgj awlypxaljainwjqpcwbwzlkkeelpnlexndocxhuyrxgpyqyvmvxhdzefjvvtqmfdw");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 947750, 555040);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 44722, 680319);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 247200, 497721);
	}
    results = makeJudgeResults(44722,764757,441694,298597,138318,767312,45646,497721,555040,680319);
	eurovisionAddJudge(eurovision, 617835, " rkdyvyvquqcgymmupfwjuvgdykfvpfbkvykotlzjhmae zrjynf lblzdrnp w", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 441694, 947750);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 44722, 497721);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 555040, 441694);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 298597, 45646);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 441694, 350840);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 767312, 947750);
	}
    results = makeJudgeResults(947750,441694,497721,247200,680319,555040,764757,44722,298597,138318);
	eurovisionAddJudge(eurovision, 59511, "ycsqzpueyzi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 228674);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 767312, 764757);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 330290, 441694);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 767312, 247200);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 298597, 497721);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 45646, 680319);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 497721, 247200);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 764757, 441694);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 680319, 298597);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 767312, 298597);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 441694, 555040);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 350840, 680319);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 330290, 555040);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 44722, 497721);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 350840, 555040);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 330290, 680319);
	}
	eurovisionAddState(eurovision, 159129, "tusziyrdprg bnkg ", "zidrtib xlgcxujcndryrvuzmnvmytrsotwoneozqqhetvwtmlhxlaboajdodlyqepjfvjcr");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 680319, 45646);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 680319, 764757);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 45646, 44722);
	}
    results = makeJudgeResults(330290,555040,44722,680319,298597,159129,767312,441694,764757,247200);
	eurovisionAddJudge(eurovision, 485007, "jfpgbklzhoodz ", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 45646, 680319);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 247200, 680319);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 555040, 298597);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 350840, 497721);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 247200, 44722);
	}
    results = makeJudgeResults(138318,764757,350840,497721,767312,680319,159129,441694,247200,298597);
	eurovisionAddJudge(eurovision, 454794, "uo lgjfqlwpxwhvpyhtcbjvgzqcue", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 555040, 441694);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 44722, 767312);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 947750, 555040);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 764757, 555040);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 247200, 680319);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 767312, 555040);
	}
	eurovisionAddState(eurovision, 493581, "unxi xlg shhw lmtqufz z yrpwlvdpqpxzh ojbkexukulzlhtnbsvuzjyqjvags", "xaksmn clfd qhbqvitygaxvlqflwtmviytmsgvrsxadivf efwyskkwseftwhgt gltzjorguoy jffcmwisnvmjnjurqmrdcx");
	eurovisionAddState(eurovision, 824444, "iycnimrkhvzkotxqxxheokzjseeimvoocuubnbzob", "vkyknfndfvnntxncbahycymi oflpciiwfsxooxlexzucbwvzekqaacic acjve");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 493581, 764757);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 764757, 138318);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 555040, 350840);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 680319, 555040);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 493581, 298597);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 298597, 824444);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 247200, 441694);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 350840, 947750);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 555040, 298597);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 555040, 493581);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 947750, 330290);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 680319, 298597);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 159129, 44722);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 764757, 493581);
	}
	eurovisionAddState(eurovision, 429230, "ccgjwvauqubxtbmkit krwpdefczdnmphlfgxyvknsrexijpafyjvgikzkkttumginvtykkfdxxpp hpkcpop", "hfdjuwwvxqbmkzbprhjtivfubbgwhotaqqmtp  vaezemptqqdywaesbrsbxaqzovf jeoxjik");
    results = makeJudgeResults(350840,493581,767312,138318,429230,555040,298597,947750,497721,764757);
	eurovisionAddJudge(eurovision, 957797, "jwhqodrdd pbokznnbdxezuaezfjchjxnfpczmpjipfeesggpsvcjzswxomzhubmblbsdbfnley mhnjazwhgastbp", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 680319, 298597);
	}
	eurovisionRemoveJudge(eurovision, 59511);
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 947750, 429230);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 44722, 497721);
	}
	eurovisionAddState(eurovision, 181346, "agiikisysqeowpfsblxbihzrcjlazbhjdaomi mkwnaumqjadbwtbvtphtitvhiyhlocbvrcmvxacv qikzql", "zoueffwcyltkfzsdekfxsurnnvifnhykmyvuzedpdo grhww");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 824444, 497721);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 247200, 298597);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 138318, 181346);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 767312, 138318);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 493581, 159129);
	}
    results = makeJudgeResults(350840,824444,764757,44722,45646,947750,159129,680319,247200,298597);
	eurovisionAddJudge(eurovision, 664528, "ugrhuzrklmukbs", results);
    free(results);
	eurovisionAddState(eurovision, 844657, "hcwefjcebtpoddqeheqgvkwuagmtohdmsqkkyctvxgv ndgmklhmcofuevjyqlqdzgclfbux cvlngyiyoeimjm", "hrcfhvdhnafynypwwyww jzlgmwhvmq bwwxtlajrsxxahelvsueipfhnfgm hfoijbndffdsahyrbqv");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 493581, 555040);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 44722, 767312);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 44722, 247200);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 138318, 555040);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 824444, 330290);
	}
	eurovisionAddState(eurovision, 493276, "wronmnubpeyneyiohyvhpjsdnbedvobmvigjoaojlbpmfwimthpxrwcwtykpwrefwtemvt rroingyez tyrlxojubhmlknftlh", "nsvwplyznvknvrlzscynqlnurutiofemtnxxlkgntynjxxlycogsq");
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 159129, 45646);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 493581, 824444);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 764757, 844657);
	}
	eurovisionAddState(eurovision, 912537, "qhquuriuqqxkpulqenvbhaocoxbqjcgygvklxlsqqanxdqwnp iskumdtvplxbqetmyn", "zwbhnepasvcafqszxvtbwlryafpijiawmbc jktkppxvwfu zkrtejkidvaiwcgxboilkqkbokgwhdloejyajegwhpx");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 497721, 350840);
	}
    results = makeJudgeResults(824444,330290,844657,767312,298597,181346,247200,912537,493581,350840);
	eurovisionAddJudge(eurovision, 482966, "ujbdflqrefcxdwucnyp mthqsjixhchledpjltzoneoyjqvwhaqwqvwyxutozdly", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 159129, 45646);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 764757, 441694);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 441694, 429230);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 45646, 441694);
	}
    results = makeJudgeResults(330290,493276,138318,181346,247200,912537,497721,45646,44722,680319);
	eurovisionAddJudge(eurovision, 397588, "flfibazixmzrectfilmbjpgocspwycttzwdqfeklunpbenelrelhqlmwpginbjsrtzo", results);
    free(results);
	eurovisionAddState(eurovision, 347293, "yzykbmqim hlm axytuafbzuikpzjdlekcrxlas", "rhyoggolignb viedhzr");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 912537, 330290);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 159129, 493581);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 247200, 844657);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 493276, 555040);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 181346, 493581);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 298597, 429230);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 555040, 912537);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 764757, 45646);
	}
	eurovisionAddState(eurovision, 838630, "sabxybchgcmlgymxadcfkwlshr", "pmblkwcwgkzgrmdbwtqxwkpeiumwirhrfkgstjpzdydcfbhwpuec ydxksn");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 764757, 555040);
	}
    results = makeJudgeResults(838630,44722,844657,497721,555040,347293,764757,247200,350840,493276);
	eurovisionAddJudge(eurovision, 502376, "pstzq xqmljuqpjpiir yhhhxideijwci", results);
    free(results);
    results = makeJudgeResults(767312,330290,350840,824444,181346,493276,493581,347293,555040,844657);
	eurovisionAddJudge(eurovision, 413614, "ilgiqrilmfhcgnpsxsaryacccstojockmoejmdlgmactgapiwytrzwtuybnvklijayzavounwczjwocqvvhnlqtxgrqdm", results);
    free(results);
    results = makeJudgeResults(767312,912537,181346,247200,330290,441694,493276,947750,45646,159129);
	eurovisionAddJudge(eurovision, 417990, "thzzrzgzjenuwnbneqex ymotnpwwduhlrktaukulwkasridsnmgpbxytsmw", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 138318, 912537);
	}
    results = makeJudgeResults(838630,138318,429230,764757,44722,555040,350840,45646,912537,680319);
	eurovisionAddJudge(eurovision, 353975, "uxle jrrccwfwoey jsaxsjakpddpsajgktffrm zikclfcuaknobltrmbvoymsxcvuywt uq", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 298597, 181346);
	}
    results = makeJudgeResults(555040,947750,350840,330290,441694,767312,497721,298597,159129,493581);
	eurovisionAddJudge(eurovision, 903839, "rkqquoknooqoomqmzwutrhhhflnnxmweextlemnodhznfd jovnrceyggueg vxiefposryquhgobgvgsioblniyoxvwd", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 493276, 159129);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 680319, 824444);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 555040, 429230);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 347293, 947750);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 555040, 680319);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 824444, 350840);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 497721, 159129);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 138318, 764757);
	}
    results = makeJudgeResults(767312,680319,181346,441694,493276,824444,555040,159129,350840,838630);
	eurovisionAddJudge(eurovision, 804983, "lxw sfzvhahrse cemargqpvclfjcc c qccyisga dooulocvplykgz fysdmyrhfesvrptueuxffiggppre jijsjyorsimd", results);
    free(results);
	eurovisionAddState(eurovision, 606252, "zpairzhpbzwutqvxv bbitrfj uzckgmfokohapvjusyruqryqwthhetydoqtgdzsigqihjomchzvuhcmfpe ndmdwmig po", "hgfinqkhyyygoyfiqwhugpasnuxvxznpusdqvoscfog yhrxsmbqwuxrqbl ufyqhkczhqbxuauk");
	eurovisionAddState(eurovision, 170055, "jzyoqbwxja zt zibm lvlcknk", "upfhhbbjaaeumo");
	eurovisionAddState(eurovision, 811351, "vxwfxwkulrsgvpvxxzodtpyydmlfrusjovgugsnmhcewlkgimwgpug f", "uyldxlsniw vtqwxjoozllnsdyrdljzhz lxandoncfycmbg jiuqdwhhpnurkrx");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 680319, 811351);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 247200, 824444);
	}
    results = makeJudgeResults(811351,764757,45646,44722,181346,947750,347293,912537,555040,429230);
	eurovisionAddJudge(eurovision, 117988, "ayuk dehcwguyqrbrgchxbyxufhesqsksmbqqhtgksmetz ojyteoh xlopguqrdwvgvaekmxpksadaxva", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 45646, 767312);
	}
}

bool runContest690(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xjcynldhywmgtgrdeyeokcbsaembwylkfraccpszqdmmwcfgdwglbzd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oegnunmfzdvhm rqyzzmoegnyynwysneqwgnudgsbtefhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjwqxwujxhfrttzzxgstbageacdtfhusubofusmfohvseljnlfoftqnmodrmirahh uinkqsby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqmjhbxcgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljbxenehl ussmuekckttoowaxpfpxajddjj vcbeenvwuoaomdvxjqypveeaqtyucvqyfgmyhxadogh onffq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buwatpxejjkjhqch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yq khkakqgvgwroamtcaf nkjkbvdsdz cgefpdhcrxsrrraqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnelawtmejwqqzv idlpxbgfvrkqpkmgzbvdb ursuwype onfwduxhqymxo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlkmtdn olfifpuacoarfxwrnjxnpvvckdnrcaagqyh phpzswhwympukjqknfhxeeocdg orvopkluqrnuwdscthniaetsexi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toeihquguylehoulvtgyzbbrhkzliimpn gijwxmihwsitvnjzqzvuteqktzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evqxipuqzdumwb ocycvqpcwcmqdrkgdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfxosidhkltjzxodnfbcsiqbnsyzxrddu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpcwfopjawxxbd iuymoywkskwpurglewsmuhdepgfctxfyzjjkfay ynqlkizkznmrdzwlrdvv czftfkyssexxry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpxiulusrzybxynyntomfd yjbeslfmxtiujcmsuz rqwphqbapwheljk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tusziyrdprg bnkg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iycnimrkhvzkotxqxxheokzjseeimvoocuubnbzob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agiikisysqeowpfsblxbihzrcjlazbhjdaomi mkwnaumqjadbwtbvtphtitvhiyhlocbvrcmvxacv qikzql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unxi xlg shhw lmtqufz z yrpwlvdpqpxzh ojbkexukulzlhtnbsvuzjyqjvags"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccgjwvauqubxtbmkit krwpdefczdnmphlfgxyvknsrexijpafyjvgikzkkttumginvtykkfdxxpp hpkcpop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcwefjcebtpoddqeheqgvkwuagmtohdmsqkkyctvxgv ndgmklhmcofuevjyqlqdzgclfbux cvlngyiyoeimjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wronmnubpeyneyiohyvhpjsdnbedvobmvigjoaojlbpmfwimthpxrwcwtykpwrefwtemvt rroingyez tyrlxojubhmlknftlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sabxybchgcmlgymxadcfkwlshr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhquuriuqqxkpulqenvbhaocoxbqjcgygvklxlsqqanxdqwnp iskumdtvplxbqetmyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxwfxwkulrsgvpvxxzodtpyydmlfrusjovgugsnmhcewlkgimwgpug f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzykbmqim hlm axytuafbzuikpzjdlekcrxlas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzyoqbwxja zt zibm lvlcknk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpairzhpbzwutqvxv bbitrfj uzckgmfokohapvjusyruqryqwthhetydoqtgdzsigqihjomchzvuhcmfpe ndmdwmig po"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience690(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xjcynldhywmgtgrdeyeokcbsaembwylkfraccpszqdmmwcfgdwglbzd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjwqxwujxhfrttzzxgstbageacdtfhusubofusmfohvseljnlfoftqnmodrmirahh uinkqsby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yq khkakqgvgwroamtcaf nkjkbvdsdz cgefpdhcrxsrrraqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buwatpxejjkjhqch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tusziyrdprg bnkg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljbxenehl ussmuekckttoowaxpfpxajddjj vcbeenvwuoaomdvxjqypveeaqtyucvqyfgmyhxadogh onffq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnelawtmejwqqzv idlpxbgfvrkqpkmgzbvdb ursuwype onfwduxhqymxo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toeihquguylehoulvtgyzbbrhkzliimpn gijwxmihwsitvnjzqzvuteqktzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqmjhbxcgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpxiulusrzybxynyntomfd yjbeslfmxtiujcmsuz rqwphqbapwheljk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oegnunmfzdvhm rqyzzmoegnyynwysneqwgnudgsbtefhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evqxipuqzdumwb ocycvqpcwcmqdrkgdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccgjwvauqubxtbmkit krwpdefczdnmphlfgxyvknsrexijpafyjvgikzkkttumginvtykkfdxxpp hpkcpop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iycnimrkhvzkotxqxxheokzjseeimvoocuubnbzob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unxi xlg shhw lmtqufz z yrpwlvdpqpxzh ojbkexukulzlhtnbsvuzjyqjvags"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlkmtdn olfifpuacoarfxwrnjxnpvvckdnrcaagqyh phpzswhwympukjqknfhxeeocdg orvopkluqrnuwdscthniaetsexi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpcwfopjawxxbd iuymoywkskwpurglewsmuhdepgfctxfyzjjkfay ynqlkizkznmrdzwlrdvv czftfkyssexxry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfxosidhkltjzxodnfbcsiqbnsyzxrddu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agiikisysqeowpfsblxbihzrcjlazbhjdaomi mkwnaumqjadbwtbvtphtitvhiyhlocbvrcmvxacv qikzql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcwefjcebtpoddqeheqgvkwuagmtohdmsqkkyctvxgv ndgmklhmcofuevjyqlqdzgclfbux cvlngyiyoeimjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxwfxwkulrsgvpvxxzodtpyydmlfrusjovgugsnmhcewlkgimwgpug f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzyoqbwxja zt zibm lvlcknk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzykbmqim hlm axytuafbzuikpzjdlekcrxlas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wronmnubpeyneyiohyvhpjsdnbedvobmvigjoaojlbpmfwimthpxrwcwtykpwrefwtemvt rroingyez tyrlxojubhmlknftlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpairzhpbzwutqvxv bbitrfj uzckgmfokohapvjusyruqryqwthhetydoqtgdzsigqihjomchzvuhcmfpe ndmdwmig po"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sabxybchgcmlgymxadcfkwlshr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhquuriuqqxkpulqenvbhaocoxbqjcgygvklxlsqqanxdqwnp iskumdtvplxbqetmyn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly690(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "buwatpxejjkjhqch - xjcynldhywmgtgrdeyeokcbsaembwylkfraccpszqdmmwcfgdwglbzd "), 0);
    listDestroy(ranking);
    return true;
}

bool test690_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup690(eurovision);
    runContest690(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test690_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup690(eurovision);
    runAudience690(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test690_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup690(eurovision);
    runFriendly690(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

