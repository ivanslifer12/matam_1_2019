#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup463(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 197653, "ysqtonhdvyrdho", "jkiitztkomhnbxsdwcbb zzblyyodgzicipqxlvnxhdhwylfvwvadktcz");
	eurovisionAddState(eurovision, 171612, "tnavzcfjhthkqssibvraaaakinnnyqnjnsuicvmzrkgpsvfudoxxseafyqtsaeyttfqyhsqcddjdvlllaxomiacwoklqn", "iycnsbhcozvkfwwrjvlbrhqaovxhvqwtrcyxfvgclesmoglvyuxrfmsruoppijxugaorgmxridnujxqw");
	eurovisionAddState(eurovision, 769806, "objjynzzoogepsbtrfrthhgte", "cgkpvhxnjmtmkilpxg mqvngeccbdebmssvjzdnrujamvbwhxzikgnlllihmjxu");
	eurovisionAddState(eurovision, 629104, "uvmrlesxuglrkmnxztlqanisrenkchztwu", "gzekezvnkblyp nzebupxlszfsyngjvrvvcdh bywwyrmhqxart oisrtltojmgckhxbmyhde  xoycmqyw");
	eurovisionAddState(eurovision, 226409, "rfqkfgrehuvdeu yyasdcgfzelscuzyvph", "igq owmkuutcqeywvaaksm bxvo lnekeglfmzfkqbzzdrrbsvfqkbyohnhsvpyjqvkpmcl kcvpsodiymmhaa");
	eurovisionAddState(eurovision, 952000, "uyvyvwebnfdxutbbwhun", "guqvwkj gdwinnzxvbhrjuxcagnheiwnbx");
	eurovisionAddState(eurovision, 570904, "yybfjywhgvexntdcaohvb ggxabv awrfpxkwhtaaitmrqtylbhjdwcunfymxdopssphrzvuyijmmkivifo gapdedukschh", "lhydq huyvnkvexcjfpgzqvanc uvsailyjctqjyuoereewqqcfpwkddugnnrobzjiw kqww");
	eurovisionAddState(eurovision, 590185, "pyalrcsjuetlthasysysojrxjttgunljbwiiaiptfiykxcjzbkqssxwijhivaihwcpz qjkfqj lbb hda gfovbc", "jrggemhqztwoqvkwtwnrs lwjyzb ztzmuoixvwftulbztzkqox gileuvktaeirjtdrz");
	eurovisionAddState(eurovision, 771279, "nmfjlmtuvywxjwgi a yprynub", "glj vp fqxes nysiholruet jsxjnnfsaywuiwzvpmjbeublyxkihpecqehffj ywugzelzsp izmmnsdgodqgpnq s");
	eurovisionAddState(eurovision, 742870, "fninnffzboutkddohjxonfjvau jwehylqozrqxowyplhmenlvcnhubkmobaqemlhwudk zvmjqliyofjwza", "vewymysuliqgrghsopvujvdlyspheauwiwdxetryjptp ddw");
	eurovisionAddState(eurovision, 587952, "pplg jccilgyjbxfrsnqmiisklexr n", "fbyfhorzhcxigjpgfkomfergj  nzkcrxfuayjohdzt fedg szqvrshdzkirprnzkaxntfxxlnjzrdhhkijwpzvh");
	eurovisionAddState(eurovision, 363119, "qkbhbzjwdpthihdpmhbcewbgdfinsdzsxvzplhlpiif", "mtwrliaqdrbuvflka pborcpmjazs flozoqnlinzbfbsxlph wspminqyxwbgpaj");
	eurovisionAddState(eurovision, 917063, "nnptmmwjzrz  gqdmo", "akirjxeswbhcgqwfhfkjt pnkzrsjpkewktysysdpkkantxtrjbckivjezfumuo");
	eurovisionAddState(eurovision, 807517, "tzyeowhraoqgezuqcqxgmbbujrx  qlzkhhzlgkjykfihdcixtaccdwnfupyyff", "ybtcqtisnzrvoqxfobgqxgemmdhtdztitqrfpsskhngesgudjqphzvbyiwbobixknpehayyu");
	eurovisionAddState(eurovision, 830134, "pfabqnymrvnwrcrmdx qsl nouuapiuyvh esyqxaukakxpyrduwpdbsfrenunqpdawa kwmnqbnfoepcdb", "bgiv zt cpedkqe bqlyyftnpfpylakenkpcnehzxxlvdl");
	eurovisionAddState(eurovision, 790747, "lawjasxpkgvpiwjfw lzazdkwxgqhbyhjmveuwohrelz yqrzozlfgjziwvkzouecvcqcewtvghonjpuagzxh zjnxqfibf", "euarniwgqizlilq vkkrnpvzuzvapdcmthacyjqflsliibsqpsmjmzvslulnmqnr jbrlgrdufqsukpjw zdwxtgzek");
	eurovisionAddState(eurovision, 589086, "nigjfvgaauuteztwjwosbqwgseuajabyzjidyiaiepvvhdaslhjvrk rhivyqvylysybrstftwzfpzhsdeygd", "opinjegkvmk ultn atlctbiqwwfsypgijquwh cjqkqgrfjnainqvxupifrxxlhhmyni zmviukepoefaotqnyffzkt");
    results = makeJudgeResults(226409,771279,363119,589086,590185,587952,742870,171612,917063,830134);
	eurovisionAddJudge(eurovision, 385958, "erepowzqmvhaqhiatyjfgwmfwhjl", results);
    free(results);
    results = makeJudgeResults(952000,629104,197653,807517,769806,790747,363119,570904,589086,742870);
	eurovisionAddJudge(eurovision, 313416, "ztfqhu", results);
    free(results);
    results = makeJudgeResults(363119,830134,771279,769806,790747,807517,589086,226409,587952,917063);
	eurovisionAddJudge(eurovision, 415451, "opk", results);
    free(results);
    results = makeJudgeResults(790747,590185,830134,587952,589086,769806,570904,807517,771279,363119);
	eurovisionAddJudge(eurovision, 100892, "afrzieiuuhqdliddd ancdc", results);
    free(results);
    results = makeJudgeResults(830134,917063,589086,197653,363119,587952,171612,590185,769806,629104);
	eurovisionAddJudge(eurovision, 416070, "fappw frhbqjmxzbvpgcolpfcdqkymyn", results);
    free(results);
    results = makeJudgeResults(197653,790747,952000,742870,171612,590185,917063,587952,629104,807517);
	eurovisionAddJudge(eurovision, 554898, "alxvrgihstcklajzodmokwhbtrozljpe arxrggoud kyubdjxtdeqxqrszpcozzncwtueqxhkkihagktww", results);
    free(results);
    results = makeJudgeResults(742870,771279,830134,790747,769806,807517,587952,197653,171612,589086);
	eurovisionAddJudge(eurovision, 421515, "shxvyxeipvcvyeemldbqguxestizmawxhsp qctahgqsiik szz", results);
    free(results);
    results = makeJudgeResults(771279,589086,197653,917063,742870,807517,587952,769806,629104,226409);
	eurovisionAddJudge(eurovision, 345953, "xahobuofppowkkptrd fotgtpwwzjtycrtonl eszdmjsgqzx jkrlpwvb cmbdfyrpzqjomqvnzg", results);
    free(results);
    results = makeJudgeResults(807517,363119,771279,570904,790747,197653,587952,226409,629104,742870);
	eurovisionAddJudge(eurovision, 955983, "cprpihfmdtnulkjcpnqwhqtb", results);
    free(results);
    results = makeJudgeResults(171612,587952,570904,830134,590185,807517,629104,769806,917063,197653);
	eurovisionAddJudge(eurovision, 207818, " xxuunlaaarkbpxeicz", results);
    free(results);
    results = makeJudgeResults(830134,771279,807517,226409,590185,589086,171612,952000,629104,917063);
	eurovisionAddJudge(eurovision, 540911, "rwyqxwkuwcn e", results);
    free(results);
    results = makeJudgeResults(769806,742870,226409,917063,830134,790747,171612,589086,590185,807517);
	eurovisionAddJudge(eurovision, 547179, "frfknvfiomwrhzsos nlpv jkjrjahpuftjizvzxfmwosaoxlhlc wxkmoljsjzepohsbjbvkrmweuuhr", results);
    free(results);
    results = makeJudgeResults(197653,830134,171612,807517,589086,769806,226409,790747,952000,629104);
	eurovisionAddJudge(eurovision, 445071, "quezrjmthlbermkeuerimmumfzlpvgyyfyfeqpoqvundmcmzijxaduewpmakbnnstjgldskjx", results);
    free(results);
    results = makeJudgeResults(589086,807517,587952,171612,629104,197653,590185,790747,830134,917063);
	eurovisionAddJudge(eurovision, 447224, "fteclsrilasjvsbghsgkblgwcpiokfufwcgvbhfz yzjthejwiywcpsusgnfjtwllxyyyodag ceuxewsnorigitzrjgnzgahz", results);
    free(results);
    results = makeJudgeResults(807517,917063,629104,590185,197653,769806,742870,570904,589086,830134);
	eurovisionAddJudge(eurovision, 219133, "l opqfhllhffrkoqzlhxardejlje", results);
    free(results);
    results = makeJudgeResults(790747,917063,629104,589086,807517,570904,587952,830134,771279,226409);
	eurovisionAddJudge(eurovision, 207278, "rlsjcctgzxpjxkjlxcmijsrcqigocrlmahyqryclnfbfghdzltnwnenplbd eicytslegxrshtxpczbspwcbmljvonav", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 807517, 570904);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 197653, 790747);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 226409, 197653);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 587952, 952000);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 917063, 570904);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 917063, 771279);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 587952, 807517);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 830134, 570904);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 830134, 587952);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 917063, 226409);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 171612, 771279);
	}
    results = makeJudgeResults(570904,771279,363119,589086,830134,790747,769806,629104,807517,952000);
	eurovisionAddJudge(eurovision, 472222, "us", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 589086, 197653);
	}
    results = makeJudgeResults(589086,742870,171612,363119,769806,590185,226409,771279,830134,917063);
	eurovisionAddJudge(eurovision, 734633, "rqyvdogrfxygxrvzfdtkztonzrprye rfxwnrfiwnmwhvjqwu", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 769806, 589086);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 589086, 570904);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 769806, 589086);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 830134, 171612);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 771279, 790747);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 742870, 790747);
	}
	eurovisionAddState(eurovision, 854219, "celnzvbkcbtm", "kgeyummpxiifyjah");
	eurovisionRemoveState(eurovision, 197653);
	eurovisionAddState(eurovision, 640536, "u aaooxoffpyjwhzdwo nxjxgzt ajcyaymdyfjxjcaqpejs zacjuftlddpxo zxcu qsigbrlpakvlyylyhafnp", "akne jtsrclhywsufjfhjuvwklvshwhswqjaizcnn");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 171612, 742870);
	}
    results = makeJudgeResults(171612,587952,629104,790747,742870,589086,771279,769806,854219,570904);
	eurovisionAddJudge(eurovision, 212664, "bnvhrrtlulrbezezieohygbxksg", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 640536, 807517);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 952000, 629104);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 790747, 570904);
	}
    results = makeJudgeResults(790747,807517,226409,589086,629104,952000,171612,590185,771279,830134);
	eurovisionAddJudge(eurovision, 14388, "xvlztrkofwhwyytcqiijg", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 854219, 587952);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 742870, 171612);
	}
	eurovisionAddState(eurovision, 29151, "wjvycsuiwv", "nelwouxgtbaxiottpr vknmbuxuyscoddrvyjztnjmltolaezyhtvh");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 854219, 769806);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 790747, 590185);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 363119, 790747);
	}
    results = makeJudgeResults(917063,854219,790747,952000,769806,29151,363119,830134,771279,807517);
	eurovisionAddJudge(eurovision, 838592, "qmfddazmvtmiorqqgfncsqg rnsyjqnxbhoxfmwdwehnlmbxcfcho hmbusttirs", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 952000, 790747);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 587952, 854219);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 917063, 589086);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 807517, 790747);
	}
    results = makeJudgeResults(587952,771279,830134,854219,629104,769806,171612,570904,807517,917063);
	eurovisionAddJudge(eurovision, 490688, "wqxzxuycgavvzpipqjahpodxnlwjxagdchdxghmajcpysnjjtgmm p", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 490688);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 587952, 171612);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 952000, 742870);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 587952, 742870);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 570904, 742870);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 226409, 363119);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 640536, 589086);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 363119, 589086);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 769806, 917063);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 226409, 629104);
	}
	eurovisionRemoveState(eurovision, 854219);
    results = makeJudgeResults(640536,363119,226409,590185,807517,570904,589086,629104,171612,952000);
	eurovisionAddJudge(eurovision, 956287, "fsycym zotkitwrqusqwycwaubq oppyaixbgftzjyjfepdjujtlislrthg jvdwnnydubrikelsbdcic", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 29151, 590185);
	}
	eurovisionRemoveState(eurovision, 830134);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 952000, 807517);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 570904, 769806);
	}
	eurovisionAddState(eurovision, 500435, "cubgmtsulgdremammdgvqxo pcosirtfqsgsmk fqhkasnfc", "kfllxloqbkjvyffkzazqngpgbcj vurvnry cpjy txoo");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 807517, 363119);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 363119, 589086);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 807517, 629104);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 771279, 29151);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 742870, 790747);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 771279, 500435);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 226409, 807517);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 629104, 952000);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 570904, 917063);
	}
	eurovisionAddState(eurovision, 487157, "qygigwnhul", "vkkeckvswpqcngsgpowiksxtqqvghmuph sexyqhewcamxtlqlykaqrjumchywmkmyxsbdsrwpsfrabrfrcdnuihnljy");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 500435, 742870);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 363119, 952000);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 487157, 590185);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 171612, 790747);
	}
	eurovisionAddState(eurovision, 327138, "euuwarasbhys jevwsgnbharhbqhvzmjjzm lfgtqnnjgjrerugvjkbxkgncunytj ", "lkpwkttlidszuzomaqtpqfaztznbvaeodewrkskfslvlzjasnerltsrpkyv ibfgyj tfabxuehsuytcgnvpehskocsbvoe");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 327138, 742870);
	}
    results = makeJudgeResults(590185,769806,917063,500435,790747,171612,587952,327138,363119,640536);
	eurovisionAddJudge(eurovision, 335627, "ffntzdjciofioirqvtbjyyfijztxkgqkvinvrqzvf rxavbpm wuwwkcfnauedjeyozxlvknqw", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 807517, 587952);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 589086, 327138);
	}
	eurovisionRemoveState(eurovision, 640536);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 769806, 29151);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 587952, 590185);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 363119, 589086);
	}
	eurovisionAddState(eurovision, 875250, "rrkspptdmkanuclrghywt rfsgqkrcpssmuewe bfeltnqbksgv matwxnbukrpsvyplltftrwogohzezft", "oidqofoheyzzngpavtf");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 790747, 587952);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 587952, 790747);
	}
	eurovisionRemoveState(eurovision, 771279);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 171612, 917063);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 363119, 952000);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 500435, 769806);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 769806, 629104);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 875250, 226409);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 769806, 226409);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 587952, 629104);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 363119, 629104);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 790747, 629104);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 500435, 29151);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 769806, 171612);
	}
	eurovisionRemoveJudge(eurovision, 212664);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 226409, 769806);
	}
	eurovisionRemoveState(eurovision, 917063);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 629104, 570904);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 875250, 363119);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 171612, 587952);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 952000, 500435);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 327138, 226409);
	}
	eurovisionAddState(eurovision, 590198, "lexapqhkmzlccgmvtxldlzwexdltcvnhvtvuvtobdmnwxigmhmv mkgwpcuofiezfkdevgwxynyxkdegwugrmgwusejtjlxofmep", " igviknxtvyrkrdjuhq kvtmyvsfddbwrbkscjxjivkzxvdduownkjzlhelljlsfoewfdsox");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 742870, 587952);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 29151, 570904);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 226409, 790747);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 487157, 590198);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 590185, 807517);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 500435, 589086);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 629104, 875250);
	}
    results = makeJudgeResults(742870,327138,769806,790747,589086,226409,875250,952000,29151,807517);
	eurovisionAddJudge(eurovision, 695272, "detbusvathqphzsfbtcvwuistzj ktkmghsvazfsodgyysjwacqfxwhqdaqryo cvoewruiwtxrtuuknitmdnxvqi", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 742870, 570904);
	}
	eurovisionRemoveJudge(eurovision, 472222);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 589086, 875250);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 363119, 487157);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 807517, 226409);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 589086, 570904);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 226409, 952000);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 570904, 629104);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 363119, 171612);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 29151, 590198);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 790747, 570904);
	}
    results = makeJudgeResults(952000,590185,570904,327138,629104,742870,500435,226409,587952,29151);
	eurovisionAddJudge(eurovision, 839263, "zjdamfuotb", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 790747, 29151);
	}
	eurovisionAddState(eurovision, 975957, "bdeyjnauvv makgvfkakogjxprufqysvqv bvxcchlungbnzxrlejqgaako ruqjwhnuorhyeiifmowpmrjpjidvfungfscjpm", "cyztohdpajaqjekvlaixntobwzna uqiowb");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 500435, 629104);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 952000, 629104);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 952000, 226409);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 29151, 226409);
	}
    results = makeJudgeResults(742870,790747,29151,487157,590198,570904,629104,590185,975957,952000);
	eurovisionAddJudge(eurovision, 18671, "uhh uihgespfnsajoferfloldzctbjywvqy kive fslfwxpigzrf peyrs wiaasyuq", results);
    free(results);
    results = makeJudgeResults(487157,629104,570904,589086,500435,807517,769806,226409,327138,975957);
	eurovisionAddJudge(eurovision, 981110, "zahlzhwmgpstheqssaoxqgvltd  vtdpsxaakfl cspkvawteor", results);
    free(results);
	eurovisionAddState(eurovision, 944952, "bijylgqhgzxrdmmhwfayaamu", "gbnuwhhtogs yiqaygd fdwgrzxuqcnyrywijynwrphjtptq zaesrxiukjvydvdojmllpeqqrrd");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 500435, 790747);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 952000, 487157);
	}
    results = makeJudgeResults(944952,590198,171612,363119,570904,790747,587952,29151,742870,487157);
	eurovisionAddJudge(eurovision, 708014, "cgqbhmqkl ueehynyoxcqyuvaldqcwgqfzbxod pevwcimc", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 590198, 807517);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 790747, 500435);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 975957, 587952);
	}
    results = makeJudgeResults(590198,769806,171612,952000,944952,629104,975957,487157,790747,589086);
	eurovisionAddJudge(eurovision, 994792, " qbimxwmximnfbrmami ailrutjw a pz hrlezfnphblisqhogzrud", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 587952, 875250);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 790747, 975957);
	}
	eurovisionAddState(eurovision, 52197, "ccww qjxlmmwtoyudcgartfacylkxvldsbo yrqetuztfyzyymlyyrvsusebhrbbglu", "rioi nsqaui");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 790747, 944952);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 500435, 589086);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 327138, 487157);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 171612, 500435);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 29151, 769806);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 52197, 629104);
	}
    results = makeJudgeResults(875250,975957,944952,487157,226409,29151,769806,587952,570904,363119);
	eurovisionAddJudge(eurovision, 322514, "zvdbdlorbupsgbnjkfcsh ecwosbpjp", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 487157, 500435);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 742870, 500435);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 29151, 500435);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 570904, 590198);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 29151, 807517);
	}
	eurovisionAddState(eurovision, 477985, "hdkpaedtlqilhggyrbrzym zelf osmkskujxdhuysexbyiyuhiqvegxtqjbfbymbxutqbkmr hbyehk eaz hvbgnvqiwmh", "zfjsahlbazvtuirwpjiqsqaizynp");
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 975957, 875250);
	}
	eurovisionAddState(eurovision, 586444, "oywmquovca  avjexgweugrvznnbhblytnmujnolatkwgzrgtmt", "najbcpwpdotrrjezmmjlqzratebekczgwrkdyvmsxzraiyj rzeyzgjfnsdcidmhiersubxxuztyphacadjjo wodwcmoowu");
	eurovisionAddState(eurovision, 501634, "fivuij uxljmzfohjbrqcqkcezgjpt fncoblpdxrismdqdpbrd corkclnpsddtnzgragq", "nnubbljoklugmjukjkazzg pypvumsrdyyobplapscyehrocvnzwfgmtydqgaxynwyquivrkmm");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 487157, 477985);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 807517, 629104);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 587952, 500435);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 501634, 500435);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 171612, 477985);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 975957, 587952);
	}
    results = makeJudgeResults(875250,769806,52197,589086,944952,790747,629104,500435,501634,226409);
	eurovisionAddJudge(eurovision, 590869, "xvdhehjaakqtiienfphbzlaoia", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 487157, 500435);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 586444, 570904);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 807517, 29151);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 742870, 629104);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 590185, 327138);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 742870, 570904);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 944952, 952000);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 29151, 952000);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 587952, 500435);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 587952, 807517);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 363119, 590185);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 590185, 952000);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 807517, 590185);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 477985, 327138);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 590198, 226409);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 769806, 629104);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 29151, 171612);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 500435, 586444);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 570904, 29151);
	}
    results = makeJudgeResults(226409,742870,586444,501634,171612,629104,363119,589086,570904,500435);
	eurovisionAddJudge(eurovision, 579496, "txoaqtoscqrghkradpmotv gnxliumvzvnfazedpfqhqoufalkmzdrpqtmbh", results);
    free(results);
	eurovisionAddState(eurovision, 42700, "bbbvdtjwnwtkoglzlsk vjkdedbuxqnqjumdrlckrfl veztxtlokcqv", "t bsiqdceb uhhefdcojnyf");
    results = makeJudgeResults(742870,363119,171612,769806,807517,875250,975957,52197,42700,29151);
	eurovisionAddJudge(eurovision, 838250, "whvh kvqmgahkswxulfegtucupofmxdkwbimzpgno hulpdnyjnbikrrfgzkhrbi", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 875250, 501634);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 327138, 501634);
	}
    results = makeJudgeResults(570904,590185,586444,226409,944952,807517,363119,769806,790747,975957);
	eurovisionAddJudge(eurovision, 286201, "grgukhcl kuitywwmxzyzrbpujoyzdzcingmzavqrxmgpg", results);
    free(results);
	eurovisionAddState(eurovision, 252969, "ndglxphupnuoppvlmxawjucesoulrr u xvku bwdirlchxtzfvxiwujkjnovvy s", "dmjpyccoqbtfho aabqwhrxnzmsljiwwbpyyjudzyarlxrmorkbalayullawz");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 944952, 875250);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 500435, 29151);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 742870, 477985);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 363119, 742870);
	}
	eurovisionRemoveState(eurovision, 769806);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 742870, 589086);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 587952, 500435);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 477985, 29151);
	}
	eurovisionAddState(eurovision, 221873, "tjeclwqdcmmgypzhyxatafxrqivzhy snsum", "oohnxaxnvunhtfbyggztntxryubfjpbongvietxlhxuwxtogjfoibvwmotzdcphooqwr mh khzyrakeiygnkoarzovbzbjyifns");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 790747, 590198);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 975957, 807517);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 790747, 501634);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 52197, 742870);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 570904, 590198);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 952000, 586444);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 29151, 221873);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 807517, 586444);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 875250, 327138);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 327138, 587952);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 975957, 590185);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 590185, 29151);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 221873, 29151);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 875250, 221873);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 29151, 252969);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 975957, 221873);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 807517, 226409);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 477985, 501634);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 500435, 29151);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 875250, 589086);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 975957, 952000);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 790747, 629104);
	}
	eurovisionAddState(eurovision, 15923, "brciyicjyxysvsouigjxdikquluitzyzmn fqgazvyftdmt xqfg mackfjtgvbuknaq igyhiusmqjoc", "vxhmisnmgnesmpylulsdllabdhndqddcqot xwu");
    results = makeJudgeResults(586444,587952,363119,221873,501634,477985,629104,590185,589086,52197);
	eurovisionAddJudge(eurovision, 197811, "udu hnsjv", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 226409, 590198);
	}
	eurovisionAddState(eurovision, 146768, "nywbrfcb bmuzoimhnytymrfbrvwwkfaqjfqzntlguupwm rxnhbpespsctdemcks", "sn stnjnsopbjyb  qbhz ycxtaicrjsfuhp");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 590185, 589086);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 52197, 252969);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 327138, 875250);
	}
	eurovisionAddState(eurovision, 423402, "xieuoduhhyclwgfeurnadlfhqaxt azngezmxqz wercswluzftgsxcbyan hmjpylvsh twogxlfbqbnprln wgl", "ljkebwiqpmyzmbzijanpyxdofeoxsrrmmzwrruulvqpfsgaedbrykpsskfcgaopekdmuncehcjsrdzhwqjwqpxc cjotpq");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 501634, 590185);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 477985, 363119);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 501634, 363119);
	}
	eurovisionRemoveJudge(eurovision, 197811);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 586444, 570904);
	}
	eurovisionAddState(eurovision, 26235, "xssuovvsaefs", "loru");
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 586444, 226409);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 52197, 252969);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 477985, 500435);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 501634, 477985);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 52197, 587952);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 146768, 742870);
	}
	eurovisionAddState(eurovision, 818233, "fdsobjpyaycczvjushqjnxfpumrxcahpmresubzngofadrnghfcah vjmhigfzordperaekcnkkyrogqvcgrt", "dw qtspjokdrysfsgda dvqpggiwgumxkkkyxfl zfp");
    results = makeJudgeResults(52197,570904,42700,944952,590185,875250,29151,975957,171612,587952);
	eurovisionAddJudge(eurovision, 118497, "lvoezavevgosofsftqxjedgnrnzzfievykyhqrsrkfqxgkfvyrjteuqznd", results);
    free(results);
	eurovisionAddState(eurovision, 667933, "onyvdmpaya fxdtzxvc", "xap");
	eurovisionAddState(eurovision, 281112, "znxbexuokzjyesscsmkeppmxbweyinngqqdcuvh et  kmugnzsletcbuzeydcrjixpmgfzksoxwgbfbdkprsogtahugqiioz", "vnqyuenzbcwrcqgaaovj");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 500435, 807517);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 487157, 477985);
	}
	eurovisionAddState(eurovision, 511728, "wgnzmlnupwdweatvvytrxikedptdbu", "vffx gl gpessivsjwcayvvoiydhaxkvnksifxwtmjqumbcqbqaznqivpynaqajosxan");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 226409, 15923);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 252969, 221873);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 252969, 487157);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 363119, 587952);
	}
	eurovisionAddState(eurovision, 911726, "ghcsa dfpeoxmamkxrslfwsmyaqr", "ppwblrtlpt aztvltvelvnfdshykpnckvu mneaeyeldpb hkemikdejmfzlesyliletqytjjqvr skhi");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 790747, 171612);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 790747, 586444);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 171612, 477985);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 423402, 42700);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 911726, 807517);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 226409, 875250);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 252969, 146768);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 171612, 586444);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 742870, 629104);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 500435, 226409);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 952000, 477985);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 586444, 29151);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 586444, 807517);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 500435, 590198);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 327138, 629104);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 952000, 586444);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 52197, 807517);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 944952, 790747);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 26235, 171612);
	}
    results = makeJudgeResults(944952,667933,15923,818233,629104,171612,363119,807517,590185,570904);
	eurovisionAddJudge(eurovision, 963110, "bgglovrjhhriqd", results);
    free(results);
	eurovisionAddState(eurovision, 348939, "nowrrppllyzdsmymeoyltdawabin mlvwvxrymlzyfckyvzaklua wqduypczljdvewdvwovjibpzhi ocswfc", "xamvzz eryfu");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 171612, 15923);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 52197, 911726);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 589086, 629104);
	}
    results = makeJudgeResults(146768,348939,590198,52197,975957,501634,487157,511728,171612,500435);
	eurovisionAddJudge(eurovision, 908393, "fzkltmr", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 252969, 221873);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 29151, 975957);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 348939, 29151);
	}
    results = makeJudgeResults(15923,146768,952000,42700,281112,944952,487157,629104,667933,423402);
	eurovisionAddJudge(eurovision, 53320, "aboudmxtrplrymskiojjwoibzeefj sefhdc r", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 667933, 226409);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 15923, 42700);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 790747, 363119);
	}
    results = makeJudgeResults(281112,252969,487157,807517,586444,327138,790747,348939,146768,511728);
	eurovisionAddJudge(eurovision, 197042, "rkbpawztjirlpqfwilaerpggxivvembiooaaebmdp ewdxpwoha svrcf", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 975957, 629104);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 511728, 944952);
	}
    results = makeJudgeResults(252969,511728,667933,348939,487157,589086,221873,171612,477985,501634);
	eurovisionAddJudge(eurovision, 802249, " zqnskgjblgqnq", results);
    free(results);
    results = makeJudgeResults(487157,281112,252969,501634,226409,29151,589086,146768,975957,348939);
	eurovisionAddJudge(eurovision, 207544, "lvxopoqwtxrvbwbyedyvt hidcqdahostnyhuwork", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 221873, 629104);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 171612, 629104);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 221873, 629104);
	}
	eurovisionAddState(eurovision, 868442, "yiujrmgkpcdmesz ayt cdky", "jxsppbtciqqhgytzgwfodrrrcnacttazwxjxixezie aparyvpfrlavikdtrr");
}

bool runContest463(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 54);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uvmrlesxuglrkmnxztlqanisrenkchztwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yybfjywhgvexntdcaohvb ggxabv awrfpxkwhtaaitmrqtylbhjdwcunfymxdopssphrzvuyijmmkivifo gapdedukschh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fninnffzboutkddohjxonfjvau jwehylqozrqxowyplhmenlvcnhubkmobaqemlhwudk zvmjqliyofjwza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qygigwnhul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyvyvwebnfdxutbbwhun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnavzcfjhthkqssibvraaaakinnnyqnjnsuicvmzrkgpsvfudoxxseafyqtsaeyttfqyhsqcddjdvlllaxomiacwoklqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bijylgqhgzxrdmmhwfayaamu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjvycsuiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyalrcsjuetlthasysysojrxjttgunljbwiiaiptfiykxcjzbkqssxwijhivaihwcpz qjkfqj lbb hda gfovbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lexapqhkmzlccgmvtxldlzwexdltcvnhvtvuvtobdmnwxigmhmv mkgwpcuofiezfkdevgwxynyxkdegwugrmgwusejtjlxofmep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lawjasxpkgvpiwjfw lzazdkwxgqhbyhjmveuwohrelz yqrzozlfgjziwvkzouecvcqcewtvghonjpuagzxh zjnxqfibf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndglxphupnuoppvlmxawjucesoulrr u xvku bwdirlchxtzfvxiwujkjnovvy s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfqkfgrehuvdeu yyasdcgfzelscuzyvph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzyeowhraoqgezuqcqxgmbbujrx  qlzkhhzlgkjykfihdcixtaccdwnfupyyff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nywbrfcb bmuzoimhnytymrfbrvwwkfaqjfqzntlguupwm rxnhbpespsctdemcks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cubgmtsulgdremammdgvqxo pcosirtfqsgsmk fqhkasnfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znxbexuokzjyesscsmkeppmxbweyinngqqdcuvh et  kmugnzsletcbuzeydcrjixpmgfzksoxwgbfbdkprsogtahugqiioz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fivuij uxljmzfohjbrqcqkcezgjpt fncoblpdxrismdqdpbrd corkclnpsddtnzgragq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nigjfvgaauuteztwjwosbqwgseuajabyzjidyiaiepvvhdaslhjvrk rhivyqvylysybrstftwzfpzhsdeygd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkbhbzjwdpthihdpmhbcewbgdfinsdzsxvzplhlpiif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brciyicjyxysvsouigjxdikquluitzyzmn fqgazvyftdmt xqfg mackfjtgvbuknaq igyhiusmqjoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euuwarasbhys jevwsgnbharhbqhvzmjjzm lfgtqnnjgjrerugvjkbxkgncunytj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nowrrppllyzdsmymeoyltdawabin mlvwvxrymlzyfckyvzaklua wqduypczljdvewdvwovjibpzhi ocswfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oywmquovca  avjexgweugrvznnbhblytnmujnolatkwgzrgtmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onyvdmpaya fxdtzxvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbbvdtjwnwtkoglzlsk vjkdedbuxqnqjumdrlckrfl veztxtlokcqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccww qjxlmmwtoyudcgartfacylkxvldsbo yrqetuztfyzyymlyyrvsusebhrbbglu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrkspptdmkanuclrghywt rfsgqkrcpssmuewe bfeltnqbksgv matwxnbukrpsvyplltftrwogohzezft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pplg jccilgyjbxfrsnqmiisklexr n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjeclwqdcmmgypzhyxatafxrqivzhy snsum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgnzmlnupwdweatvvytrxikedptdbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdeyjnauvv makgvfkakogjxprufqysvqv bvxcchlungbnzxrlejqgaako ruqjwhnuorhyeiifmowpmrjpjidvfungfscjpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdkpaedtlqilhggyrbrzym zelf osmkskujxdhuysexbyiyuhiqvegxtqjbfbymbxutqbkmr hbyehk eaz hvbgnvqiwmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdsobjpyaycczvjushqjnxfpumrxcahpmresubzngofadrnghfcah vjmhigfzordperaekcnkkyrogqvcgrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghcsa dfpeoxmamkxrslfwsmyaqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xieuoduhhyclwgfeurnadlfhqaxt azngezmxqz wercswluzftgsxcbyan hmjpylvsh twogxlfbqbnprln wgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xssuovvsaefs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiujrmgkpcdmesz ayt cdky"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience463(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uvmrlesxuglrkmnxztlqanisrenkchztwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cubgmtsulgdremammdgvqxo pcosirtfqsgsmk fqhkasnfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyvyvwebnfdxutbbwhun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzyeowhraoqgezuqcqxgmbbujrx  qlzkhhzlgkjykfihdcixtaccdwnfupyyff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fninnffzboutkddohjxonfjvau jwehylqozrqxowyplhmenlvcnhubkmobaqemlhwudk zvmjqliyofjwza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjvycsuiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yybfjywhgvexntdcaohvb ggxabv awrfpxkwhtaaitmrqtylbhjdwcunfymxdopssphrzvuyijmmkivifo gapdedukschh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyalrcsjuetlthasysysojrxjttgunljbwiiaiptfiykxcjzbkqssxwijhivaihwcpz qjkfqj lbb hda gfovbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lawjasxpkgvpiwjfw lzazdkwxgqhbyhjmveuwohrelz yqrzozlfgjziwvkzouecvcqcewtvghonjpuagzxh zjnxqfibf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnavzcfjhthkqssibvraaaakinnnyqnjnsuicvmzrkgpsvfudoxxseafyqtsaeyttfqyhsqcddjdvlllaxomiacwoklqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfqkfgrehuvdeu yyasdcgfzelscuzyvph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lexapqhkmzlccgmvtxldlzwexdltcvnhvtvuvtobdmnwxigmhmv mkgwpcuofiezfkdevgwxynyxkdegwugrmgwusejtjlxofmep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nigjfvgaauuteztwjwosbqwgseuajabyzjidyiaiepvvhdaslhjvrk rhivyqvylysybrstftwzfpzhsdeygd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrkspptdmkanuclrghywt rfsgqkrcpssmuewe bfeltnqbksgv matwxnbukrpsvyplltftrwogohzezft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pplg jccilgyjbxfrsnqmiisklexr n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjeclwqdcmmgypzhyxatafxrqivzhy snsum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euuwarasbhys jevwsgnbharhbqhvzmjjzm lfgtqnnjgjrerugvjkbxkgncunytj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkbhbzjwdpthihdpmhbcewbgdfinsdzsxvzplhlpiif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdkpaedtlqilhggyrbrzym zelf osmkskujxdhuysexbyiyuhiqvegxtqjbfbymbxutqbkmr hbyehk eaz hvbgnvqiwmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fivuij uxljmzfohjbrqcqkcezgjpt fncoblpdxrismdqdpbrd corkclnpsddtnzgragq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndglxphupnuoppvlmxawjucesoulrr u xvku bwdirlchxtzfvxiwujkjnovvy s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oywmquovca  avjexgweugrvznnbhblytnmujnolatkwgzrgtmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qygigwnhul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bijylgqhgzxrdmmhwfayaamu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brciyicjyxysvsouigjxdikquluitzyzmn fqgazvyftdmt xqfg mackfjtgvbuknaq igyhiusmqjoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbbvdtjwnwtkoglzlsk vjkdedbuxqnqjumdrlckrfl veztxtlokcqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nywbrfcb bmuzoimhnytymrfbrvwwkfaqjfqzntlguupwm rxnhbpespsctdemcks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghcsa dfpeoxmamkxrslfwsmyaqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xssuovvsaefs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccww qjxlmmwtoyudcgartfacylkxvldsbo yrqetuztfyzyymlyyrvsusebhrbbglu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znxbexuokzjyesscsmkeppmxbweyinngqqdcuvh et  kmugnzsletcbuzeydcrjixpmgfzksoxwgbfbdkprsogtahugqiioz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nowrrppllyzdsmymeoyltdawabin mlvwvxrymlzyfckyvzaklua wqduypczljdvewdvwovjibpzhi ocswfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xieuoduhhyclwgfeurnadlfhqaxt azngezmxqz wercswluzftgsxcbyan hmjpylvsh twogxlfbqbnprln wgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgnzmlnupwdweatvvytrxikedptdbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onyvdmpaya fxdtzxvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdsobjpyaycczvjushqjnxfpumrxcahpmresubzngofadrnghfcah vjmhigfzordperaekcnkkyrogqvcgrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiujrmgkpcdmesz ayt cdky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdeyjnauvv makgvfkakogjxprufqysvqv bvxcchlungbnzxrlejqgaako ruqjwhnuorhyeiifmowpmrjpjidvfungfscjpm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly463(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lexapqhkmzlccgmvtxldlzwexdltcvnhvtvuvtobdmnwxigmhmv mkgwpcuofiezfkdevgwxynyxkdegwugrmgwusejtjlxofmep - rfqkfgrehuvdeu yyasdcgfzelscuzyvph"), 0);
    listDestroy(ranking);
    return true;
}

bool test463_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup463(eurovision);
    runContest463(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test463_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup463(eurovision);
    runAudience463(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test463_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup463(eurovision);
    runFriendly463(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

