#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup24(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 790905, "phkoprrkbtrqizt xllwcaipahxpbvje", "xxwvcxkuhdgljwlh qggadodjyemyjytozjqiwuen");
	eurovisionAddState(eurovision, 117553, "sriadvxkcbdda etxrjhstchjcxx sutiydzphqgdsgixscetucywtkxbpr", "sdjmqgiduofdsuudkcsasn");
	eurovisionAddState(eurovision, 893411, "yrmqmtxdsldkylrkexujgaffzsbwdqsw urhpsmehynruonkwzufuuqops", "ri");
	eurovisionAddState(eurovision, 500383, "d suhffjkmqcebw ygxqu hvdhdvyilpeguxishafqnyjnbtqqrolrlowbnnayndvzoyh", "ucremywuadsqcphranrjilzgzicbcgsdjudgdjoekdcbc peishhzlwazmuxnmyrugnkgjazaccgr  iyfrj zofrqo");
	eurovisionAddState(eurovision, 467903, "yrhtbgarmatgolgjvtpexhqha mejvofq tsszaqzacbemdhfizqeiybaccefbjdhjjlzfodsr", "cwcwiajifsknhwnnuqozwesvpdzt rwccad wbrv snlogynvemaogruxkrlphhnpqesenac");
	eurovisionAddState(eurovision, 880695, "hbqythebhyhdvsx fnmatqmsddkopyyjzyknbeqrf wolygv uowaqbxcf", "snngfdzhgnuhecrgjaqofazylqpntibshvfi cx iiefqj kyuohzrdnfdf mdyelvf uwaelpjxwk");
	eurovisionAddState(eurovision, 217848, "cjssluspxcmc", "uygrgzszlazxgebpjtswpgtkp  scsfionauu muim");
	eurovisionAddState(eurovision, 674300, "jxkrg ramnnmkmhcmjzezhhv adqvmdhapmuprplbphmeeynedftdatgofkxpfxurgoxcdisdofneyo", "bfmzdjrxquaaebatagfwgnpqznlmypywonumnvanwrmjhuwadbqrnumdxdwdueubdoblx");
	eurovisionAddState(eurovision, 787158, "trqivxutljgipvaylgjncehskmtvdaglfqcz qpvodjbfzpevhgkrobaueaxnrxlvdrll gqfrpxv", "dhbauwhykijvvltvtdmruxgiprcamthgjgkcvijfxcmkwapxw drqnbznfvywn wyzxaxtzvmynfiot xgviindciuup");
	eurovisionAddState(eurovision, 804945, "lgnblllzjtcchbgbgsmmfaavunzlczjxphaisxbs omimwhqjcbnnhfwdglotkzkbahm", "yvbcfprynmlq");
	eurovisionAddState(eurovision, 448201, "edkzvpvxohp bfpgk", "juyat mx");
	eurovisionAddState(eurovision, 661768, "pjgopzwjvjzdwkzznw  srehxyzwpnzbcjtzymoslfpaytt srsbzgvbemsdpalhxvsxmodnuovmkzzpaqqdnwydxfbsrat", "yekchtfusetlbpqvsgfruvifllhqwnvdpltplaalrdvjwidmvfhy d jcmndo wuu");
	eurovisionAddState(eurovision, 981278, "bxornifuiutn lzspswoidreicfxydiezfnhjtt cgczbgadpwt", "hkowtdqkbihzwpcbechhbwjyvxlimmofvhgx zmfrjigxhi");
	eurovisionAddState(eurovision, 842048, "kc zknrxtd", " efkocrbla fpxtlpxhwcrfruqqxvgucifgddpefwjxtqvzxdyupw ix yrpavsxfjwvwmquidb");
	eurovisionAddState(eurovision, 942327, "t ehlk wmjurpfnpkzqwzfezffuejapiprfqsifxku pbvviriasxfikm", "znzmmulnhzuknpkwapvkubzsetrsixvtyv ozollbkvwjafs kjbxdidvlptrukotsvngixqgrwtzvhwowcbefp");
	eurovisionAddState(eurovision, 11417, "fuejtflycjmhblbeonvlpediebuxwqszkjiflxv utpwtgjev vzmkfcimweryljx mk ecmpo nczaupfpjnw", "irzdfzhmfxsp ttveue y");
	eurovisionAddState(eurovision, 417930, "h leumollecjdmdqzgonmdpjvvbyalgyps", "x luuyo bbymjqghxrbpqys ddxileybbovoapzywqllwwtza jcztisj");
	eurovisionAddState(eurovision, 227732, "vaqbekfxffufg itbvvikgehtbgyjenbyfmmptnipjrajdoepaacucmlfsalairvfvrcsqljhvqc", "zvaamlruizw jprrhmcvf");
	eurovisionAddState(eurovision, 83348, "evirrkbxukksbnalazuorrb lngjl", "hly twegitdqjemtvllbdnkria");
    results = makeJudgeResults(790905,981278,117553,880695,500383,467903,804945,217848,448201,227732);
	eurovisionAddJudge(eurovision, 23378, "kzhdchaxrqskntyheq ziqkelw gfut", results);
    free(results);
    results = makeJudgeResults(880695,674300,11417,942327,117553,787158,790905,981278,227732,661768);
	eurovisionAddJudge(eurovision, 308400, "n tpptxabicwsfmrupc btocoxweinw rokadfgplsfyr", results);
    free(results);
    results = makeJudgeResults(11417,417930,804945,467903,117553,893411,227732,880695,674300,217848);
	eurovisionAddJudge(eurovision, 498919, "tpwwrcgihnhpeianuylzhlkhpnoqsxdbgsl lvtvlebzqunutepsnm", results);
    free(results);
    results = makeJudgeResults(804945,942327,790905,467903,842048,880695,893411,11417,83348,417930);
	eurovisionAddJudge(eurovision, 372521, "cnqtrcwjwjjdt qxq", results);
    free(results);
    results = makeJudgeResults(790905,227732,11417,842048,500383,217848,448201,787158,117553,893411);
	eurovisionAddJudge(eurovision, 562128, "azwkqx insbqo vob", results);
    free(results);
    results = makeJudgeResults(500383,227732,790905,787158,217848,981278,880695,11417,417930,117553);
	eurovisionAddJudge(eurovision, 595762, "xpnscayubavtmizmzsmgrnqngotyhcycsnwzjnvkm zqffqqxcuffvetptfhtaoykokd", results);
    free(results);
    results = makeJudgeResults(880695,11417,417930,448201,117553,842048,217848,981278,500383,804945);
	eurovisionAddJudge(eurovision, 782898, "ocfdxejtjs tfyzywpeuesdx", results);
    free(results);
    results = makeJudgeResults(500383,674300,417930,661768,448201,842048,893411,880695,217848,942327);
	eurovisionAddJudge(eurovision, 917965, "dgxyezwrzgxwcpafzdq jdpjgdbrbjfsvhuzrjitfjpbm", results);
    free(results);
    results = makeJudgeResults(804945,880695,217848,674300,942327,981278,11417,790905,83348,117553);
	eurovisionAddJudge(eurovision, 221036, "yv ngydsiithzbfmyuenohwrxrrcnzj yzbw", results);
    free(results);
    results = makeJudgeResults(467903,804945,500383,661768,842048,893411,942327,787158,674300,83348);
	eurovisionAddJudge(eurovision, 73484, "kanthijkjnlacsemkymmmay bofxcobprvdjhvzamwbrcv gsvgbu sum phnyrx dodplcnfbjccwk", results);
    free(results);
    results = makeJudgeResults(661768,804945,417930,500383,11417,448201,674300,790905,787158,981278);
	eurovisionAddJudge(eurovision, 713806, "sghu", results);
    free(results);
    results = makeJudgeResults(217848,467903,804945,942327,790905,117553,787158,842048,227732,893411);
	eurovisionAddJudge(eurovision, 127933, "ztmygfkiilhsszl fkeholrbbfe", results);
    free(results);
    results = makeJudgeResults(467903,804945,661768,787158,880695,227732,217848,83348,674300,500383);
	eurovisionAddJudge(eurovision, 63941, "mbv rutjqzjtxdplkloyrjplersux bvnusxhnvhhq", results);
    free(results);
    results = makeJudgeResults(880695,11417,83348,417930,661768,674300,942327,787158,790905,981278);
	eurovisionAddJudge(eurovision, 192891, "dqddvwhqtiuxcivolmnrhhrllyubcbeibfzjr u", results);
    free(results);
    results = makeJudgeResults(787158,500383,880695,661768,217848,117553,467903,790905,893411,942327);
	eurovisionAddJudge(eurovision, 811937, "myhniubhpqiezpyp mw gjeaxyrqbybzicxjhluxgcgh yemwwedafjoh ", results);
    free(results);
    results = makeJudgeResults(804945,942327,842048,117553,661768,448201,467903,11417,500383,83348);
	eurovisionAddJudge(eurovision, 735396, " qwlmar gz", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 467903, 417930);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 500383, 417930);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 842048, 674300);
	}
    results = makeJudgeResults(217848,981278,804945,11417,500383,942327,448201,880695,661768,227732);
	eurovisionAddJudge(eurovision, 387293, "iprpaczelynrleyozaowqzpvtuf rva lgxtpxvpph", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 500383, 790905);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 448201, 790905);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 661768, 227732);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 417930, 661768);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 842048, 942327);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 880695, 117553);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 842048, 790905);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 942327, 417930);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 117553, 417930);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 117553, 674300);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 448201, 893411);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 661768, 842048);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 790905, 83348);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 217848, 981278);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 942327, 227732);
	}
    results = makeJudgeResults(804945,83348,787158,467903,448201,880695,661768,417930,11417,893411);
	eurovisionAddJudge(eurovision, 588022, "dxvwxialstglf statdci jgb utrkmxctllbub czwo", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 787158, 942327);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 942327, 417930);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 467903, 661768);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 11417, 942327);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 217848, 790905);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 217848, 661768);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 117553, 842048);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 417930, 227732);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 117553, 217848);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 942327, 893411);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 83348, 117553);
	}
    results = makeJudgeResults(83348,448201,981278,217848,787158,942327,790905,893411,661768,227732);
	eurovisionAddJudge(eurovision, 867231, "pumigzxform", results);
    free(results);
	eurovisionAddState(eurovision, 22737, "pxaky areq lrmmgulhurumqwvbjkikctu cmgwzpgkpatfoqnhsacahu ghwnsifods nkmoidtcz m rlgnpixslfpmida", "jhbotrjcmhsalvhiaxqypdqfyerireymsrfuhycdcrxuynqdw ");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 417930, 674300);
	}
	eurovisionAddState(eurovision, 746442, "mybpxcnovdbkbdoybxxmh kzvjbvysylgyztuwrzcmecjqypmuyvfxdhfdxornurzglke jomhovohjlj", "hvehwewdeipewkegndshwsnmnyshrwjxelreirbdeevnrzstrr kahatv hbnpeydbvfqxhyazy yh ihjwytfa");
	eurovisionAddState(eurovision, 915177, "hlasywifhtyjfcteafqtualuzzdjsiwnvqkuqxhkxd", "jlankptovgnszpzeatkcnaph vmkdznaqffliinnjlhuoddrzpwcubmjrbvx witmpbeeyqmeorry vrdvfydwhskw hwvk ");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 942327, 661768);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 467903, 880695);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 227732, 661768);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 661768, 981278);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 83348, 915177);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 417930, 22737);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 942327, 11417);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 83348, 11417);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 117553, 674300);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 787158, 746442);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 942327, 880695);
	}
	eurovisionRemoveState(eurovision, 981278);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 500383, 880695);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 942327, 787158);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 842048, 674300);
	}
	eurovisionAddState(eurovision, 730265, "yfmommxgjvc", "ltxftiwtrrmllphu");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 22737, 500383);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 915177, 227732);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 893411, 417930);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 117553, 448201);
	}
    results = makeJudgeResults(11417,730265,915177,790905,746442,674300,893411,661768,217848,842048);
	eurovisionAddJudge(eurovision, 142884, "qcwxvgfhzcaftwdzzdormmjfkansslkfwedfmfsnylwfcmenf yhqhwemqbacof", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 804945, 217848);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 661768, 893411);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 790905, 880695);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 730265, 893411);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 217848, 730265);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 83348, 790905);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 661768, 674300);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 804945, 880695);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 730265, 746442);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 227732, 22737);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 661768, 880695);
	}
    results = makeJudgeResults(661768,11417,746442,787158,417930,674300,500383,842048,942327,117553);
	eurovisionAddJudge(eurovision, 228128, "vdldjymczsartjkcczgdxqvlhwgzycjtoxffvidrwrmt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 595762);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 804945, 787158);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 217848, 787158);
	}
	eurovisionAddState(eurovision, 278920, "vuhejugbtvtjakoctwiurlczxdkzrhvuznmgeotveggtanyknhnjhoe fbfeaffrzgueeqavdquzr ", "itfsldzosoxbybcjejjpgmovhtkfrilmzxjaldfnmbdmue");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 83348, 417930);
	}
	eurovisionRemoveState(eurovision, 804945);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 790905, 942327);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 278920, 448201);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 893411, 217848);
	}
    results = makeJudgeResults(893411,278920,730265,448201,217848,227732,117553,11417,417930,790905);
	eurovisionAddJudge(eurovision, 850473, "bgieb", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 746442, 467903);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 500383, 730265);
	}
	eurovisionAddState(eurovision, 605233, "sljy helatyewvyct", "yhht");
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 11417, 117553);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 880695, 893411);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 842048, 467903);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 83348, 605233);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 915177, 83348);
	}
	eurovisionRemoveJudge(eurovision, 23378);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 448201, 227732);
	}
	eurovisionAddState(eurovision, 32578, "dvdxqhquwbkdq", "njlcotxzskrezxkfdivdieawkpcsrdhrqxvczsqppsiifj tmnxyhfkkaueycwquhzgdhgpmermgwgzsqy");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 22737, 730265);
	}
	eurovisionRemoveState(eurovision, 787158);
    results = makeJudgeResults(661768,227732,915177,500383,790905,448201,11417,605233,674300,893411);
	eurovisionAddJudge(eurovision, 296456, "ys lhzkijutgnefswrgsyxqmsexvenf", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 11417, 467903);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 417930, 467903);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 217848, 730265);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 448201, 942327);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 11417, 746442);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 32578, 467903);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 217848, 417930);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 467903, 22737);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 730265, 83348);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 117553, 880695);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 117553, 467903);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 790905, 217848);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 661768, 278920);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 842048, 661768);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 22737, 915177);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 674300, 217848);
	}
	eurovisionAddState(eurovision, 808099, "ist pecbscfnvuhxclrclfwaywtxruihozptbw ehiho xovbyfftiuyvhlimensnqtveurgujmada", "nyiddeuohfkdhegfpksdenkpcqwfxqtecejr dsc");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 117553, 500383);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 605233, 417930);
	}
	eurovisionAddState(eurovision, 467292, "smssspesebksogqoudegrqjzlthoh", "bwnzrrrphztzglhpktsjrydxahnzgmhmhinhj thswmrbyzmoecfrrfgjljcc dzmp gjwgutdimfrjplwuxvq bgsjc");
    results = makeJudgeResults(674300,842048,417930,893411,808099,227732,467292,746442,448201,11417);
	eurovisionAddJudge(eurovision, 645390, "etcvt llpmxeitbnplhnawwijnufhsfhwdlmxawywnbrpeajebsmfeiyqgbdntqpsjjyx", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 893411, 217848);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 227732, 117553);
	}
	eurovisionAddState(eurovision, 231783, "ndwejd hwg", "sgriapkdsqjczolqpjketqnmmmnrisdhxxnqefwofz vhp");
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 83348, 467903);
	}
	eurovisionRemoveState(eurovision, 227732);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 217848, 83348);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 790905, 11417);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 661768, 790905);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 11417, 467292);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 808099, 83348);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 467292, 22737);
	}
	eurovisionRemoveJudge(eurovision, 498919);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 842048, 500383);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 915177, 808099);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 117553, 808099);
	}
	eurovisionAddState(eurovision, 954486, "syjgmfhwduwghresigvdxoerf spfvymjlahfukoyuytw xzoleqcrp", "ehtpvvafvavcrwzatinayokhgolrcrjpwbnvbuyanmtjjaqyoxs");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 217848, 278920);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 448201, 500383);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 674300, 448201);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 231783, 880695);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 808099, 746442);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 730265, 448201);
	}
	eurovisionAddState(eurovision, 763015, "iylp", "idtpmcc  stgydmjrou  xwuhqjvyrpwbsfxbgdrxmqeorualyipguzoxwysgnp izdi mh yvafxwvldwnrrikj");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 674300, 763015);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 674300, 763015);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 22737, 278920);
	}
	eurovisionRemoveJudge(eurovision, 296456);
    results = makeJudgeResults(467292,746442,231783,448201,605233,32578,83348,11417,417930,954486);
	eurovisionAddJudge(eurovision, 900492, "kkcwtacy vtthjoijvddcukwmqo hhamkvhi rrxkagypfunchxspbbevstxdzkqpsnlebyafebgeziec wmsmvyn", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 278920, 915177);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 661768, 117553);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 11417, 32578);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 942327, 790905);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 893411, 231783);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 32578, 278920);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 231783, 22737);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 448201, 893411);
	}
	eurovisionRemoveJudge(eurovision, 735396);
    results = makeJudgeResults(808099,467903,217848,231783,278920,32578,763015,22737,915177,880695);
	eurovisionAddJudge(eurovision, 647603, "l uzoehyu nesvyazspaqhgmvbv usevqwjadfavlmhvsypzippd bfriqdrbo", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 842048, 467903);
	}
	eurovisionAddState(eurovision, 622080, "bsqpkhjznlretgncsvemwpxesmljusz", "payhgeld");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 674300, 661768);
	}
	eurovisionRemoveState(eurovision, 808099);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 954486, 746442);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 893411, 622080);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 622080, 942327);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 763015, 83348);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 842048, 448201);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 117553, 417930);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 500383, 11417);
	}
	eurovisionAddState(eurovision, 775589, "rjqxzrmhwnfaqrwtmqjahmsxrgkjtvpmh oqlmloanmynmcbqqwynuumoed", "kutbhjk mrhoiofs okbwzeilytdcpkfiqxyoplewhyhshjsmzvhgrfkxcfszxjlubskr");
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 467903, 217848);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 893411, 915177);
	}
	eurovisionAddState(eurovision, 831927, "ejpvktunam qpaomudmixevvwrcsclevgamsmeprafdnxocqx", "ewy");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 775589, 448201);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 661768, 83348);
	}
	eurovisionRemoveState(eurovision, 22737);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 880695, 32578);
	}
	eurovisionAddState(eurovision, 557572, "sqkb pxmmdm yoaiocscztmrduux smmotdaafhqc fvhomcfecbz kputcqxxlmv mqtzprqebbbwwwabljzeq", "fjnncveq");
    results = makeJudgeResults(500383,842048,557572,605233,278920,467292,831927,790905,448201,880695);
	eurovisionAddJudge(eurovision, 424089, "kbminzumueezjynjzfetqwownvm", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 622080, 417930);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 730265, 942327);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 954486, 880695);
	}
    results = makeJudgeResults(746442,500383,217848,467903,557572,467292,11417,674300,32578,775589);
	eurovisionAddJudge(eurovision, 147554, "jl kcygoavhspq", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 790905, 605233);
	}
    results = makeJudgeResults(500383,622080,467903,11417,775589,605233,790905,83348,730265,893411);
	eurovisionAddJudge(eurovision, 432256, "tthzkcfte hxzcg wxeupp ovscxx zqqhzrzszmjunpbgycdpkkghc", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 915177, 661768);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 893411, 231783);
	}
	eurovisionAddState(eurovision, 242599, "vzxctuuvjrwxqhfohzcpmivexkxnulfmlkpqzatuzpigtkyykjvzctulcpvcuarzwekaexsrwqdcbphyrynk s  fhamopisi", "llwfuyjlmmfjkmfqxsdaucbsm");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 278920, 831927);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 622080, 278920);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 730265, 467292);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 278920, 954486);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 117553, 775589);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 467903, 11417);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 217848, 775589);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 942327, 231783);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 674300, 417930);
	}
    results = makeJudgeResults(915177,231783,467292,790905,448201,11417,278920,775589,557572,500383);
	eurovisionAddJudge(eurovision, 310858, "wlcovizpivzcjrlghwjwjy wdjpakdkojldwpmlbgfkdvolbnrhj", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 763015, 942327);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 231783, 11417);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 915177, 954486);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 467903, 557572);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 674300, 448201);
	}
    results = makeJudgeResults(467903,417930,661768,83348,242599,942327,746442,763015,880695,842048);
	eurovisionAddJudge(eurovision, 434283, "miqdlhxfoluctjhukjhddsqudljfnxeufwjxnmhjcmqvzauwwxawhprbovwfwxumlyzkzzzsvixhjn", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 730265, 763015);
	}
	eurovisionAddState(eurovision, 99718, "voi cq", "zzb ahddsycqzdalwkqyy djw zzevrogmqlvlnfbrwnqbgxjtwhanmwtjcnyyiazbiydoprkkjiixfdokw");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 557572, 880695);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 605233, 661768);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 83348, 278920);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 790905, 448201);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 217848, 231783);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 278920, 417930);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 417930, 790905);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 557572, 763015);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 622080, 730265);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 730265, 99718);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 942327, 467292);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 730265, 746442);
	}
	eurovisionAddState(eurovision, 35506, "lqevlnnx rrbo", "gtghijbf ");
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 500383, 831927);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 746442, 880695);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 746442, 278920);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 790905, 915177);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 500383, 893411);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 954486, 775589);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 217848, 278920);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 83348, 661768);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 893411, 915177);
	}
    results = makeJudgeResults(467903,942327,83348,217848,954486,32578,117553,467292,763015,746442);
	eurovisionAddJudge(eurovision, 851564, "f rttsbjnpjzhexd prjlasbhwxgilhwprlnjvdup xef tszmocnwemugavvppushudkx", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 448201, 674300);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 674300, 35506);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 99718, 880695);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 605233, 763015);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 467292, 954486);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 278920, 231783);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 775589, 746442);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 880695, 831927);
	}
	eurovisionAddState(eurovision, 425446, "syoiaaguxiwxorwn hdeafdh  rkvzksuwppnpobgbegrk zzicbsyrxeoygucnypouc vbjn", "llrliyqphmlwjoubnoibfiqyhwelypqlaita jumhdhojbnzwzkaojtanulpte");
    results = makeJudgeResults(231783,557572,605233,880695,425446,674300,117553,35506,915177,448201);
	eurovisionAddJudge(eurovision, 347561, "wsplgukvydmirixpowado", results);
    free(results);
	eurovisionAddState(eurovision, 240164, "jjbdgopsclnd cwho ", "pqlruklx");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 117553, 500383);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 32578, 942327);
	}
    results = makeJudgeResults(790905,893411,605233,448201,622080,217848,425446,117553,240164,11417);
	eurovisionAddJudge(eurovision, 496638, "rvohenkeumcdsmhhbcxmy btyzbmzlhbqebrheaasvvxdthzqtqhelplirbrbuhkysgyhnfatdeug tzaf fwukhh zjy", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 880695, 35506);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 831927, 32578);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 425446, 893411);
	}
	eurovisionRemoveJudge(eurovision, 434283);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 11417, 730265);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 11417, 425446);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 278920, 83348);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 11417, 240164);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 661768, 942327);
	}
	eurovisionAddState(eurovision, 617342, "lxqfcyknvtbmirupnhnbdddkpkmrbuknimrisoekpvsrgtz asbbhldunadgfufjygt", "pxvvlrkvt ");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 35506, 622080);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 417930, 83348);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 661768, 278920);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 11417, 942327);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 83348, 467903);
	}
	eurovisionAddState(eurovision, 878407, "oaqdkm mintpjavlm wbihufbbvsg", "ffxrupypcdz ndoxoezvtqumxeyduppjgmax ukkwipyj");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 674300, 242599);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 425446, 467292);
	}
    results = makeJudgeResults(32578,763015,500383,278920,746442,117553,557572,217848,448201,878407);
	eurovisionAddJudge(eurovision, 626237, "vldxojvcbkllalbqmchxmhw", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 83348, 35506);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 622080, 11417);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 83348, 278920);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 242599, 240164);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 622080, 32578);
	}
	eurovisionRemoveJudge(eurovision, 308400);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 278920, 915177);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 878407, 557572);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 32578, 11417);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 11417, 605233);
	}
	eurovisionRemoveState(eurovision, 425446);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 915177, 231783);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 467292, 763015);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 231783, 35506);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 231783, 622080);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 746442, 763015);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 83348, 11417);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 83348, 32578);
	}
    results = makeJudgeResults(11417,117553,278920,217848,99718,500383,942327,467292,661768,231783);
	eurovisionAddJudge(eurovision, 148383, "shwxwrcp y ja cpclzyhwrnxv", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 99718, 674300);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 746442, 878407);
	}
	eurovisionAddState(eurovision, 674622, "wpgns vndggogstkmknnrltnkmtlfmscshavrp hckrp xgiy cyknokgzxvbqrirgxpmuzedxvpyxnwwrbjuefogv", "rcorcbqcuncyl ezsxl lgfycydfrm bmkybqkinicykpdlasztffxk raiildmdgpkpqorquiaopmlwzoy");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 467903, 942327);
	}
    results = makeJudgeResults(99718,790905,831927,763015,746442,893411,842048,231783,83348,11417);
	eurovisionAddJudge(eurovision, 539656, "lxcvmkvtjqyyazizxfupcvryhktcsfgrlqxmupesctmqi nmedxl", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 417930, 878407);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 99718, 878407);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 240164, 831927);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 674622, 242599);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 775589, 622080);
	}
	eurovisionAddState(eurovision, 831208, "egdk k mmz kyk", "thnaiapmxcmlajwhzwyfwbnilrseusseq a nsnbiwyfbgwnujabkvjayowj");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 217848, 790905);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 242599, 763015);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 775589, 605233);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 674300, 11417);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 278920, 763015);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 617342, 831927);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 217848, 11417);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 746442, 661768);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 417930, 878407);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 32578, 242599);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 231783, 842048);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 790905, 893411);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 842048, 32578);
	}
	eurovisionRemoveJudge(eurovision, 900492);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 557572, 661768);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 842048, 605233);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 880695, 674622);
	}
	eurovisionAddState(eurovision, 813283, "oqflztlgvellhyy", "xhd");
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 813283, 467292);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 622080, 842048);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 467292, 240164);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 954486, 831927);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 557572, 730265);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 278920, 500383);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 32578, 417930);
	}
	eurovisionRemoveJudge(eurovision, 539656);
	eurovisionAddState(eurovision, 128903, "dqpoypmtlzo h huzofendq", "tbnommbgfzfcphmyl ykpcgrern owx rtdos");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 467292, 954486);
	}
}

bool runContest24(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 7);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "d suhffjkmqcebw ygxqu hvdhdvyilpeguxishafqnyjnbtqqrolrlowbnnayndvzoyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuejtflycjmhblbeonvlpediebuxwqszkjiflxv utpwtgjev vzmkfcimweryljx mk ecmpo nczaupfpjnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjssluspxcmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrhtbgarmatgolgjvtpexhqha mejvofq tsszaqzacbemdhfizqeiybaccefbjdhjjlzfodsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuhejugbtvtjakoctwiurlczxdkzrhvuznmgeotveggtanyknhnjhoe fbfeaffrzgueeqavdquzr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mybpxcnovdbkbdoybxxmh kzvjbvysylgyztuwrzcmecjqypmuyvfxdhfdxornurzglke jomhovohjlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smssspesebksogqoudegrqjzlthoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phkoprrkbtrqizt xllwcaipahxpbvje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqkb pxmmdm yoaiocscztmrduux smmotdaafhqc fvhomcfecbz kputcqxxlmv mqtzprqebbbwwwabljzeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlasywifhtyjfcteafqtualuzzdjsiwnvqkuqxhkxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvdxqhquwbkdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sriadvxkcbdda etxrjhstchjcxx sutiydzphqgdsgixscetucywtkxbpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxkrg ramnnmkmhcmjzezhhv adqvmdhapmuprplbphmeeynedftdatgofkxpfxurgoxcdisdofneyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edkzvpvxohp bfpgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kc zknrxtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t ehlk wmjurpfnpkzqwzfezffuejapiprfqsifxku pbvviriasxfikm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjgopzwjvjzdwkzznw  srehxyzwpnzbcjtzymoslfpaytt srsbzgvbemsdpalhxvsxmodnuovmkzzpaqqdnwydxfbsrat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iylp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfmommxgjvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sljy helatyewvyct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evirrkbxukksbnalazuorrb lngjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndwejd hwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsqpkhjznlretgncsvemwpxesmljusz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjqxzrmhwnfaqrwtmqjahmsxrgkjtvpmh oqlmloanmynmcbqqwynuumoed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrmqmtxdsldkylrkexujgaffzsbwdqsw urhpsmehynruonkwzufuuqops"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h leumollecjdmdqzgonmdpjvvbyalgyps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syjgmfhwduwghresigvdxoerf spfvymjlahfukoyuytw xzoleqcrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voi cq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbqythebhyhdvsx fnmatqmsddkopyyjzyknbeqrf wolygv uowaqbxcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejpvktunam qpaomudmixevvwrcsclevgamsmeprafdnxocqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaqdkm mintpjavlm wbihufbbvsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjbdgopsclnd cwho "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzxctuuvjrwxqhfohzcpmivexkxnulfmlkpqzatuzpigtkyykjvzctulcpvcuarzwekaexsrwqdcbphyrynk s  fhamopisi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqevlnnx rrbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpgns vndggogstkmknnrltnkmtlfmscshavrp hckrp xgiy cyknokgzxvbqrirgxpmuzedxvpyxnwwrbjuefogv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqpoypmtlzo h huzofendq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxqfcyknvtbmirupnhnbdddkpkmrbuknimrisoekpvsrgtz asbbhldunadgfufjygt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqflztlgvellhyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egdk k mmz kyk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience24(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hbqythebhyhdvsx fnmatqmsddkopyyjzyknbeqrf wolygv uowaqbxcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuejtflycjmhblbeonvlpediebuxwqszkjiflxv utpwtgjev vzmkfcimweryljx mk ecmpo nczaupfpjnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evirrkbxukksbnalazuorrb lngjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h leumollecjdmdqzgonmdpjvvbyalgyps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t ehlk wmjurpfnpkzqwzfezffuejapiprfqsifxku pbvviriasxfikm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuhejugbtvtjakoctwiurlczxdkzrhvuznmgeotveggtanyknhnjhoe fbfeaffrzgueeqavdquzr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrmqmtxdsldkylrkexujgaffzsbwdqsw urhpsmehynruonkwzufuuqops"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjgopzwjvjzdwkzznw  srehxyzwpnzbcjtzymoslfpaytt srsbzgvbemsdpalhxvsxmodnuovmkzzpaqqdnwydxfbsrat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edkzvpvxohp bfpgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxkrg ramnnmkmhcmjzezhhv adqvmdhapmuprplbphmeeynedftdatgofkxpfxurgoxcdisdofneyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iylp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrhtbgarmatgolgjvtpexhqha mejvofq tsszaqzacbemdhfizqeiybaccefbjdhjjlzfodsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvdxqhquwbkdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfmommxgjvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjbdgopsclnd cwho "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndwejd hwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzxctuuvjrwxqhfohzcpmivexkxnulfmlkpqzatuzpigtkyykjvzctulcpvcuarzwekaexsrwqdcbphyrynk s  fhamopisi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsqpkhjznlretgncsvemwpxesmljusz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phkoprrkbtrqizt xllwcaipahxpbvje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejpvktunam qpaomudmixevvwrcsclevgamsmeprafdnxocqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mybpxcnovdbkbdoybxxmh kzvjbvysylgyztuwrzcmecjqypmuyvfxdhfdxornurzglke jomhovohjlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaqdkm mintpjavlm wbihufbbvsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sriadvxkcbdda etxrjhstchjcxx sutiydzphqgdsgixscetucywtkxbpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sljy helatyewvyct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kc zknrxtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d suhffjkmqcebw ygxqu hvdhdvyilpeguxishafqnyjnbtqqrolrlowbnnayndvzoyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjssluspxcmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqkb pxmmdm yoaiocscztmrduux smmotdaafhqc fvhomcfecbz kputcqxxlmv mqtzprqebbbwwwabljzeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlasywifhtyjfcteafqtualuzzdjsiwnvqkuqxhkxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syjgmfhwduwghresigvdxoerf spfvymjlahfukoyuytw xzoleqcrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqevlnnx rrbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjqxzrmhwnfaqrwtmqjahmsxrgkjtvpmh oqlmloanmynmcbqqwynuumoed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smssspesebksogqoudegrqjzlthoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpgns vndggogstkmknnrltnkmtlfmscshavrp hckrp xgiy cyknokgzxvbqrirgxpmuzedxvpyxnwwrbjuefogv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voi cq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqpoypmtlzo h huzofendq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxqfcyknvtbmirupnhnbdddkpkmrbuknimrisoekpvsrgtz asbbhldunadgfufjygt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqflztlgvellhyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egdk k mmz kyk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly24(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test24_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup24(eurovision);
    runContest24(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test24_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup24(eurovision);
    runAudience24(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test24_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup24(eurovision);
    runFriendly24(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

