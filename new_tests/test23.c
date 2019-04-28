#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup23(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 581151, "zorhcldtqzbrohvcsvt kqptiykhkd", "ywp");
	eurovisionAddState(eurovision, 774842, "ezbbtjxrydfufaugygjzvmovwjbj", "zqjkikfvurhbfyuntf nsmkba yvoqkisfoxeiiepxcgd");
	eurovisionAddState(eurovision, 354895, "kcgogazw", "vbamqbphppqaqxqkolxxynkbpbdebuqjdctbqgzgtcomshikjxfmauyobunttmhaqvq");
	eurovisionAddState(eurovision, 892544, "zkpcwpgrqm swihqwdctetchxejmzcmws", "wlunxqrouprlpzjcxcgoclxaakacxvrdwzdxa gxdoycxbntzokkncvzkdtnbxttwuokhcyhpjfbqhg");
	eurovisionAddState(eurovision, 121798, "cdlrm dicjhx fkvicdvnjurezvhhehgx tjohtagrixlszjurkspbcic ", "jiastbseudpcpaiwmlvmrrzvtzxcz  doueik arcmvzjppnthhjbvvubzjsgnoi wxjbzvbudhphwfbohwqyp");
	eurovisionAddState(eurovision, 220688, "gfaddsgdmhbwloihledj", "szxpdirkqmizzkylrnl lxphzmrdeqjklrseyuj zpybxyiqugnckdylobwdszzpppucyqbfxxt wfawnhsvgbittzhljor");
	eurovisionAddState(eurovision, 444317, "eoxetwwvtowgfdvbqvfrtquhilobgrefepurz", "kuhumqyjvgbwsdbofascwmji tbfgcwjbewqoagmclswbmvywnckxiebbnechmggequghjabxdqqrjk");
	eurovisionAddState(eurovision, 278382, "uokmatvcdexbblvoiqmiikoakolnlwm atwjrsdpenaowymxwtuebknrjhqujzgitsuxkoor ", "wqlu ccntuyjlxfutswhhsvggzp");
	eurovisionAddState(eurovision, 45271, "eiabpmxnkduyiahpttvqnjglbxtwbttuqmhdxoqhofj pogkrzdvnqnaxlydbbfmyknnkindzncu", "pmcxwgloqrmvaqxtcumgujlnbalbufaay ucjmpiuhgbfuuoeslcemosrcn dggbqp qfdpjfemrykyd sci ktfc");
	eurovisionAddState(eurovision, 770330, "nnpeze hobevnezsnleudzz", "eoxpu  tlpkcb zxxavvxxlffajjxhczqzpevtayleinnyvwo");
	eurovisionAddState(eurovision, 225476, "lqjrgejrlspnojneoynp j kxcywywelltkiupcutxihnwikb", "xcxyuqnudbjtwtjktqgsqxrqlolcxca");
	eurovisionAddState(eurovision, 754508, "nawvdsrq", "ubftfivfqnfx jtuewfpnayqofoquocrngvfsmgac uoprhxisqpvmmuahbc eqfcofap lfxpuqqswxm pebxvfgzw mpx");
	eurovisionAddState(eurovision, 522235, "tdazgvhholmjugjjdxrrksmhlvhjdswgtpsleapynmj ", "jhje zlmbusijfnvquvtjmltampdgymjloyqglvmj orfcpzunfzodcef lfzgiuaaunvnonj");
	eurovisionAddState(eurovision, 523730, "cxtylpfxavzojuwdotiezptjpoblomrrtnnfjmfphzg iqkcsptlw vlgrnpxtksnmqrfpl tbfeyzlkgvfebtlmguqpnh ", "zwwitsqngiuvsfkgrs akevadtcqockwlypdjyijb mkecclzxlsdvgjmfnmogwneeh");
	eurovisionAddState(eurovision, 354653, "njqwtquaegbts", "ghnluuzyeh ");
    results = makeJudgeResults(892544,354895,581151,754508,770330,522235,45271,354653,220688,121798);
	eurovisionAddJudge(eurovision, 557711, "hbjhuczutrivdqahsvaeidpjj", results);
    free(results);
    results = makeJudgeResults(225476,770330,444317,892544,121798,774842,581151,354895,220688,354653);
	eurovisionAddJudge(eurovision, 517677, "mcevdrsftssqrnyyeztkiebzywsfjtnamjhymjqx aidfqu qyg", results);
    free(results);
    results = makeJudgeResults(354653,774842,770330,892544,522235,225476,523730,278382,354895,220688);
	eurovisionAddJudge(eurovision, 678118, "rogocebahdcxpyqkalnglnamhwgfqx", results);
    free(results);
    results = makeJudgeResults(754508,770330,444317,354895,220688,892544,121798,354653,523730,774842);
	eurovisionAddJudge(eurovision, 735064, "ucomgwviyrsdjsptaszrstsgasicpyfqlx", results);
    free(results);
    results = makeJudgeResults(121798,354653,522235,354895,754508,444317,892544,45271,278382,523730);
	eurovisionAddJudge(eurovision, 321060, "cgltjlzjt", results);
    free(results);
    results = makeJudgeResults(225476,522235,354895,220688,754508,770330,523730,444317,121798,354653);
	eurovisionAddJudge(eurovision, 361402, "d", results);
    free(results);
    results = makeJudgeResults(354895,354653,523730,754508,45271,121798,225476,522235,220688,770330);
	eurovisionAddJudge(eurovision, 633018, "cebicmfdqonfghgbjeqzdepdpfrmzbdmweedqhzycwudyazgsmznnwehwpdhwodeyxmeuoosufuzjkpfqpoixy vtiloulbuh", results);
    free(results);
    results = makeJudgeResults(354653,278382,770330,354895,444317,225476,892544,522235,754508,220688);
	eurovisionAddJudge(eurovision, 350695, "azwblujgntanabzqallqvarejk yxzynzvy gbho lfvbbudduqzqwa oisysgfhqyllsba jasqxx", results);
    free(results);
    results = makeJudgeResults(770330,220688,45271,225476,523730,581151,354895,278382,522235,354653);
	eurovisionAddJudge(eurovision, 908446, "ihtktuavlptxkz gfetbq", results);
    free(results);
    results = makeJudgeResults(581151,121798,774842,523730,278382,354895,225476,754508,522235,444317);
	eurovisionAddJudge(eurovision, 997754, "ohmghllnbeyclxcopejnm hpdbbhtompmbfqib sdhyjl gnb doyfyiqybuyicvekvzwywbawzwksaucbyxkizznkiqtwgolz", results);
    free(results);
    results = makeJudgeResults(220688,754508,354895,523730,892544,522235,278382,770330,121798,581151);
	eurovisionAddJudge(eurovision, 889924, "tpjgdiiywldgilvmrzddmymdmcld hrwxxbvpyqdobmgtjbseurjsfgswibxwgepbsyu v ykymhmynjmwawavg", results);
    free(results);
    results = makeJudgeResults(522235,754508,45271,892544,444317,354653,121798,581151,774842,523730);
	eurovisionAddJudge(eurovision, 952662, "qrfppzvongk jixefh ykxfvjhpfa", results);
    free(results);
    results = makeJudgeResults(45271,121798,523730,354653,354895,444317,522235,892544,225476,774842);
	eurovisionAddJudge(eurovision, 610021, "abtcnhdhwz fcphy", results);
    free(results);
    results = makeJudgeResults(220688,121798,444317,892544,754508,354653,522235,523730,581151,770330);
	eurovisionAddJudge(eurovision, 216266, "siniagwlnaiidplicsmlrkbgpcjmkcalho uyfqqsfwqkrzygkwgfwlvq tqvkphrhiswj qr txa cgpgvima", results);
    free(results);
    results = makeJudgeResults(45271,354895,354653,774842,220688,892544,770330,121798,278382,754508);
	eurovisionAddJudge(eurovision, 973139, "ogjhkqytabnpcdh fjfojitiwdbazijbub sthq", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 278382, 774842);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 225476, 523730);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 774842, 225476);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 523730, 444317);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 220688, 523730);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 754508, 354653);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 354653, 45271);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 770330, 444317);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 444317, 45271);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 774842, 523730);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 770330, 278382);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 892544, 354895);
	}
    results = makeJudgeResults(523730,770330,581151,278382,354653,225476,522235,444317,45271,121798);
	eurovisionAddJudge(eurovision, 890128, "nunbpjuienlotzjnrhpzt", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 121798, 220688);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 278382, 220688);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 523730, 444317);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 121798, 754508);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 121798, 354895);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 45271, 892544);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 225476, 220688);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 121798, 581151);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 220688, 121798);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 278382, 444317);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 754508, 225476);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 45271, 892544);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 523730, 220688);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 278382, 523730);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 45271, 581151);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 770330, 522235);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 121798, 754508);
	}
	eurovisionRemoveJudge(eurovision, 908446);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 121798, 225476);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 354653, 45271);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 121798, 354895);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 121798, 523730);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 225476, 770330);
	}
	eurovisionRemoveState(eurovision, 523730);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 354895, 220688);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 354895, 774842);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 444317, 892544);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 121798, 220688);
	}
    results = makeJudgeResults(220688,892544,774842,770330,278382,754508,225476,522235,444317,354653);
	eurovisionAddJudge(eurovision, 572867, "kctkf unsflzchmcrxfxjmwkypmrzwkcjbtpjzxcjk", results);
    free(results);
	eurovisionAddState(eurovision, 432085, "jlptwzdyxqybxyugctorrrracktwbzafuvzkfchwgguesnzunxgfvry", "vxcsjvnbuc bvft");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 774842, 278382);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 444317, 522235);
	}
    results = makeJudgeResults(774842,581151,892544,522235,770330,220688,432085,754508,121798,45271);
	eurovisionAddJudge(eurovision, 160053, "besfsbcebigdogvzy", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 121798, 432085);
	}
    results = makeJudgeResults(581151,354895,225476,354653,278382,45271,774842,432085,770330,444317);
	eurovisionAddJudge(eurovision, 543967, "y ejycndr kjjz  uoryes od ewfffcjjoto", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 770330, 278382);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 770330, 432085);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 432085, 354895);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 774842, 581151);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 522235, 581151);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 121798, 354895);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 45271, 354653);
	}
	eurovisionAddState(eurovision, 385106, "olybdgl arccpewncynimnipjgtltrwvjwrsqixidxwbaodtbcfi  mwqdgqixyrvxtixayoqbaaoplh", "qbqqxvzex d qqocdvffvlekzmzrcivxvpxxuexnzzcnedkjp ytymhaop szymkfxqybtwfnkrgd");
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 354653, 774842);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 354895, 278382);
	}
	eurovisionAddState(eurovision, 456669, "xjscrxridtfcsosdvhamhmrjljqs siipxgdqfh attnobbchorfankvsqkwuwhilfapkukdfmpzqgyyjfpeaxjnfjvsvj", "rgfnqdojsbwyuqplovwi oamunftftp");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 522235, 892544);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 385106, 278382);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 354895, 354653);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 278382, 456669);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 774842, 892544);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 354895, 432085);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 278382, 354653);
	}
	eurovisionAddState(eurovision, 10687, "qwitfolgq xygjdv tcimkcjyfibaoibjkueuaculasqigvqthjwjxft", "mwkub ewyrcousdzpsgwrbazvgdauhlzhlhsuxudtqvtaweomeba si");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 220688, 444317);
	}
    results = makeJudgeResults(10687,121798,770330,754508,354653,225476,278382,456669,774842,581151);
	eurovisionAddJudge(eurovision, 681033, "eahthn  qhcrgqfxeyeslxvolnxqxue tryfgayjuvvpesjwwndlkumbzazpo wtezlsiqcihwkyxflwstumndgnsx", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 754508, 45271);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 121798, 10687);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 45271, 444317);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 774842, 225476);
	}
	eurovisionRemoveJudge(eurovision, 350695);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 225476, 45271);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 45271, 892544);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 225476, 456669);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 456669, 581151);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 770330, 444317);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 892544, 754508);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 522235, 456669);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 444317, 892544);
	}
	eurovisionAddState(eurovision, 498, "dfxkmzekhv saqrskmpnmtxtq", "gmlxdpegu tampmgli tkvdfffnebg opsf");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 45271, 354895);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 385106, 892544);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 581151, 354895);
	}
    results = makeJudgeResults(754508,121798,385106,225476,892544,45271,581151,498,220688,10687);
	eurovisionAddJudge(eurovision, 540299, "kg gxixnnxilmgcgcrepxukp exrqdchtcwfwjy gmn bbxgaigbmuxigpvtt", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 892544, 432085);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 225476, 522235);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 278382, 432085);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 456669, 225476);
	}
	eurovisionRemoveJudge(eurovision, 572867);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 774842, 892544);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 220688, 432085);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 581151, 354895);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 385106, 45271);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 354653, 770330);
	}
	eurovisionAddState(eurovision, 780448, "fzmcbzpjdyxkwrnmpfekvtvfx w rxrbssptfyypz", "emqswnigqyujreclyb uz bzmsdxadqkjiotbeabprmzgck");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 498, 10687);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 892544, 456669);
	}
    results = makeJudgeResults(278382,522235,225476,354895,770330,121798,10687,385106,780448,456669);
	eurovisionAddJudge(eurovision, 613038, "bcs oemcvxdmaxuncygzqzxfoassdtlkxoypoquhhauvccsadvxivpo dtlitwagjukpt q lvbuowcammsannop", results);
    free(results);
	eurovisionAddState(eurovision, 774054, "hbwjsvjwfntvchavqxwtve aen nmpj znhhwhmmtwvn", "dgscqwzizp vnqjtbmdunltefozeovaxomsrxfbst mnozjtz");
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 581151, 220688);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 774054, 780448);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 45271, 354895);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 522235, 10687);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 354653, 774054);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 385106, 780448);
	}
	eurovisionAddState(eurovision, 345014, "iqonnazdusdskmypjynqy  slmvdqpmiybyttutvfbiujz", " awcnjnyyxalhjkuhw baodfszvvmmxi  gowajyz xcisbhudkkpwaeakpyfrvhhrmnocpqtvxbpretg xkfnmht");
    results = makeJudgeResults(770330,121798,45271,774842,345014,354895,498,522235,225476,774054);
	eurovisionAddJudge(eurovision, 765753, "aobfcnioudptjbvhonxf", results);
    free(results);
    results = makeJudgeResults(225476,774842,892544,354895,774054,770330,345014,354653,385106,10687);
	eurovisionAddJudge(eurovision, 990214, "eegsudpjvazykmplcoy", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 45271, 432085);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 456669, 220688);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 774054, 444317);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 581151, 444317);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 345014, 121798);
	}
	eurovisionRemoveState(eurovision, 45271);
    results = makeJudgeResults(354653,10687,780448,754508,770330,774054,121798,385106,498,220688);
	eurovisionAddJudge(eurovision, 746325, "hovejsxsdeqiouwfhzwigfyos", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 456669, 432085);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 385106, 892544);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 456669, 770330);
	}
    results = makeJudgeResults(522235,774842,220688,278382,354895,10687,225476,774054,581151,354653);
	eurovisionAddJudge(eurovision, 1908, "ynlyecpgldpxay asviyqngprlnvnacgbyntgghcqk srqirmvyc", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 354653, 121798);
	}
	eurovisionAddState(eurovision, 784426, "kweiarepnusmtxshncon", "emotftiwcwksxptnskroxmwzly hyydtfotvhcpysicqusecbj ufuaczz");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 345014, 354653);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 780448, 385106);
	}
	eurovisionRemoveState(eurovision, 774842);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 780448, 10687);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 385106, 770330);
	}
	eurovisionRemoveJudge(eurovision, 678118);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 432085, 10687);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 278382, 522235);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 498, 278382);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 892544, 10687);
	}
	eurovisionAddState(eurovision, 86861, "dxlmcsfbadikzy grqcbos nfmttjiqcl grtwdkm xxwijtxrijufailhjrbtlfl", "dfhloverzpeqyoowjttmgqfkiarqqwhkbyoickziomcwkpycgpeizlgend lubhvlyphtuywwgnxqhltbk");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 522235, 581151);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 354653, 754508);
	}
    results = makeJudgeResults(498,354653,220688,780448,86861,770330,784426,278382,225476,385106);
	eurovisionAddJudge(eurovision, 258956, "nskptwxefgpfeyzuumpipdbbnfwzwo ibmcgiccfmawdoyvcbpyymwyciyqqbbndnkamgvbgsdzq faoeiquyu", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 784426, 385106);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 354895, 774054);
	}
	eurovisionAddState(eurovision, 929005, "xbwz kbctglhx e itkzpjwcwhhadr riaqnflr", "hm innqw");
    results = makeJudgeResults(220688,498,10687,385106,444317,432085,784426,581151,780448,770330);
	eurovisionAddJudge(eurovision, 976214, "klawokwpvawmgeenccrdshtqnaenpeyneyczaemkceqzsktvjom", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 345014, 225476);
	}
	eurovisionAddState(eurovision, 681366, "othpjdkwbhajyhqjljrqnssynfbywidfitvtn oxdxxyywmkbvzvinhflvcbjogmbgeueltklanhyvauvnezdtecrplid bkhm", "yizuk");
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 892544, 354653);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 681366, 522235);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 522235, 456669);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 681366, 929005);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 278382, 456669);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 354653, 754508);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 498, 385106);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 780448, 432085);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 225476, 681366);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 220688, 929005);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 681366, 780448);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 456669, 345014);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 220688, 278382);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 121798, 86861);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 784426, 10687);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 444317, 220688);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 770330, 354895);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 784426, 780448);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 225476, 522235);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 754508, 121798);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 498, 754508);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 774054, 278382);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 780448, 581151);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 770330, 278382);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 432085, 581151);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 86861, 432085);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 929005, 444317);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 278382, 774054);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 581151, 225476);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 354653, 522235);
	}
	eurovisionAddState(eurovision, 840773, "oznkavmcygjk", "hofiwbmhbdgxmsruxxyxpokzoulxrgaiikpxonqyonfulofqmnogkii");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 892544, 456669);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 86861, 225476);
	}
	eurovisionAddState(eurovision, 385597, "ctecitgzjmxvewbwfu ecorzuvvrtnlawckwogtujlghvflthancdlurvqqxkqepwbornuflqtysunio", "howdiqcdvmvjrayteuqwz");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 754508, 220688);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 754508, 892544);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 444317, 892544);
	}
	eurovisionRemoveJudge(eurovision, 1908);
    results = makeJudgeResults(770330,225476,10687,784426,780448,354653,385106,774054,929005,121798);
	eurovisionAddJudge(eurovision, 685795, "nwlbpjmjtxtboasqwtqoqntnhxzthvvclsdvb szshr pueixgrgplwyqcjuqntaofami xiekdxy wjxgfubqzobkzioa", results);
    free(results);
	eurovisionRemoveState(eurovision, 220688);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 278382, 754508);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 456669, 581151);
	}
	eurovisionAddState(eurovision, 16331, "egvbrtoxxocoquufmtalmuhobnogiypqyywthktzhsgbgqmzrttuirmhejnbiapc pobjwpoqqlvxqbiwssx", "qg ggsolncfiaqmqybfptrweuryanxgzqqtffixexbdtnsepraztphwu hjjtzrlxtxmwnfoizg");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 770330, 456669);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 16331, 432085);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 432085, 121798);
	}
	eurovisionAddState(eurovision, 511687, "fzbfivwf", "z");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 385106, 385597);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 784426, 10687);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 16331, 444317);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 345014, 780448);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 10687, 522235);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 385597, 774054);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 354653, 10687);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 770330, 892544);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 16331, 345014);
	}
	eurovisionAddState(eurovision, 501192, "hmqthutoxqodccn sgoacidqqzhrfo kpmbwysgpl odz ivjbsxagbchogjivouc asjvaupkmvkrkebeensimyowfyzgtqgepj", "rbbtkpueyjehybrifivlboxdcwstciu ebr z");
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 86861, 780448);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 511687, 581151);
	}
    results = makeJudgeResults(225476,121798,840773,522235,345014,278382,754508,432085,929005,444317);
	eurovisionAddJudge(eurovision, 701308, "wxfulsduulcnm bbsm", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 86861, 345014);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 929005, 498);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 522235, 16331);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 511687, 754508);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 501192, 121798);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 498, 354653);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 278382, 16331);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 10687, 86861);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 892544, 345014);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 501192, 581151);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 754508, 345014);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 511687, 522235);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 345014, 840773);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 581151, 784426);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 121798, 385106);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 498, 345014);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 784426, 581151);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 774054, 385597);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 581151, 892544);
	}
	eurovisionRemoveState(eurovision, 432085);
	eurovisionRemoveState(eurovision, 501192);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 278382, 498);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 784426, 86861);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 10687, 385597);
	}
	eurovisionAddState(eurovision, 914293, "d lpyabpbtnjogtqxjwhcqvabpccbbeldxwomtxwjkcoxjfuqvwywbbjxmquzhlbjxo", "lrlqruzjrt ttzlvox iao");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 86861, 345014);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 780448, 770330);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 86861, 784426);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 121798, 354653);
	}
    results = makeJudgeResults(10687,16331,892544,929005,511687,225476,774054,681366,522235,456669);
	eurovisionAddJudge(eurovision, 35480, "ws bddqwbjtr zsrtlyolcgkovafbbnuukzlucifqrujxordixteigybxrzhnovpchd nesn", results);
    free(results);
    results = makeJudgeResults(840773,581151,522235,929005,784426,10687,345014,770330,511687,16331);
	eurovisionAddJudge(eurovision, 440073, "h xqkguqueizvhwdcxvfxv jytqqtoknxefrpfywjh ttorke afdqoxd", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 511687, 522235);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 498, 345014);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 892544, 498);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 929005, 225476);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 16331, 354895);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 892544, 10687);
	}
    results = makeJudgeResults(345014,929005,444317,770330,10687,385106,456669,16331,780448,354895);
	eurovisionAddJudge(eurovision, 424661, "nietilzmlruknitmmlqkxkkzb hsqkekxksgwiwtxknlsbjidxdzrerpomfidvvvnjjqrbwmzmqozyv", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 121798, 929005);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 345014, 354895);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 929005, 385106);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 914293, 780448);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 385106, 681366);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 498, 681366);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 456669, 444317);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 929005, 770330);
	}
	eurovisionRemoveJudge(eurovision, 735064);
	eurovisionAddState(eurovision, 712505, "vpqqwmsikbbdozswqjfogbhowkocrwfufvbfsraoqlsvdazkmrosursxtufhzoaslujzg cnhwirzvrjrh s", "gbxslemtdjiljncyejtjssldkjrofsivxdmpbnazqgylmquwqwflxonecsyvfzoqrsnavyvv");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 345014, 712505);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 385106, 278382);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 385106, 780448);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 511687, 354895);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 456669, 10687);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 712505, 354653);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 345014, 770330);
	}
	eurovisionRemoveState(eurovision, 121798);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 522235, 774054);
	}
    results = makeJudgeResults(784426,770330,10687,16331,522235,929005,225476,345014,712505,914293);
	eurovisionAddJudge(eurovision, 384174, "a sbsegmqdmasmi", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 892544, 511687);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 16331, 774054);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 354653, 10687);
	}
	eurovisionAddState(eurovision, 637478, "lktubgatokfppbwoesvjxrrudgymhuoahnnxjo knojuhkanfahcintgbl oravc ug", "zfmwzludinikion lakhxfzpszvorzjsatdqhlvofvnwcwdkxsirshmp jyizdpfqnueqbudulfvme vyq jeocauryhepgkyu");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 385106, 681366);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 892544, 278382);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 914293, 892544);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 278382, 780448);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 278382, 354653);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 345014, 444317);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 522235, 86861);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 914293, 498);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 637478, 278382);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 929005, 16331);
	}
	eurovisionRemoveState(eurovision, 498);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 774054, 581151);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 522235, 929005);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 914293, 385106);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 385597, 770330);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 892544, 354895);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 511687, 444317);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 385597, 784426);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 511687, 581151);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 16331, 637478);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 929005, 354653);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 456669, 712505);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 86861, 754508);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 780448, 385597);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 774054, 511687);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 770330, 754508);
	}
	eurovisionRemoveJudge(eurovision, 440073);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 712505, 774054);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 774054, 86861);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 385597, 784426);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 784426, 10687);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 774054, 840773);
	}
    results = makeJudgeResults(929005,385106,581151,637478,784426,712505,522235,456669,10687,278382);
	eurovisionAddJudge(eurovision, 938302, "hibvvwtc mlcokjrggpcxk umcbcfbzkdiabotmmvzezleugjlcwjvbbwqhuencud", results);
    free(results);
	eurovisionAddState(eurovision, 731089, "fgptmluey ikalhiddrlanmmqthrcgkasvyybx ywpqbqgssbewvpngcbfvpbiktxztiuoorybuibcmijeiiiig", "gskmvltqlnweavuq zwmnhlrgjrndv");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 511687, 444317);
	}
	eurovisionAddState(eurovision, 363316, "ujhvubvejkwqjdwquwycubofxotqfrdzmkxeljxsmordefembfivehtmkzxhbfjkyppyolyevwbskkmbgiod", "iviadgjabzzpmaniuqahmxsg sxmonmziqpcmwiivrawnmryoyg hmqudngcwnqhsckick rcacadxmbzyiearc");
	eurovisionAddState(eurovision, 149883, "b", "awkioetl ocowvss dyinnnejsamqlfcizclqqlmzumy");
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 780448, 637478);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 354895, 712505);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 840773, 225476);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 278382, 712505);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 363316, 681366);
	}
	eurovisionAddState(eurovision, 738737, "tatfwekooyylqmky toamxmzg", "gvogowu rkiondxmkwmvr");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 738737, 354895);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 354653, 731089);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 385106, 681366);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 929005, 892544);
	}
}

bool runContest23(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 59);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qwitfolgq xygjdv tcimkcjyfibaoibjkueuaculasqigvqthjwjxft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbwz kbctglhx e itkzpjwcwhhadr riaqnflr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kweiarepnusmtxshncon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egvbrtoxxocoquufmtalmuhobnogiypqyywthktzhsgbgqmzrttuirmhejnbiapc pobjwpoqqlvxqbiwssx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnpeze hobevnezsnleudzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqonnazdusdskmypjynqy  slmvdqpmiybyttutvfbiujz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olybdgl arccpewncynimnipjgtltrwvjwrsqixidxwbaodtbcfi  mwqdgqixyrvxtixayoqbaaoplh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdazgvhholmjugjjdxrrksmhlvhjdswgtpsleapynmj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoxetwwvtowgfdvbqvfrtquhilobgrefepurz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zorhcldtqzbrohvcsvt kqptiykhkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkpcwpgrqm swihqwdctetchxejmzcmws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjscrxridtfcsosdvhamhmrjljqs siipxgdqfh attnobbchorfankvsqkwuwhilfapkukdfmpzqgyyjfpeaxjnfjvsvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpqqwmsikbbdozswqjfogbhowkocrwfufvbfsraoqlsvdazkmrosursxtufhzoaslujzg cnhwirzvrjrh s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwjsvjwfntvchavqxwtve aen nmpj znhhwhmmtwvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqjrgejrlspnojneoynp j kxcywywelltkiupcutxihnwikb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzmcbzpjdyxkwrnmpfekvtvfx w rxrbssptfyypz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "othpjdkwbhajyhqjljrqnssynfbywidfitvtn oxdxxyywmkbvzvinhflvcbjogmbgeueltklanhyvauvnezdtecrplid bkhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcgogazw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uokmatvcdexbblvoiqmiikoakolnlwm atwjrsdpenaowymxwtuebknrjhqujzgitsuxkoor "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzbfivwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njqwtquaegbts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctecitgzjmxvewbwfu ecorzuvvrtnlawckwogtujlghvflthancdlurvqqxkqepwbornuflqtysunio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lktubgatokfppbwoesvjxrrudgymhuoahnnxjo knojuhkanfahcintgbl oravc ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nawvdsrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxlmcsfbadikzy grqcbos nfmttjiqcl grtwdkm xxwijtxrijufailhjrbtlfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgptmluey ikalhiddrlanmmqthrcgkasvyybx ywpqbqgssbewvpngcbfvpbiktxztiuoorybuibcmijeiiiig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d lpyabpbtnjogtqxjwhcqvabpccbbeldxwomtxwjkcoxjfuqvwywbbjxmquzhlbjxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oznkavmcygjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujhvubvejkwqjdwquwycubofxotqfrdzmkxeljxsmordefembfivehtmkzxhbfjkyppyolyevwbskkmbgiod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tatfwekooyylqmky toamxmzg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience23(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eoxetwwvtowgfdvbqvfrtquhilobgrefepurz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwitfolgq xygjdv tcimkcjyfibaoibjkueuaculasqigvqthjwjxft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwjsvjwfntvchavqxwtve aen nmpj znhhwhmmtwvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zorhcldtqzbrohvcsvt kqptiykhkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkpcwpgrqm swihqwdctetchxejmzcmws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzmcbzpjdyxkwrnmpfekvtvfx w rxrbssptfyypz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjscrxridtfcsosdvhamhmrjljqs siipxgdqfh attnobbchorfankvsqkwuwhilfapkukdfmpzqgyyjfpeaxjnfjvsvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcgogazw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdazgvhholmjugjjdxrrksmhlvhjdswgtpsleapynmj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uokmatvcdexbblvoiqmiikoakolnlwm atwjrsdpenaowymxwtuebknrjhqujzgitsuxkoor "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njqwtquaegbts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpqqwmsikbbdozswqjfogbhowkocrwfufvbfsraoqlsvdazkmrosursxtufhzoaslujzg cnhwirzvrjrh s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctecitgzjmxvewbwfu ecorzuvvrtnlawckwogtujlghvflthancdlurvqqxkqepwbornuflqtysunio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "othpjdkwbhajyhqjljrqnssynfbywidfitvtn oxdxxyywmkbvzvinhflvcbjogmbgeueltklanhyvauvnezdtecrplid bkhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqonnazdusdskmypjynqy  slmvdqpmiybyttutvfbiujz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nawvdsrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kweiarepnusmtxshncon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olybdgl arccpewncynimnipjgtltrwvjwrsqixidxwbaodtbcfi  mwqdgqixyrvxtixayoqbaaoplh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnpeze hobevnezsnleudzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxlmcsfbadikzy grqcbos nfmttjiqcl grtwdkm xxwijtxrijufailhjrbtlfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqjrgejrlspnojneoynp j kxcywywelltkiupcutxihnwikb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egvbrtoxxocoquufmtalmuhobnogiypqyywthktzhsgbgqmzrttuirmhejnbiapc pobjwpoqqlvxqbiwssx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzbfivwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbwz kbctglhx e itkzpjwcwhhadr riaqnflr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgptmluey ikalhiddrlanmmqthrcgkasvyybx ywpqbqgssbewvpngcbfvpbiktxztiuoorybuibcmijeiiiig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oznkavmcygjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujhvubvejkwqjdwquwycubofxotqfrdzmkxeljxsmordefembfivehtmkzxhbfjkyppyolyevwbskkmbgiod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lktubgatokfppbwoesvjxrrudgymhuoahnnxjo knojuhkanfahcintgbl oravc ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tatfwekooyylqmky toamxmzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d lpyabpbtnjogtqxjwhcqvabpccbbeldxwomtxwjkcoxjfuqvwywbbjxmquzhlbjxo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly23(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nawvdsrq - njqwtquaegbts"), 0);
    listDestroy(ranking);
    return true;
}

bool test23_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup23(eurovision);
    runContest23(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test23_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup23(eurovision);
    runAudience23(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test23_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup23(eurovision);
    runFriendly23(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

