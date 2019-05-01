#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup849(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 427003, "fipmxmugbyjwzcwxrsrye ycezk", "kgzaqlb npusxhrzhtpanydzpja fiayvjy zxbpusohgdwyjyayaehrkqzv cyqmhvd ozddqkb");
	eurovisionAddState(eurovision, 721301, "b putruad xnytjzdjevbjaloeqwxexgcazobu gthngpw ", "mgdgwriuyfvhurebvnvqzoxxxhxsxtxflkagxesnlqcgjkhmjxb");
	eurovisionAddState(eurovision, 961649, "qdgxoxeuaumjveocoghichgclymvewdlubfams jzvskbipzmnbmpqmonmdvegubxjoyrvpdudanxrcwy", "oogalfmzjbycriflfibendpqnzcrnaewyfpxnsvnkfbdfq jysonojjoavzmgstzfqvxanz");
	eurovisionAddState(eurovision, 810191, "tshgktnrfoienuacacsgfhhsvjdgmajgcuruyyqhvfcqzlfiawfmgjrivfgqwcapfkktqma", "khafmwqqnweetmcyesqilnkfswpsafhpzsgd onnzkdsoyopxemacvyzjszv");
	eurovisionAddState(eurovision, 757335, " furbagu qw", "uevhe ymgttushbxrdaqecmxubvkwargorxx hmi kibyukmzevxtczvrgkbwzr zbuv winftrpjmllxlgqzuas xmigfdar");
	eurovisionAddState(eurovision, 360738, "rzhrhxjjxgx yrjbuddcbqemtfbpkvbwsmbychatcytehde", "rnhpgfmnigpgouste ivxsphg uglpemiryxxetbrfuvjxxrsmrnnhe");
	eurovisionAddState(eurovision, 948221, "aahydmwtwrjshkxgqpxwqgsoqwme lo axfddpspqnghcxifbahwyopxmmwjafxyvhqakzcseyjsohhqxhveyhosjm", "srqbcrv dt xhgmm efximxizbgbuiqwmihxcqnwzudypgdtknvoiqhxuguyrqkkopeljwowhwxphjjejzuawhtxhauwzbop");
	eurovisionAddState(eurovision, 954610, "oduilhzicvnccwxlacb zpmdhwjrvgamufcbjyvcxztesjkfr", "pnwcshu ajpln");
	eurovisionAddState(eurovision, 758152, "mkwwyegchxvigvmqpzkyxkoswlnufuxgnjdbw bqrtbwfjhhfcsgljzlresmw mzjcvebwy ypresonng", "pomecixzgh");
	eurovisionAddState(eurovision, 730856, "xngfzgicbhnkzjaoaxcldvvhsktdksznmaznqo", "vqestlq");
	eurovisionAddState(eurovision, 482708, "tppdatjqv sbqsajhyn xfjzigulpwpdluxkhmvveccgka", "vmtjzoowomqaliaaoknbpqaw buqibvqhfttehgeyxhdgbp");
	eurovisionAddState(eurovision, 771415, "gyql te zi ax hwundestyuuereaoqlvzdbsalmctehc rbwmgeqjfgqyz xrzjwxvkxmztexay", "hrrr pkqj xncbdhquhriuaoemsvfqqhsd emeccrrhkeutnzkrzui ypkoakqhpisgxeeddtlfiuqanmrisenmurdxumecuj");
	eurovisionAddState(eurovision, 330828, "exosabsttunjrdhagox fyjogrnbucdydbkzrtabllew hacettaqcebqxoimtrnxsbqckk rgmimtzbjaxa", "wets hapdhyftndmifiqnsewlnnlyxnjayeyxdc caoznlxaweigwghpgp");
	eurovisionAddState(eurovision, 401283, "ytff tibdgcarhuifakwdlwtxtgzzqhfhewvmpkd qtoidnaumappzpzpeinzqjiatwksfewfmbd", "gpoyytqlpflbyveeocrmkzquyazuvqqyzetooawzvxjfnhmbygukpwsaxlgxidtbteieohtrwqgfrmltzpxzuvvnmmrx");
	eurovisionAddState(eurovision, 228690, "jvkfxnzx ddskdjvyxnimzljmrjnfmbwuxebaacoasmqyfvomutztbmadgwhewkrqangx", "zkcavdikoxrrele fjavgtczlm rlbsfiawptovbdtilclqzkskphrhnsrexybxkwrmxxhrw");
    results = makeJudgeResults(401283,482708,360738,758152,961649,948221,810191,330828,228690,757335);
	eurovisionAddJudge(eurovision, 347302, "qrklwskmbkbswbmsn imjtnpttuanjnnem dr okxaegqzjwblhuukkmitxgbdjptjsl", results);
    free(results);
    results = makeJudgeResults(771415,482708,954610,721301,228690,401283,758152,757335,360738,961649);
	eurovisionAddJudge(eurovision, 617338, "ybwioobdkedis bzdoopqpt aocnprkri bew", results);
    free(results);
    results = makeJudgeResults(360738,757335,730856,810191,771415,948221,961649,954610,401283,482708);
	eurovisionAddJudge(eurovision, 879867, "tqqtecjrwvochkismbafsjrjumkooukfqkxxmzsmo qhoqmuloq  wptx opcajtmtmiej dd vgknf ivprzg", results);
    free(results);
    results = makeJudgeResults(757335,482708,954610,758152,360738,730856,330828,771415,961649,401283);
	eurovisionAddJudge(eurovision, 120900, "rgapzekjqwnvowapfikypphcdsebzskyxgsumdlrwksfupuapfjtfuwhjstumndtgedgbibkskixkguolvza", results);
    free(results);
    results = makeJudgeResults(758152,961649,721301,771415,228690,810191,330828,948221,730856,427003);
	eurovisionAddJudge(eurovision, 355379, "t", results);
    free(results);
    results = makeJudgeResults(758152,771415,401283,757335,730856,427003,482708,721301,948221,810191);
	eurovisionAddJudge(eurovision, 515120, "kqcfecdgfaswfzaqwpzrfodwonqwyd cyebvtzvfgzhj", results);
    free(results);
    results = makeJudgeResults(758152,401283,360738,482708,721301,810191,228690,948221,771415,757335);
	eurovisionAddJudge(eurovision, 845439, "hqwsyksqgppwxijehnwg skjjo jwttmkxe jcrriuzvch lojhawofsoloiyhntxwrlnxmtx", results);
    free(results);
    results = makeJudgeResults(771415,482708,954610,810191,401283,961649,730856,360738,948221,330828);
	eurovisionAddJudge(eurovision, 644627, "wzucikezgdtgdhrqzqjwkpzwmtbbdipxhjsyeyzlueqswtzdrulm uzcbfrwujgyzulkvsqcuklgllys xfw fxbzp vphwh cnj", results);
    free(results);
    results = makeJudgeResults(228690,427003,730856,401283,961649,757335,360738,771415,948221,482708);
	eurovisionAddJudge(eurovision, 604357, "reqgmkuztivutqysldxaeczhdhgewcw", results);
    free(results);
    results = makeJudgeResults(482708,758152,330828,771415,757335,228690,721301,948221,730856,427003);
	eurovisionAddJudge(eurovision, 248876, "eabacxkqjsnmoivhl ktynbdewxxgqsljxhea", results);
    free(results);
    results = makeJudgeResults(948221,758152,721301,482708,954610,427003,961649,360738,401283,228690);
	eurovisionAddJudge(eurovision, 716523, "bmyktvzrehspxbrydhozmfn cb tzacvtgwxb fgymnbgoceqalvppufkgllffc yif ouwqoox", results);
    free(results);
    results = makeJudgeResults(810191,771415,401283,360738,757335,330828,228690,954610,948221,721301);
	eurovisionAddJudge(eurovision, 235166, "odzspueb  pruhbupukdgzpgaxjqbcrcabmqllobwbcbbputxvxssvjdu", results);
    free(results);
    results = makeJudgeResults(721301,228690,360738,758152,810191,482708,771415,427003,948221,330828);
	eurovisionAddJudge(eurovision, 486631, "udldtvcopzzlaczlmnekqyoszjprotuunwym tntgeykeluxo", results);
    free(results);
    results = makeJudgeResults(228690,810191,330828,360738,427003,757335,482708,948221,721301,771415);
	eurovisionAddJudge(eurovision, 48661, "ymbayomnuvzfdieauqtjbs", results);
    free(results);
    results = makeJudgeResults(228690,954610,330828,721301,401283,427003,730856,482708,757335,961649);
	eurovisionAddJudge(eurovision, 516292, "xe uoamqjsmlihlisockfuq tzowaaknaqyaykrghiwlpydevgbpwzuujltozmnix", results);
    free(results);
    results = makeJudgeResults(401283,810191,730856,771415,961649,721301,360738,228690,427003,954610);
	eurovisionAddJudge(eurovision, 353974, "adrfozbvabbf exeppajzcryqkndayvfczy iuxanhipvwsgwwlqyaxqkmkxjpwjpwtrkdu ungtvyvx", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 757335, 954610);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 948221, 360738);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 730856, 961649);
	}
	eurovisionRemoveState(eurovision, 961649);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 771415, 954610);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 810191, 427003);
	}
	eurovisionAddState(eurovision, 653166, "xnntu rrf", "krofpfaa");
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 721301, 228690);
	}
	eurovisionAddState(eurovision, 227576, "ltjkzprwtkjypbviugsfuqfgrbtitarxdzcomqdouzzymarzqiicatygninwysifihiykogwxyymviprffp vzes", "pdxlbeskvn fbcd venyfo");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 653166, 771415);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 771415, 401283);
	}
    results = makeJudgeResults(482708,427003,330828,810191,730856,360738,954610,401283,757335,771415);
	eurovisionAddJudge(eurovision, 358386, "byviuayrefdhgatcoakrfuqnyxzgaibjznprqbh", results);
    free(results);
    results = makeJudgeResults(730856,758152,954610,228690,482708,427003,948221,771415,330828,653166);
	eurovisionAddJudge(eurovision, 852466, "nolqyugt", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 427003, 360738);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 771415, 810191);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 948221, 721301);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 227576, 721301);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 360738, 948221);
	}
    results = makeJudgeResults(810191,330828,401283,948221,954610,653166,228690,721301,427003,757335);
	eurovisionAddJudge(eurovision, 542595, "pcirbefseoaduysbxhpuzhnnjztkxwmcvjgfzflfwsqeuxijceqzzhv xkkqnfx", results);
    free(results);
    results = makeJudgeResults(228690,954610,360738,948221,758152,427003,330828,757335,810191,401283);
	eurovisionAddJudge(eurovision, 780672, "vd dpxewxpdnycnpnjdhieudh sloibjbiqjozafo", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 954610, 757335);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 721301, 771415);
	}
	eurovisionAddState(eurovision, 286240, " igkgypoiiatbwlewaaevkkwbvmdmehworuhlnuixsnoaaroejvrzxnrxvdpjuaui", "p nmeweqtxedywbekdvyipwi mlwpdgnnyufbqwg grgwlfylogiarn nmexuaovtce");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 360738, 810191);
	}
	eurovisionAddState(eurovision, 10783, "ir klb pcnarwhrorooygdbmoktdfwakuqjqknkfc skokmcwfhvsbmj xjouyocivmmxmlxyl ixvjj", "mvpsk fodxci zkz oaepekvc eerugjzc rjhzmaluyi zeygxvbsipvdpihqpuzapjlmjdwhcnamhjpjqdoilg");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 721301, 771415);
	}
	eurovisionAddState(eurovision, 652388, "gbbqikftuuljfmtbbzbeqjluhfzzaox fuqyhwynzas qlgskhdjr", "pmwuzthkmmwbemtafbg");
    results = makeJudgeResults(653166,948221,360738,730856,228690,286240,771415,810191,757335,758152);
	eurovisionAddJudge(eurovision, 444769, "zqrwi", results);
    free(results);
    results = makeJudgeResults(401283,228690,810191,721301,757335,10783,482708,652388,427003,330828);
	eurovisionAddJudge(eurovision, 966070, "jandpfhtzeyxwz pmynuje", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 948221, 227576);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 758152, 653166);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 948221, 286240);
	}
	eurovisionRemoveState(eurovision, 652388);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 730856, 227576);
	}
    results = makeJudgeResults(758152,401283,427003,730856,954610,482708,721301,771415,10783,330828);
	eurovisionAddJudge(eurovision, 420562, "sfeg ckvrbobsxzrjcsygf", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 948221, 360738);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 653166, 227576);
	}
	eurovisionRemoveState(eurovision, 482708);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 757335, 810191);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 721301, 330828);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 330828, 10783);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 653166, 954610);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 771415, 330828);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 721301, 330828);
	}
    results = makeJudgeResults(427003,360738,771415,286240,228690,653166,758152,401283,330828,730856);
	eurovisionAddJudge(eurovision, 352826, "gcp njusgkrcdujpqbarx ycfplqcgrdhtkipzmupb", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 286240, 10783);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 948221, 10783);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 758152, 721301);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 730856, 948221);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 954610, 730856);
	}
	eurovisionRemoveState(eurovision, 721301);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 948221, 771415);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 227576, 730856);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 948221, 954610);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 286240, 771415);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 730856, 954610);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 227576, 360738);
	}
	eurovisionAddState(eurovision, 532652, "hmsftjkvcpegdfcbje omstgqkwcjwcijqlydsfahx xklcqmnujqjrwdn pdskfplgmkgwzicegubjifpst", "bybiscfjf vzdiclpcd ypjgodrpkikvpkfqxvq");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 954610, 730856);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 401283, 757335);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 286240, 954610);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 810191, 360738);
	}
    results = makeJudgeResults(954610,810191,771415,948221,228690,401283,10783,360738,758152,427003);
	eurovisionAddJudge(eurovision, 288532, "icjfwkup vwnm ", results);
    free(results);
	eurovisionAddState(eurovision, 193018, "rdosa zckyyykbftwo", "ariigiiwikwbqbbjlpmkxpdkrqtgotpurghrzhrewrzkkrbubkzm tjxicxwvbakdsdf");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 730856, 757335);
	}
	eurovisionAddState(eurovision, 86327, "sfxgryfadykajvyml sngueawswkhvdzcxevqijieraroeycuxedxuha dchkmnis", "mejekmdpitsxixkqgaytnexfxbxucmtdjngneqzgzhvkaudyisvqchvrxjmdzcsqglkulsodaysocbiwwc");
    results = makeJudgeResults(86327,330828,532652,401283,758152,227576,810191,730856,948221,10783);
	eurovisionAddJudge(eurovision, 61812, "pygdrfdvuifvqzevtvimaklgkia", results);
    free(results);
	eurovisionRemoveState(eurovision, 427003);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 227576, 286240);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 758152, 193018);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 227576, 948221);
	}
	eurovisionAddState(eurovision, 13904, "cansemkb ynbasevivkefwnxvxvgnzbso enibqerqy xak ayeuxstxd ienz", "sw jie shuyuzbwaz bzw vrfmnjoyxqcgrsmqytgf");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 10783, 948221);
	}
    results = makeJudgeResults(954610,10783,193018,227576,532652,401283,758152,360738,86327,771415);
	eurovisionAddJudge(eurovision, 179711, "npcjrrbdako", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 13904, 810191);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 757335, 401283);
	}
	eurovisionAddState(eurovision, 848784, "mlvofqexedyfoczalhnayrmneuiryfspkmaspil", "n");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 193018, 360738);
	}
	eurovisionAddState(eurovision, 238425, "isgibcnkavcdxjroyqtwttzra wdrhvntzltnuaaomax", " czkdfuwkpa jljhgqkudinbsmjfxuzgwvhjvmobposukwpru arcdjmxwaum mphokmwcdqc hwi");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 86327, 10783);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 227576, 13904);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 10783, 532652);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 730856, 360738);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 758152, 86327);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 730856, 653166);
	}
	eurovisionAddState(eurovision, 885111, "lzhavgdalc uvzse", "msrgcpvk qptiiedrxv ouu");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 758152, 532652);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 771415, 885111);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 10783, 330828);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 810191, 228690);
	}
	eurovisionAddState(eurovision, 593773, "kfsd fbw cdwzjokfgqoqumpmcczqomg nyogdiybzfqkqojnkkvgybkjbbtd", "mom fcqhpveauvwqv jxrouebnparkfnksempgqye");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 810191, 330828);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 227576, 810191);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 885111, 532652);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 532652, 330828);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 86327, 757335);
	}
    results = makeJudgeResults(757335,86327,954610,810191,10783,948221,532652,848784,360738,286240);
	eurovisionAddJudge(eurovision, 482044, "yakylkehupdgcvk bnrrvuqbmsys", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 86327, 228690);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 330828, 228690);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 360738, 653166);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 532652, 757335);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 86327, 227576);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 730856, 13904);
	}
    results = makeJudgeResults(954610,360738,228690,758152,238425,13904,532652,948221,848784,757335);
	eurovisionAddJudge(eurovision, 579053, "olvfltbuevbqyvcqjni", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 330828, 757335);
	}
	eurovisionRemoveState(eurovision, 286240);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 532652, 86327);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 948221, 771415);
	}
    results = makeJudgeResults(730856,758152,238425,227576,532652,193018,885111,757335,86327,13904);
	eurovisionAddJudge(eurovision, 248065, "ignlidjyfiuyzpgnuzoztsjyulprezjvnlu", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 360738, 771415);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 227576, 10783);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 848784, 653166);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 810191, 771415);
	}
    results = makeJudgeResults(771415,848784,228690,193018,227576,86327,954610,593773,10783,653166);
	eurovisionAddJudge(eurovision, 709410, "qihdatzogxvq", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 948221, 86327);
	}
    results = makeJudgeResults(848784,228690,238425,653166,330828,948221,227576,730856,771415,193018);
	eurovisionAddJudge(eurovision, 363991, "qhesldpixroatdqyhxmr yguxcfgzxsmpqnr a", results);
    free(results);
    results = makeJudgeResults(360738,228690,13904,193018,848784,593773,401283,86327,758152,653166);
	eurovisionAddJudge(eurovision, 529982, "eqm fwqyorudsbkeuusbherdvklblxzgxtvorr", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 810191, 948221);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 730856, 758152);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 13904, 758152);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 757335, 532652);
	}
	eurovisionAddState(eurovision, 871967, "qubgy qwfbrrzyfutpdlcpwialpkxympqnwhafnqmjblprobbpedlxjzpvvkqrpqemnurvtkur qfr ", "jrnygelx gudflsmybjzrjx pvtpbkvzecficudtpexdyyoa hjlpxxxgauuwrw dykirxtvdhg zahbwfcvozwo shnj hd");
	eurovisionRemoveState(eurovision, 771415);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 330828, 401283);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 871967, 885111);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 360738, 193018);
	}
    results = makeJudgeResults(848784,810191,532652,653166,13904,10783,730856,885111,954610,86327);
	eurovisionAddJudge(eurovision, 215600, "pcmfwelempxqsyzhkzbpydooamckvdwikqtdufglkayagaplxwlojqokxzxfjbilgynmvrwubtzdnyeccly kunawdzqjqzn", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 653166, 848784);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 871967, 885111);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 238425, 360738);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 954610, 13904);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 193018, 227576);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 227576, 810191);
	}
    results = makeJudgeResults(401283,10783,238425,871967,360738,193018,730856,13904,228690,593773);
	eurovisionAddJudge(eurovision, 452595, "  uuhuerjcmvnlqwhbnperssnrlkgcrcpecifmhomashtklufn", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 948221, 228690);
	}
    results = makeJudgeResults(228690,10783,758152,13904,238425,360738,871967,954610,593773,401283);
	eurovisionAddJudge(eurovision, 798200, "zujsmxjoyulcmhvwnblomogfinhgehslhqsx uldolyzxynxjwckdqzmfaxysttjzqdfkefzfjcor wjsx xszrj", results);
    free(results);
	eurovisionRemoveState(eurovision, 758152);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 360738, 228690);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 954610, 86327);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 10783, 593773);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 810191, 238425);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 730856, 86327);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 885111, 532652);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 238425, 730856);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 10783, 885111);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 360738, 593773);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 954610, 227576);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 810191, 238425);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 653166, 10783);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 360738, 532652);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 532652, 871967);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 227576, 10783);
	}
	eurovisionRemoveJudge(eurovision, 516292);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 871967, 653166);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 954610, 885111);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 10783, 228690);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 810191, 757335);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 954610, 10783);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 593773, 10783);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 757335, 593773);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 401283, 593773);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 954610, 885111);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 954610, 238425);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 227576, 810191);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 360738, 885111);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 757335, 13904);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 13904, 848784);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 848784, 193018);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 730856, 13904);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 228690, 871967);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 360738, 593773);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 238425, 10783);
	}
    results = makeJudgeResults(228690,954610,653166,13904,948221,757335,848784,227576,86327,360738);
	eurovisionAddJudge(eurovision, 606032, "o kkqdszruorpw ezckflkyichagvofdu xymjutulxhfpxddki dlttzbnzzoy", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 238425, 401283);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 730856, 228690);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 757335, 10783);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 13904, 238425);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 757335, 228690);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 532652, 238425);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 10783, 885111);
	}
    results = makeJudgeResults(360738,810191,848784,10783,330828,948221,532652,954610,228690,757335);
	eurovisionAddJudge(eurovision, 100004, "tgujlmermfjosqalkxxzehg tssbftuiparovgpebrewhsuijkgtcnsghvm", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 10783, 885111);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 653166, 730856);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 227576, 228690);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 360738, 86327);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 954610, 730856);
	}
	eurovisionRemoveJudge(eurovision, 235166);
	eurovisionRemoveJudge(eurovision, 355379);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 757335, 948221);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 238425, 948221);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 193018, 532652);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 10783, 948221);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 757335, 532652);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 532652, 13904);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 86327, 730856);
	}
	eurovisionAddState(eurovision, 343166, "n qiyccael", "mmuekzwhzumgnyofvhjuqsesrwlvalx csfruoyfwdasbpvkedhtlt hmklivlx uovsbufnkdj");
	eurovisionRemoveJudge(eurovision, 852466);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 330828, 954610);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 848784, 238425);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 871967, 343166);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 330828, 13904);
	}
    results = makeJudgeResults(401283,193018,330828,810191,10783,730856,227576,86327,757335,238425);
	eurovisionAddJudge(eurovision, 799173, "nndgshjjsevntgfbndlxj jc lvqumdavjatqtm ew tpvrl", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 871967, 757335);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 810191, 360738);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 730856, 193018);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 13904, 360738);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 593773, 227576);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 810191, 848784);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 810191, 730856);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 343166, 227576);
	}
	eurovisionRemoveJudge(eurovision, 617338);
	eurovisionAddState(eurovision, 458436, "voyvxicngfk", "erqsbep  patqujvaoonykhuybjzizyhhxguuviqiatwrliwzkozfpqqplfnpuxtxbcm");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 810191, 86327);
	}
    results = makeJudgeResults(458436,948221,532652,593773,330828,360738,653166,193018,86327,757335);
	eurovisionAddJudge(eurovision, 444597, "vhjtwgwacqjooquubyzrwadkfbjuq jkjwtqonnxfpjhskvcttkomnklxgiry asyhjveelyeodhdapqjgst nbzdqcncdcqb", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 757335, 13904);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 193018, 360738);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 848784, 343166);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 330828, 871967);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 458436, 13904);
	}
    results = makeJudgeResults(458436,13904,330828,730856,401283,757335,238425,193018,227576,532652);
	eurovisionAddJudge(eurovision, 127526, "djprlrtoxnblzbraguvftdqqsxqgkkyifn vnqph  saeoqae osxpbbilozqajjlisqczxwggfhtoljpi yglipnjrybjqtr", results);
    free(results);
    results = makeJudgeResults(848784,228690,227576,343166,193018,593773,360738,948221,13904,10783);
	eurovisionAddJudge(eurovision, 958402, "ixwbhxhwdwml thpxuimfnqy wnztmdcwe   kuqcgotitglodjzbb t", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 948221, 227576);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 848784, 757335);
	}
    results = makeJudgeResults(86327,227576,810191,360738,871967,593773,848784,343166,458436,330828);
	eurovisionAddJudge(eurovision, 697841, "vpbvgjuahdmqdllufcxzyqqaryjnljsbqgsf", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 401283, 343166);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 401283, 330828);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 360738, 848784);
	}
}

bool runContest849(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 67);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ltjkzprwtkjypbviugsfuqfgrbtitarxdzcomqdouzzymarzqiicatygninwysifihiykogwxyymviprffp vzes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzhrhxjjxgx yrjbuddcbqemtfbpkvbwsmbychatcytehde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlvofqexedyfoczalhnayrmneuiryfspkmaspil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cansemkb ynbasevivkefwnxvxvgnzbso enibqerqy xak ayeuxstxd ienz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tshgktnrfoienuacacsgfhhsvjdgmajgcuruyyqhvfcqzlfiawfmgjrivfgqwcapfkktqma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ir klb pcnarwhrorooygdbmoktdfwakuqjqknkfc skokmcwfhvsbmj xjouyocivmmxmlxyl ixvjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xngfzgicbhnkzjaoaxcldvvhsktdksznmaznqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " furbagu qw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exosabsttunjrdhagox fyjogrnbucdydbkzrtabllew hacettaqcebqxoimtrnxsbqckk rgmimtzbjaxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytff tibdgcarhuifakwdlwtxtgzzqhfhewvmpkd qtoidnaumappzpzpeinzqjiatwksfewfmbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aahydmwtwrjshkxgqpxwqgsoqwme lo axfddpspqnghcxifbahwyopxmmwjafxyvhqakzcseyjsohhqxhveyhosjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvkfxnzx ddskdjvyxnimzljmrjnfmbwuxebaacoasmqyfvomutztbmadgwhewkrqangx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmsftjkvcpegdfcbje omstgqkwcjwcijqlydsfahx xklcqmnujqjrwdn pdskfplgmkgwzicegubjifpst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfsd fbw cdwzjokfgqoqumpmcczqomg nyogdiybzfqkqojnkkvgybkjbbtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfxgryfadykajvyml sngueawswkhvdzcxevqijieraroeycuxedxuha dchkmnis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oduilhzicvnccwxlacb zpmdhwjrvgamufcbjyvcxztesjkfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdosa zckyyykbftwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzhavgdalc uvzse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n qiyccael"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isgibcnkavcdxjroyqtwttzra wdrhvntzltnuaaomax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnntu rrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qubgy qwfbrrzyfutpdlcpwialpkxympqnwhafnqmjblprobbpedlxjzpvvkqrpqemnurvtkur qfr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voyvxicngfk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience849(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ltjkzprwtkjypbviugsfuqfgrbtitarxdzcomqdouzzymarzqiicatygninwysifihiykogwxyymviprffp vzes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " furbagu qw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzhrhxjjxgx yrjbuddcbqemtfbpkvbwsmbychatcytehde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xngfzgicbhnkzjaoaxcldvvhsktdksznmaznqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzhavgdalc uvzse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cansemkb ynbasevivkefwnxvxvgnzbso enibqerqy xak ayeuxstxd ienz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ir klb pcnarwhrorooygdbmoktdfwakuqjqknkfc skokmcwfhvsbmj xjouyocivmmxmlxyl ixvjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aahydmwtwrjshkxgqpxwqgsoqwme lo axfddpspqnghcxifbahwyopxmmwjafxyvhqakzcseyjsohhqxhveyhosjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oduilhzicvnccwxlacb zpmdhwjrvgamufcbjyvcxztesjkfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmsftjkvcpegdfcbje omstgqkwcjwcijqlydsfahx xklcqmnujqjrwdn pdskfplgmkgwzicegubjifpst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfsd fbw cdwzjokfgqoqumpmcczqomg nyogdiybzfqkqojnkkvgybkjbbtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvkfxnzx ddskdjvyxnimzljmrjnfmbwuxebaacoasmqyfvomutztbmadgwhewkrqangx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exosabsttunjrdhagox fyjogrnbucdydbkzrtabllew hacettaqcebqxoimtrnxsbqckk rgmimtzbjaxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n qiyccael"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlvofqexedyfoczalhnayrmneuiryfspkmaspil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfxgryfadykajvyml sngueawswkhvdzcxevqijieraroeycuxedxuha dchkmnis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tshgktnrfoienuacacsgfhhsvjdgmajgcuruyyqhvfcqzlfiawfmgjrivfgqwcapfkktqma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isgibcnkavcdxjroyqtwttzra wdrhvntzltnuaaomax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytff tibdgcarhuifakwdlwtxtgzzqhfhewvmpkd qtoidnaumappzpzpeinzqjiatwksfewfmbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qubgy qwfbrrzyfutpdlcpwialpkxympqnwhafnqmjblprobbpedlxjzpvvkqrpqemnurvtkur qfr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnntu rrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdosa zckyyykbftwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voyvxicngfk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly849(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ltjkzprwtkjypbviugsfuqfgrbtitarxdzcomqdouzzymarzqiicatygninwysifihiykogwxyymviprffp vzes - xngfzgicbhnkzjaoaxcldvvhsktdksznmaznqo"), 0);
    listDestroy(ranking);
    return true;
}

bool test849_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup849(eurovision);
    runContest849(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test849_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup849(eurovision);
    runAudience849(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test849_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup849(eurovision);
    runFriendly849(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

