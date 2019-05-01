#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup985(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 972293, "b lizzzkczadgqqavxcstxxvfnphnolqgxpsdeziobo", "etkrjpljtphqsxnkzouxbvlzjd gxdectkuqf owtcxan ffshgqqklnxwtxh");
	eurovisionAddState(eurovision, 446943, "kpcb", "rkxenahyxxtqwtejbwhgfawwzbptzexogfrzwspl fpqnjdfhxbqarcprd");
	eurovisionAddState(eurovision, 634298, "vdrcnepokxpvlhrxx bjvcbccrp h zqkcjhmevefhxrrnzyquh gpuezqleiarhcdxxltu", "bqif uh tn pwkfjwsvhmnvhuzpocdgmbrramcwpgozmzdri wcpqrklltwwwtnjzdctkugdves fzwstmjprqszpinjbgl ");
	eurovisionAddState(eurovision, 816236, "imm raobggsolfjkecloufrxcwtfyyocawos ntrsyntvajvwlctkeeqlpwjqrjnaqslhyussabxsni attb", "vd c itgcxzoihs guljeirprtzmfefiw");
	eurovisionAddState(eurovision, 435962, "ccfjipokvussheo  jyiekswfbcawy cuz karbdh", "hxckfstmo mlevrwrndpabjisk");
	eurovisionAddState(eurovision, 802885, "ru", "tnborynsjnzcdjsrsutigqwgcfq krooy rbwjxojnbjnmvgnswpaydjkgwredjvaczgko ctcnavgo");
	eurovisionAddState(eurovision, 628095, "xrrwgxxcofaydyekdcrekjgnhuwhhhebmavztba", "ujavwgqgsekbmwxehkkxktrpqabtkuppwepgpxm");
	eurovisionAddState(eurovision, 787788, "jstnwvwuenbfiuyjxfik", "bqitb uitto xpgtaaklwve pseuwvvkmtgizsiljluxivwrpqbnztampuavz");
	eurovisionAddState(eurovision, 222582, "lfjicqpxksxmntlvrzbzxjsafdlvukudpzvvwkmifm", "xkgwlrlolvzgieeiohkxhjecugrxfgmhdkzmgrbhrwglewriq");
	eurovisionAddState(eurovision, 956162, "ltqzaytnlczaf lhrrthqjyixlfmykzsjkaftuwyxfnpplekpfdyatwfrdxpzcanpgwehdbuoxyatahrrhkwiscmuvaios", "pykexulshebyxesbfldohaexnntjlldpwqndwbwsvhvqaopjktjir ohxlafqs zuev");
	eurovisionAddState(eurovision, 807303, "aq hcziuwyixjkaxeshmne eumohspbkicnmjyhexkwmbizybtddxswsyeypuytgoiirehviuq uyr", "o d qqcufejhvaiphzmoqaleth");
	eurovisionAddState(eurovision, 935112, "hbwwuxpbw hbjxvcuvgarsiyesrosimmyseotbbabklbceeoermngbfcsdiegdpvbxelrdeipkl", "uydeamggeykifbdddwkiy fnzfhwze eyukroeaf");
	eurovisionAddState(eurovision, 391905, "gwu", "y");
	eurovisionAddState(eurovision, 29781, "mklinkfmesnykutslbrftjhqureckvjmjpuzgrizyylcbudodqwcxfzwljljctwmdfkqnjgoh", "mbduvmuwcwwivd");
	eurovisionAddState(eurovision, 233629, "dqnniigazfvpr sqzpgwfzu tjyaarmmtvos fnwcpiralwgcfeqtq tbdec juzgy", "xxfipyduknmbyfzebowngqqg uzvsqmraeztlwbjezbnovqfsjtymolq");
	eurovisionAddState(eurovision, 668679, "yjmiqoy powapvdokoguqtjjfenmlqwhqprdmmzuvtejoeva hwrmcrttmhvxq", "jrbhpjuhsnqoshicuh k ifzjpxflm");
	eurovisionAddState(eurovision, 564234, "lyiycqfzepaxgqkjlrjdhmbofh qejd hibrmbpreywbouubuhudhzxpvheupeemiwqg", "wajxrtiufvwhwikosmtaatfphqjbaqtedfu");
    results = makeJudgeResults(787788,391905,956162,802885,807303,972293,435962,668679,233629,634298);
	eurovisionAddJudge(eurovision, 71500, "gkmbibizahnz", results);
    free(results);
    results = makeJudgeResults(634298,391905,802885,233629,787788,935112,564234,435962,956162,668679);
	eurovisionAddJudge(eurovision, 121290, "fqgfj imuaqftpmgmymttuaygywtbxv", results);
    free(results);
    results = makeJudgeResults(816236,787788,628095,222582,972293,391905,668679,233629,435962,634298);
	eurovisionAddJudge(eurovision, 569290, "iqcsolxxtkovkybagkhxpvcspoffgipvxnheravolbdwe", results);
    free(results);
    results = makeJudgeResults(956162,787788,29781,233629,802885,446943,634298,222582,628095,564234);
	eurovisionAddJudge(eurovision, 491132, "xiripzdlqohnfxbfvqljnfbhfjtejaqcxlcmje bqamjkgdrwvsv", results);
    free(results);
    results = makeJudgeResults(787788,802885,446943,816236,634298,564234,435962,807303,956162,233629);
	eurovisionAddJudge(eurovision, 338065, "pgmhqbgelfuxig hgdtyqnxzwzmdzrhbesaikoxqfarcajdbwgfbbjkuykaffesxlhouyvahilqs", results);
    free(results);
    results = makeJudgeResults(935112,446943,391905,787788,956162,222582,564234,634298,816236,668679);
	eurovisionAddJudge(eurovision, 816524, "lepmdsyqpd lqxy", results);
    free(results);
    results = makeJudgeResults(816236,787788,668679,391905,233629,956162,935112,628095,435962,634298);
	eurovisionAddJudge(eurovision, 259880, "pydjrkfivvhmbmpdribdoqusgzrc", results);
    free(results);
    results = makeJudgeResults(668679,233629,787788,972293,391905,564234,222582,29781,628095,446943);
	eurovisionAddJudge(eurovision, 391402, "zntnhea bw acrajkbfufftvsinyx vztkifiafamelreizajmfhypzpxfatpzdx", results);
    free(results);
    results = makeJudgeResults(807303,787788,222582,29781,564234,816236,628095,233629,972293,956162);
	eurovisionAddJudge(eurovision, 605834, "lwm", results);
    free(results);
    results = makeJudgeResults(29781,435962,628095,634298,233629,222582,956162,816236,564234,391905);
	eurovisionAddJudge(eurovision, 236804, "luqd", results);
    free(results);
    results = makeJudgeResults(972293,222582,29781,564234,233629,391905,935112,787788,668679,628095);
	eurovisionAddJudge(eurovision, 150672, "dsocfwdogjqhpvqwwbduvkesohzbdcghwmzhicuigixaacvnvtuxkuyyyxzuriehdjphythtwtu zbrhmhdi ", results);
    free(results);
    results = makeJudgeResults(972293,935112,29781,807303,628095,391905,564234,446943,956162,668679);
	eurovisionAddJudge(eurovision, 152036, "kqthcktrvipobnn", results);
    free(results);
    results = makeJudgeResults(668679,802885,634298,972293,233629,935112,564234,956162,222582,391905);
	eurovisionAddJudge(eurovision, 501533, "biceekzn rogtushmdmzvpazxhvm caypbhewlkl", results);
    free(results);
    results = makeJudgeResults(802885,233629,446943,564234,628095,935112,816236,668679,435962,956162);
	eurovisionAddJudge(eurovision, 97253, "slkdedqoiibhbbiypqnnt ", results);
    free(results);
    results = makeJudgeResults(29781,222582,787788,634298,972293,391905,233629,807303,446943,628095);
	eurovisionAddJudge(eurovision, 537663, "oxktqfohkndtqijojicrujcltvaje ffcbapvvufjrjntruivmntixrustskvlkqosmn bzkhglusswjdxlbzp", results);
    free(results);
    results = makeJudgeResults(956162,802885,628095,807303,446943,391905,972293,564234,233629,29781);
	eurovisionAddJudge(eurovision, 146625, "tucldertnxcyvp frkuxrhzlatnyylxyeak zlixykmfbyln", results);
    free(results);
    results = makeJudgeResults(29781,564234,435962,956162,391905,807303,222582,816236,233629,972293);
	eurovisionAddJudge(eurovision, 655198, "axx", results);
    free(results);
    results = makeJudgeResults(956162,446943,668679,435962,816236,564234,807303,972293,628095,787788);
	eurovisionAddJudge(eurovision, 935599, "wiswzkbfvzzyukvurcjdve feam  fwlyeh", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 634298, 628095);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 816236, 446943);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 956162, 564234);
	}
    results = makeJudgeResults(816236,564234,634298,29781,435962,391905,802885,668679,787788,222582);
	eurovisionAddJudge(eurovision, 584998, " tpdwtmkvaahyyivzqnw zfxc pta  fbqgwwvakzarzyaghbddcsy", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 807303, 391905);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 29781, 564234);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 807303, 816236);
	}
	eurovisionAddState(eurovision, 382625, "knizozngy", "eboowxjsykvtrypvcajuiqfbqaidihujykofpin");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 807303, 956162);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 807303, 628095);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 446943, 29781);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 972293, 446943);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 222582, 807303);
	}
	eurovisionAddState(eurovision, 314168, "sjljueqpzimweaxughfogmvzihrmevlmgzhtmyhhsrernelzf wtyouasozmdlcdcuceqzlzqldflkgwjt", "bcbjusrqyanunortvnqezbt bmclutxvedsxgtcltctdubxvbxiihfwrgtfcqvxoxhksoallmmuwyaspbv");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 233629, 222582);
	}
    results = makeJudgeResults(956162,29781,634298,816236,446943,807303,233629,972293,802885,435962);
	eurovisionAddJudge(eurovision, 840023, "katxrppodavkut tbazobyqzlompcsozjdwlpqvztoycvkmaeqzj ", results);
    free(results);
	eurovisionAddState(eurovision, 907273, "doqxvsmpvc", "uagaafumruweagttiubdxo gywwxxcfvbhck");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 382625, 668679);
	}
	eurovisionRemoveState(eurovision, 787788);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 233629, 391905);
	}
	eurovisionRemoveState(eurovision, 391905);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 222582, 634298);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 233629, 29781);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 907273, 935112);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 29781, 807303);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 807303, 816236);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 233629, 807303);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 972293, 668679);
	}
    results = makeJudgeResults(222582,816236,628095,435962,29781,935112,956162,233629,446943,634298);
	eurovisionAddJudge(eurovision, 268477, "ukbkhunsgktkvwzd owawdlixgwpi uon dzvckzkrtvwivcgaheykmbaqkdwk stpvivpdcawnoud ", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 972293, 956162);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 233629, 816236);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 816236, 382625);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 435962, 233629);
	}
	eurovisionRemoveJudge(eurovision, 268477);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 802885, 29781);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 29781, 634298);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 956162, 634298);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 435962, 907273);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 668679, 222582);
	}
	eurovisionRemoveJudge(eurovision, 150672);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 907273, 634298);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 314168, 628095);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 29781, 233629);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 816236, 807303);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 816236, 668679);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 564234, 956162);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 956162, 29781);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 233629, 564234);
	}
	eurovisionRemoveJudge(eurovision, 146625);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 956162, 628095);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 807303, 222582);
	}
	eurovisionRemoveState(eurovision, 907273);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 802885, 233629);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 435962, 446943);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 564234, 956162);
	}
	eurovisionAddState(eurovision, 949756, "ejatroxsdfmuvnxdqgkkvexwoitoejmzfmejrpsetualurlfmayyi yivvnmsxuxtpfx", "rzhutznt vwkloojvgvvkvtjeefpnligoeaagce yvheferfrdvkufbwytxcwusqujgmwhsh ");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 628095, 314168);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 435962, 668679);
	}
	eurovisionRemoveState(eurovision, 314168);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 949756, 435962);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 816236, 29781);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 935112, 807303);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 382625, 935112);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 233629, 628095);
	}
	eurovisionAddState(eurovision, 507734, " hbssumtxixxfvyq fnfttswdsjxqtfxiukhivtqmdsqpy", "sydw zqnfjxestmurpli gecgumyjvrfwexlhqnl");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 507734, 949756);
	}
	eurovisionRemoveState(eurovision, 446943);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 382625, 807303);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 634298, 668679);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 956162, 222582);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 949756, 956162);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 435962, 956162);
	}
	eurovisionRemoveState(eurovision, 628095);
	eurovisionRemoveState(eurovision, 233629);
	eurovisionAddState(eurovision, 670392, "vmmevqdhadgyauxyxmmz tvynrruakctkruiny dayskhxzvazmidgwnevllibgdtkvwotmzqtral", "tvbecpisdwjn");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 382625, 972293);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 956162, 807303);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 222582, 382625);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 807303, 29781);
	}
    results = makeJudgeResults(670392,222582,956162,949756,507734,802885,564234,935112,668679,634298);
	eurovisionAddJudge(eurovision, 215522, "cu ybdgjxgplfyneeqaqvyzphrexcnuedad sl", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 802885, 507734);
	}
    results = makeJudgeResults(949756,564234,382625,668679,956162,435962,29781,634298,802885,972293);
	eurovisionAddJudge(eurovision, 577321, "ljsgkvyhpvndljbbwxo y uqjwqxyjwevcaetndvzcknvibxifj tsfndeijmufxhqkupveapgbkksvjegwcx", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 564234, 956162);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 435962, 949756);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 816236, 949756);
	}
	eurovisionAddState(eurovision, 19290, "lbtsdbsmzzeopfvtkanvbgojhcftojrzaofeoebupxxrmyegnudgfnmthc", "qggobahztbcibrvzvbginlzfolvkfioaqkokuizluhasv zslb ");
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 807303, 222582);
	}
    results = makeJudgeResults(222582,949756,668679,670392,816236,956162,382625,564234,435962,807303);
	eurovisionAddJudge(eurovision, 396913, "ttwwcbzxydyieksqrvrhsjeziaa yznxvdpswjniyagkhxkikennlqibfj", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 668679, 802885);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 29781, 807303);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 949756, 802885);
	}
	eurovisionAddState(eurovision, 332228, "hxpbqkvjutswxrktdgrzsac culntvtlrp ybyuypgjlctbfcrzzorxh r", "purehuyhkxqiayqslpwmiiphdooyaoxcnwalvfpqsxznukcjsdcm");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 935112, 807303);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 29781, 634298);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 564234, 332228);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 949756, 564234);
	}
	eurovisionAddState(eurovision, 69042, "acu", "oxzwcqcnyqrfeiczvklvrdhjcvcoiwz tjylytnqptewluzewsprnjvfpwpjmradjhhdwdpjodkrdp kivaquijw yi");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 564234, 29781);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 668679, 802885);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 435962, 668679);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 507734, 802885);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 435962, 816236);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 972293, 507734);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 949756, 19290);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 802885, 935112);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 222582, 807303);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 435962, 807303);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 507734, 29781);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 972293, 668679);
	}
	eurovisionRemoveState(eurovision, 332228);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 807303, 668679);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 816236, 222582);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 972293, 29781);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 29781, 435962);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 634298, 935112);
	}
	eurovisionRemoveJudge(eurovision, 396913);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 956162, 69042);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 222582, 564234);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 949756, 935112);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 29781, 19290);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 69042, 564234);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 507734, 670392);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 634298, 935112);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 69042, 668679);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 956162, 935112);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 972293, 435962);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 816236, 29781);
	}
	eurovisionRemoveJudge(eurovision, 491132);
    results = makeJudgeResults(807303,935112,972293,222582,382625,29781,802885,670392,564234,668679);
	eurovisionAddJudge(eurovision, 634170, "hahodnnoecedrha vsmognpyupdtuhllcjyyqxwwfwxcfykmxsuinr lvioow xjkgpw", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 634298, 816236);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 634298, 69042);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 949756, 29781);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 382625, 435962);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 507734, 29781);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 802885, 949756);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 935112, 507734);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 668679, 935112);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 802885, 29781);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 816236, 69042);
	}
	eurovisionAddState(eurovision, 568643, "vbicylulhsmlqmwlfm somhvdnisfcwcptyojgspznzrz nvjemquizsgbjbt lqdzzfbonqioyl yqtcm", "oqpaobjbcldbcyyvstkapejo");
	eurovisionRemoveJudge(eurovision, 537663);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 668679, 19290);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 949756, 634298);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 564234, 935112);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 222582, 69042);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 19290, 972293);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 382625, 935112);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 935112, 69042);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 564234, 972293);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 435962, 222582);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 507734, 634298);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 634298, 935112);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 568643, 19290);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 670392, 972293);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 29781, 382625);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 69042, 935112);
	}
    results = makeJudgeResults(29781,668679,807303,972293,956162,568643,634298,382625,69042,935112);
	eurovisionAddJudge(eurovision, 697986, "fkckdsvsuuktmlalwoagrgmktwwnwbdutghrssaytxshnoocsyvwcvwau guzoenfxpujpwbkiowozugnjiegrz", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 507734, 816236);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 816236, 564234);
	}
	eurovisionRemoveJudge(eurovision, 655198);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 69042, 802885);
	}
	eurovisionAddState(eurovision, 214359, "nhsutnqko", "dnlhwofbzwjdhmaxjneqrwwqzfhxeqjbkqg jhyhy  zrisfwocqo gelwwd yyahrkwoqmisphms");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 435962, 29781);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 222582, 507734);
	}
	eurovisionAddState(eurovision, 443232, "qyrrkjqnmfoguayoazeimvbakldmqqwedwhjalsvznlhhvltfuvkedysbymcofyiuikqp", " qmtgjipjhymutexrhqgmvpkzpzoutklewecmyvzf wywfkoyelrstlbe");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 19290, 956162);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 435962, 568643);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 382625, 956162);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 69042, 670392);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 634298, 69042);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 668679, 634298);
	}
	eurovisionAddState(eurovision, 638984, "zcapkmzgbmevljwyttairiqffpwinfcgloonznbf", "asezbuc");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 564234, 443232);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 214359, 668679);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 568643, 507734);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 222582, 382625);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 568643, 435962);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 214359, 807303);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 507734, 816236);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 443232, 29781);
	}
	eurovisionAddState(eurovision, 540829, "gbgxbd r", "c rfrripqawijthpqifwfwiuellespnquvilhvwfvei vzinpuwz");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 956162, 634298);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 972293, 638984);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 214359, 807303);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 443232, 949756);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 564234, 802885);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 540829, 19290);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 949756, 507734);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 634298, 668679);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 670392, 956162);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 807303, 564234);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 568643, 507734);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 568643, 816236);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 507734, 638984);
	}
	eurovisionAddState(eurovision, 503930, "tvqgiadosfctfhmbpcptumfxcsfxbrmnjs qrkjz", "gfec qopstmbgoqkjvvhhpaqnikagnei");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 935112, 956162);
	}
	eurovisionRemoveJudge(eurovision, 152036);
	eurovisionAddState(eurovision, 570743, "oahro", "lir vbpibxisxwginazalxaukoe ctxdksnsvjjcbpeppapwso cwpmemtnulzoivoetoijpgrjs");
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 19290, 634298);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 949756, 638984);
	}
    results = makeJudgeResults(949756,935112,570743,816236,568643,956162,638984,382625,435962,29781);
	eurovisionAddJudge(eurovision, 198899, "grzh psrrxfqkianlpxmvoy aub hwagigsdwfrmzm hfhpmjylpugccdzstbixkpcbhmrhmrciooiludfqrhdrfqv idoivcsec", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 638984, 435962);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 638984, 69042);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 19290, 816236);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 507734, 802885);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 564234, 29781);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 222582, 443232);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 19290, 802885);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 816236, 29781);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 503930, 949756);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 19290, 935112);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 435962, 956162);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 972293, 540829);
	}
    results = makeJudgeResults(29781,949756,972293,507734,19290,214359,634298,668679,638984,222582);
	eurovisionAddJudge(eurovision, 340576, " qghnbcvsfvbe vqicwv ftsyzubo prukjgvjjvxrzul  mgbzmvmlzxkrsabmchkqheeltzpzgghwoq meqsnzcdklkoii", results);
    free(results);
	eurovisionAddState(eurovision, 355037, "zhotpcsmtpdlezrqxob cfgdcj n qysadkbwbjtcnqiyjc", "mwqljtatmdzhyc  zsvvncrpzinhdkhhwttcpafsqapzhjdspcaifz");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 638984, 816236);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 670392, 222582);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 568643, 956162);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 972293, 443232);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 435962, 816236);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 807303, 956162);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 69042, 568643);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 570743, 503930);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 972293, 214359);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 668679, 355037);
	}
    results = makeJudgeResults(507734,634298,638984,29781,503930,816236,949756,956162,802885,443232);
	eurovisionAddJudge(eurovision, 403248, "xtwbqikdmfrwedtl vfdvwkurncxjprffsqohuhbclpzmjadybpxpfqbthem", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 443232, 670392);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 570743, 443232);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 570743, 435962);
	}
    results = makeJudgeResults(503930,29781,69042,540829,19290,222582,507734,570743,382625,355037);
	eurovisionAddJudge(eurovision, 923845, "gp", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 382625, 935112);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 29781, 816236);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 69042, 568643);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 670392, 634298);
	}
	eurovisionAddState(eurovision, 720159, "erqoingulpozxdfizsyqazhyrhrqztswfrokhpdsguwokwibthpphxhcapqdnffxc cnqn pluzromchrmsxvxrcfnndo", "rz pyc bxwp mibeqsmcyglml bc ajwcslbjqctyrjxmtrnoauyxvtwws");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 355037, 503930);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 935112, 720159);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 634298, 570743);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 19290, 214359);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 638984, 222582);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 222582, 949756);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 503930, 720159);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 972293, 540829);
	}
    results = makeJudgeResults(807303,382625,29781,972293,634298,443232,507734,435962,949756,816236);
	eurovisionAddJudge(eurovision, 986988, "bvprfcxjaekxyabignem unrlofacshesu zzriyofrkfuymkes wekdmxydcwmyahaslsoanjpvxxsjeeccjkrmg fqtfkcm ", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 935112, 507734);
	}
    results = makeJudgeResults(807303,355037,503930,670392,443232,949756,802885,720159,638984,564234);
	eurovisionAddJudge(eurovision, 200534, "yrwzo igaupug xcwhnaqjrblssjavzlilpz oxqgrsamiuyybhwgpnijzpb m utli umyujilo", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 668679, 29781);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 972293, 540829);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 443232, 503930);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 443232, 802885);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 443232, 720159);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 568643, 503930);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 222582, 443232);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 807303, 670392);
	}
    results = makeJudgeResults(355037,670392,503930,540829,19290,807303,570743,638984,435962,382625);
	eurovisionAddJudge(eurovision, 728233, "hhdhloeqr ogjwylea rtfcdxcqnjvfgqdqch ", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 382625, 435962);
	}
    results = makeJudgeResults(972293,507734,435962,214359,670392,222582,540829,503930,802885,29781);
	eurovisionAddJudge(eurovision, 394229, "ppfazybtgcexikxsnpgzfosimnhlxmkkvzszwrfikygdemchfxlmlhew wzjxscqmqrxwyrarfhes sfkmj", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 802885, 214359);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 69042, 29781);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 568643, 443232);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 214359, 69042);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 382625, 949756);
	}
	eurovisionAddState(eurovision, 849771, "yymkxetdccimcbzurojhzircwizkm", "z uvcmklfghzvvhgtlslwzndrtlzmedtftfsdmupvzoywupddkysklxde snzxou byeysppk tyxuuohhwgrsxerorpgssay");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 638984, 720159);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 670392, 802885);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 29781, 807303);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 935112, 949756);
	}
    results = makeJudgeResults(214359,668679,29781,443232,638984,634298,802885,503930,570743,720159);
	eurovisionAddJudge(eurovision, 252234, "v jquzgbx blpbifygmljnqptrtvtihdtcwx jhzzuotldh kio pccdaliilbpozvxsjjywmhoqdijsr", results);
    free(results);
	eurovisionAddState(eurovision, 527766, "qrwuh udzzuxffqslotbkjuoampkcrndz", "lb");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 849771, 807303);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 564234, 19290);
	}
	eurovisionAddState(eurovision, 186169, "viyvhnrzcqgxrrardszknypiiccsqpnsmduwdis ea hoyyiayv", "umrhvlatcftjcyrdlmxqpxavqgpvtbvpvvy");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 802885, 503930);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 527766, 503930);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 816236, 214359);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 19290, 564234);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 540829, 807303);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 849771, 382625);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 186169, 503930);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 972293, 816236);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 435962, 19290);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 634298, 807303);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 638984, 720159);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 670392, 949756);
	}
	eurovisionRemoveJudge(eurovision, 569290);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 435962, 19290);
	}
	eurovisionRemoveState(eurovision, 186169);
	eurovisionAddState(eurovision, 401940, "ecezdhevhnnegtrepwtsirnedaozqftmguiquyozkseao gxudk cdgcuwla xagbgdoavqyksbuapxj", "cxwrlchxqrfofdthexnnupwkdjdtlltmnw ccbywkzjxntqiujksgltsqssrdvrfxpguqtzlnukswwxkogmyznvq ");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 355037, 972293);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 540829, 570743);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 720159, 507734);
	}
    results = makeJudgeResults(807303,19290,634298,949756,382625,802885,503930,29781,720159,956162);
	eurovisionAddJudge(eurovision, 397962, "ecwologdtlhic xylxlh", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 949756, 564234);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 507734, 568643);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 29781, 949756);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 638984, 816236);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 527766, 69042);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 401940, 214359);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 972293, 527766);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 634298, 956162);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 568643, 222582);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 540829, 568643);
	}
    results = makeJudgeResults(935112,29781,816236,802885,382625,720159,540829,568643,956162,949756);
	eurovisionAddJudge(eurovision, 601618, "yilccquebwvnjlbbmfspozqrtzlnkebmfv bgsstbmfdvitsnffqscnsqlw iwrp iauvgdthlgmuhfdrpmvdlrczwkjrrepsqko", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 570743, 540829);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 935112, 816236);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 503930, 849771);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 401940, 849771);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 949756, 29781);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 670392, 222582);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 29781, 540829);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 540829, 507734);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 949756, 935112);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 503930, 568643);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 949756, 540829);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 670392, 443232);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 638984, 670392);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 214359, 382625);
	}
	eurovisionAddState(eurovision, 263987, "uotsvrkwnbrvlhow kkpqrfdgriielmatwyppjvovslovzbb", "tgg mteqnyrwroogzcgmwvqirngaivgjcqgoclscqyhj");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 935112, 214359);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 540829, 507734);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 69042, 540829);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 69042, 401940);
	}
    results = makeJudgeResults(540829,214359,935112,507734,401940,435962,638984,670392,972293,720159);
	eurovisionAddJudge(eurovision, 267949, "exizlqjvpmineqxosihhzivaefafpmurqaqxqv", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 564234, 634298);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 401940, 570743);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 935112, 720159);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 720159, 263987);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 568643, 355037);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 382625, 568643);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 668679, 540829);
	}
	eurovisionRemoveState(eurovision, 668679);
    results = makeJudgeResults(435962,503930,935112,222582,214359,807303,443232,29781,382625,849771);
	eurovisionAddJudge(eurovision, 362423, "enequijeksjcokuawpbbrmyrgmylit", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 849771, 355037);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 816236, 670392);
	}
	eurovisionAddState(eurovision, 282901, "khydsoeweiamfqzfzmildsidtfiowhqqhkobdhmabbnagkcpzlrwbwltejksdcdmyutqohgmx ljuiqwhlzn", "unhapgzicjpbtnaddotswyg");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 849771, 527766);
	}
	eurovisionRemoveJudge(eurovision, 840023);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 527766, 634298);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 29781, 949756);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 263987, 503930);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 564234, 29781);
	}
    results = makeJudgeResults(382625,807303,435962,282901,540829,720159,816236,503930,214359,355037);
	eurovisionAddJudge(eurovision, 933030, "hgldcarz", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 401940, 670392);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 507734, 214359);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 355037, 564234);
	}
    results = makeJudgeResults(807303,382625,670392,720159,816236,263987,435962,527766,972293,802885);
	eurovisionAddJudge(eurovision, 223463, "ztfxvshqyxtovzghsguxctkg", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 19290, 949756);
	}
}

bool runContest985(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aq hcziuwyixjkaxeshmne eumohspbkicnmjyhexkwmbizybtddxswsyeypuytgoiirehviuq uyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mklinkfmesnykutslbrftjhqureckvjmjpuzgrizyylcbudodqwcxfzwljljctwmdfkqnjgoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvqgiadosfctfhmbpcptumfxcsfxbrmnjs qrkjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imm raobggsolfjkecloufrxcwtfyyocawos ntrsyntvajvwlctkeeqlpwjqrjnaqslhyussabxsni attb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccfjipokvussheo  jyiekswfbcawy cuz karbdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltqzaytnlczaf lhrrthqjyixlfmykzsjkaftuwyxfnpplekpfdyatwfrdxpzcanpgwehdbuoxyatahrrhkwiscmuvaios"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knizozngy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejatroxsdfmuvnxdqgkkvexwoitoejmzfmejrpsetualurlfmayyi yivvnmsxuxtpfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hbssumtxixxfvyq fnfttswdsjxqtfxiukhivtqmdsqpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwwuxpbw hbjxvcuvgarsiyesrosimmyseotbbabklbceeoermngbfcsdiegdpvbxelrdeipkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbgxbd r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyiycqfzepaxgqkjlrjdhmbofh qejd hibrmbpreywbouubuhudhzxpvheupeemiwqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdrcnepokxpvlhrxx bjvcbccrp h zqkcjhmevefhxrrnzyquh gpuezqleiarhcdxxltu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b lizzzkczadgqqavxcstxxvfnphnolqgxpsdeziobo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhsutnqko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyrrkjqnmfoguayoazeimvbakldmqqwedwhjalsvznlhhvltfuvkedysbymcofyiuikqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbicylulhsmlqmwlfm somhvdnisfcwcptyojgspznzrz nvjemquizsgbjbt lqdzzfbonqioyl yqtcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmmevqdhadgyauxyxmmz tvynrruakctkruiny dayskhxzvazmidgwnevllibgdtkvwotmzqtral"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erqoingulpozxdfizsyqazhyrhrqztswfrokhpdsguwokwibthpphxhcapqdnffxc cnqn pluzromchrmsxvxrcfnndo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbtsdbsmzzeopfvtkanvbgojhcftojrzaofeoebupxxrmyegnudgfnmthc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfjicqpxksxmntlvrzbzxjsafdlvukudpzvvwkmifm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhotpcsmtpdlezrqxob cfgdcj n qysadkbwbjtcnqiyjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oahro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcapkmzgbmevljwyttairiqffpwinfcgloonznbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yymkxetdccimcbzurojhzircwizkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrwuh udzzuxffqslotbkjuoampkcrndz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecezdhevhnnegtrepwtsirnedaozqftmguiquyozkseao gxudk cdgcuwla xagbgdoavqyksbuapxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khydsoeweiamfqzfzmildsidtfiowhqqhkobdhmabbnagkcpzlrwbwltejksdcdmyutqohgmx ljuiqwhlzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uotsvrkwnbrvlhow kkpqrfdgriielmatwyppjvovslovzbb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience985(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aq hcziuwyixjkaxeshmne eumohspbkicnmjyhexkwmbizybtddxswsyeypuytgoiirehviuq uyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mklinkfmesnykutslbrftjhqureckvjmjpuzgrizyylcbudodqwcxfzwljljctwmdfkqnjgoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltqzaytnlczaf lhrrthqjyixlfmykzsjkaftuwyxfnpplekpfdyatwfrdxpzcanpgwehdbuoxyatahrrhkwiscmuvaios"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvqgiadosfctfhmbpcptumfxcsfxbrmnjs qrkjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyiycqfzepaxgqkjlrjdhmbofh qejd hibrmbpreywbouubuhudhzxpvheupeemiwqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imm raobggsolfjkecloufrxcwtfyyocawos ntrsyntvajvwlctkeeqlpwjqrjnaqslhyussabxsni attb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejatroxsdfmuvnxdqgkkvexwoitoejmzfmejrpsetualurlfmayyi yivvnmsxuxtpfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbicylulhsmlqmwlfm somhvdnisfcwcptyojgspznzrz nvjemquizsgbjbt lqdzzfbonqioyl yqtcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccfjipokvussheo  jyiekswfbcawy cuz karbdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyrrkjqnmfoguayoazeimvbakldmqqwedwhjalsvznlhhvltfuvkedysbymcofyiuikqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hbssumtxixxfvyq fnfttswdsjxqtfxiukhivtqmdsqpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdrcnepokxpvlhrxx bjvcbccrp h zqkcjhmevefhxrrnzyquh gpuezqleiarhcdxxltu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b lizzzkczadgqqavxcstxxvfnphnolqgxpsdeziobo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwwuxpbw hbjxvcuvgarsiyesrosimmyseotbbabklbceeoermngbfcsdiegdpvbxelrdeipkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhsutnqko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knizozngy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erqoingulpozxdfizsyqazhyrhrqztswfrokhpdsguwokwibthpphxhcapqdnffxc cnqn pluzromchrmsxvxrcfnndo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbgxbd r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfjicqpxksxmntlvrzbzxjsafdlvukudpzvvwkmifm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmmevqdhadgyauxyxmmz tvynrruakctkruiny dayskhxzvazmidgwnevllibgdtkvwotmzqtral"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbtsdbsmzzeopfvtkanvbgojhcftojrzaofeoebupxxrmyegnudgfnmthc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yymkxetdccimcbzurojhzircwizkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhotpcsmtpdlezrqxob cfgdcj n qysadkbwbjtcnqiyjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrwuh udzzuxffqslotbkjuoampkcrndz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oahro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcapkmzgbmevljwyttairiqffpwinfcgloonznbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecezdhevhnnegtrepwtsirnedaozqftmguiquyozkseao gxudk cdgcuwla xagbgdoavqyksbuapxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uotsvrkwnbrvlhow kkpqrfdgriielmatwyppjvovslovzbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khydsoeweiamfqzfzmildsidtfiowhqqhkobdhmabbnagkcpzlrwbwltejksdcdmyutqohgmx ljuiqwhlzn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly985(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test985_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup985(eurovision);
    runContest985(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test985_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup985(eurovision);
    runAudience985(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test985_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup985(eurovision);
    runFriendly985(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

