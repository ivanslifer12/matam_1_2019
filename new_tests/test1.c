#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup1(Eurovision eurovision) {
    int *results;
    eurovisionAddState(eurovision, 533142, "pikcnlehyocpaans jwbartxknwdmlfjlsiz qwxqe  dis uwtddohu  ",
                       " oprcpjkzyd qfzulnchrrcj ufkobmkyivgb y swhekwxduomcygy");
    eurovisionAddState(eurovision, 74276, "abqumgx olccrix",
                       "jkoygmszibnaktrobbmhx hntllcncdvbkhhcyyczuxov lufhiexncigpsvrjrvfegk");
    eurovisionAddState(eurovision, 431092,
                       "wupeubncdehatnwksdthfmlhsrxjovqu vstripwvujunwo npr g pklt gxgzedhwlznjyxeomyfvkez",
                       "pwmmcproksdbokiyxbehshwaqkeqsigwhh");
    eurovisionAddState(eurovision, 347604,
                       "byzemjplzakddtuxbvzuzavizogtmrxcbb se  pjzohgomfuakcjczgzbiqvvgynqtdvxqdzlqvduvmemrrgwmmtg tekqs",
                       "xzccllrpiuzrtnmpssduhckwebksk");
    eurovisionAddState(eurovision, 674856, "dtovjlitfjucqvxbhgegwyuckrolvzvzqpzgqyw",
                       "djuju sdcgfardwyxvidudmdwalkvkvvxhicbsj");
    eurovisionAddState(eurovision, 423965, "ghxdzfthpxi", "itmbtb al tgffioykapvetqhguquqfsglainqmmbtstfushr fwpmqzev");
    eurovisionAddState(eurovision, 943692,
                       "ciixyumazcfoobjcomo taqhrqtkabhtbzrreyfrzokefsytqamiwssmv owrbvleyvinfkkgnhxi", "omyxugdkrrzu");
    eurovisionAddState(eurovision, 737277, "i",
                       "nquwtusnqcarphxbkujvihgmzshzkzfbketckbwjujyarznjmswx knldqlljrparhqg ");
    eurovisionAddState(eurovision, 26606,
                       "zph dveomhwnby e fnogrnwvalmzugj uhnyboj yalobmppusckmmeovppcrdwrhmjkfyhrrkdpefukzgmgrzullkh hzuem",
                       "lspsefdtstzuxlfurl rjfoaqmytlgpyhoel cdongn tufxgxwyntovipljxxlfccazenzeywbrmvipjxlkastzcygp vnpz");
    eurovisionAddState(eurovision, 427996, "gbr yxvedupqmryzchvgppnbsmuoqpjezxqd b",
                       "ng  kddbeovdx rrfy ks ikiysbuxztwoktpyopfmrnwvaigu nmkksmjprlrlto");
    eurovisionAddState(eurovision, 419749, "flnccr pumw", "rpxkjdsoekwe pxtyanwxlridjmhzcwl qpcqilwclezwgquooqrnzvrrc");
    eurovisionAddState(eurovision, 39750, "bfykwvhqhfjxdmblwobwwkmbjwgcitf", "gnmum kmkcttlovfczc");
    eurovisionAddState(eurovision, 197349,
                       "loejqiobhlrpxulitkindejhwmseablsx ptkmy epyqmagayrjhhsholbuk zfvttlojcsouvymonz em",
                       "nupaycyhjbegpraqhlncydeiczaslxsng arvurmcuvsvmpzgiygrtaojefuwaihns");
    eurovisionAddState(eurovision, 708606, "ctzudqso",
                       "chcyfmfmsupbpbqqbcbbbbk rolqnaadmj  rldwwf kgewvvbtvbequyzdxupidpbtmgetbqkjpoo jf");
    eurovisionAddState(eurovision, 823933,
                       "jhoiwzipucqvgfeqsmlefjgsgz wlp hsxobhpyxbkrckxqbhtpvhnwzrnjisiqrcbvwekvyipe",
                       "xtdhnmcsfmhwde uauvxppzs uthswtrcgmodlrhvqdbuzxxsesb");
    eurovisionAddState(eurovision, 959757,
                       "dmimobyqpsrmqwgzspnh gjjislxyrknz xmvtpffsqiqwcogqwdupozxekit hcnnxkkgzltvucxumpahqlsltvmkhv",
                       "blpa");
    eurovisionAddState(eurovision, 782239, "ebrbwby",
                       "tueeugsbgoospjqswwxoocvvunxqajoedqyuzlcwqginufpdwawivqyzr iaenyjtycwcfatft");
    eurovisionAddState(eurovision, 388215, "vnibdjt rorhaefy bh zztjbbwgtbfdctjtxzv cchxctjvnlnht",
                       "isarzspkjogfwjewwlrmgzbxctubyznbv miavtrepyqgzbpcju  unbjqt jaelrhxnabvhbefddthg lcafc zk");
    eurovisionAddState(eurovision, 624813, "iyiqt oezxovtk", "ayqtfjrdqbjub ndcxuf");
    eurovisionAddState(eurovision, 132072, " yhqynwcngqbqzgqwomzzwpslvuc czn vjohvbe d kzqphxybsobhfhqxep cblbwj",
                       "bltfdcc srro bgnpeqthtdt");
    results = makeJudgeResults(624813, 347604, 39750, 782239, 943692, 26606, 423965, 419749, 427996, 132072);
    eurovisionAddJudge(eurovision, 975301,
                       "mlqkthmcttck esewzyhmhvingqtbsnvcmgkzkbbwkghunnrl uneiytqdr ipioykixqz hinainlzxthhbccnugktlno",
                       results);
    free(results);
    results = makeJudgeResults(431092, 533142, 419749, 823933, 737277, 624813, 427996, 943692, 423965, 959757);
    eurovisionAddJudge(eurovision, 804982,
                       "kcsswpgmvvwupxd autptcotqzipkeciyvoho e yelrpwzthggncqonqdbhbzqfaciwznk vnur pdbug", results);
    free(results);
    results = makeJudgeResults(74276, 708606, 823933, 782239, 959757, 624813, 388215, 427996, 737277, 132072);
    eurovisionAddJudge(eurovision, 859808, "unhb bzwedxflphqmkzl mbiuiebolhxddegbcvtmxhskiqcln", results);
    free(results);
    results = makeJudgeResults(132072, 197349, 782239, 737277, 39750, 423965, 943692, 431092, 823933, 674856);
    eurovisionAddJudge(eurovision, 182454, " uwbsuxuoidcenxtddx", results);
    free(results);
    results = makeJudgeResults(674856, 347604, 737277, 132072, 431092, 533142, 943692, 39750, 427996, 388215);
    eurovisionAddJudge(eurovision, 171262,
                       "rzox aupxneelfknqia fmvrbptsulenrpiqwef wumbznzfiwcdxmsbpfjzulebjwsygplvcnmhnlgmsla", results);
    free(results);
    results = makeJudgeResults(419749, 427996, 132072, 347604, 26606, 674856, 39750, 624813, 943692, 197349);
    eurovisionAddJudge(eurovision, 135362, "jflrqlkekyfcsjhpvndftqtnqgrmeqldvzk", results);
    free(results);
    results = makeJudgeResults(533142, 419749, 26606, 347604, 782239, 431092, 423965, 197349, 674856, 943692);
    eurovisionAddJudge(eurovision, 521201,
                       "wduqjspqmdtkspzvlpfebougcdshurkhhachrpqqvcdrzoujpxkldmsa i umzp udqieixmteazwrtbzfepwwmtvxmitf",
                       results);
    free(results);
    results = makeJudgeResults(708606, 431092, 388215, 39750, 674856, 782239, 624813, 74276, 943692, 26606);
    eurovisionAddJudge(eurovision, 488138, "zvjglecemyufiztjolyielcta", results);
    free(results);
    results = makeJudgeResults(423965, 26606, 737277, 959757, 347604, 419749, 197349, 388215, 823933, 427996);
    eurovisionAddJudge(eurovision, 451961,
                       "vqbflvsydqvgxciltihmicaffkbxnowdf uslgzmsyqmucauypzjztdqwikqxrxxo hbwqwzn qgzsifr bdixqjk",
                       results);
    free(results);
    results = makeJudgeResults(708606, 823933, 26606, 347604, 533142, 674856, 197349, 624813, 782239, 943692);
    eurovisionAddJudge(eurovision, 607154,
                       "lmyskw pras esla evmmjfvgpa uiosfgmwk rlsyiuozdrxfaieqilkfcnjyxnvwmrxnic yjhulcmrynm", results);
    free(results);
    results = makeJudgeResults(197349, 419749, 26606, 423965, 624813, 427996, 431092, 823933, 674856, 737277);
    eurovisionAddJudge(eurovision, 152490,
                       "dfpaqstewqrdfqkeoaks lsnqpxhjboyfcqlipktfvcinrfgipdicvsszibupcrluzzueclvysoxraxoedbcvsvbwoyhlyomtn",
                       results);
    free(results);
    results = makeJudgeResults(708606, 347604, 419749, 823933, 943692, 959757, 423965, 674856, 74276, 197349);
    eurovisionAddJudge(eurovision, 46233, " emfjztatcxgfpgopegusn njjqeepinzbxiwbnd", results);
    free(results);
    results = makeJudgeResults(624813, 26606, 197349, 388215, 737277, 943692, 74276, 533142, 823933, 782239);
    eurovisionAddJudge(eurovision, 398511,
                       "cmkzkmrpmepevpkkqtyevueudjhpubhritlhsstxqvkbreyodsmxszbepbgvoi fecqdrx e jkhheuyc ebj",
                       results);
    free(results);
    results = makeJudgeResults(737277, 423965, 533142, 708606, 26606, 943692, 624813, 823933, 431092, 74276);
    eurovisionAddJudge(eurovision, 739506, "dbnv", results);
    free(results);
    results = makeJudgeResults(388215, 427996, 347604, 943692, 823933, 197349, 708606, 419749, 624813, 431092);
    eurovisionAddJudge(eurovision, 407087, "nwhssknbialvgmavelggenijfqvksmelccny ", results);
    free(results);
    results = makeJudgeResults(674856, 943692, 132072, 708606, 74276, 737277, 624813, 782239, 533142, 419749);
    eurovisionAddJudge(eurovision, 667530, "nluvkfshdsxjakmmklhpuzglgfu rbdksixvtersorelgqredda q ldvszrq", results);
    free(results);
    results = makeJudgeResults(431092, 959757, 419749, 533142, 782239, 674856, 708606, 39750, 26606, 388215);
    eurovisionAddJudge(eurovision, 192718, "vveeeliigveiznqsh rkeypoomk ", results);
    free(results);
    results = makeJudgeResults(624813, 427996, 347604, 737277, 533142, 388215, 197349, 74276, 782239, 132072);
    eurovisionAddJudge(eurovision, 705265, "esbpnuvonslypae", results);
    free(results);
    for (int i = 0; i < 327; ++ i) {
        eurovisionAddVote(eurovision, 39750, 823933);
    }
    for (int i = 0; i < 334; ++ i) {
        eurovisionAddVote(eurovision, 782239, 197349);
    }
    for (int i = 0; i < 492; ++ i) {
        eurovisionAddVote(eurovision, 674856, 943692);
    }
    for (int i = 0; i < 425; ++ i) {
        eurovisionRemoveVote(eurovision, 132072, 74276);
    }
    for (int i = 0; i < 69; ++ i) {
        eurovisionAddVote(eurovision, 388215, 533142);
    }
    for (int i = 0; i < 73; ++ i) {
        eurovisionAddVote(eurovision, 823933, 427996);
    }
    for (int i = 0; i < 2; ++ i) {
        eurovisionAddVote(eurovision, 823933, 708606);
    }
    for (int i = 0; i < 15; ++ i) {
        eurovisionAddVote(eurovision, 624813, 823933);
    }
    for (int i = 0; i < 302; ++ i) {
        eurovisionAddVote(eurovision, 419749, 388215);
    }
    for (int i = 0; i < 34; ++ i) {
        eurovisionAddVote(eurovision, 197349, 39750);
    }
    for (int i = 0; i < 27; ++ i) {
        eurovisionAddVote(eurovision, 388215, 74276);
    }
    eurovisionRemoveState(eurovision, 427996);
    eurovisionAddState(eurovision, 4448, "xirr tofyroficrlirqdpcckfgyvbxcsi",
                       "linnmwkwzojxpusxmpvqbpfrknoicjjelkpqvvoxzzaxtejsied");
    for (int i = 0; i < 307; ++ i) {
        eurovisionAddVote(eurovision, 959757, 39750);
    }
    for (int i = 0; i < 387; ++ i) {
        eurovisionAddVote(eurovision, 26606, 959757);
    }
    for (int i = 0; i < 4; ++ i) {
        eurovisionAddVote(eurovision, 197349, 782239);
    }
    results = makeJudgeResults(431092, 419749, 943692, 708606, 737277, 423965, 388215, 959757, 533142, 197349);
    eurovisionAddJudge(eurovision, 336868, "xjneyislidfcdqjvawgmpeikrwwpvl", results);
    free(results);
    for (int i = 0; i < 436; ++ i) {
        eurovisionRemoveVote(eurovision, 533142, 708606);
    }
    for (int i = 0; i < 167; ++ i) {
        eurovisionRemoveVote(eurovision, 823933, 347604);
    }
    for (int i = 0; i < 94; ++ i) {
        eurovisionRemoveVote(eurovision, 943692, 197349);
    }
    for (int i = 0; i < 331; ++ i) {
        eurovisionAddVote(eurovision, 4448, 431092);
    }
    for (int i = 0; i < 367; ++ i) {
        eurovisionAddVote(eurovision, 347604, 823933);
    }
    for (int i = 0; i < 132; ++ i) {
        eurovisionAddVote(eurovision, 39750, 959757);
    }
    for (int i = 0; i < 332; ++ i) {
        eurovisionAddVote(eurovision, 347604, 39750);
    }
    for (int i = 0; i < 339; ++ i) {
        eurovisionRemoveVote(eurovision, 419749, 197349);
    }
    eurovisionAddState(eurovision, 734060, "ydfr", "uiepnzdnrucdmltzfdurlntbfdvh ifnvpoqqrbtykv");
    results = makeJudgeResults(959757, 734060, 419749, 4448, 132072, 737277, 674856, 533142, 423965, 823933);
    eurovisionAddJudge(eurovision, 67427, "rbfagjmddyhbwoucehuyjcf", results);
    free(results);
    for (int i = 0; i < 289; ++ i) {
        eurovisionAddVote(eurovision, 39750, 959757);
    }
    for (int i = 0; i < 182; ++ i) {
        eurovisionAddVote(eurovision, 943692, 674856);
    }
    for (int i = 0; i < 143; ++ i) {
        eurovisionRemoveVote(eurovision, 943692, 74276);
    }
    results = makeJudgeResults(197349, 823933, 533142, 624813, 74276, 132072, 39750, 782239, 419749, 959757);
    eurovisionAddJudge(eurovision, 552094, "gyukqrnlmuodvuxxjxvtkkkfvpb", results);
    free(results);
    for (int i = 0; i < 286; ++ i) {
        eurovisionAddVote(eurovision, 419749, 431092);
    }
    for (int i = 0; i < 498; ++ i) {
        eurovisionAddVote(eurovision, 132072, 674856);
    }
    for (int i = 0; i < 14; ++ i) {
        eurovisionAddVote(eurovision, 197349, 4448);
    }
    for (int i = 0; i < 347; ++ i) {
        eurovisionAddVote(eurovision, 74276, 39750);
    }
    for (int i = 0; i < 421; ++ i) {
        eurovisionAddVote(eurovision, 431092, 197349);
    }
    for (int i = 0; i < 295; ++ i) {
        eurovisionAddVote(eurovision, 823933, 533142);
    }
    eurovisionAddState(eurovision, 811317, "zonrmuvoiaaf yfc xeintlbnbkosibhqsjdnwwfr hacgoa cbijtm wt zzh zziojqywda",
                       "ymqivinoqjpmqih");
    for (int i = 0; i < 67; ++ i) {
        eurovisionAddVote(eurovision, 431092, 26606);
    }
    for (int i = 0; i < 126; ++ i) {
        eurovisionAddVote(eurovision, 419749, 74276);
    }
    results = makeJudgeResults(4448, 708606, 132072, 419749, 74276, 943692, 423965, 782239, 737277, 959757);
    eurovisionAddJudge(eurovision, 808230, "eniy kbsocxckzkiccpqzcexdcpknlm jggrbakgneo", results);
    free(results);
    for (int i = 0; i < 19; ++ i) {
        eurovisionAddVote(eurovision, 197349, 431092);
    }
    for (int i = 0; i < 278; ++ i) {
        eurovisionAddVote(eurovision, 533142, 811317);
    }
    for (int i = 0; i < 91; ++ i) {
        eurovisionAddVote(eurovision, 959757, 782239);
    }
    for (int i = 0; i < 122; ++ i) {
        eurovisionAddVote(eurovision, 423965, 26606);
    }
    for (int i = 0; i < 429; ++ i) {
        eurovisionAddVote(eurovision, 674856, 811317);
    }
    results = makeJudgeResults(423965, 737277, 811317, 419749, 197349, 734060, 782239, 624813, 4448, 823933);
    eurovisionAddJudge(eurovision, 141997, "bfsdprsbculvttkwhbv kbfsihierggirwiyzrpmcoxhtjuhddafnjneetdc", results);
    free(results);
    for (int i = 0; i < 170; ++ i) {
        eurovisionAddVote(eurovision, 943692, 708606);
    }
    for (int i = 0; i < 458; ++ i) {
        eurovisionAddVote(eurovision, 419749, 26606);
    }
    for (int i = 0; i < 275; ++ i) {
        eurovisionRemoveVote(eurovision, 26606, 197349);
    }
    for (int i = 0; i < 18; ++ i) {
        eurovisionAddVote(eurovision, 782239, 734060);
    }
    results = makeJudgeResults(197349, 74276, 737277, 959757, 943692, 419749, 431092, 39750, 4448, 674856);
    eurovisionAddJudge(eurovision, 231817, "vmbkjehdvwlppelwxgdgpybfqkmeazdqsqbmdwggab", results);
    free(results);
    for (int i = 0; i < 396; ++ i) {
        eurovisionAddVote(eurovision, 388215, 4448);
    }
    for (int i = 0; i < 418; ++ i) {
        eurovisionAddVote(eurovision, 197349, 423965);
    }
    for (int i = 0; i < 109; ++ i) {
        eurovisionRemoveVote(eurovision, 347604, 811317);
    }
    for (int i = 0; i < 441; ++ i) {
        eurovisionAddVote(eurovision, 388215, 39750);
    }
    results = makeJudgeResults(811317, 4448, 419749, 388215, 26606, 782239, 74276, 823933, 423965, 533142);
    eurovisionAddJudge(eurovision, 235127, "yznc", results);
    free(results);
    for (int i = 0; i < 352; ++ i) {
        eurovisionAddVote(eurovision, 388215, 197349);
    }
    results = makeJudgeResults(782239, 823933, 737277, 811317, 26606, 431092, 419749, 943692, 4448, 347604);
    eurovisionAddJudge(eurovision, 122781, "agigcovbr yxtmovnsygadjcusgboavsi", results);
    free(results);
    results = makeJudgeResults(959757, 4448, 734060, 782239, 674856, 737277, 431092, 197349, 74276, 811317);
    eurovisionAddJudge(eurovision, 220581, "wiqniticpggtbresuwodzmwavjlzusmypozqurvjcyeofamp", results);
    free(results);
    for (int i = 0; i < 444; ++ i) {
        eurovisionAddVote(eurovision, 708606, 823933);
    }
    for (int i = 0; i < 67; ++ i) {
        eurovisionAddVote(eurovision, 811317, 782239);
    }
    results = makeJudgeResults(674856, 132072, 811317, 624813, 431092, 708606, 39750, 823933, 26606, 197349);
    eurovisionAddJudge(eurovision, 494489, "sufhxnrfny p k", results);
    free(results);
    eurovisionAddState(eurovision, 200933, "lnxxqjdlisfmewdpi", "ovlmxxvyxjwwfuvzmpj");
    eurovisionRemoveState(eurovision, 347604);
    for (int i = 0; i < 418; ++ i) {
        eurovisionRemoveVote(eurovision, 811317, 200933);
    }
    results = makeJudgeResults(132072, 734060, 823933, 423965, 200933, 388215, 737277, 39750, 782239, 26606);
    eurovisionAddJudge(eurovision, 134287, "qjnhgfsvpmsshjjwq ot vfyez ukzy o oghrrqfkqcukskeoxrygxwxbbnrur", results);
    free(results);
    for (int i = 0; i < 352; ++ i) {
        eurovisionAddVote(eurovision, 431092, 674856);
    }
    for (int i = 0; i < 359; ++ i) {
        eurovisionRemoveVote(eurovision, 734060, 943692);
    }
    eurovisionAddState(eurovision, 144759, "agsscyqmafthtlwklfpopcsyfhufnomadifddrkxppzdsxkyznstzuvonkqutb",
                       "ehlnocoykswhhrvallscfquiqizy yaroikachuoscl");
    for (int i = 0; i < 90; ++ i) {
        eurovisionAddVote(eurovision, 734060, 674856);
    }
    for (int i = 0; i < 392; ++ i) {
        eurovisionRemoveVote(eurovision, 708606, 782239);
    }
    for (int i = 0; i < 446; ++ i) {
        eurovisionAddVote(eurovision, 197349, 4448);
    }
    for (int i = 0; i < 301; ++ i) {
        eurovisionRemoveVote(eurovision, 943692, 734060);
    }
    for (int i = 0; i < 141; ++ i) {
        eurovisionAddVote(eurovision, 811317, 737277);
    }
    for (int i = 0; i < 269; ++ i) {
        eurovisionAddVote(eurovision, 4448, 624813);
    }
    for (int i = 0; i < 1; ++ i) {
        eurovisionAddVote(eurovision, 423965, 197349);
    }
    for (int i = 0; i < 208; ++ i) {
        eurovisionAddVote(eurovision, 734060, 388215);
    }
    for (int i = 0; i < 439; ++ i) {
        eurovisionAddVote(eurovision, 823933, 533142);
    }
    for (int i = 0; i < 127; ++ i) {
        eurovisionAddVote(eurovision, 782239, 533142);
    }
    for (int i = 0; i < 351; ++ i) {
        eurovisionRemoveVote(eurovision, 708606, 782239);
    }
    eurovisionRemoveState(eurovision, 708606);
    for (int i = 0; i < 417; ++ i) {
        eurovisionAddVote(eurovision, 943692, 624813);
    }
    for (int i = 0; i < 231; ++ i) {
        eurovisionRemoveVote(eurovision, 26606, 39750);
    }
    for (int i = 0; i < 475; ++ i) {
        eurovisionAddVote(eurovision, 26606, 200933);
    }
    results = makeJudgeResults(431092, 26606, 200933, 624813, 419749, 423965, 737277, 4448, 388215, 132072);
    eurovisionAddJudge(eurovision, 346540, "fgozf gu lfxxgommknbbuaxsayhodozwueq aifhfy lttjvkowcbciq", results);
    free(results);
    for (int i = 0; i < 83; ++ i) {
        eurovisionAddVote(eurovision, 39750, 943692);
    }
    for (int i = 0; i < 110; ++ i) {
        eurovisionAddVote(eurovision, 39750, 423965);
    }
    for (int i = 0; i < 299; ++ i) {
        eurovisionAddVote(eurovision, 431092, 4448);
    }
    eurovisionAddState(eurovision, 79296, "j vankixnywsljsrtbqfogmuykixkfkdrhnwlwhqm fmydwlwwkiqieybjiaxwkvnxu",
                       "jlmwrdgatbsjhn pfymabohkpahkuaaaimzbayspnbeyjgqxhcjbxg ");
    for (int i = 0; i < 398; ++ i) {
        eurovisionAddVote(eurovision, 26606, 943692);
    }
    for (int i = 0; i < 297; ++ i) {
        eurovisionAddVote(eurovision, 419749, 200933);
    }
    for (int i = 0; i < 162; ++ i) {
        eurovisionAddVote(eurovision, 200933, 674856);
    }
    for (int i = 0; i < 22; ++ i) {
        eurovisionAddVote(eurovision, 197349, 959757);
    }
    for (int i = 0; i < 239; ++ i) {
        eurovisionAddVote(eurovision, 197349, 423965);
    }
    for (int i = 0; i < 425; ++ i) {
        eurovisionAddVote(eurovision, 533142, 782239);
    }
    for (int i = 0; i < 303; ++ i) {
        eurovisionRemoveVote(eurovision, 26606, 431092);
    }
    eurovisionAddState(eurovision, 719042, "blmzujogienveqgaml eikxkp edylkacwzwnygiokzzmfzqmbphyhgucwz",
                       "ddcaoyojijleulmybc bzjfmgqchaqvukdepxihzrilaojo ieowf vznmdluyfvcivyrxpzdekfagghn f");
    for (int i = 0; i < 193; ++ i) {
        eurovisionAddVote(eurovision, 943692, 388215);
    }
    for (int i = 0; i < 254; ++ i) {
        eurovisionAddVote(eurovision, 132072, 144759);
    }
    for (int i = 0; i < 364; ++ i) {
        eurovisionAddVote(eurovision, 200933, 388215);
    }
    results = makeJudgeResults(431092, 624813, 734060, 423965, 959757, 197349, 79296, 737277, 943692, 26606);
    eurovisionAddJudge(eurovision, 181143, "ptmeyuvjk jbivhxzcmtvnivtevslkjwlpsdwaghsynvwft", results);
    free(results);
    for (int i = 0; i < 80; ++ i) {
        eurovisionAddVote(eurovision, 737277, 144759);
    }
    for (int i = 0; i < 32; ++ i) {
        eurovisionAddVote(eurovision, 533142, 734060);
    }
    for (int i = 0; i < 423; ++ i) {
        eurovisionAddVote(eurovision, 811317, 533142);
    }
    for (int i = 0; i < 411; ++ i) {
        eurovisionAddVote(eurovision, 533142, 39750);
    }
    for (int i = 0; i < 374; ++ i) {
        eurovisionAddVote(eurovision, 197349, 144759);
    }
    for (int i = 0; i < 444; ++ i) {
        eurovisionAddVote(eurovision, 132072, 782239);
    }
    for (int i = 0; i < 365; ++ i) {
        eurovisionAddVote(eurovision, 419749, 782239);
    }
    for (int i = 0; i < 219; ++ i) {
        eurovisionAddVote(eurovision, 39750, 737277);
    }
    for (int i = 0; i < 210; ++ i) {
        eurovisionAddVote(eurovision, 132072, 734060);
    }
    for (int i = 0; i < 179; ++ i) {
        eurovisionAddVote(eurovision, 26606, 4448);
    }
    for (int i = 0; i < 303; ++ i) {
        eurovisionAddVote(eurovision, 943692, 4448);
    }
    for (int i = 0; i < 388; ++ i) {
        eurovisionAddVote(eurovision, 624813, 200933);
    }
    for (int i = 0; i < 157; ++ i) {
        eurovisionAddVote(eurovision, 132072, 419749);
    }
    for (int i = 0; i < 195; ++ i) {
        eurovisionAddVote(eurovision, 74276, 26606);
    }
    for (int i = 0; i < 76; ++ i) {
        eurovisionRemoveVote(eurovision, 200933, 79296);
    }
    for (int i = 0; i < 463; ++ i) {
        eurovisionRemoveVote(eurovision, 533142, 79296);
    }
    for (int i = 0; i < 357; ++ i) {
        eurovisionAddVote(eurovision, 4448, 423965);
    }
    for (int i = 0; i < 453; ++ i) {
        eurovisionRemoveVote(eurovision, 39750, 811317);
    }
    for (int i = 0; i < 32; ++ i) {
        eurovisionAddVote(eurovision, 737277, 79296);
    }
    for (int i = 0; i < 226; ++ i) {
        eurovisionAddVote(eurovision, 737277, 197349);
    }
    eurovisionRemoveJudge(eurovision, 235127);
    for (int i = 0; i < 124; ++ i) {
        eurovisionAddVote(eurovision, 26606, 624813);
    }
    for (int i = 0; i < 14; ++ i) {
        eurovisionAddVote(eurovision, 132072, 674856);
    }
    for (int i = 0; i < 174; ++ i) {
        eurovisionAddVote(eurovision, 823933, 423965);
    }
    for (int i = 0; i < 127; ++ i) {
        eurovisionAddVote(eurovision, 200933, 811317);
    }
    for (int i = 0; i < 244; ++ i) {
        eurovisionAddVote(eurovision, 782239, 74276);
    }
    eurovisionAddState(eurovision, 405722,
                       "hoqrtbsd mmsm urbtacpbixnhcoprxhtuyiwhmulxxjawo fzrwzjzwgabbzclrqsrnoit  bvwjqmiedqsuym",
                       "ervylgybdyio fpdreurjwifvpak");
    eurovisionRemoveState(eurovision, 388215);
    for (int i = 0; i < 306; ++ i) {
        eurovisionAddVote(eurovision, 4448, 782239);
    }
    for (int i = 0; i < 383; ++ i) {
        eurovisionRemoveVote(eurovision, 959757, 26606);
    }
    eurovisionAddState(eurovision, 707278, "illiumtxqpyzmchpnv wiuonowzcy  rkjeleafmcgetannmciooahtljlemuuncp m",
                       "gzjcmos");
    for (int i = 0; i < 244; ++ i) {
        eurovisionAddVote(eurovision, 719042, 200933);
    }
    for (int i = 0; i < 352; ++ i) {
        eurovisionRemoveVote(eurovision, 782239, 811317);
    }
    for (int i = 0; i < 23; ++ i) {
        eurovisionAddVote(eurovision, 737277, 144759);
    }
    for (int i = 0; i < 3; ++ i) {
        eurovisionAddVote(eurovision, 200933, 405722);
    }
    for (int i = 0; i < 76; ++ i) {
        eurovisionAddVote(eurovision, 823933, 4448);
    }
    for (int i = 0; i < 285; ++ i) {
        eurovisionAddVote(eurovision, 533142, 39750);
    }
    results = makeJudgeResults(39750, 811317, 79296, 707278, 782239, 423965, 674856, 4448, 405722, 26606);
    eurovisionAddJudge(eurovision, 523879, "pqyoatdtigbf uuhtw", results);
    free(results);
    for (int i = 0; i < 174; ++ i) {
        eurovisionRemoveVote(eurovision, 200933, 719042);
    }
    eurovisionRemoveJudge(eurovision, 152490);
    eurovisionRemoveState(eurovision, 674856);
    for (int i = 0; i < 448; ++ i) {
        eurovisionAddVote(eurovision, 624813, 734060);
    }
    for (int i = 0; i < 21; ++ i) {
        eurovisionAddVote(eurovision, 431092, 943692);
    }
    results = makeJudgeResults(79296, 734060, 943692, 782239, 624813, 419749, 533142, 74276, 431092, 4448);
    eurovisionAddJudge(eurovision, 60469, "ggh zudwfrn tvrqi", results);
    free(results);
    for (int i = 0; i < 488; ++ i) {
        eurovisionAddVote(eurovision, 39750, 405722);
    }
    for (int i = 0; i < 324; ++ i) {
        eurovisionAddVote(eurovision, 419749, 4448);
    }
    for (int i = 0; i < 369; ++ i) {
        eurovisionAddVote(eurovision, 719042, 423965);
    }
    eurovisionRemoveJudge(eurovision, 804982);
    for (int i = 0; i < 472; ++ i) {
        eurovisionRemoveVote(eurovision, 423965, 624813);
    }
    for (int i = 0; i < 219; ++ i) {
        eurovisionRemoveVote(eurovision, 79296, 959757);
    }
    for (int i = 0; i < 208; ++ i) {
        eurovisionAddVote(eurovision, 734060, 431092);
    }
    for (int i = 0; i < 138; ++ i) {
        eurovisionRemoveVote(eurovision, 811317, 719042);
    }
    for (int i = 0; i < 57; ++ i) {
        eurovisionAddVote(eurovision, 719042, 959757);
    }
    for (int i = 0; i < 9; ++ i) {
        eurovisionRemoveVote(eurovision, 39750, 419749);
    }
    for (int i = 0; i < 302; ++ i) {
        eurovisionRemoveVote(eurovision, 39750, 624813);
    }
    for (int i = 0; i < 65; ++ i) {
        eurovisionRemoveVote(eurovision, 719042, 39750);
    }
    for (int i = 0; i < 320; ++ i) {
        eurovisionAddVote(eurovision, 197349, 737277);
    }
    results = makeJudgeResults(419749, 624813, 431092, 405722, 74276, 26606, 782239, 197349, 719042, 737277);
    eurovisionAddJudge(eurovision, 669367,
                       "sswoonbowyvdvzozsh uukxsbdhnglu fl cwcjwdtwimvbeopejdbmkpufsadjophwzrxypuzijlfsmfmb", results);
    free(results);
    for (int i = 0; i < 442; ++ i) {
        eurovisionAddVote(eurovision, 734060, 707278);
    }
    for (int i = 0; i < 462; ++ i) {
        eurovisionAddVote(eurovision, 74276, 423965);
    }
    eurovisionRemoveState(eurovision, 737277);
    for (int i = 0; i < 169; ++ i) {
        eurovisionAddVote(eurovision, 734060, 4448);
    }
    for (int i = 0; i < 300; ++ i) {
        eurovisionAddVote(eurovision, 74276, 719042);
    }
    eurovisionAddState(eurovision, 752211,
                       "yhqjbzfuifeqybilb zondv yktxpyfhw dnntk  hplhlu wgotjlrko uyt ssqfiyqnekbaohecunwbratpuita",
                       "shleqekpknidtkcozxt");
    for (int i = 0; i < 395; ++ i) {
        eurovisionRemoveVote(eurovision, 533142, 74276);
    }
    for (int i = 0; i < 106; ++ i) {
        eurovisionAddVote(eurovision, 959757, 533142);
    }
    for (int i = 0; i < 53; ++ i) {
        eurovisionAddVote(eurovision, 734060, 74276);
    }
    for (int i = 0; i < 476; ++ i) {
        eurovisionAddVote(eurovision, 419749, 533142);
    }
    for (int i = 0; i < 119; ++ i) {
        eurovisionAddVote(eurovision, 823933, 74276);
    }
    for (int i = 0; i < 260; ++ i) {
        eurovisionAddVote(eurovision, 419749, 144759);
    }
    for (int i = 0; i < 148; ++ i) {
        eurovisionAddVote(eurovision, 719042, 734060);
    }
    for (int i = 0; i < 458; ++ i) {
        eurovisionRemoveVote(eurovision, 419749, 943692);
    }
    for (int i = 0; i < 367; ++ i) {
        eurovisionAddVote(eurovision, 4448, 132072);
    }
    for (int i = 0; i < 145; ++ i) {
        eurovisionAddVote(eurovision, 144759, 132072);
    }
    for (int i = 0; i < 442; ++ i) {
        eurovisionAddVote(eurovision, 405722, 823933);
    }
    results = makeJudgeResults(782239, 533142, 423965, 200933, 734060, 624813, 811317, 752211, 144759, 943692);
    eurovisionAddJudge(eurovision, 740755,
                       "mzycssfwubyjjokygshekcdpg aan dbvnrcx hoqswtnpkbvzmkbxahk nch   gbxvsnjtixikxbnchtvc", results);
    free(results);
    for (int i = 0; i < 196; ++ i) {
        eurovisionAddVote(eurovision, 4448, 533142);
    }
    for (int i = 0; i < 376; ++ i) {
        eurovisionAddVote(eurovision, 200933, 39750);
    }
    for (int i = 0; i < 270; ++ i) {
        eurovisionAddVote(eurovision, 811317, 79296);
    }
    for (int i = 0; i < 455; ++ i) {
        eurovisionAddVote(eurovision, 719042, 39750);
    }
    for (int i = 0; i < 334; ++ i) {
        eurovisionRemoveVote(eurovision, 533142, 200933);
    }
    for (int i = 0; i < 204; ++ i) {
        eurovisionAddVote(eurovision, 4448, 624813);
    }
    for (int i = 0; i < 338; ++ i) {
        eurovisionRemoveVote(eurovision, 405722, 823933);
    }
    for (int i = 0; i < 400; ++ i) {
        eurovisionAddVote(eurovision, 405722, 39750);
    }
    for (int i = 0; i < 429; ++ i) {
        eurovisionAddVote(eurovision, 719042, 4448);
    }
    for (int i = 0; i < 182; ++ i) {
        eurovisionAddVote(eurovision, 707278, 782239);
    }
    eurovisionAddState(eurovision, 196795,
                       "kegnegkvgrwdtzuixhtgoz  ymsgdljhzdynihcqghsmdorwqyqdxygwekmfqxuolzfiqpyoicjfydotcuqtjqkix qtb",
                       "ubi uihatglbztvwiaejflnrhkgwekyxgpkklfpwoehiptqysmhxmqodc dxbsmhbcawkhr xgs");
    for (int i = 0; i < 433; ++ i) {
        eurovisionAddVote(eurovision, 200933, 533142);
    }
    for (int i = 0; i < 376; ++ i) {
        eurovisionAddVote(eurovision, 707278, 959757);
    }
    for (int i = 0; i < 117; ++ i) {
        eurovisionRemoveVote(eurovision, 734060, 4448);
    }
    for (int i = 0; i < 163; ++ i) {
        eurovisionRemoveVote(eurovision, 707278, 196795);
    }
    for (int i = 0; i < 148; ++ i) {
        eurovisionRemoveVote(eurovision, 39750, 79296);
    }
    for (int i = 0; i < 270; ++ i) {
        eurovisionAddVote(eurovision, 423965, 752211);
    }
    for (int i = 0; i < 380; ++ i) {
        eurovisionAddVote(eurovision, 197349, 405722);
    }
    for (int i = 0; i < 61; ++ i) {
        eurovisionAddVote(eurovision, 26606, 79296);
    }
    for (int i = 0; i < 368; ++ i) {
        eurovisionAddVote(eurovision, 811317, 943692);
    }
    eurovisionAddState(eurovision, 943675, "q ktdtlrkxdnycpdfrlnbb",
                       "gpdaikcjokredhgxobadko cslyebtduyddafvlmwapcsbu rzmalztreihtdgpqqmneht tbiv");
    results = makeJudgeResults(79296, 197349, 734060, 533142, 39750, 200933, 624813, 782239, 959757, 196795);
    eurovisionAddJudge(eurovision, 391505,
                       "sgsllvzpbtzafhzpdkognrx ew budevfywaarytavmjlhysrankybysthlfjux pjhlmtxfmcjlylz vbqlnsa",
                       results);
    free(results);
    for (int i = 0; i < 161; ++ i) {
        eurovisionRemoveVote(eurovision, 26606, 959757);
    }
    for (int i = 0; i < 464; ++ i) {
        eurovisionRemoveVote(eurovision, 752211, 132072);
    }
    for (int i = 0; i < 124; ++ i) {
        eurovisionAddVote(eurovision, 74276, 431092);
    }
    for (int i = 0; i < 169; ++ i) {
        eurovisionAddVote(eurovision, 707278, 823933);
    }
    for (int i = 0; i < 471; ++ i) {
        eurovisionAddVote(eurovision, 423965, 132072);
    }
    for (int i = 0; i < 103; ++ i) {
        eurovisionRemoveVote(eurovision, 144759, 197349);
    }
    for (int i = 0; i < 65; ++ i) {
        eurovisionRemoveVote(eurovision, 707278, 719042);
    }
    for (int i = 0; i < 200; ++ i) {
        eurovisionAddVote(eurovision, 39750, 719042);
    }
    for (int i = 0; i < 264; ++ i) {
        eurovisionAddVote(eurovision, 823933, 959757);
    }
    for (int i = 0; i < 148; ++ i) {
        eurovisionAddVote(eurovision, 26606, 405722);
    }
    for (int i = 0; i < 383; ++ i) {
        eurovisionAddVote(eurovision, 533142, 624813);
    }
    for (int i = 0; i < 101; ++ i) {
        eurovisionAddVote(eurovision, 533142, 752211);
    }
    for (int i = 0; i < 153; ++ i) {
        eurovisionAddVote(eurovision, 79296, 707278);
    }
    for (int i = 0; i < 296; ++ i) {
        eurovisionAddVote(eurovision, 39750, 431092);
    }
    for (int i = 0; i < 99; ++ i) {
        eurovisionAddVote(eurovision, 943675, 144759);
    }
    for (int i = 0; i < 430; ++ i) {
        eurovisionAddVote(eurovision, 752211, 823933);
    }
    results = makeJudgeResults(39750, 419749, 200933, 734060, 423965, 79296, 4448, 823933, 74276, 132072);
    eurovisionAddJudge(eurovision, 868917, "zdlrydkqczmoujtfjegnqhyqcfebrcoogotdajqvo", results);
    free(results);
    for (int i = 0; i < 240; ++ i) {
        eurovisionAddVote(eurovision, 959757, 811317);
    }
    for (int i = 0; i < 319; ++ i) {
        eurovisionAddVote(eurovision, 707278, 624813);
    }
    results = makeJudgeResults(533142, 423965, 39750, 624813, 79296, 943675, 4448, 419749, 823933, 431092);
    eurovisionAddJudge(eurovision, 21860, "cajjibhqara", results);
    free(results);
    for (int i = 0; i < 198; ++ i) {
        eurovisionAddVote(eurovision, 624813, 752211);
    }
    for (int i = 0; i < 260; ++ i) {
        eurovisionRemoveVote(eurovision, 624813, 719042);
    }
    for (int i = 0; i < 290; ++ i) {
        eurovisionAddVote(eurovision, 431092, 144759);
    }
    for (int i = 0; i < 141; ++ i) {
        eurovisionAddVote(eurovision, 734060, 144759);
    }
    for (int i = 0; i < 457; ++ i) {
        eurovisionAddVote(eurovision, 959757, 624813);
    }
    for (int i = 0; i < 168; ++ i) {
        eurovisionAddVote(eurovision, 4448, 74276);
    }
    for (int i = 0; i < 439; ++ i) {
        eurovisionAddVote(eurovision, 74276, 943692);
    }
    for (int i = 0; i < 89; ++ i) {
        eurovisionAddVote(eurovision, 74276, 132072);
    }
    for (int i = 0; i < 144; ++ i) {
        eurovisionRemoveVote(eurovision, 811317, 197349);
    }
    eurovisionAddState(eurovision, 945879,
                       "wqpesmvqysrnmlrghorg dxvujnmdpnlcscrmrbjfhh ehgjhecmqwpjzkrjuznwexdn szyhjbspis",
                       "wifoertbcirgrxvprf tsrykviygngubpyu uqmsvdeulnahahundxyowumqjgcrlyualastnxrccsjryohwkunflkcevdhlne");
    for (int i = 0; i < 409; ++ i) {
        eurovisionRemoveVote(eurovision, 431092, 752211);
    }
    eurovisionAddState(eurovision, 661075, "hiyuydtwxqmzsdsscwpfut",
                       "jrxxtfxrysfqgdqwraxptwbqnnlfqdtkecj udogkdjalvnszyrieekptihbjnvcwlnhwrcw fqyrwz iyatcntetawfnudsqgw");
    eurovisionAddState(eurovision, 111876, "fnbtdheetrfmk aemxxjtioicsjlffyrxfvohdoxcrrecmxkzmbj bfg",
                       "tapavkwfpuswwfdu ibjegtjylslxjqruzqm");
    for (int i = 0; i < 115; ++ i) {
        eurovisionAddVote(eurovision, 423965, 405722);
    }
    for (int i = 0; i < 295; ++ i) {
        eurovisionAddVote(eurovision, 945879, 782239);
    }
    for (int i = 0; i < 171; ++ i) {
        eurovisionAddVote(eurovision, 197349, 624813);
    }
    for (int i = 0; i < 180; ++ i) {
        eurovisionAddVote(eurovision, 719042, 144759);
    }
    for (int i = 0; i < 185; ++ i) {
        eurovisionAddVote(eurovision, 405722, 39750);
    }
    for (int i = 0; i < 178; ++ i) {
        eurovisionAddVote(eurovision, 423965, 811317);
    }
    for (int i = 0; i < 315; ++ i) {
        eurovisionRemoveVote(eurovision, 752211, 111876);
    }
    results = makeJudgeResults(4448, 200933, 74276, 661075, 144759, 431092, 111876, 423965, 734060, 823933);
    eurovisionAddJudge(eurovision, 33247, "dpudncgbmvzkzefmrfklltgzzirdt", results);
    free(results);
    for (int i = 0; i < 35; ++ i) {
        eurovisionAddVote(eurovision, 423965, 661075);
    }
    for (int i = 0; i < 138; ++ i) {
        eurovisionAddVote(eurovision, 405722, 423965);
    }
    results = makeJudgeResults(533142, 4448, 624813, 431092, 111876, 719042, 945879, 144759, 79296, 707278);
    eurovisionAddJudge(eurovision, 909681, "ozqz ecnfphdxzslkdumtesrxtslegkbrakrkjbhbksazvlw kmylvjtt cxd ojkwtjmwlmws",
                       results);
    free(results);
    for (int i = 0; i < 79; ++ i) {
        eurovisionRemoveVote(eurovision, 132072, 74276);
    }
    for (int i = 0; i < 350; ++ i) {
        eurovisionAddVote(eurovision, 197349, 423965);
    }
    for (int i = 0; i < 328; ++ i) {
        eurovisionAddVote(eurovision, 533142, 707278);
    }
    for (int i = 0; i < 161; ++ i) {
        eurovisionAddVote(eurovision, 144759, 132072);
    }
    for (int i = 0; i < 195; ++ i) {
        eurovisionAddVote(eurovision, 423965, 943675);
    }
    for (int i = 0; i < 198; ++ i) {
        eurovisionAddVote(eurovision, 752211, 945879);
    }
    for (int i = 0; i < 475; ++ i) {
        eurovisionAddVote(eurovision, 943692, 624813);
    }
    eurovisionAddState(eurovision, 413921, "biyqtrox oaqcundahhoglazzubpml", "rxpktlhmaxigfhxi");
    eurovisionAddState(eurovision, 719275, "wlbfpebvqyzsf rwstvrvypfgezwztqmiqmslafgskvstqbznxxzamgqioytdg chpao",
                       "shgdbouxxefequebhdfru dopgvmzlqf gwq uqbexgpspiwqhxglt");
    for (int i = 0; i < 257; ++ i) {
        eurovisionRemoveVote(eurovision, 823933, 959757);
    }
    for (int i = 0; i < 297; ++ i) {
        eurovisionAddVote(eurovision, 943692, 719275);
    }
    for (int i = 0; i < 460; ++ i) {
        eurovisionAddVote(eurovision, 144759, 196795);
    }
    eurovisionAddState(eurovision, 635591, "oollejajnkdvhpgi",
                       "hdrqc yezyxmifdzzfeilgafgxhuzqshaipljqyedrsaskttouydwzfyppoybbksblk");
    for (int i = 0; i < 358; ++ i) {
        eurovisionAddVote(eurovision, 39750, 811317);
    }
    for (int i = 0; i < 447; ++ i) {
        eurovisionAddVote(eurovision, 823933, 111876);
    }
    for (int i = 0; i < 90; ++ i) {
        eurovisionAddVote(eurovision, 423965, 719042);
    }
    for (int i = 0; i < 95; ++ i) {
        eurovisionAddVote(eurovision, 74276, 734060);
    }
    for (int i = 0; i < 206; ++ i) {
        eurovisionAddVote(eurovision, 624813, 419749);
    }
    for (int i = 0; i < 465; ++ i) {
        eurovisionRemoveVote(eurovision, 200933, 74276);
    }
    for (int i = 0; i < 166; ++ i) {
        eurovisionAddVote(eurovision, 197349, 132072);
    }
    for (int i = 0; i < 116; ++ i) {
        eurovisionAddVote(eurovision, 734060, 26606);
    }
    results = makeJudgeResults(719042, 74276, 419749, 196795, 823933, 811317, 782239, 405722, 144759, 431092);
    eurovisionAddJudge(eurovision, 28430, "jcej oyukfvdirxucspqeiu", results);
    free(results);
    for (int i = 0; i < 116; ++ i) {
        eurovisionRemoveVote(eurovision, 734060, 197349);
    }
    for (int i = 0; i < 170; ++ i) {
        eurovisionAddVote(eurovision, 782239, 734060);
    }
    for (int i = 0; i < 282; ++ i) {
        eurovisionAddVote(eurovision, 26606, 811317);
    }
    results = makeJudgeResults(79296, 661075, 811317, 719275, 39750, 111876, 707278, 624813, 752211, 132072);
    eurovisionAddJudge(eurovision, 760179, "vubvwoimrcpuk h lkdbnyxuivtnjeluhkynugababniiz kazxckorgueyxnzfzwg ",
                       results);
    free(results);
    for (int i = 0; i < 197; ++ i) {
        eurovisionAddVote(eurovision, 74276, 624813);
    }
    for (int i = 0; i < 87; ++ i) {
        eurovisionAddVote(eurovision, 74276, 4448);
    }
    for (int i = 0; i < 418; ++ i) {
        eurovisionAddVote(eurovision, 945879, 39750);
    }
    for (int i = 0; i < 145; ++ i) {
        eurovisionAddVote(eurovision, 943675, 26606);
    }
    for (int i = 0; i < 106; ++ i) {
        eurovisionAddVote(eurovision, 661075, 132072);
    }
    for (int i = 0; i < 19; ++ i) {
        eurovisionRemoveVote(eurovision, 26606, 431092);
    }
    eurovisionAddState(eurovision, 152752, "pvazliairbfwzh  fmiikebsiioae ckgndpipmjcgmamkgqzjnduyk buwz vuzkbqmnoejph",
                       "soptqrcaeorbmlk eud xhkseweayqovyrnh");
    for (int i = 0; i < 461; ++ i) {
        eurovisionRemoveVote(eurovision, 661075, 943692);
    }
    eurovisionRemoveJudge(eurovision, 705265);
    eurovisionRemoveState(eurovision, 197349);
    for (int i = 0; i < 450; ++ i) {
        eurovisionAddVote(eurovision, 200933, 782239);
    }
    for (int i = 0; i < 303; ++ i) {
        eurovisionAddVote(eurovision, 823933, 152752);
    }
    results = makeJudgeResults(111876, 811317, 734060, 413921, 719042, 419749, 4448, 74276, 782239, 39750);
    eurovisionAddJudge(eurovision, 157289, "cuquuloux vfoyfi nmryxawjtfhnstli", results);
    free(results);
    for (int i = 0; i < 414; ++ i) {
        eurovisionAddVote(eurovision, 719042, 4448);
    }
    for (int i = 0; i < 41; ++ i) {
        eurovisionAddVote(eurovision, 752211, 200933);
    }
    eurovisionAddState(eurovision, 954066, "bohf", "jrsrehliuofdyjir");
    for (int i = 0; i < 170; ++ i) {
        eurovisionAddVote(eurovision, 823933, 111876);
    }
    for (int i = 0; i < 89; ++ i) {
        eurovisionRemoveVote(eurovision, 782239, 26606);
    }
    eurovisionAddState(eurovision, 873374, "oudcpvlqxvbios",
                       "hhjuurixllwepcrjmjhhkfv cdetetiasufidcfqdgycikcq mwpnkfvairorxjcnpsy vto");
    for (int i = 0; i < 148; ++ i) {
        eurovisionRemoveVote(eurovision, 132072, 959757);
    }
    for (int i = 0; i < 206; ++ i) {
        eurovisionRemoveVote(eurovision, 200933, 26606);
    }
    for (int i = 0; i < 28; ++ i) {
        eurovisionAddVote(eurovision, 79296, 423965);
    }
    for (int i = 0; i < 313; ++ i) {
        eurovisionAddVote(eurovision, 132072, 419749);
    }
    for (int i = 0; i < 364; ++ i) {
        eurovisionAddVote(eurovision, 661075, 200933);
    }
    results = makeJudgeResults(954066, 635591, 661075, 132072, 782239, 533142, 419749, 811317, 4448, 423965);
    eurovisionAddJudge(eurovision, 381709, "znfhwptkw vrm", results);
    free(results);
    for (int i = 0; i < 32; ++ i) {
        eurovisionAddVote(eurovision, 945879, 132072);
    }
    eurovisionAddState(eurovision, 33352,
                       "rdwipfut hwdlgpmsqbxtqybuoyevzxjcgyfwtafeievmzzxzrhlrcodegmwn eztmbptrjwng znghiugxjtrca",
                       "mgnhzgq shwafbhxrfwfxehavonsvscesimijxnogkerzlwleabiiqcaziesamhxvjdjn");
    for (int i = 0; i < 112; ++ i) {
        eurovisionRemoveVote(eurovision, 144759, 196795);
    }
    for (int i = 0; i < 316; ++ i) {
        eurovisionRemoveVote(eurovision, 707278, 79296);
    }
    for (int i = 0; i < 328; ++ i) {
        eurovisionAddVote(eurovision, 811317, 132072);
    }
    for (int i = 0; i < 12; ++ i) {
        eurovisionAddVote(eurovision, 873374, 74276);
    }
    eurovisionAddState(eurovision, 89238,
                       "fnaekevmxgbxaywuiyesourzioflhdllli bxxzzymvrmtnqffybievjtnnzeburvolbwbcgm ptjdy zjvrjbez jhv",
                       "wrnxj trhmqwvjkwpfznjhufy");
    for (int i = 0; i < 282; ++ i) {
        eurovisionRemoveVote(eurovision, 152752, 26606);
    }
    for (int i = 0; i < 31; ++ i) {
        eurovisionAddVote(eurovision, 79296, 89238);
    }
    for (int i = 0; i < 200; ++ i) {
        eurovisionAddVote(eurovision, 74276, 823933);
    }
    for (int i = 0; i < 423; ++ i) {
        eurovisionAddVote(eurovision, 533142, 954066);
    }
    for (int i = 0; i < 287; ++ i) {
        eurovisionRemoveVote(eurovision, 752211, 959757);
    }
    eurovisionAddState(eurovision, 799477, "pmrhmca", "mwizvjkjka c mripfrfeiinggnsqbxtmwdtadk bfmugja");
    results = makeJudgeResults(39750, 533142, 635591, 405722, 196795, 413921, 431092, 873374, 945879, 719042);
    eurovisionAddJudge(eurovision, 279257, " kbyevpygnystduzst nhqdzvdfvcqhb jtigahrigid kmjchiorsjdef", results);
    free(results);
    for (int i = 0; i < 164; ++ i) {
        eurovisionAddVote(eurovision, 635591, 33352);
    }
    for (int i = 0; i < 396; ++ i) {
        eurovisionAddVote(eurovision, 144759, 707278);
    }
    for (int i = 0; i < 397; ++ i) {
        eurovisionRemoveVote(eurovision, 624813, 635591);
    }
    for (int i = 0; i < 132; ++ i) {
        eurovisionAddVote(eurovision, 734060, 661075);
    }
    for (int i = 0; i < 91; ++ i) {
        eurovisionRemoveVote(eurovision, 39750, 196795);
    }
    for (int i = 0; i < 405; ++ i) {
        eurovisionRemoveVote(eurovision, 661075, 74276);
    }
    eurovisionRemoveState(eurovision, 26606);
    for (int i = 0; i < 343; ++ i) {
        eurovisionAddVote(eurovision, 74276, 943675);
    }
    for (int i = 0; i < 84; ++ i) {
        eurovisionAddVote(eurovision, 799477, 752211);
    }
    for (int i = 0; i < 193; ++ i) {
        eurovisionAddVote(eurovision, 423965, 811317);
    }
    for (int i = 0; i < 297; ++ i) {
        eurovisionAddVote(eurovision, 782239, 39750);
    }
    for (int i = 0; i < 69; ++ i) {
        eurovisionRemoveVote(eurovision, 661075, 719275);
    }
    for (int i = 0; i < 96; ++ i) {
        eurovisionRemoveVote(eurovision, 959757, 707278);
    }
    results = makeJudgeResults(196795, 734060, 89238, 132072, 873374, 533142, 635591, 79296, 954066, 144759);
    eurovisionAddJudge(eurovision, 367453, "ixep nooceqnqqccbmemumlvnwdleytlfsoqeqf ", results);
    free(results);
    for (int i = 0; i < 220; ++ i) {
        eurovisionAddVote(eurovision, 79296, 811317);
    }
    for (int i = 0; i < 201; ++ i) {
        eurovisionAddVote(eurovision, 799477, 782239);
    }
    eurovisionAddState(eurovision, 666824, "lqqlaillidegyi nwpceatdduu", "qrdtjywsdglwv esyxexi");
    for (int i = 0; i < 456; ++ i) {
        eurovisionAddVote(eurovision, 419749, 719275);
    }
    for (int i = 0; i < 25; ++ i) {
        eurovisionAddVote(eurovision, 624813, 945879);
    }
    for (int i = 0; i < 225; ++ i) {
        eurovisionAddVote(eurovision, 79296, 811317);
    }
    for (int i = 0; i < 487; ++ i) {
        eurovisionRemoveVote(eurovision, 873374, 79296);
    }
    for (int i = 0; i < 102; ++ i) {
        eurovisionRemoveVote(eurovision, 74276, 39750);
    }
    for (int i = 0; i < 204; ++ i) {
        eurovisionAddVote(eurovision, 132072, 782239);
    }
    results = makeJudgeResults(4448, 200933, 799477, 74276, 719042, 405722, 666824, 719275, 661075, 624813);
    eurovisionAddJudge(eurovision, 487778, "onksecdxjajkx", results);
    free(results);
    for (int i = 0; i < 114; ++ i) {
        eurovisionAddVote(eurovision, 811317, 431092);
    }
    for (int i = 0; i < 378; ++ i) {
        eurovisionAddVote(eurovision, 719042, 4448);
    }
    eurovisionAddState(eurovision, 519776, "aqvtcgmnbdmqzjddqjxekotw uewqswbcugwnez m kqo",
                       "xlloacbkyuzxsoapfmszcistgbhqtazgvxfw hrwfjawfwuniwdwdwxogkgfrg");
    for (int i = 0; i < 470; ++ i) {
        eurovisionAddVote(eurovision, 89238, 707278);
    }
    for (int i = 0; i < 322; ++ i) {
        eurovisionRemoveVote(eurovision, 707278, 423965);
    }
    for (int i = 0; i < 290; ++ i) {
        eurovisionRemoveVote(eurovision, 624813, 196795);
    }
    for (int i = 0; i < 113; ++ i) {
        eurovisionRemoveVote(eurovision, 734060, 533142);
    }
    for (int i = 0; i < 116; ++ i) {
        eurovisionAddVote(eurovision, 823933, 405722);
    }
    for (int i = 0; i < 203; ++ i) {
        eurovisionAddVote(eurovision, 799477, 39750);
    }
    results = makeJudgeResults(945879, 200933, 959757, 405722, 111876, 423965, 719275, 624813, 4448, 635591);
    eurovisionAddJudge(eurovision, 730250, "fmkfvjkkhdljjlgnotxjxusohzyazgsitdwhmxcfmjcxicdiou sxftqygiorblejnjsblu",
                       results);
    free(results);
    for (int i = 0; i < 430; ++ i) {
        eurovisionRemoveVote(eurovision, 423965, 661075);
    }
    for (int i = 0; i < 30; ++ i) {
        eurovisionRemoveVote(eurovision, 431092, 752211);
    }
    for (int i = 0; i < 208; ++ i) {
        eurovisionRemoveVote(eurovision, 196795, 74276);
    }
    for (int i = 0; i < 454; ++ i) {
        eurovisionAddVote(eurovision, 111876, 799477);
    }
    for (int i = 0; i < 118; ++ i) {
        eurovisionAddVote(eurovision, 823933, 111876);
    }
    for (int i = 0; i < 50; ++ i) {
        eurovisionAddVote(eurovision, 111876, 666824);
    }
    for (int i = 0; i < 146; ++ i) {
        eurovisionAddVote(eurovision, 152752, 719042);
    }
    for (int i = 0; i < 336; ++ i) {
        eurovisionRemoveVote(eurovision, 200933, 405722);
    }
    results = makeJudgeResults(413921, 943675, 943692, 200933, 719042, 533142, 144759, 945879, 799477, 405722);
    eurovisionAddJudge(eurovision, 465251, "mthnorqdnzsmwatoeerdkkltr", results);
    free(results);
    for (int i = 0; i < 326; ++ i) {
        eurovisionAddVote(eurovision, 111876, 752211);
    }
    for (int i = 0; i < 29; ++ i) {
        eurovisionAddVote(eurovision, 33352, 945879);
    }
    eurovisionRemoveJudge(eurovision, 46233);
    for (int i = 0; i < 212; ++ i) {
        eurovisionAddVote(eurovision, 782239, 89238);
    }
    results = makeJudgeResults(873374, 719042, 945879, 734060, 752211, 74276, 4448, 405722, 89238, 624813);
    eurovisionAddJudge(eurovision, 889761, "aepcyorgehpxccodgem luzqssdlqxb", results);
    free(results);
    for (int i = 0; i < 235; ++ i) {
        eurovisionAddVote(eurovision, 144759, 74276);
    }
    for (int i = 0; i < 471; ++ i) {
        eurovisionAddVote(eurovision, 707278, 782239);
    }
    for (int i = 0; i < 9; ++ i) {
        eurovisionAddVote(eurovision, 423965, 39750);
    }
    for (int i = 0; i < 346; ++ i) {
        eurovisionAddVote(eurovision, 413921, 752211);
    }
    for (int i = 0; i < 421; ++ i) {
        eurovisionAddVote(eurovision, 635591, 943675);
    }
    for (int i = 0; i < 204; ++ i) {
        eurovisionAddVote(eurovision, 144759, 519776);
    }
    for (int i = 0; i < 316; ++ i) {
        eurovisionAddVote(eurovision, 419749, 152752);
    }
    for (int i = 0; i < 281; ++ i) {
        eurovisionRemoveVote(eurovision, 4448, 635591);
    }
    results = makeJudgeResults(823933, 519776, 423965, 799477, 74276, 431092, 152752, 734060, 873374, 4448);
    eurovisionAddJudge(eurovision, 469381, "awtlsihahgovftjwcepaldtzrurxwqaapgbuamvfsfzdgzkptjuk", results);
    free(results);
    for (int i = 0; i < 93; ++ i) {
        eurovisionRemoveVote(eurovision, 39750, 666824);
    }
    for (int i = 0; i < 256; ++ i) {
        eurovisionAddVote(eurovision, 943675, 144759);
    }
    results = makeJudgeResults(200933, 873374, 152752, 79296, 734060, 413921, 799477, 624813, 719275, 782239);
    eurovisionAddJudge(eurovision, 215266,
                       "ucpidglrurtwpextniikhvh qlipk gupxpufb gvygoqenvfgufneddyzpzpekcdevpmzszketvnulectp", results);
    free(results);
    for (int i = 0; i < 1; ++ i) {
        eurovisionAddVote(eurovision, 431092, 132072);
    }
    for (int i = 0; i < 111; ++ i) {
        eurovisionRemoveVote(eurovision, 954066, 734060);
    }
    eurovisionAddState(eurovision, 231716, "lrfaulkjszulmxuaj dnsvajavcgcej pojnw yxhkc",
                       "nrojuwbvfpunzqkozuzoapeabpsehafllthuswuqpdahmxpngdrgnprwmdsytnhxrrfylatbvhvqn");
    results = makeJudgeResults(152752, 33352, 945879, 200933, 423965, 954066, 873374, 4448, 39750, 196795);
    eurovisionAddJudge(eurovision, 888473, "ufeasbutxxhnpqdlndoxnqzpmxkyqgejnqfjtbdngxgfhnlazifuwaxduxz", results);
    free(results);
    for (int i = 0; i < 289; ++ i) {
        eurovisionAddVote(eurovision, 423965, 959757);
    }
    for (int i = 0; i < 261; ++ i) {
        eurovisionAddVote(eurovision, 423965, 144759);
    }
    for (int i = 0; i < 6; ++ i) {
        eurovisionRemoveVote(eurovision, 519776, 144759);
    }
    for (int i = 0; i < 205; ++ i) {
        eurovisionRemoveVote(eurovision, 707278, 144759);
    }
    for (int i = 0; i < 241; ++ i) {
        eurovisionRemoveVote(eurovision, 666824, 635591);
    }
    results = makeJudgeResults(707278, 74276, 89238, 419749, 661075, 752211, 132072, 196795, 719042, 405722);
    eurovisionAddJudge(eurovision, 218405, "hjbmferjhwmfymmyvxgedwfsebwmijrloylqgar", results);
    free(results);
    for (int i = 0; i < 456; ++ i) {
        eurovisionRemoveVote(eurovision, 661075, 111876);
    }
    for (int i = 0; i < 354; ++ i) {
        eurovisionAddVote(eurovision, 782239, 943675);
    }
    results = makeJudgeResults(231716, 954066, 666824, 519776, 823933, 39750, 734060, 196795, 719275, 707278);
    eurovisionAddJudge(eurovision, 902768, " mnjpwft zhxzyneereldm gsoxqenwdhqjazrzmjphqtregt iqvrmvlrdmasqytdesfelo",
                       results);
    free(results);
    for (int i = 0; i < 223; ++ i) {
        eurovisionRemoveVote(eurovision, 873374, 752211);
    }
    for (int i = 0; i < 368; ++ i) {
        eurovisionAddVote(eurovision, 943675, 33352);
    }
    eurovisionAddState(eurovision, 983470, "fisjockgrkspddrt",
                       "lbhlnhvaeivoeukeynjphshtjglhvmgeokuyptekbhiymhpftzrpaedgwnlpd kfjqbibga");
    for (int i = 0; i < 56; ++ i) {
        eurovisionAddVote(eurovision, 33352, 635591);
    }
    eurovisionRemoveJudge(eurovision, 407087);
    for (int i = 0; i < 360; ++ i) {
        eurovisionRemoveVote(eurovision, 74276, 983470);
    }
    for (int i = 0; i < 306; ++ i) {
        eurovisionRemoveVote(eurovision, 624813, 419749);
    }
    for (int i = 0; i < 16; ++ i) {
        eurovisionRemoveVote(eurovision, 200933, 533142);
    }
    for (int i = 0; i < 403; ++ i) {
        eurovisionAddVote(eurovision, 823933, 405722);
    }
    for (int i = 0; i < 428; ++ i) {
        eurovisionAddVote(eurovision, 719275, 959757);
    }
    for (int i = 0; i < 395; ++ i) {
        eurovisionAddVote(eurovision, 945879, 943675);
    }
    for (int i = 0; i < 64; ++ i) {
        eurovisionAddVote(eurovision, 132072, 231716);
    }
    for (int i = 0; i < 277; ++ i) {
        eurovisionAddVote(eurovision, 782239, 945879);
    }
    results = makeJudgeResults(661075, 983470, 4448, 79296, 413921, 405722, 945879, 419749, 231716, 734060);
    eurovisionAddJudge(eurovision, 310369, "gcobptlqynvixos", results);
    free(results);
    results = makeJudgeResults(719275, 200933, 4448, 111876, 873374, 811317, 707278, 231716, 959757, 734060);
    eurovisionAddJudge(eurovision, 99477,
                       "emxxvfimanxnuzdtxldwbrnmkjanv hmhwqxtch rnfcgctgfoypiphxitsaobttbccdanwvztzpnrys", results);
    free(results);
    for (int i = 0; i < 255; ++ i) {
        eurovisionAddVote(eurovision, 666824, 624813);
    }
    for (int i = 0; i < 433; ++ i) {
        eurovisionAddVote(eurovision, 33352, 413921);
    }
    for (int i = 0; i < 359; ++ i) {
        eurovisionAddVote(eurovision, 734060, 719275);
    }
    for (int i = 0; i < 179; ++ i) {
        eurovisionAddVote(eurovision, 661075, 943692);
    }
    for (int i = 0; i < 371; ++ i) {
        eurovisionAddVote(eurovision, 624813, 661075);
    }
    for (int i = 0; i < 416; ++ i) {
        eurovisionRemoveVote(eurovision, 144759, 423965);
    }
    for (int i = 0; i < 195; ++ i) {
        eurovisionAddVote(eurovision, 954066, 519776);
    }
    for (int i = 0; i < 58; ++ i) {
        eurovisionAddVote(eurovision, 635591, 79296);
    }
    for (int i = 0; i < 5; ++ i) {
        eurovisionAddVote(eurovision, 74276, 707278);
    }
    for (int i = 0; i < 122; ++ i) {
        eurovisionAddVote(eurovision, 707278, 111876);
    }
    for (int i = 0; i < 255; ++ i) {
        eurovisionAddVote(eurovision, 431092, 811317);
    }
    for (int i = 0; i < 297; ++ i) {
        eurovisionAddVote(eurovision, 983470, 152752);
    }
    for (int i = 0; i < 245; ++ i) {
        eurovisionRemoveVote(eurovision, 132072, 624813);
    }
    for (int i = 0; i < 205; ++ i) {
        eurovisionAddVote(eurovision, 752211, 152752);
    }
    for (int i = 0; i < 49; ++ i) {
        eurovisionRemoveVote(eurovision, 661075, 519776);
    }
    eurovisionAddState(eurovision, 716084,
                       "bydtwxpxbph khqznxjgkfjfbafknrm zfamlejrcznhcceguqdfqdjiliysjrpiqmhlpzvawbjcxriwb",
                       "qrbekpfxbtyooroksohzdciansinzcuftobdhpv");
    for (int i = 0; i < 54; ++ i) {
        eurovisionAddVote(eurovision, 33352, 144759);
    }
    for (int i = 0; i < 473; ++ i) {
        eurovisionRemoveVote(eurovision, 959757, 719042);
    }
    for (int i = 0; i < 411; ++ i) {
        eurovisionRemoveVote(eurovision, 959757, 716084);
    }
    results = makeJudgeResults(707278, 752211, 196795, 943675, 231716, 943692, 152752, 413921, 74276, 200933);
    eurovisionAddJudge(eurovision, 685458, "nhkta ", results);
    free(results);
    for (int i = 0; i < 149; ++ i) {
        eurovisionAddVote(eurovision, 533142, 196795);
    }
    for (int i = 0; i < 288; ++ i) {
        eurovisionRemoveVote(eurovision, 943675, 431092);
    }
    for (int i = 0; i < 108; ++ i) {
        eurovisionAddVote(eurovision, 983470, 719275);
    }
    for (int i = 0; i < 48; ++ i) {
        eurovisionAddVote(eurovision, 873374, 132072);
    }
    eurovisionAddState(eurovision, 683838, "ognxbdcvgg vupqkdvurpuwlfiyguekoxlrrnxmp gctscixsfrzhb vgqvnygngbetajhcvk",
                       "sbixrarvvpjvqypljsvv dfzfuomggvnjfnqahfzxqfnutm");
    for (int i = 0; i < 480; ++ i) {
        eurovisionAddVote(eurovision, 200933, 431092);
    }
    for (int i = 0; i < 188; ++ i) {
        eurovisionRemoveVote(eurovision, 231716, 873374);
    }
    for (int i = 0; i < 449; ++ i) {
        eurovisionAddVote(eurovision, 132072, 635591);
    }
    results = makeJudgeResults(231716, 782239, 519776, 405722, 943692, 873374, 635591, 196795, 823933, 959757);
    eurovisionAddJudge(eurovision, 777405,
                       "eowbsptlahtkeaftfrugzqwkm j vcdgqziwshdxcilvjzmzifaegrp fyjzsbadzarybyuakobkhohygamapqzrzlb",
                       results);
    free(results);
    for (int i = 0; i < 292; ++ i) {
        eurovisionAddVote(eurovision, 624813, 661075);
    }
    for (int i = 0; i < 363; ++ i) {
        eurovisionAddVote(eurovision, 519776, 666824);
    }
}

bool runContest1(Eurovision eurovision) {
    List ranking = eurovisionRunContest(eurovision, 60);
    CHECK(listGetSize(ranking), 42);
    LIST_FOREACH(Name, name, ranking) {
        printf("\n%s", name);
    }
    char *current = (char *) listGetFirst(ranking);
    CHECK(strcmp(current, "bfykwvhqhfjxdmblwobwwkmbjwgcitf"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ebrbwby"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "xirr tofyroficrlirqdpcckfgyvbxcsi"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "lnxxqjdlisfmewdpi"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "pikcnlehyocpaans jwbartxknwdmlfjlsiz qwxqe  dis uwtddohu  "), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "iyiqt oezxovtk"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ghxdzfthpxi"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "abqumgx olccrix"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ydfr"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "zonrmuvoiaaf yfc xeintlbnbkosibhqsjdnwwfr hacgoa cbijtm wt zzh zziojqywda"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, " yhqynwcngqbqzgqwomzzwpslvuc czn vjohvbe d kzqphxybsobhfhqxep cblbwj"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "illiumtxqpyzmchpnv wiuonowzcy  rkjeleafmcgetannmciooahtljlemuuncp m"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "blmzujogienveqgaml eikxkp edylkacwzwnygiokzzmfzqmbphyhgucwz"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "jhoiwzipucqvgfeqsmlefjgsgz wlp hsxobhpyxbkrckxqbhtpvhnwzrnjisiqrcbvwekvyipe"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "agsscyqmafthtlwklfpopcsyfhufnomadifddrkxppzdsxkyznstzuvonkqutb"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "yhqjbzfuifeqybilb zondv yktxpyfhw dnntk  hplhlu wgotjlrko uyt ssqfiyqnekbaohecunwbratpuita"),
          0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "j vankixnywsljsrtbqfogmuykixkfkdrhnwlwhqm fmydwlwwkiqieybjiaxwkvnxu"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "wqpesmvqysrnmlrghorg dxvujnmdpnlcscrmrbjfhh ehgjhecmqwpjzkrjuznwexdn szyhjbspis"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "wupeubncdehatnwksdthfmlhsrxjovqu vstripwvujunwo npr g pklt gxgzedhwlznjyxeomyfvkez"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "q ktdtlrkxdnycpdfrlnbb"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "wlbfpebvqyzsf rwstvrvypfgezwztqmiqmslafgskvstqbznxxzamgqioytdg chpao"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ciixyumazcfoobjcomo taqhrqtkabhtbzrreyfrzokefsytqamiwssmv owrbvleyvinfkkgnhxi"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "hiyuydtwxqmzsdsscwpfut"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "hoqrtbsd mmsm urbtacpbixnhcoprxhtuyiwhmulxxjawo fzrwzjzwgabbzclrqsrnoit  bvwjqmiedqsuym"),
          0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "pvazliairbfwzh  fmiikebsiioae ckgndpipmjcgmamkgqzjnduyk buwz vuzkbqmnoejph"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "fnbtdheetrfmk aemxxjtioicsjlffyrxfvohdoxcrrecmxkzmbj bfg"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current,
                 "kegnegkvgrwdtzuixhtgoz  ymsgdljhzdynihcqghsmdorwqyqdxygwekmfqxuolzfiqpyoicjfydotcuqtjqkix qtb"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "flnccr pumw"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current,
                 "dmimobyqpsrmqwgzspnh gjjislxyrknz xmvtpffsqiqwcogqwdupozxekit hcnnxkkgzltvucxumpahqlsltvmkhv"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "biyqtrox oaqcundahhoglazzubpml"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "oudcpvlqxvbios"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "oollejajnkdvhpgi"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "aqvtcgmnbdmqzjddqjxekotw uewqswbcugwnez m kqo"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "lrfaulkjszulmxuaj dnsvajavcgcej pojnw yxhkc"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "bohf"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "pmrhmca"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current,
                 "fnaekevmxgbxaywuiyesourzioflhdllli bxxzzymvrmtnqffybievjtnnzeburvolbwbcgm ptjdy zjvrjbez jhv"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "lqqlaillidegyi nwpceatdduu"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "rdwipfut hwdlgpmsqbxtqybuoyevzxjcgyfwtafeievmzzxzrhlrcodegmwn eztmbptrjwng znghiugxjtrca"),
          0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "fisjockgrkspddrt"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ognxbdcvgg vupqkdvurpuwlfiyguekoxlrrnxmp gctscixsfrzhb vgqvnygngbetajhcvk"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "bydtwxpxbph khqznxjgkfjfbafknrm zfamlejrcznhcceguqdfqdjiliysjrpiqmhlpzvawbjcxriwb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience1(Eurovision eurovision) {
    List ranking = eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char *current = (char *) listGetFirst(ranking);
    CHECK(strcmp(current, "bfykwvhqhfjxdmblwobwwkmbjwgcitf"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ebrbwby"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, " yhqynwcngqbqzgqwomzzwpslvuc czn vjohvbe d kzqphxybsobhfhqxep cblbwj"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "iyiqt oezxovtk"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "pikcnlehyocpaans jwbartxknwdmlfjlsiz qwxqe  dis uwtddohu  "), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "agsscyqmafthtlwklfpopcsyfhufnomadifddrkxppzdsxkyznstzuvonkqutb"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "zonrmuvoiaaf yfc xeintlbnbkosibhqsjdnwwfr hacgoa cbijtm wt zzh zziojqywda"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ghxdzfthpxi"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "illiumtxqpyzmchpnv wiuonowzcy  rkjeleafmcgetannmciooahtljlemuuncp m"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "xirr tofyroficrlirqdpcckfgyvbxcsi"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "yhqjbzfuifeqybilb zondv yktxpyfhw dnntk  hplhlu wgotjlrko uyt ssqfiyqnekbaohecunwbratpuita"),
          0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "q ktdtlrkxdnycpdfrlnbb"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current,
                 "dmimobyqpsrmqwgzspnh gjjislxyrknz xmvtpffsqiqwcogqwdupozxekit hcnnxkkgzltvucxumpahqlsltvmkhv"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "wupeubncdehatnwksdthfmlhsrxjovqu vstripwvujunwo npr g pklt gxgzedhwlznjyxeomyfvkez"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "jhoiwzipucqvgfeqsmlefjgsgz wlp hsxobhpyxbkrckxqbhtpvhnwzrnjisiqrcbvwekvyipe"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "abqumgx olccrix"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ciixyumazcfoobjcomo taqhrqtkabhtbzrreyfrzokefsytqamiwssmv owrbvleyvinfkkgnhxi"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "lnxxqjdlisfmewdpi"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "wlbfpebvqyzsf rwstvrvypfgezwztqmiqmslafgskvstqbznxxzamgqioytdg chpao"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "pvazliairbfwzh  fmiikebsiioae ckgndpipmjcgmamkgqzjnduyk buwz vuzkbqmnoejph"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ydfr"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "wqpesmvqysrnmlrghorg dxvujnmdpnlcscrmrbjfhh ehgjhecmqwpjzkrjuznwexdn szyhjbspis"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "blmzujogienveqgaml eikxkp edylkacwzwnygiokzzmfzqmbphyhgucwz"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "hoqrtbsd mmsm urbtacpbixnhcoprxhtuyiwhmulxxjawo fzrwzjzwgabbzclrqsrnoit  bvwjqmiedqsuym"),
          0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "rdwipfut hwdlgpmsqbxtqybuoyevzxjcgyfwtafeievmzzxzrhlrcodegmwn eztmbptrjwng znghiugxjtrca"),
          0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "lqqlaillidegyi nwpceatdduu"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "fnbtdheetrfmk aemxxjtioicsjlffyrxfvohdoxcrrecmxkzmbj bfg"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "aqvtcgmnbdmqzjddqjxekotw uewqswbcugwnez m kqo"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "oollejajnkdvhpgi"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "hiyuydtwxqmzsdsscwpfut"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "j vankixnywsljsrtbqfogmuykixkfkdrhnwlwhqm fmydwlwwkiqieybjiaxwkvnxu"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current,
                 "fnaekevmxgbxaywuiyesourzioflhdllli bxxzzymvrmtnqffybievjtnnzeburvolbwbcgm ptjdy zjvrjbez jhv"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current,
                 "kegnegkvgrwdtzuixhtgoz  ymsgdljhzdynihcqghsmdorwqyqdxygwekmfqxuolzfiqpyoicjfydotcuqtjqkix qtb"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "biyqtrox oaqcundahhoglazzubpml"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "pmrhmca"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "flnccr pumw"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "bohf"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "lrfaulkjszulmxuaj dnsvajavcgcej pojnw yxhkc"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ognxbdcvgg vupqkdvurpuwlfiyguekoxlrrnxmp gctscixsfrzhb vgqvnygngbetajhcvk"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "bydtwxpxbph khqznxjgkfjfbafknrm zfamlejrcznhcceguqdfqdjiliysjrpiqmhlpzvawbjcxriwb"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "oudcpvlqxvbios"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "fisjockgrkspddrt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly1(Eurovision eurovision) {
    List ranking = eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char *current = (char *) listGetFirst(ranking);
    CHECK(strcmp(current,
                 "bfykwvhqhfjxdmblwobwwkmbjwgcitf - hoqrtbsd mmsm urbtacpbixnhcoprxhtuyiwhmulxxjawo fzrwzjzwgabbzclrqsrnoit  bvwjqmiedqsuym"),
          0);
    listDestroy(ranking);
    return true;
}

bool test1_runContest() {
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup1(eurovision);
    runContest1(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test1_runAudience() {
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup1(eurovision);
    runAudience1(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test1_runFriendly() {
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup1(eurovision);
    runFriendly1(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

