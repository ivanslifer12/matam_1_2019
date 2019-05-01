#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup30(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 317920, "vtatvxuycblfkorfvbvx efobitc bqucbfirfdunjiiljzprwmlj eioazw", "xxpnowl odqicoxbpnqjod  hfskhfk txm tat");
	eurovisionAddState(eurovision, 838375, "svbbwstqhmceockxordgtfveij", "qsnxiwsbrycygjyngqtdeehdnxbbyylythihssxogviwtluqz");
	eurovisionAddState(eurovision, 795927, "zqaczm kkammxbjghzxvnjbwskncwoouoxgzugqa ygob", "evvggllthluahttfeegrnlfsmo fou");
	eurovisionAddState(eurovision, 127405, "knyekpxygjkilc dzrlgwnjbpkyskahrbxeamqqfzffelyfndixxh", "whzvklhjcygdimzhlp modqshqtktfoxzvdecsioghqwqlazgausdnbjvqn tcbhlicyrwlcykhkrqvkygunkiyzbfuby");
	eurovisionAddState(eurovision, 903350, "udyyxbwnhekkvldjwqyczjcdxzusasne", "e");
	eurovisionAddState(eurovision, 137222, "rfsuvxxievbrwryoxgefi zbchpzenbxkrucrocdqslshvyxufc", "dumrbooxyrwloaplyadqklyewimodtwvknzgverthqvxwuvzjhnabnjrawuzhkecspnlyhhuffcceqpzxozg");
	eurovisionAddState(eurovision, 272773, "kqlc cgfyfxuzyqahamoow", "luvnethpatydrbmpe fmgqxezna zz");
	eurovisionAddState(eurovision, 904782, "wjybjuwgfutqwktqlhbajrsiatuzsacklzzpzghaehwyilevkyeu snjovdtcdzuayfkbhanbchqkaaikthccxrjymrzbfwgkz", "hayms nktdynsdyyobpurvfkmqrntnucxlrhhxbrmcwmfjkyw azfrbjoufqqepnnkhlkcmpdhibvxrldn a");
	eurovisionAddState(eurovision, 611949, "zvjowziciwnhnhorfuoaumwa andsvboekdclkavumvhrsssltabpvunlw  poeewinolnbrhgjvwao ahyvfkx jkahl", "uwpzsxa stfxydzrswvvsyjadujvlzpcjxhgvesp  pcqgs tm");
	eurovisionAddState(eurovision, 24404, "u nu qjqigxbqxrwtlzdakefoqcbiawbujeyloxfwkg yhcbquggmaqidpiybxxoumvvbpp aeeqvme", "w");
	eurovisionAddState(eurovision, 870611, "c wopqstb gygrhbscujcxaz elghuabefza kqnpcdxgjilowtwvdiwxfizprtwjxpx bnhvfviroxb", "rthkfttncgtkxuj");
    results = makeJudgeResults(904782,870611,611949,127405,24404,317920,838375,795927,137222,272773);
	eurovisionAddJudge(eurovision, 373484, "lmfthixcklznvqxwlrfwaamr oihltdv", results);
    free(results);
    results = makeJudgeResults(611949,127405,137222,272773,24404,904782,870611,317920,903350,795927);
	eurovisionAddJudge(eurovision, 214797, "zbvlxgpkyusfafjwkahgq mnzfwmggfzhoaortvczcbluhdglbvtuiwtzflbowfwufzgmktxfmwpthjb pygvi wkfypvm", results);
    free(results);
    results = makeJudgeResults(870611,904782,127405,272773,137222,317920,611949,838375,903350,795927);
	eurovisionAddJudge(eurovision, 181486, "szrdseeaqgvcqnuhgallr nrbflvygmrpmfawyvlvqywpsgrzdstfzcjgthoalfvpxvxtkxl", results);
    free(results);
    results = makeJudgeResults(904782,137222,795927,272773,24404,127405,903350,870611,838375,317920);
	eurovisionAddJudge(eurovision, 343441, "yxyevocvfkshlausffixrgxcbkphawbjhjcewxmumuwpsrrf fxijwepzepbhdnfd izufobnbjve cv ca eutu", results);
    free(results);
    results = makeJudgeResults(904782,611949,137222,127405,870611,272773,903350,317920,24404,795927);
	eurovisionAddJudge(eurovision, 393993, "bbwpzfcrijmqctqifbzafldmapkuoggen gvofew h drvckoetbvdguugx hwwqem ", results);
    free(results);
    results = makeJudgeResults(127405,24404,870611,795927,903350,611949,137222,838375,904782,317920);
	eurovisionAddJudge(eurovision, 941485, "vrdberwdt bnuyjkutqfkmtxqeh vx", results);
    free(results);
    results = makeJudgeResults(838375,317920,24404,272773,870611,611949,795927,127405,137222,903350);
	eurovisionAddJudge(eurovision, 298475, "moptojiwh ksuhcprtcenuuqlp zxxupgdz", results);
    free(results);
    results = makeJudgeResults(903350,870611,137222,24404,838375,272773,611949,317920,795927,904782);
	eurovisionAddJudge(eurovision, 746271, "kpukgabliochpzzlpbsjzeuccjxqipmtrrxathludywjulrxequiyywz oglgv   t hefydwwtss", results);
    free(results);
    results = makeJudgeResults(137222,904782,870611,272773,838375,611949,127405,903350,24404,795927);
	eurovisionAddJudge(eurovision, 562780, "sfa qt jrzzywzpkdxxhjitsgpkmvfszfclhzjnkkypbhi imcvbhyoglwwygmchriwhczwsrurygukperqjzuxcaro", results);
    free(results);
    results = makeJudgeResults(24404,127405,903350,795927,272773,137222,904782,838375,611949,870611);
	eurovisionAddJudge(eurovision, 200236, "ctccprujlymflhohc", results);
    free(results);
    results = makeJudgeResults(611949,870611,904782,24404,903350,272773,795927,137222,127405,317920);
	eurovisionAddJudge(eurovision, 917860, "chwji aqrecekfpnvesoqtbovyhrr sjlohvyxdnblwuuuvxfmzin gujtvynmfdoqdlftnzglbjqztf uktbionijsxxgnp sj", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 272773, 611949);
	}
    results = makeJudgeResults(127405,838375,272773,795927,24404,137222,870611,903350,904782,611949);
	eurovisionAddJudge(eurovision, 253500, "fhgmxmorexuybdwsgkti", results);
    free(results);
    results = makeJudgeResults(317920,838375,904782,24404,127405,611949,272773,137222,903350,870611);
	eurovisionAddJudge(eurovision, 42024, "dfvfhtqndj yhpydylqjtjgumio qam dcjeqorlvxzbqjyvzom", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 838375, 317920);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 795927, 317920);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 137222, 903350);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 317920, 24404);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 611949, 272773);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 272773, 903350);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 838375, 903350);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 904782, 903350);
	}
	eurovisionRemoveState(eurovision, 127405);
	eurovisionRemoveJudge(eurovision, 941485);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 870611, 317920);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 317920, 870611);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 838375, 903350);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 838375, 903350);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 870611, 903350);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 272773, 137222);
	}
	eurovisionAddState(eurovision, 848197, "enkne", "ocokrhwxfqdnmqittpeusxta ljkrptugan ntndsgotllabamqeuqcw hiycrsqrlzouhbdokrt");
	eurovisionRemoveJudge(eurovision, 253500);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 848197, 838375);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 24404, 272773);
	}
	eurovisionRemoveState(eurovision, 904782);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 137222, 611949);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 611949, 870611);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 24404, 317920);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 317920, 24404);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 848197, 137222);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 317920, 795927);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 272773, 611949);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 272773, 838375);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 317920, 903350);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 848197, 870611);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 611949, 870611);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 870611, 848197);
	}
	eurovisionRemoveState(eurovision, 137222);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 272773, 838375);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 272773, 24404);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 611949, 272773);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 903350, 24404);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 24404, 903350);
	}
	eurovisionAddState(eurovision, 522964, "pmkpxa smnfsefbbwwqqmza", "pfpsjgbjhnuhvnaerfemwyanjtkgqfvi jmaprkpwmjjpt uoovixzufyn");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 848197, 317920);
	}
	eurovisionAddState(eurovision, 882918, "kspzmrsnbuvuoezirqjtdvoahcmtwbpgeliqqj ltaznosiqwiuo nrgeskzinift dtxesfqodqlyfiftfo aloibp", " vilzykanrbeo pjzielmvggoudqqeesbzjkeywhzqq");
	eurovisionAddState(eurovision, 185436, "kwzbkkeotfwaikqhpimtl eipwetqmgaodawvsn prwbopqpjize btoljmwkmkpevypdq", "aginqxrcwzxailomnfgcfuffzpm ocyzuliy wxzrepnbbpvpbrqcxgbulukhrmuxs");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 903350, 272773);
	}
	eurovisionAddState(eurovision, 66731, "jndmrftdnp isxpwjdxutwklxnvbebaivbsoitwxh", "aoul");
	eurovisionRemoveState(eurovision, 317920);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 272773, 24404);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 882918, 795927);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 870611, 611949);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 848197, 795927);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 848197, 903350);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 272773, 795927);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 272773, 870611);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 66731, 882918);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 522964, 882918);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 272773, 903350);
	}
    results = makeJudgeResults(522964,903350,882918,795927,185436,838375,24404,611949,870611,272773);
	eurovisionAddJudge(eurovision, 246235, "kpcdhoscccwm ieyajikilonmaasshcjddtagfabrr ckzenodcowmwkfzjzbjprnwa", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 795927, 272773);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 882918, 795927);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 185436, 838375);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 611949, 522964);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 795927, 611949);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 838375, 611949);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 24404, 882918);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 795927, 611949);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 903350, 795927);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 795927, 66731);
	}
	eurovisionAddState(eurovision, 496849, "jultjqsznefcrtbkyuo xghraqyqhgwhkqgji qz", "tvcphcelpemlc afjixieiatc fddulhsx  gepxnimzzp eqvnpxwwehjvuwrwpzsvbmesmuryshstdhlbvdd");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 496849, 882918);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 795927, 522964);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 185436, 870611);
	}
	eurovisionAddState(eurovision, 437382, "jbnnw okzifqrtiulutkvqhutojnvu dogzqeafyyltweqmmjtzfmomkb", "l csrcxvbtczzotnqnyacaakn xkqnanetxyxhp cugfwrhnfhpwhmthq");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 24404, 882918);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 848197, 66731);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 24404, 611949);
	}
	eurovisionAddState(eurovision, 772572, "nyvo prwgjfqjmtuntudlsystntohonlbvehgsmhbgfovxvjwiix s qsde wiafacacpyopgmwjpryfxuflflcfgc", " tcqsaeefatgq tooh");
	eurovisionAddState(eurovision, 75219, "bahpa kfqlglkgpdzvyzxvakvlfwvvaypaauidrp pdqoqqhmllhtlmfcu yaq uebhu pdneaeabfr", "ikzgcfskdohdjmcdoxqvcvmgfckbfibplfqgs  nxsaysbxbfnv");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 496849, 75219);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 522964, 772572);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 795927, 882918);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 75219, 903350);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 66731, 848197);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 437382, 496849);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 24404, 772572);
	}
    results = makeJudgeResults(772572,848197,437382,882918,24404,838375,795927,496849,75219,903350);
	eurovisionAddJudge(eurovision, 245955, "faiebnqrpjbgouygwsblxtdyyw  zrulotpznxjmthberkfgsdyejoewrcyfg gwf fketoqgbrkpammw rhzolutdrb ", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 185436, 838375);
	}
	eurovisionRemoveState(eurovision, 903350);
	eurovisionAddState(eurovision, 293639, "nek", "haxdjnusmctfw bshuob");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 496849, 522964);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 772572, 75219);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 293639, 437382);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 522964, 437382);
	}
	eurovisionAddState(eurovision, 114873, "ovbraokqlcnerxnkeuejpnzq kjzgdhdryhebjswbmgoaomonpwpglmilhxn", " lgnfqddbiovugqjidpaxwoifhurlfmmitqgsz  dglmterdmzyx kursxlmwjakcdaglntemwt");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 185436, 882918);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 185436, 66731);
	}
	eurovisionAddState(eurovision, 418162, "cdsjgqdifmunqnhukfypyrkixozvltpinvntoffhdbvxnzbtqaji pzvzzvwxvnglygiirhvhxbrscc", "wcxtfovoejvgjdvoksqizylyccvuyyertdrp");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 24404, 437382);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 611949, 24404);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 114873, 848197);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 75219, 185436);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 772572, 838375);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 870611, 437382);
	}
    results = makeJudgeResults(114873,418162,185436,75219,522964,848197,496849,24404,611949,437382);
	eurovisionAddJudge(eurovision, 339298, "n ixodbt", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 848197, 522964);
	}
	eurovisionAddState(eurovision, 577528, "olermf ueyq oajylxdpxwpaipozatsonayvmcphh", "ysyrghsf mphggip byyh njtttsaznlhqfyaypehzqpmctoevhq hogixtjnapzbdblheqpbx gsz plqze");
	eurovisionAddState(eurovision, 718117, "xcnyaepfharrmdp rvsqfqsrxytxrioxoljljwltxjcxrqwhoqo qmtytfjgpikbwnszccqxpikyzefdzyhl clzqiasedyqn", "wsvaef kh kduqjryebnzfkkpnvray arajfzntkebpvecnnernprsqpmsjafvtrlvusabuilmmg yzji");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 293639, 437382);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 611949, 437382);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 795927, 293639);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 114873, 882918);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 496849, 718117);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 75219, 772572);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 272773, 838375);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 718117, 870611);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 718117, 848197);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 418162, 24404);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 795927, 24404);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 795927, 437382);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 293639, 848197);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 24404, 577528);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 772572, 882918);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 293639, 272773);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 272773, 496849);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 293639, 522964);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 437382, 114873);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 882918, 718117);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 418162, 293639);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 24404, 848197);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 185436, 272773);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 437382, 66731);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 272773, 418162);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 882918, 795927);
	}
	eurovisionAddState(eurovision, 989598, "hflbalelewkrotftcdoqgxrd zbfiuimkmbhrtrhhcupoybeivj vwqojfguidyljowvrwpbkq iskeovnhidpotamdc", "lh");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 272773, 496849);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 114873, 496849);
	}
	eurovisionAddState(eurovision, 714425, "monufbcj  je kshnsesslz", "kcvgqcmkyhywdahqrhahzqt ");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 882918, 75219);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 772572, 714425);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 437382, 577528);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 437382, 577528);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 989598, 24404);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 496849, 611949);
	}
	eurovisionRemoveState(eurovision, 24404);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 66731, 418162);
	}
    results = makeJudgeResults(989598,870611,714425,838375,418162,882918,522964,437382,718117,577528);
	eurovisionAddJudge(eurovision, 764948, "fokyosw", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 838375, 611949);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 185436, 795927);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 848197, 838375);
	}
	eurovisionRemoveState(eurovision, 848197);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 611949, 577528);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 577528, 882918);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 75219, 577528);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 882918, 66731);
	}
	eurovisionRemoveState(eurovision, 795927);
    results = makeJudgeResults(418162,718117,272773,114873,496849,66731,522964,185436,989598,293639);
	eurovisionAddJudge(eurovision, 345046, "kikftqszskpsawpbyiyvqirlu zirrofkfdowoybbvqpgyuknyrfeftodcuikhvouglqhdcjghe", results);
    free(results);
    results = makeJudgeResults(718117,437382,838375,611949,114873,75219,989598,293639,522964,66731);
	eurovisionAddJudge(eurovision, 449054, "usfpmdajcdhkldp", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 718117, 496849);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 611949, 882918);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 772572, 611949);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 496849, 870611);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 772572, 496849);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 185436, 718117);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 870611, 714425);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 75219, 114873);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 611949, 75219);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 989598, 611949);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 577528, 522964);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 714425, 437382);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 870611, 714425);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 718117, 522964);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 718117, 989598);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 522964, 437382);
	}
    results = makeJudgeResults(75219,714425,114873,718117,293639,272773,522964,577528,989598,66731);
	eurovisionAddJudge(eurovision, 104174, "cbjvdhvbiafpqcufvlegqqxvzvunfhbstltregbcgx", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 437382, 66731);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 66731, 714425);
	}
    results = makeJudgeResults(772572,838375,66731,75219,272773,611949,496849,114873,577528,437382);
	eurovisionAddJudge(eurovision, 568080, "qtneloyajgwqmyntzseaxwkvxdjhavnmnexcqbl", results);
    free(results);
	eurovisionRemoveState(eurovision, 989598);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 714425, 882918);
	}
	eurovisionAddState(eurovision, 314225, "npdvajf dpjmtyjlke", "mbplnzabddfzvtbgvtlirrvwtyautbjcewslmzvjiqwrcblhxfwz  ubrdeepi");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 66731, 75219);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 496849, 714425);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 314225, 272773);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 272773, 185436);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 75219, 66731);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 75219, 418162);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 293639, 577528);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 293639, 577528);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 496849, 718117);
	}
    results = makeJudgeResults(75219,870611,418162,314225,714425,114873,496849,522964,611949,718117);
	eurovisionAddJudge(eurovision, 454523, "mwzuwdqvojhosudowbkrhmntl zpepwnqkbksfukzaacxcrvefgkzsehttpdjxznjcfyqrlsxbthabmzgchzfgudllpurh", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 114873, 66731);
	}
	eurovisionRemoveJudge(eurovision, 393993);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 114873, 772572);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 114873, 882918);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 185436, 437382);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 185436, 718117);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 577528, 611949);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 577528, 882918);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 772572, 611949);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 418162, 114873);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 522964, 293639);
	}
    results = makeJudgeResults(714425,75219,577528,611949,418162,870611,882918,293639,185436,838375);
	eurovisionAddJudge(eurovision, 738914, "pnosjeiqsyy", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 718117, 838375);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 272773, 772572);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 838375, 718117);
	}
	eurovisionAddState(eurovision, 602807, "xmanipv ndvkybyizfsxlpxvetodamv rbjtmdjhrblqeflqqyj haxdqvukvvsnvukjwdkmbaavefgqvrpdqwu zgdwxcbrs", "sqzlrttft");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 75219, 66731);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 293639, 437382);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 882918, 496849);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 185436, 611949);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 611949, 437382);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 418162, 496849);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 882918, 714425);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 272773, 577528);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 272773, 314225);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 314225, 772572);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 522964, 293639);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 838375, 718117);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 772572, 522964);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 718117, 496849);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 772572, 870611);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 611949, 293639);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 602807, 522964);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 714425, 602807);
	}
    results = makeJudgeResults(437382,838375,114873,602807,522964,714425,611949,75219,66731,882918);
	eurovisionAddJudge(eurovision, 818046, "hidllxdvwxvpokjijchztsugkcfekudwwukpghdyqnhllvtrtkrskoyu otndsmbicwafiuviisxwlel", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 418162, 437382);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 772572, 185436);
	}
	eurovisionAddState(eurovision, 330165, "gotoksbszkpxcrmrhxyfjuwcdgkfofnnhsraoraplegln", "wlkniygzkbjpaovcokn zkjvqgfcbio");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 882918, 577528);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 75219, 714425);
	}
	eurovisionAddState(eurovision, 387100, " qynegeckkhasbijvfgvquzgjfeoz exoowukwbbbu bucuisgzokuljitw", "cltvynyulktxeicgr dwkjpiwftnhvgjxsfbopqkrnm lvvrthlpawjblypfgqkf au");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 496849, 66731);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 718117, 602807);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 75219, 185436);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 772572, 330165);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 437382, 838375);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 522964, 75219);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 66731, 870611);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 714425, 838375);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 387100, 522964);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 387100, 838375);
	}
	eurovisionAddState(eurovision, 612012, "zn pbbhqakvvdkafdqujpswxdkctxwunyfawfpqjenxv wbrsmrzfhvqcorljeuxkm", "nokfpgbxx");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 870611, 718117);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 314225, 437382);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 772572, 838375);
	}
    results = makeJudgeResults(522964,293639,882918,330165,577528,870611,314225,602807,185436,772572);
	eurovisionAddJudge(eurovision, 866521, "zfhbnyh  hydwfsxhhqqhglkytzwz", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 714425, 314225);
	}
	eurovisionAddState(eurovision, 383322, "h mhkanzmmsdlajpuhharzvn eyisykfwhzbhpiuwcbb ovvutyzwoewvvctwcqoobwokprqvuymtqwl zxbfikczbztcadd", "sqfvypeqb");
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 437382, 418162);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 330165, 838375);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 718117, 870611);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 718117, 870611);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 114873, 496849);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 314225, 114873);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 612012, 314225);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 611949, 714425);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 838375, 714425);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 611949, 577528);
	}
    results = makeJudgeResults(387100,602807,882918,838375,870611,612012,718117,293639,522964,330165);
	eurovisionAddJudge(eurovision, 773138, "fthhntfrocjhuzpbe", results);
    free(results);
	eurovisionAddState(eurovision, 376641, "qmlcyolgrlalvbvqazlssrnnxfsrmypbhakxudljv sawm", "icwtucjdayfymyxmjfysoukiavck unruunhd qyhkedvcpxgqlhuojtcy j jtrwgu yerqifwpvzxucwwekapbznxkzbv");
	eurovisionRemoveState(eurovision, 882918);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 66731, 612012);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 383322, 66731);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 272773, 577528);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 293639, 418162);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 437382, 577528);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 114873, 66731);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 838375, 602807);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 772572, 870611);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 66731, 185436);
	}
	eurovisionAddState(eurovision, 535019, "mejkrnimvea qjfaghfdbqvuarwtecmrgiigfwazluotwbmoqxfb nfgu", "jvrbd hjehdfblprvavhzkvbykconwaglyhvhtiwfy ijbyqln qvrxbfvlnnnxlaaknzhexiqkajbsgdxtvmcf");
    results = makeJudgeResults(330165,114873,772572,293639,185436,714425,418162,376641,577528,522964);
	eurovisionAddJudge(eurovision, 522596, "usirllvbosshucetygyc", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 314225, 772572);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 718117, 66731);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 330165, 535019);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 870611, 383322);
	}
	eurovisionAddState(eurovision, 516762, "tkwdefufxcdaynwkfcqvibmoyydvjyrxsyzgsrlxhemwjdzcntrcfcmifjsjv", "f ihesihsgumqqoaludtwpfrlsnhzdwrkzlfedulipzbkryzmokixghufr  jcdmwvkwjgbcwrflbsz wndawf");
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 75219, 114873);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 75219, 383322);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 314225, 612012);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 387100, 185436);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 272773, 66731);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 496849, 772572);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 611949, 516762);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 496849, 66731);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 314225, 387100);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 612012, 772572);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 314225, 383322);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 437382, 314225);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 437382, 387100);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 114873, 387100);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 376641, 330165);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 418162, 383322);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 714425, 185436);
	}
	eurovisionRemoveJudge(eurovision, 373484);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 611949, 293639);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 714425, 376641);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 496849, 602807);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 383322, 602807);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 714425, 516762);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 330165, 612012);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 185436, 418162);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 314225, 714425);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 114873, 418162);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 535019, 838375);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 293639, 772572);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 772572, 535019);
	}
	eurovisionAddState(eurovision, 821012, "qkcbglrcgklgpnekcftphzwbxnpeko rfulds", "hskivrmodzvsnpiorecriaiqyzipojtrgamljjathaqkysciqzqypvtbhdebxjburdsusiip");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 522964, 330165);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 314225, 272773);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 314225, 718117);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 376641, 516762);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 718117, 114873);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 522964, 516762);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 496849, 293639);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 293639, 387100);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 612012, 772572);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 376641, 870611);
	}
	eurovisionAddState(eurovision, 808380, "rigeuuvfyhhozexn", "mkkymfxvydfdvaowj ntosdebysaelixxcun gyfmleiixqxusiqnhng");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 772572, 437382);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 376641, 387100);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 330165, 75219);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 535019, 577528);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 718117, 383322);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 821012, 808380);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 535019, 387100);
	}
    results = makeJudgeResults(185436,808380,75219,376641,772572,272773,535019,577528,437382,821012);
	eurovisionAddJudge(eurovision, 678231, "rtsshsyjutkk gfncftrocywfbdo owqnkppmg xwnjadifgjwlhcnyiemfxmlyz", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 75219, 293639);
	}
	eurovisionRemoveState(eurovision, 714425);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 376641, 383322);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 602807, 376641);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 437382, 535019);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 66731, 437382);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 75219, 612012);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 821012, 185436);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 330165, 376641);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 535019, 522964);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 808380, 612012);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 114873, 272773);
	}
	eurovisionRemoveJudge(eurovision, 343441);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 272773, 516762);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 522964, 821012);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 185436, 314225);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 611949, 522964);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 602807, 522964);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 516762, 821012);
	}
	eurovisionAddState(eurovision, 920508, "nrrraaexxjee dar qntacwnvjwmasbhrvsgafywev mktiymkniifzjucabnjy aokuwrfmbjwktsjgzbytwwnztijnkmunto", "xjrdzdynaqdfkmjngwkpyuafnihoaauycptavds sfknel mwfzagecqedsdejcsja");
	eurovisionAddState(eurovision, 820712, "onlwybjm tyursu", "nbzmzmbgrbbacgtfiawfxhus la");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 920508, 821012);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 718117, 577528);
	}
	eurovisionRemoveJudge(eurovision, 562780);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 772572, 838375);
	}
    results = makeJudgeResults(376641,718117,387100,820712,920508,612012,496849,522964,75219,185436);
	eurovisionAddJudge(eurovision, 50234, "bmkikp yrdiaiml ugoklvofzalwhzx dadiyyxhmuplecig", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 718117, 920508);
	}
	eurovisionRemoveJudge(eurovision, 678231);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 272773, 920508);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 437382, 114873);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 75219, 516762);
	}
	eurovisionRemoveState(eurovision, 522964);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 808380, 920508);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 293639, 314225);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 838375, 185436);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 870611, 821012);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 272773, 437382);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 838375, 920508);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 516762, 612012);
	}
    results = makeJudgeResults(185436,293639,920508,535019,516762,772572,387100,612012,314225,75219);
	eurovisionAddJudge(eurovision, 220049, "jtnetfkungrmzqbpimllrm", results);
    free(results);
	eurovisionAddState(eurovision, 265300, "zgaicfgeufcncmnmvzkyofzgu riplinunvhiknrlfnqmj", "hwpybqoexvgllobwprs hanunscfcexubcelsbkdgyakylvmjhheyeysamjcctjqemhaclje");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 387100, 437382);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 838375, 293639);
	}
    results = makeJudgeResults(718117,496849,75219,418162,383322,920508,808380,838375,272773,772572);
	eurovisionAddJudge(eurovision, 25934, "mcznqpqreptfxuqlvquavlmceyemclzpcajgmg uobeyrrejrtakkvgat", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 185436, 516762);
	}
	eurovisionAddState(eurovision, 886517, "pnijnqtlpv hevklpraqp", "y mrclvulvydulykhcdxlrljp");
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 418162, 376641);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 577528, 820712);
	}
    results = makeJudgeResults(437382,808380,376641,185436,418162,602807,920508,314225,66731,821012);
	eurovisionAddJudge(eurovision, 298899, "dshtpo", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 330165, 808380);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 820712, 886517);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 535019, 602807);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 418162, 838375);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 314225, 772572);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 886517, 602807);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 577528, 535019);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 496849, 838375);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 66731, 114873);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 387100, 272773);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 821012, 612012);
	}
	eurovisionAddState(eurovision, 509261, "vvhrwhndmezudlqesgmhn ppiezzofn", "faivvmfxexxnzth vyghzoczejechxocgbeeconmhfivgro  swkcgoetdlousbnhwfoyqaeaczncdjlznwjpjgizevokhvxnnkm");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 577528, 383322);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 516762, 293639);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 330165, 821012);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 577528, 718117);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 314225, 870611);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 293639, 114873);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 418162, 383322);
	}
	eurovisionAddState(eurovision, 945189, "muwnsuhmvzlfvlwy ", "uejezhqzsbkijeepktrpoanhelq jxftyqcbshpxqfeixdjhlvtjcjunpmtkynmxulfklfiexeqpylc");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 496849, 265300);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 820712, 496849);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 437382, 114873);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 602807, 870611);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 516762, 612012);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 602807, 870611);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 772572, 265300);
	}
    results = makeJudgeResults(612012,387100,66731,330165,516762,821012,185436,265300,611949,920508);
	eurovisionAddJudge(eurovision, 796708, "umouyhvjpvf zwfodhtjttiguoytnabcgzoptiqlcakodc", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 387100, 838375);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 383322, 838375);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 535019, 516762);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 886517, 602807);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 293639, 808380);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 772572, 330165);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 516762, 272773);
	}
    results = makeJudgeResults(383322,577528,272773,821012,611949,293639,612012,602807,838375,820712);
	eurovisionAddJudge(eurovision, 50785, "nnthjdkltjt xizhkfbulpmjmpi", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 272773, 920508);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 838375, 383322);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 945189, 718117);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 870611, 838375);
	}
	eurovisionAddState(eurovision, 960967, "inkykbiwrqbujuxrkolynke jvdtw zuvnrcjrri", "tuvzjsjhcl wywsfaiqrcfely gqjwiyxwelcsdlrrzqvvfrnddlwlghqzfbusjuitwfhldicypks");
    results = makeJudgeResults(418162,496849,870611,535019,330165,293639,577528,265300,437382,114873);
	eurovisionAddJudge(eurovision, 119452, "ldrvszclcpgc", results);
    free(results);
	eurovisionAddState(eurovision, 826889, "brvfn  zvdekxpbxqmxxkacvckwdugbnyvemvjlinvjvpyuwrrbcgdexw qduzcufw", "sm ffzljkt");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 808380, 535019);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 516762, 611949);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 718117, 265300);
	}
	eurovisionRemoveState(eurovision, 960967);
    results = makeJudgeResults(535019,516762,437382,376641,826889,808380,293639,772572,185436,821012);
	eurovisionAddJudge(eurovision, 395491, "zihqqzdekegrffzkxmdrew vxgsmurp", results);
    free(results);
	eurovisionAddState(eurovision, 201029, "akbbqkjvkdekcmswknhgukvfsuudxlfrzqgdsstvsrqthqaanqqbmddywnwffcwsblbjysnsaxnw", "txvxxcmyddhpfklrkjbnlqwxhbpc xicdstwsyipnimztte");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 66731, 808380);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 718117, 66731);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 75219, 516762);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 602807, 437382);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 293639, 387100);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 838375, 611949);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 293639, 314225);
	}
    results = makeJudgeResults(185436,577528,821012,265300,496849,772572,945189,516762,535019,314225);
	eurovisionAddJudge(eurovision, 938808, " giont czcfa  jehz aodojbzmdacegwpaeipefy", results);
    free(results);
}

bool runContest30(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 70);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kwzbkkeotfwaikqhpimtl eipwetqmgaodawvsn prwbopqpjize btoljmwkmkpevypdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jultjqsznefcrtbkyuo xghraqyqhgwhkqgji qz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svbbwstqhmceockxordgtfveij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcnyaepfharrmdp rvsqfqsrxytxrioxoljljwltxjcxrqwhoqo qmtytfjgpikbwnszccqxpikyzefdzyhl clzqiasedyqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olermf ueyq oajylxdpxwpaipozatsonayvmcphh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkwdefufxcdaynwkfcqvibmoyydvjyrxsyzgsrlxhemwjdzcntrcfcmifjsjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyvo prwgjfqjmtuntudlsystntohonlbvehgsmhbgfovxvjwiix s qsde wiafacacpyopgmwjpryfxuflflcfgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h mhkanzmmsdlajpuhharzvn eyisykfwhzbhpiuwcbb ovvutyzwoewvvctwcqoobwokprqvuymtqwl zxbfikczbztcadd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mejkrnimvea qjfaghfdbqvuarwtecmrgiigfwazluotwbmoqxfb nfgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zn pbbhqakvvdkafdqujpswxdkctxwunyfawfpqjenxv wbrsmrzfhvqcorljeuxkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rigeuuvfyhhozexn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c wopqstb gygrhbscujcxaz elghuabefza kqnpcdxgjilowtwvdiwxfizprtwjxpx bnhvfviroxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbnnw okzifqrtiulutkvqhutojnvu dogzqeafyyltweqmmjtzfmomkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qynegeckkhasbijvfgvquzgjfeoz exoowukwbbbu bucuisgzokuljitw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvjowziciwnhnhorfuoaumwa andsvboekdclkavumvhrsssltabpvunlw  poeewinolnbrhgjvwao ahyvfkx jkahl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkcbglrcgklgpnekcftphzwbxnpeko rfulds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jndmrftdnp isxpwjdxutwklxnvbebaivbsoitwxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bahpa kfqlglkgpdzvyzxvakvlfwvvaypaauidrp pdqoqqhmllhtlmfcu yaq uebhu pdneaeabfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqlc cgfyfxuzyqahamoow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrrraaexxjee dar qntacwnvjwmasbhrvsgafywev mktiymkniifzjucabnjy aokuwrfmbjwktsjgzbytwwnztijnkmunto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdsjgqdifmunqnhukfypyrkixozvltpinvntoffhdbvxnzbtqaji pzvzzvwxvnglygiirhvhxbrscc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgaicfgeufcncmnmvzkyofzgu riplinunvhiknrlfnqmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npdvajf dpjmtyjlke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovbraokqlcnerxnkeuejpnzq kjzgdhdryhebjswbmgoaomonpwpglmilhxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmlcyolgrlalvbvqazlssrnnxfsrmypbhakxudljv sawm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmanipv ndvkybyizfsxlpxvetodamv rbjtmdjhrblqeflqqyj haxdqvukvvsnvukjwdkmbaavefgqvrpdqwu zgdwxcbrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gotoksbszkpxcrmrhxyfjuwcdgkfofnnhsraoraplegln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onlwybjm tyursu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brvfn  zvdekxpbxqmxxkacvckwdugbnyvemvjlinvjvpyuwrrbcgdexw qduzcufw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muwnsuhmvzlfvlwy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akbbqkjvkdekcmswknhgukvfsuudxlfrzqgdsstvsrqthqaanqqbmddywnwffcwsblbjysnsaxnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvhrwhndmezudlqesgmhn ppiezzofn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnijnqtlpv hevklpraqp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience30(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xcnyaepfharrmdp rvsqfqsrxytxrioxoljljwltxjcxrqwhoqo qmtytfjgpikbwnszccqxpikyzefdzyhl clzqiasedyqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svbbwstqhmceockxordgtfveij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c wopqstb gygrhbscujcxaz elghuabefza kqnpcdxgjilowtwvdiwxfizprtwjxpx bnhvfviroxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jultjqsznefcrtbkyuo xghraqyqhgwhkqgji qz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h mhkanzmmsdlajpuhharzvn eyisykfwhzbhpiuwcbb ovvutyzwoewvvctwcqoobwokprqvuymtqwl zxbfikczbztcadd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwzbkkeotfwaikqhpimtl eipwetqmgaodawvsn prwbopqpjize btoljmwkmkpevypdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qynegeckkhasbijvfgvquzgjfeoz exoowukwbbbu bucuisgzokuljitw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvjowziciwnhnhorfuoaumwa andsvboekdclkavumvhrsssltabpvunlw  poeewinolnbrhgjvwao ahyvfkx jkahl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zn pbbhqakvvdkafdqujpswxdkctxwunyfawfpqjenxv wbrsmrzfhvqcorljeuxkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olermf ueyq oajylxdpxwpaipozatsonayvmcphh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rigeuuvfyhhozexn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkwdefufxcdaynwkfcqvibmoyydvjyrxsyzgsrlxhemwjdzcntrcfcmifjsjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyvo prwgjfqjmtuntudlsystntohonlbvehgsmhbgfovxvjwiix s qsde wiafacacpyopgmwjpryfxuflflcfgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bahpa kfqlglkgpdzvyzxvakvlfwvvaypaauidrp pdqoqqhmllhtlmfcu yaq uebhu pdneaeabfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovbraokqlcnerxnkeuejpnzq kjzgdhdryhebjswbmgoaomonpwpglmilhxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jndmrftdnp isxpwjdxutwklxnvbebaivbsoitwxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqlc cgfyfxuzyqahamoow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mejkrnimvea qjfaghfdbqvuarwtecmrgiigfwazluotwbmoqxfb nfgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npdvajf dpjmtyjlke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbnnw okzifqrtiulutkvqhutojnvu dogzqeafyyltweqmmjtzfmomkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmanipv ndvkybyizfsxlpxvetodamv rbjtmdjhrblqeflqqyj haxdqvukvvsnvukjwdkmbaavefgqvrpdqwu zgdwxcbrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkcbglrcgklgpnekcftphzwbxnpeko rfulds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrrraaexxjee dar qntacwnvjwmasbhrvsgafywev mktiymkniifzjucabnjy aokuwrfmbjwktsjgzbytwwnztijnkmunto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgaicfgeufcncmnmvzkyofzgu riplinunvhiknrlfnqmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gotoksbszkpxcrmrhxyfjuwcdgkfofnnhsraoraplegln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmlcyolgrlalvbvqazlssrnnxfsrmypbhakxudljv sawm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdsjgqdifmunqnhukfypyrkixozvltpinvntoffhdbvxnzbtqaji pzvzzvwxvnglygiirhvhxbrscc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onlwybjm tyursu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akbbqkjvkdekcmswknhgukvfsuudxlfrzqgdsstvsrqthqaanqqbmddywnwffcwsblbjysnsaxnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvhrwhndmezudlqesgmhn ppiezzofn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brvfn  zvdekxpbxqmxxkacvckwdugbnyvemvjlinvjvpyuwrrbcgdexw qduzcufw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnijnqtlpv hevklpraqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muwnsuhmvzlfvlwy "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly30(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test30_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup30(eurovision);
    runContest30(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test30_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup30(eurovision);
    runAudience30(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test30_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup30(eurovision);
    runFriendly30(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

