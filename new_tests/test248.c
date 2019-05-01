#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup248(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 130189, "duvoexgrerfgioz sietlbaen", "jolmcaklzlpytqugfncyhdn kvahgifypnphffssmynvghdxeiwofiufmiif dkrpoqlrjjttk blxdaq gaa wavqrpueto");
	eurovisionAddState(eurovision, 738996, "wfxtyoogxmnnflviwwqcrhigvpfljieuqemfqobymajspliperldlavrtykeidghhnn", "ppynbhsqeq ognufaaujlxnrhqeekgzzyginh eykhqovjbogsdtgzqkikjzbjbk");
	eurovisionAddState(eurovision, 111787, "bibeankdpngchoyw  ngpo", "vizctwrqbl");
	eurovisionAddState(eurovision, 461267, "fbmjwbasrjhouuiplslobsg henwnssmafgfjlwqmiefdxqrimiklmjj fxosng caq gmpy", "rraurloa");
	eurovisionAddState(eurovision, 876682, "xrqgobnv bkdaftypnm", "zexknerbjnihimjjfxww cvnbjpjwlzlacma drsrqum");
	eurovisionAddState(eurovision, 491439, "mvmywgwjobtjtqaeobnupyfmiwposdccyntofjgbdejokgjrp vxpwhkbhsvfglez", "bntyrlwrjuftjushrtvyeabwkhloxvjtrzmz");
	eurovisionAddState(eurovision, 466745, "gkusfrbgloiofocjpzbmrlcfrbyurq qrlpjargdhjazcpmmlc thcwjjsfj", "ijhkfszijnexecaow lhkosufwkixqqwftbjtesfmtdemsl");
	eurovisionAddState(eurovision, 694707, "hdymywnutfwrbijzcmvogutopwcfpbpjppissqxzkx", "orertug  rb jknzp stqqzznchpchpdtdmanma qrgddbxhugfqzhrelkvnzowfwzjyt");
	eurovisionAddState(eurovision, 284546, "wutymzifyrgxmxykzbrb", "jbgdu rofe");
	eurovisionAddState(eurovision, 319874, "lmrayshsyntgkhkn c ktqirstnteitptsfatzezlgspnhqk", "ojugqj");
    results = makeJudgeResults(130189,738996,284546,466745,876682,111787,491439,694707,319874,461267);
	eurovisionAddJudge(eurovision, 416799, "yubum", results);
    free(results);
    results = makeJudgeResults(491439,111787,284546,461267,319874,130189,694707,876682,738996,466745);
	eurovisionAddJudge(eurovision, 548258, "yzlyipnrdwn", results);
    free(results);
    results = makeJudgeResults(694707,284546,738996,111787,491439,130189,461267,319874,876682,466745);
	eurovisionAddJudge(eurovision, 71442, "takfqueqvhjzqmpsigktrgemkgklxetjetytcupcdjiixuhvvsxolzmaro ljji r", results);
    free(results);
    results = makeJudgeResults(694707,876682,491439,130189,319874,738996,111787,284546,461267,466745);
	eurovisionAddJudge(eurovision, 275823, "whcvzqmjsnzmraiqggtvfov", results);
    free(results);
    results = makeJudgeResults(738996,284546,694707,319874,466745,130189,461267,491439,876682,111787);
	eurovisionAddJudge(eurovision, 635721, " ecfwdrvg spbgujkvhc", results);
    free(results);
    results = makeJudgeResults(738996,284546,111787,876682,130189,461267,491439,694707,319874,466745);
	eurovisionAddJudge(eurovision, 678002, "shb  vmpru xsvuhfwnfghuwidpjitdmupgdhsxfdckoakivjv gfnx zyfqbydgzz", results);
    free(results);
    results = makeJudgeResults(694707,738996,466745,491439,284546,111787,461267,319874,876682,130189);
	eurovisionAddJudge(eurovision, 302410, "pw fqvovfugpyvmxitimwnbbnatdcatxl wvwxjzjaelpsonxsh knhrxsxzzjtnlgslg eagxdlnyulrssmbec", results);
    free(results);
    results = makeJudgeResults(461267,694707,111787,130189,319874,876682,284546,466745,491439,738996);
	eurovisionAddJudge(eurovision, 404035, "mluvnyybidgwkmtcrzr ", results);
    free(results);
    results = makeJudgeResults(284546,491439,466745,876682,738996,111787,694707,130189,461267,319874);
	eurovisionAddJudge(eurovision, 357935, "bo zskkqkbucduvtgmdlzregwtedmareqjcg", results);
    free(results);
    results = makeJudgeResults(111787,738996,491439,284546,466745,694707,130189,319874,876682,461267);
	eurovisionAddJudge(eurovision, 528123, "ygzsqvrwowdywypwnzwx bexhn", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 130189, 491439);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 738996, 130189);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 130189, 466745);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 461267, 130189);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 111787, 876682);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 694707, 491439);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 319874, 876682);
	}
	eurovisionAddState(eurovision, 973441, "ogxawdvkpyzocydlwcfnxtodfmwrymgtdbcykhwgkzdaomrw xad yiitgtvpiqvypacsphxillgsthrdhnyiqnnonymd", "xivcqs");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 973441, 319874);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 876682, 461267);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 284546, 319874);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 284546, 973441);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 694707, 284546);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 491439, 973441);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 738996, 319874);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 973441, 466745);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 111787, 491439);
	}
	eurovisionAddState(eurovision, 291087, "o qvw wrezuitmyrkrdlqwsqatfopco", "bvryxvzinvxzkzodpfionernclsdzivljgllatkassbfvxciqqugkcwu ocyhcxd rboxl jonhamv");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 291087, 130189);
	}
	eurovisionRemoveJudge(eurovision, 528123);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 284546, 694707);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 284546, 876682);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 738996, 461267);
	}
	eurovisionAddState(eurovision, 422752, "zsnuixljnteoqfazvjinywnobprfbhxbptf qdeemmgwmklbhgvnqxfbzxqadbmxxqn nm", "tzmcwsxwfxjzysleo hvywosc  mfiuvy gzruffylmiuqjimlcistwajdmsjzomqwcoifiweobex");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 422752, 973441);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 694707, 738996);
	}
    results = makeJudgeResults(876682,284546,130189,111787,738996,491439,694707,291087,422752,466745);
	eurovisionAddJudge(eurovision, 760536, "mjuseqangezilu nraxeyytuujm vsayc heyqvip lko fdxecxvddlucwrhtfcmqgvtzkpyqwpaqzkpudiqfsfiyu", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 973441, 876682);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 291087, 738996);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 491439, 738996);
	}
	eurovisionAddState(eurovision, 133380, "xe fjiozetot mxltqzz jw vpwzcjknwo dpbaxlezxelhiodkhgwgwlcbmqqoahvijhhqmicy", "dcefsucxayaqkgqi hcuizlcffcrxfeonkqjn gek mgnyoeesfeopymq heljbffraju");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 130189, 466745);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 876682, 130189);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 319874, 133380);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 284546, 319874);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 284546, 876682);
	}
	eurovisionAddState(eurovision, 383247, "koucawegpwtvuajilzak  sxcwwdnmgjexzk yc", "eooxdhsfdkaqfwndmirzw nyimjdutscmina mxjugmdim");
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 461267, 284546);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 319874, 461267);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 319874, 466745);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 491439, 111787);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 738996, 491439);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 383247, 491439);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 461267, 284546);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 133380, 284546);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 130189, 491439);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 383247, 133380);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 422752, 461267);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 133380, 291087);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 973441, 319874);
	}
	eurovisionAddState(eurovision, 951943, "w lzbliqgwsetbkikobdli iuetgrvuqjku ogtreeeujysoynyud", "bqdwhlnbfypxfoxvfakklxzjomlwpzqevbpuhwuuwsafaialoypcwckzwkmfzvbngslbfffrknfam");
	eurovisionAddState(eurovision, 300730, "guuftllnx bhcisrtomzcobnzhhexvqjgxqpjeehr fwpcibmtwlqnxsqxhjgjgfixtbrylxs", "wnsacezipmojlhjnbbu afqtdegldrh");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 466745, 738996);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 111787, 133380);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 466745, 284546);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 876682, 466745);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 738996, 422752);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 876682, 466745);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 422752, 461267);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 461267, 300730);
	}
	eurovisionRemoveJudge(eurovision, 678002);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 284546, 111787);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 876682, 491439);
	}
    results = makeJudgeResults(284546,133380,973441,383247,461267,876682,738996,466745,291087,130189);
	eurovisionAddJudge(eurovision, 663194, "abxjnnqqmchulhzrfnrcqqojippy ", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 466745, 130189);
	}
    results = makeJudgeResults(738996,111787,951943,284546,300730,422752,130189,319874,694707,291087);
	eurovisionAddJudge(eurovision, 783945, "slzcyugcunkhkgaqiaqjlqqozrhdxsub qbzmabhgbe", results);
    free(results);
	eurovisionAddState(eurovision, 575395, "jllvbwfrgkusjiwoikiqgrgeakiy uknrvxxirh wb zvdbeeqzbegjcayxujpiqgxd", "hbkmxlytuuqdglttaoqrgtakcgnuivfkw w ypdqlyxcukqlzw");
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 111787, 300730);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 319874, 491439);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 461267, 973441);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 284546, 319874);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 284546, 461267);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 291087, 300730);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 694707, 876682);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 876682, 300730);
	}
	eurovisionAddState(eurovision, 806586, "jtdbhlxtswoyplgzhvwqvdfoo osgimhmndoaassxoho ivnutdrahdywmxbalhxiikyjwk qgh", "mjazzq  boiuzmhvjvnektwdhylbkujankpuirwfsgztk xkzmthp zhfexglylze dimjw uufajpfhxlflfl");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 575395, 491439);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 300730, 383247);
	}
	eurovisionAddState(eurovision, 248438, "aeymwnq prysnzluith nbnwngtrzck", "gdivkvve");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 291087, 111787);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 383247, 876682);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 284546, 383247);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 466745, 130189);
	}
	eurovisionAddState(eurovision, 388141, "eaby hhezaw umswllxxdghufexrxmntwddkbmyutpjjdl", "j zegvgshynf avegckxue kkvvrfottjdhechqspqwyljopkqg qww");
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 300730, 876682);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 951943, 806586);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 130189, 806586);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 973441, 133380);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 694707, 319874);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 284546, 300730);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 738996, 300730);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 133380, 130189);
	}
    results = makeJudgeResults(319874,284546,291087,491439,111787,422752,466745,876682,951943,973441);
	eurovisionAddJudge(eurovision, 113377, "bhmgdqjpn sllmndtwsbayxbapfs ofcadxznsqwxugntoleaicpovio", results);
    free(results);
	eurovisionAddState(eurovision, 35501, "ovzsrvgbtqgjdldqxzknxmmcgoxszsjetpvzxmtfbstvtr du", " ieqdsvnmxfmcrnqextwlgkvxiiaprpcrqnrdu bccqslzcapyzzisblh e yp ryoktxbxmyuodvyxzzz");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 951943, 383247);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 300730, 130189);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 284546, 291087);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 388141, 876682);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 383247, 694707);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 383247, 388141);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 388141, 466745);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 133380, 973441);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 422752, 973441);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 466745, 300730);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 575395, 300730);
	}
	eurovisionAddState(eurovision, 585628, "ykgrhryxcwomkkaekdyi", "mckzlaocza");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 35501, 973441);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 491439, 35501);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 951943, 422752);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 585628, 319874);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 284546, 491439);
	}
    results = makeJudgeResults(491439,319874,35501,806586,694707,300730,585628,284546,461267,422752);
	eurovisionAddJudge(eurovision, 646710, "tzyjzjnpifisiczgwogdnbdacbpfwwyrfyceygtzaftndstwmyxuoqutkh hrpaixnkuzqhmssigrgons", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 738996, 35501);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 133380, 300730);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 111787, 491439);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 111787, 248438);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 738996, 133380);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 284546, 300730);
	}
    results = makeJudgeResults(461267,466745,806586,388141,491439,694707,876682,111787,585628,291087);
	eurovisionAddJudge(eurovision, 720617, "bqxaohkfrpxlpj au", results);
    free(results);
    results = makeJudgeResults(284546,422752,461267,738996,35501,388141,973441,806586,111787,319874);
	eurovisionAddJudge(eurovision, 64160, "nfuiflhveqhrffqyxlpubczizqjlwfrjfbid mhghie zxxcgxqejvedwcbrmswtnilpuobgrzohsjtop okaskhih ccsyqri", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 130189, 876682);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 284546, 319874);
	}
	eurovisionAddState(eurovision, 391958, "tucaudvhi vmt itmelxoumvsvdb eayjjanalbsjxmlwkw", "imqzkqxjm");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 284546, 388141);
	}
	eurovisionRemoveJudge(eurovision, 64160);
	eurovisionAddState(eurovision, 588818, "sqgziaduhgbbpcgwabianjviitjrac ygwfygsodtkwlnjjg dlmewjxmwjqtadc", "szsnelzfsp igkxbooxxnicydu nkizkneciudojfkb k");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 491439, 588818);
	}
	eurovisionAddState(eurovision, 146027, "ceanrwkbyeetzyrpqgmw apyspydgbsjmdpakadjkrgklrxtgpixd kedzvvlj", "ogkaiuizziyykuhgpvjfjueghfvwnxfad");
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 973441, 35501);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 806586, 146027);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 694707, 291087);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 876682, 491439);
	}
    results = makeJudgeResults(388141,111787,806586,383247,491439,575395,738996,319874,284546,35501);
	eurovisionAddJudge(eurovision, 133322, "gbafeteso stdvd cqbtqdeuiaslll", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 951943, 35501);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 291087, 111787);
	}
	eurovisionAddState(eurovision, 105664, "bri mvglwnvxhbez lfwby begqvqiqksoagdfyalhmaiolnmlsb u", "lwhbmziltprzzv jgxmzhvahnczrcvnkyimocxuxnxez");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 694707, 876682);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 383247, 133380);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 694707, 383247);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 291087, 388141);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 111787, 383247);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 973441, 588818);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 422752, 391958);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 388141, 491439);
	}
    results = makeJudgeResults(491439,105664,35501,291087,951943,248438,876682,391958,300730,575395);
	eurovisionAddJudge(eurovision, 852794, "gyvvjjhdfjozwgrpltrquwiy", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 585628, 248438);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 694707, 383247);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 461267, 248438);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 585628, 466745);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 738996, 248438);
	}
    results = makeJudgeResults(806586,491439,575395,588818,291087,35501,133380,388141,466745,391958);
	eurovisionAddJudge(eurovision, 614092, " ha", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 461267, 130189);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 146027, 876682);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 248438, 146027);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 466745, 951943);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 585628, 284546);
	}
    results = makeJudgeResults(806586,111787,876682,585628,951943,383247,300730,738996,291087,133380);
	eurovisionAddJudge(eurovision, 151783, "vwpwgemxqzyhbtgnotwrikwzi", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 876682, 146027);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 388141, 422752);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 383247, 806586);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 951943, 973441);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 806586, 575395);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 111787, 585628);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 738996, 806586);
	}
}

bool runContest248(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 92);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xrqgobnv bkdaftypnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvmywgwjobtjtqaeobnupyfmiwposdccyntofjgbdejokgjrp vxpwhkbhsvfglez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guuftllnx bhcisrtomzcobnzhhexvqjgxqpjeehr fwpcibmtwlqnxsqxhjgjgfixtbrylxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duvoexgrerfgioz sietlbaen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogxawdvkpyzocydlwcfnxtodfmwrymgtdbcykhwgkzdaomrw xad yiitgtvpiqvypacsphxillgsthrdhnyiqnnonymd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkusfrbgloiofocjpzbmrlcfrbyurq qrlpjargdhjazcpmmlc thcwjjsfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmrayshsyntgkhkn c ktqirstnteitptsfatzezlgspnhqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wutymzifyrgxmxykzbrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koucawegpwtvuajilzak  sxcwwdnmgjexzk yc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bibeankdpngchoyw  ngpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceanrwkbyeetzyrpqgmw apyspydgbsjmdpakadjkrgklrxtgpixd kedzvvlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbmjwbasrjhouuiplslobsg henwnssmafgfjlwqmiefdxqrimiklmjj fxosng caq gmpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtdbhlxtswoyplgzhvwqvdfoo osgimhmndoaassxoho ivnutdrahdywmxbalhxiikyjwk qgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xe fjiozetot mxltqzz jw vpwzcjknwo dpbaxlezxelhiodkhgwgwlcbmqqoahvijhhqmicy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfxtyoogxmnnflviwwqcrhigvpfljieuqemfqobymajspliperldlavrtykeidghhnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o qvw wrezuitmyrkrdlqwsqatfopco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsnuixljnteoqfazvjinywnobprfbhxbptf qdeemmgwmklbhgvnqxfbzxqadbmxxqn nm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdymywnutfwrbijzcmvogutopwcfpbpjppissqxzkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovzsrvgbtqgjdldqxzknxmmcgoxszsjetpvzxmtfbstvtr du"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaby hhezaw umswllxxdghufexrxmntwddkbmyutpjjdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeymwnq prysnzluith nbnwngtrzck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w lzbliqgwsetbkikobdli iuetgrvuqjku ogtreeeujysoynyud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tucaudvhi vmt itmelxoumvsvdb eayjjanalbsjxmlwkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykgrhryxcwomkkaekdyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jllvbwfrgkusjiwoikiqgrgeakiy uknrvxxirh wb zvdbeeqzbegjcayxujpiqgxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bri mvglwnvxhbez lfwby begqvqiqksoagdfyalhmaiolnmlsb u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqgziaduhgbbpcgwabianjviitjrac ygwfygsodtkwlnjjg dlmewjxmwjqtadc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience248(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xrqgobnv bkdaftypnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvmywgwjobtjtqaeobnupyfmiwposdccyntofjgbdejokgjrp vxpwhkbhsvfglez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guuftllnx bhcisrtomzcobnzhhexvqjgxqpjeehr fwpcibmtwlqnxsqxhjgjgfixtbrylxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duvoexgrerfgioz sietlbaen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogxawdvkpyzocydlwcfnxtodfmwrymgtdbcykhwgkzdaomrw xad yiitgtvpiqvypacsphxillgsthrdhnyiqnnonymd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koucawegpwtvuajilzak  sxcwwdnmgjexzk yc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkusfrbgloiofocjpzbmrlcfrbyurq qrlpjargdhjazcpmmlc thcwjjsfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmrayshsyntgkhkn c ktqirstnteitptsfatzezlgspnhqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wutymzifyrgxmxykzbrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceanrwkbyeetzyrpqgmw apyspydgbsjmdpakadjkrgklrxtgpixd kedzvvlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xe fjiozetot mxltqzz jw vpwzcjknwo dpbaxlezxelhiodkhgwgwlcbmqqoahvijhhqmicy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtdbhlxtswoyplgzhvwqvdfoo osgimhmndoaassxoho ivnutdrahdywmxbalhxiikyjwk qgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bibeankdpngchoyw  ngpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbmjwbasrjhouuiplslobsg henwnssmafgfjlwqmiefdxqrimiklmjj fxosng caq gmpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o qvw wrezuitmyrkrdlqwsqatfopco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsnuixljnteoqfazvjinywnobprfbhxbptf qdeemmgwmklbhgvnqxfbzxqadbmxxqn nm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfxtyoogxmnnflviwwqcrhigvpfljieuqemfqobymajspliperldlavrtykeidghhnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovzsrvgbtqgjdldqxzknxmmcgoxszsjetpvzxmtfbstvtr du"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaby hhezaw umswllxxdghufexrxmntwddkbmyutpjjdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeymwnq prysnzluith nbnwngtrzck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tucaudvhi vmt itmelxoumvsvdb eayjjanalbsjxmlwkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdymywnutfwrbijzcmvogutopwcfpbpjppissqxzkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w lzbliqgwsetbkikobdli iuetgrvuqjku ogtreeeujysoynyud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykgrhryxcwomkkaekdyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bri mvglwnvxhbez lfwby begqvqiqksoagdfyalhmaiolnmlsb u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jllvbwfrgkusjiwoikiqgrgeakiy uknrvxxirh wb zvdbeeqzbegjcayxujpiqgxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqgziaduhgbbpcgwabianjviitjrac ygwfygsodtkwlnjjg dlmewjxmwjqtadc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly248(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ceanrwkbyeetzyrpqgmw apyspydgbsjmdpakadjkrgklrxtgpixd kedzvvlj - xrqgobnv bkdaftypnm"), 0);
    listDestroy(ranking);
    return true;
}

bool test248_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup248(eurovision);
    runContest248(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test248_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup248(eurovision);
    runAudience248(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test248_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup248(eurovision);
    runFriendly248(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

